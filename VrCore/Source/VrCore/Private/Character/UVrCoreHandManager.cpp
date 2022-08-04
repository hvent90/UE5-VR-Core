// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UVrCoreHandManager.h"

#include "GripMotionControllerComponent.h"
#include "Character/VrCoreHandAnimInterface.h"
#include "GameFramework/GameSession.h"
#include "Grippables/HandSocketComponent.h"
#include "Interactables/VrCoreInteractableInterface.h"

void FHandInteractables::AddInteractable(FHandInteractable Interactable)
{
	for (const FHandInteractable _Interactable : Interactables)
	{
		if (_Interactable.Object == Interactable.Object)
		{
			return;
		}
	}
	
	bInteractablesNeedSorting = true;

	Interactables.Add(Interactable);
}

void FHandInteractables::AddGrippable(FHandInteractable Grippable)
{
	for (const FHandInteractable _Grippable : Grippables)
	{
		if (_Grippable.Object == Grippable.Object)
		{
			return;
		}
	}
	bGrippablesNeedSorting = true;

	Grippables.Add(Grippable);
}

bool FHandInteractables::GetClosestGrippable(FHandInteractable& Grippable)
{
	if (bGrippablesNeedSorting)
	{
		Grippables.Sort([](const FHandInteractable A, const FHandInteractable B)
		{
			return A.Distance < B.Distance;
		});
		
		bGrippablesNeedSorting = false;
	}

	if (Grippables.Num())
	{
		Grippable = Grippables[0];
		return true;
	}

	return false;
}

bool FHandInteractables::GetClosestInteractable(FHandInteractable& Interactable)
{
	if (bInteractablesNeedSorting)
	{
		Interactables.Sort([](const FHandInteractable A, const FHandInteractable B)
		{
			return A.Distance < B.Distance;
		});
		
		bInteractablesNeedSorting = false;
	}

	if (Interactables.Num())
	{
		Interactable = Interactables[0];
		return true;
	}

	return false;
}

bool FHandInteractables::GetClosestInteractableWithoutGrip(FHandInteractable& Interactable)
{
	if (bInteractablesNeedSorting)
	{
		Interactables.Sort([](const FHandInteractable A, const FHandInteractable B)
		{
			return A.Distance < B.Distance;
		});
		
		bInteractablesNeedSorting = false;
	}

	for (const FHandInteractable& Int : Interactables)
	{
		IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(Int.Object);
		if (InteractableInterface && InteractableInterface->Execute_IsInteractableWithoutGrip(Int.Object))
		{
			Interactable = Int;
			return true;
		}
	}

	return false;
}

void FHandInteractables::Clear()
{
	Grippables.Empty();
	Interactables.Empty();

	bInteractablesNeedSorting = false;
	bGrippablesNeedSorting = false;
}

// Sets default values for this component's properties
UVrCoreHandManager::UVrCoreHandManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UVrCoreHandManager::RegisterMotionControllers(UGripMotionControllerComponent* LeftSource,
	USkeletalMeshComponent* LeftSkeletalMesh, UGripMotionControllerComponent* RightSource,
	USkeletalMeshComponent* RightSkeletalMesh)
{
	LeftMotionController = LeftSource;
	RightMotionController = RightSource;

	HandInteractables.Add(LeftMotionController, FHandInteractables());
	HandInteractables.Add(RightMotionController, FHandInteractables());

	LeftMotionController->OnGrippedObject.AddDynamic(this, &UVrCoreHandManager::OnGrippedLeft);
	RightMotionController->OnGrippedObject.AddDynamic(this, &UVrCoreHandManager::OnGrippedRight);

	LeftMotionController->OnDroppedObject.AddDynamic(this, &UVrCoreHandManager::OnDroppedLeft);
	RightMotionController->OnDroppedObject.AddDynamic(this, &UVrCoreHandManager::OnDroppedRight);

	LeftMesh = LeftSkeletalMesh;
	RightMesh = RightSkeletalMesh;
	
	LeftMeshRelativeTransform = LeftMesh->GetRelativeTransform();
	RightMeshRelativeTransform = RightMesh->GetRelativeTransform();
}

void UVrCoreHandManager::OnGrippedLeft(const FBPActorGripInformation& GripInfo)
{
	OnGrippedObject(LeftMotionController, LeftMesh, GripInfo);
}

void UVrCoreHandManager::OnGrippedRight(const FBPActorGripInformation& GripInfo)
{
	OnGrippedObject(RightMotionController, RightMesh, GripInfo);
}

void UVrCoreHandManager::OnDroppedLeft(const FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	OnDroppedObject(LeftMotionController, LeftMesh, GripInformation);
}

void UVrCoreHandManager::OnDroppedRight(const FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	OnDroppedObject(RightMotionController, RightMesh, GripInformation);
}

void UVrCoreHandManager::OnDroppedObject(UGripMotionControllerComponent* MotionController, USkeletalMeshComponent* Mesh,
	const FBPActorGripInformation& GripInfo)
{
	// Attach it back to the motion source
	Mesh->AttachToComponent(MotionController, FAttachmentTransformRules::KeepWorldTransform);

	// Reset the transform
	FTransform RelativeTransform;
	EControllerHand Hand;
	MotionController->GetHandType(Hand);
	switch (Hand)
	{
	case EControllerHand::Left:
		RelativeTransform = LeftMeshRelativeTransform;
		break;
	case EControllerHand::Right:
		RelativeTransform = RightMeshRelativeTransform;
		break;
	default:
		break;
	}
	Mesh->SetRelativeLocationAndRotation(RelativeTransform.GetLocation(), RelativeTransform.GetRotation().Rotator());

	// Clear gripped pose
	UAnimInstance* AnimInstance = Mesh->GetAnimInstance();
	if (AnimInstance->Implements<UVrCoreHandAnimInterface>())
	{
		IVrCoreHandAnimInterface::Execute_ClearPose(AnimInstance);
	}
}

void UVrCoreHandManager::OnGrippedObject(UGripMotionControllerComponent* MotionController, USkeletalMeshComponent* Mesh,
	const FBPActorGripInformation& GripInfo)
{
	UHandSocketComponent* HandSocketComponent = UHandSocketComponent::GetHandSocketComponentFromObject(
		GripInfo.GrippedObject, GripInfo.SlotName);

	if (HandSocketComponent)
	{
		EControllerHand Hand;
		MotionController->GetHandType(Hand);
		
		FPoseSnapshot Pose;
		if (HandSocketComponent->GetBlendedPoseSnapShot(Pose, Mesh))
		{
			UAnimInstance* AnimInstance = Mesh->GetAnimInstance();
			if (AnimInstance->Implements<UVrCoreHandAnimInterface>())
			{
				IVrCoreHandAnimInterface::Execute_EnterPose(AnimInstance, Pose);

				UPrimitiveComponent* GrippedComponent = Cast<UPrimitiveComponent>(GripInfo.GrippedObject);
				AActor* GrippedActor = Cast<AActor>(GripInfo.GrippedObject);
				switch (GripInfo.GripTargetType)
				{
				default:
					UE_LOG(LogTemp, Warning, TEXT("Unaccounted for grip"));
					break;
				case EGripTargetType::ComponentGrip:
					if (GrippedComponent)
					{
						Mesh->AttachToComponent(GrippedComponent, FAttachmentTransformRules::KeepWorldTransform);

						const FTransform MeshTransform = HandSocketComponent->GetMeshRelativeTransform(Hand == EControllerHand::Right);
						Mesh->SetRelativeLocationAndRotation(MeshTransform.GetLocation(), MeshTransform.GetRotation().Rotator());
					}
					break;
				case EGripTargetType::ActorGrip:
					if (GrippedActor)
					{
						Mesh->AttachToComponent(GrippedActor->GetRootComponent(), FAttachmentTransformRules::KeepWorldTransform);

						const FTransform MeshTransform = HandSocketComponent->GetMeshRelativeTransform(Hand == EControllerHand::Right);
						Mesh->SetRelativeLocationAndRotation(MeshTransform.GetLocation(), MeshTransform.GetRotation().Rotator());
					}
					break;
				}
			}
		}
	}
}

void UVrCoreHandManager::HandlePrimaryButton(UGripMotionControllerComponent* MotionController, bool bPressed)
{
	if (!IsServer())
	{
		Server_HandlePrimaryButton(MotionController, bPressed);
	}

	// Handle Animation

	// Send input to gripped objects
	TArray<UObject*> GrippedObjects;
	MotionController->GetGrippedObjects(GrippedObjects);
	for (UObject* GrippedObject : GrippedObjects)
	{
		// Check if the gripped object implements IVrCoreInteractableInterface
		IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(GrippedObject);
		if (InteractableInterface)
		{
			InteractableInterface->Execute_SendPrimaryButton(GrippedObject, bPressed);
		} else
		{
			// Check if the owning actor is implementing IVrCoreInteractableInterface
			AActor* Actor = Cast<AActor>(GrippedObject);
			if (!Actor)
			{
				if (const UActorComponent* Component = Cast<UActorComponent>(GrippedObject))
				{
					Actor = Component->GetOwner();
				}
			}
			if (!Actor)
			{
				continue;
			}
			
			InteractableInterface = Cast<IVrCoreInteractableInterface>(Actor);
			if (InteractableInterface)
			{
				InteractableInterface->Execute_SendPrimaryButton(Actor, bPressed);
			}
		}
	}
}

void UVrCoreHandManager::HandleSecondaryButton(UGripMotionControllerComponent* MotionController, bool bPressed)
{
	if (!IsServer())
	{
		Server_HandleSecondaryButton(MotionController, bPressed);
	}

	// Handle Animation

	// Send input to gripped objects
	TArray<UObject*> GrippedObjects;
	MotionController->GetGrippedObjects(GrippedObjects);
	for (UObject* GrippedObject : GrippedObjects)
	{
		// Check if the gripped object implements IVrCoreInteractableInterface
		IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(GrippedObject);
		if (InteractableInterface)
		{
			InteractableInterface->Execute_SendSecondaryButton(GrippedObject, bPressed);
		} else
		{
			// Check if the owning actor is implementing IVrCoreInteractableInterface
			AActor* Actor = Cast<AActor>(GrippedObject);
			if (!Actor)
			{
				if (const UActorComponent* Component = Cast<UActorComponent>(GrippedObject))
				{
					Actor = Component->GetOwner();
				}
			}
			if (!Actor)
			{
				continue;
			}
			
			InteractableInterface = Cast<IVrCoreInteractableInterface>(Actor);
			if (InteractableInterface)
			{
				InteractableInterface->Execute_SendSecondaryButton(Actor, bPressed);
			}
		}
	}
}

void UVrCoreHandManager::HandleThumbstickPress(UGripMotionControllerComponent* MotionController, bool bPressed)
{
	if (!IsServer())
	{
		Server_HandleThumbstickPress(MotionController, bPressed);
	}

	// Handle Animation

	// Send input to gripped objects
	TArray<UObject*> GrippedObjects;
	MotionController->GetGrippedObjects(GrippedObjects);
	for (UObject* GrippedObject : GrippedObjects)
	{
		// Check if the gripped object implements IVrCoreInteractableInterface
		IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(GrippedObject);
		if (InteractableInterface)
		{
			InteractableInterface->Execute_SendThumbstickPress(GrippedObject, bPressed);
		} else
		{
			// Check if the owning actor is implementing IVrCoreInteractableInterface
			AActor* Actor = Cast<AActor>(GrippedObject);
			if (!Actor)
			{
				if (const UActorComponent* Component = Cast<UActorComponent>(GrippedObject))
				{
					Actor = Component->GetOwner();
				}
			}
			if (!Actor)
			{
				continue;
			}
			
			InteractableInterface = Cast<IVrCoreInteractableInterface>(Actor);
			if (InteractableInterface)
			{
				InteractableInterface->Execute_SendThumbstickPress(Actor, bPressed);
			}
		}
	}
}

void UVrCoreHandManager::HandleThumbstickAxis(UGripMotionControllerComponent* MotionController, float X, float Y)
{
	if (!IsServer())
	{
		Server_HandleThumbstickAxis(MotionController, X, Y);
	}

	// Handle Animation

	// Send input to gripped objects
	TArray<UObject*> GrippedObjects;
	MotionController->GetGrippedObjects(GrippedObjects);
	for (UObject* GrippedObject : GrippedObjects)
	{
		// Check if the gripped object implements IVrCoreInteractableInterface
		IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(GrippedObject);
		if (InteractableInterface)
		{
			InteractableInterface->Execute_SendThumbstickAxis(GrippedObject, X, Y);
		} else
		{
			// Check if the owning actor is implementing IVrCoreInteractableInterface
			AActor* Actor = Cast<AActor>(GrippedObject);
			if (!Actor)
			{
				if (const UActorComponent* Component = Cast<UActorComponent>(GrippedObject))
				{
					Actor = Component->GetOwner();
				}
			}
			if (!Actor)
			{
				continue;
			}
			
			InteractableInterface = Cast<IVrCoreInteractableInterface>(Actor);
			if (InteractableInterface)
			{
				InteractableInterface->Execute_SendThumbstickAxis(Actor, X, Y);
			}
		}
	}
}

void UVrCoreHandManager::Server_HandleThumbstickPress_Implementation(UGripMotionControllerComponent* MotionController,
                                                                     bool bPressed)
{
	HandleThumbstickPress(MotionController, bPressed);
}

bool UVrCoreHandManager::Server_HandleThumbstickPress_Validate(UGripMotionControllerComponent* MotionController,
	bool bPressed)
{
	return IsValid(MotionController);
}

void UVrCoreHandManager::Server_HandleSecondaryButton_Implementation(UGripMotionControllerComponent* MotionController,
                                                                     bool bPressed)
{
	HandleSecondaryButton(MotionController, bPressed);
}

bool UVrCoreHandManager::Server_HandleSecondaryButton_Validate(UGripMotionControllerComponent* MotionController,
	bool bPressed)
{
	return IsValid(MotionController);
}

void UVrCoreHandManager::Server_HandlePrimaryButton_Implementation(UGripMotionControllerComponent* MotionController,
                                                                   bool bPressed)
{
	HandlePrimaryButton(MotionController, bPressed);
}

bool UVrCoreHandManager::Server_HandlePrimaryButton_Validate(UGripMotionControllerComponent* MotionController,
	bool bPressed)
{
	return IsValid(MotionController);
}

void UVrCoreHandManager::HandleTrigger(UGripMotionControllerComponent* MotionController, bool bPressed)
{
	if (!IsServer())
	{
		Server_HandleTrigger(MotionController, bPressed);
	}

	// Handle Animation

	// Send trigger to gripped objects
	TArray<UObject*> GrippedObjects;
	MotionController->GetGrippedObjects(GrippedObjects);
	for (UObject* GrippedObject : GrippedObjects)
	{
		// Check if the gripped object implements IVrCoreInteractableInterface
		IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(GrippedObject);
		if (InteractableInterface)
		{
			InteractableInterface->Execute_SendTrigger(GrippedObject, bPressed);
		} else
		{
			// Check if the owning actor is implementing IVrCoreInteractableInterface
			AActor* Actor = Cast<AActor>(GrippedObject);
			if (!Actor)
			{
				if (const UActorComponent* Component = Cast<UActorComponent>(GrippedObject))
				{
					Actor = Component->GetOwner();
				}
			}
			if (!Actor)
			{
				continue;
			}
			
			InteractableInterface = Cast<IVrCoreInteractableInterface>(Actor);
			if (InteractableInterface)
			{
				InteractableInterface->Execute_SendTrigger(Actor, bPressed);
			}
		}
	}
	if (GrippedObjects.Num())
	{
		return;
	}

	// Send trigger to nearest object that can be interacted without a grip
	FHandInteractable NearestInteractableWithoutGrip;
	if (HandInteractables[MotionController].GetClosestInteractableWithoutGrip(NearestInteractableWithoutGrip))
	{
		IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(
			NearestInteractableWithoutGrip.Object);
		if (InteractableInterface)
		{
			InteractableInterface->Execute_SendTrigger(NearestInteractableWithoutGrip.Object, bPressed);

			// vibrate
			if (TriggerWithoutGripHaptic)
			{
				EControllerHand HandType;
				MotionController->GetHandType(HandType);
				GetWorld()->GetFirstPlayerController()->PlayHapticEffect(TriggerWithoutGripHaptic, HandType);	
			}
		}	
	}
}

void UVrCoreHandManager::Server_HandleTrigger_Implementation(UGripMotionControllerComponent* MotionController, bool bPressed)
{
	HandleTrigger(MotionController, bPressed);
}

bool UVrCoreHandManager::Server_HandleTrigger_Validate(UGripMotionControllerComponent* MotionController, bool bPressed)
{
	return IsValid(MotionController);
}

void UVrCoreHandManager::Server_HandleThumbstickAxis_Implementation(UGripMotionControllerComponent* MotionController,
	float X, float Y)
{
	HandleThumbstickAxis(MotionController, X, Y);
}

bool UVrCoreHandManager::Server_HandleThumbstickAxis_Validate(UGripMotionControllerComponent* MotionController, float X,
	float Y)
{
	return IsValid(MotionController);
}

// Called when the game starts
void UVrCoreHandManager::BeginPlay()
{
	Super::BeginPlay();
}

bool UVrCoreHandManager::ForwardTraceCheck(UGripMotionControllerComponent* MotionController,
                                           TArray<FHandInteractable>& Interactables, TArray<FHandInteractable>& Grippables) const
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());

	// Find objects in front of hand
	TArray<FHitResult> Hits;
	bool Hit = World->LineTraceMultiByChannel(Hits,
		MotionController->GetComponentLocation(),
		MotionController->GetComponentLocation() + MotionController->GetForwardVector() * GripTraceLength,
		ECollisionChannel::ECC_Visibility, Params);

	if (!Hit)
	{
		return false;
	}
	

	for (FHitResult HitResult : Hits)
	{
		AActor* Actor = HitResult.GetActor();
		if (Actor && Actor->Implements<UVrCoreInteractableInterface>())
		{
			Interactables.Add(FHandInteractable(Actor, HitResult.Distance, HitResult.GetActor()->GetActorTransform()));
		}

		if (Actor && Actor->Implements<UVRGripInterface>())
		{
			Grippables.Add(FHandInteractable(Actor, HitResult.Distance, HitResult.GetActor()->GetActorTransform()));
		}

		UPrimitiveComponent* Component = HitResult.GetComponent(); 
		if (Component && Component->Implements<UVrCoreInteractableInterface>())
		{
			Interactables.Add(FHandInteractable(Component, HitResult.Distance, HitResult.GetComponent()->GetComponentTransform()));
		}

		if (Component && Component->Implements<UVRGripInterface>())
		{
			Grippables.Add(FHandInteractable(Component, HitResult.Distance, HitResult.GetComponent()->GetComponentTransform()));
		}
	}

	return false;
}

bool UVrCoreHandManager::RadialOverlapCheck(const ::UGripMotionControllerComponent* MotionController,
                                            TArray<FHandInteractable>& Interactables, TArray<FHandInteractable>& Grippables) const
{
	Interactables.Empty();
	
	UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	
	TArray<FOverlapResult> Overlaps;
	bool Overlap = World->OverlapMultiByChannel(Overlaps,
		MotionController->GetComponentLocation(), FQuat(),
		GripCollisionChannel, FCollisionShape::MakeSphere(GripRadius));
	DrawDebugSphere(GetWorld(), MotionController->GetComponentLocation(), GripRadius, 12, FColor::Blue, false, .02, ESceneDepthPriorityGroup::SDPG_World, 1);
	if (!Overlap)
	{
		return false;
	}
	

	for (FOverlapResult OverlapResult : Overlaps)
	{
		AActor* Actor = OverlapResult.GetActor();
		if (Actor && Actor->Implements<UVrCoreInteractableInterface>())
		{
			const float Distance = (Actor->GetActorLocation() - MotionController->GetComponentLocation()).Size();
			Interactables.Add(FHandInteractable(Actor, Distance, Actor->GetActorTransform()));
		}

		if (Actor && Actor->Implements<UVRGripInterface>())
		{
			const float Distance = (Actor->GetActorLocation() - MotionController->GetComponentLocation()).Size();
			Interactables.Add(FHandInteractable(Actor, Distance, Actor->GetActorTransform()));
		}

		UPrimitiveComponent* Component = OverlapResult.GetComponent();
		if (Component && Component->Implements<UVrCoreInteractableInterface>())
		{
			const float Distance = (Component->GetComponentLocation() - MotionController->GetComponentLocation()).Size();
			Interactables.Add(FHandInteractable(Component, Distance, Component->GetComponentTransform()));
		}
		
		if (Component && Component->Implements<UVRGripInterface>())
		{
			const float Distance = (Component->GetComponentLocation() - MotionController->GetComponentLocation()).Size();
			Grippables.Add(FHandInteractable(Component, Distance, Component->GetComponentTransform()));
		}
	}

	return false;
}

void UVrCoreHandManager::HydrateHandInteractables()
{
	for (const TTuple<UGripMotionControllerComponent*, FHandInteractables>& Elem : HandInteractables)
	{
		UGripMotionControllerComponent* MotionController = Elem.Key;

		// Remove highlights from any interactables
		FHandInteractable CurrentClosest;
		if (HandInteractables[MotionController].GetClosestInteractable(CurrentClosest))
		{
			IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(CurrentClosest.Object);
			if (InteractableInterface)
			{
				InteractableInterface->Execute_Highlight(CurrentClosest.Object, false);
			}
		}

		// No need to continue if the motion controller is gripping an object
		if (MotionController->HasGrippedObjects())
		{
			continue;
		}

		// Catalogue nearest interactable and grippable items
		HandInteractables[MotionController].Clear();
		TArray<FHandInteractable> Interactables;
		TArray<FHandInteractable> Grippables;
		ForwardTraceCheck(MotionController, Interactables, Grippables);
		RadialOverlapCheck(MotionController, Interactables, Grippables);
		for (const FHandInteractable Interactable : Interactables)
		{
			HandInteractables[MotionController].AddInteractable(Interactable);
		}
		for (const FHandInteractable Grippable : Grippables)
		{
			HandInteractables[MotionController].AddGrippable(Grippable);
		}

		// Highlight the closest interactable
		if (HandInteractables[MotionController].GetClosestInteractable(CurrentClosest))
		{
			const IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(CurrentClosest.Object);
			if (InteractableInterface)
			{
				InteractableInterface->Execute_Highlight(CurrentClosest.Object, true);
			}
		}
	}
}

// Called every frame
void UVrCoreHandManager::TickComponent(float DeltaTime, ELevelTick TickType,
                                        FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	HydrateHandInteractables();
}

bool UVrCoreHandManager::AttemptGrip(UGripMotionControllerComponent* MotionController)
{
	TArray<UObject*> GrippedObjects;
	MotionController->GetGrippedObjects(GrippedObjects);

	if (GrippedObjects.Num() > 0)
	{
		return false;
	}

	if (!HandInteractables.Contains(MotionController))
	{
		return false;
	}

	FHandInteractable Grippable;
	if (HandInteractables[MotionController].GetClosestGrippable(Grippable))
	{
		if (AttemptGripObject(MotionController, Grippable.Object, Grippable.WorldTransform))
		{
			// vibrate
			if (GripHaptic)
			{
				EControllerHand HandType;
				MotionController->GetHandType(HandType);
				GetWorld()->GetFirstPlayerController()->PlayHapticEffect(GripHaptic, HandType);	
			}
			return true;
		}
	}

	return false;
}

bool UVrCoreHandManager::AttemptGripObject(UGripMotionControllerComponent* MotionController, UObject* Object, FTransform WorldTransform)
{
	// Object must inherit from VR Expansion's interface
	IVRGripInterface* GripInterface = Cast<IVRGripInterface>(Object);
	if (!GripInterface)
	{
		return false;
	}

	// World must be present
	UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	// Check if server or client is authoritative on the grippable objective
	if (World->IsNetMode(ENetMode::NM_Client))
	{
		const EGripMovementReplicationSettings ReplicationSettings = GripInterface->Execute_GripMovementReplicationType(Object);
		if (ReplicationSettings != EGripMovementReplicationSettings::ClientSide_Authoritive &&
			ReplicationSettings != EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep)
		{
			Server_AttemptGripObject(MotionController, Object, WorldTransform);
			return false;
		}
	}

	// Check for slotted grip
	bool bSlotInRange = false;
	FTransform SlotTransform;
	FName SlotName;
	GripInterface->Execute_ClosestGripSlotInRange(Object, MotionController->GetComponentLocation(),
		false, bSlotInRange, SlotTransform, SlotName, MotionController, NAME_None);

	FTransform WorldOffset;
	if (bSlotInRange)
	{
		WorldOffset = WorldTransform.GetRelativeTransform(SlotTransform);
	} else
	{
		WorldOffset = MotionController->ConvertToControllerRelativeTransform(WorldTransform);
	}

	// Grip the dang thing
	return MotionController->GripObjectByInterface(Object, WorldOffset, true,
		NAME_None, SlotName, bSlotInRange);
}

void UVrCoreHandManager::Server_AttemptGripObject_Implementation(UGripMotionControllerComponent* MotionController,
                                                                 UObject* Object, FTransform WorldTransform)
{
	AttemptGripObject(MotionController, Object, WorldTransform);
}

bool UVrCoreHandManager::Server_AttemptGripObject_Validate(UGripMotionControllerComponent* MotionController,
                                                           UObject* Object, FTransform WorldTransform)
{
	return IsValid(MotionController) && IsValid(Object);
}

void UVrCoreHandManager::AttemptRelease(UGripMotionControllerComponent* MotionController)
{
	TArray<UObject*> GrippedObjects;
	MotionController->GetGrippedObjects(GrippedObjects);

	for (UObject* Object : GrippedObjects)
	{
		AttemptReleaseObject(MotionController, Object);
	}
}

void UVrCoreHandManager::AttemptReleaseObject(UGripMotionControllerComponent* MotionController,
	UObject* Object)
{
	// Object must inherit from VR Expansion's interface
	IVRGripInterface* GripInterface = Cast<IVRGripInterface>(Object);
	if (!GripInterface)
	{
		MotionController->DropObject(Object);
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	// Check if server or client is authoritative on the grippable objective
	if (World->IsNetMode(ENetMode::NM_Client))
	{
		const EGripMovementReplicationSettings ReplicationSettings = GripInterface->Execute_GripMovementReplicationType(Object);
		if (ReplicationSettings != EGripMovementReplicationSettings::ClientSide_Authoritive &&
			ReplicationSettings != EGripMovementReplicationSettings::ClientSide_Authoritive_NoRep)
		{
			Server_AttemptReleaseObject(MotionController, Object);
			return;
		}
	}

	if (MotionController->DropObjectByInterface(Object))
	{
		// vibrate
		if (ReleaseHaptic)
		{
			EControllerHand HandType;
			MotionController->GetHandType(HandType);
			GetWorld()->GetFirstPlayerController()->PlayHapticEffect(ReleaseHaptic, HandType);	
		}
		return;
	}
}

void UVrCoreHandManager::Server_AttemptReleaseObject_Implementation(UGripMotionControllerComponent* MotionController,
																	UObject* Object)
{
	AttemptReleaseObject(MotionController, Object);
}

bool UVrCoreHandManager::Server_AttemptReleaseObject_Validate(UGripMotionControllerComponent* MotionController,
															  UObject* Object)
{
	return IsValid(MotionController) && IsValid(Object);
}