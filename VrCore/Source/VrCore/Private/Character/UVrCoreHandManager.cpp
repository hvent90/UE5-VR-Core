// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/UVrCoreHandManager.h"

#include <functional>
#include <string>

#include "GripMotionControllerComponent.h"
#include "Character/VrCoreHandAnimInterface.h"
#include "GameFramework/GameSession.h"
#include "Grippables/HandSocketComponent.h"
#include "Haptics/HapticFeedbackEffect_Base.h"
#include "Interactables/VrCoreInteractableInterface.h"
#include "Interactables/VrCoreWidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

void VLogLine(const AActor* Owner, const FVector& Start, const FVector& End, const float Size, const FColor& Color, const FString& Text)
{
#if ENABLE_VISUAL_LOG
	FVisualLogger& Vlog = FVisualLogger::Get();
	if (Vlog.IsRecording())
	{
		// UE_VLOG_LOCATION(Owner, LogHandManagerVisualLog, Log, Start, Size, Color, TEXT(""));
		UE_VLOG_SEGMENT(Owner, LogHandManagerVisualLog, Log, Start, End, Color, TEXT(""));
		UE_VLOG_LOCATION(Owner, LogHandManagerVisualLog, Log, End, Size, Color, TEXT("%s"), *Text);
	}
#endif
}

void VLog(const std::function<void()> Callback)
{
#if ENABLE_VISUAL_LOG
	FVisualLogger& Vlog = FVisualLogger::Get();
	if (Vlog.IsRecording())
	{
		Callback();
	}
#endif
}

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

EHandInteractableType FHandInteractables::GetClosest(FHandInteractable& Interactable)
{
	FHandInteractable NonGrippable;
	FHandInteractable Grippable;
	ShouldInteractWithNonGrippableInteractable(NonGrippable, Grippable);

	if (!NonGrippable.Valid() && !Grippable.Valid())
	{
		return EHandInteractableType::None;
	}

	if (!NonGrippable.Valid())
	{
		Interactable = Grippable;
		return EHandInteractableType::Grippable;
	}

	if (!Grippable.Valid())
	{
		Interactable = NonGrippable;
		return EHandInteractableType::NonGrippable;
	}

	if (Grippable.Distance < NonGrippable.Distance)
	{
		Interactable = Grippable;
		return EHandInteractableType::Grippable;
	}
	
	Interactable = NonGrippable;
	return EHandInteractableType::NonGrippable;
}

bool FHandInteractables::ShouldInteractWithNonGrippableInteractable(FHandInteractable& NonGrippable, FHandInteractable& Grippable)
{
	bool bInteractableFound = GetClosestInteractableWithoutGrip(NonGrippable);
	bool bGrippableFound = GetClosestGrippable(Grippable);

	if (!bInteractableFound)
	{
		return false;
	}
	
	if (!bGrippableFound)
	{
		return true;
	}

	return NonGrippable.Distance <= Grippable.Distance;
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

	HandMeshes.Add(LeftMotionController, LeftSkeletalMesh);
	HandMeshes.Add(RightMotionController, RightSkeletalMesh);

	HandMeshTransforms.Add(LeftMotionController, LeftSkeletalMesh->GetRelativeTransform());
	HandMeshTransforms.Add(RightMotionController, RightSkeletalMesh->GetRelativeTransform());

	EControllerHand LeftHand;
	EControllerHand RightHand;
	LeftMotionController->GetHandType(LeftHand);
	RightMotionController->GetHandType(RightHand);
	ImpulseActivations.Add(LeftHand, false);
	ImpulseActivations.Add(RightHand, false);
}

void UVrCoreHandManager::OnGrippedLeft(const FBPActorGripInformation& GripInfo)
{
	OnGrippedObject(LeftMotionController, HandMeshes[LeftMotionController], GripInfo);
}

void UVrCoreHandManager::OnGrippedRight(const FBPActorGripInformation& GripInfo)
{
	OnGrippedObject(RightMotionController, HandMeshes[RightMotionController], GripInfo);
}

void UVrCoreHandManager::OnDroppedLeft(const FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	OnDroppedObject(LeftMotionController, HandMeshes[LeftMotionController], GripInformation);
}

void UVrCoreHandManager::OnDroppedRight(const FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	OnDroppedObject(RightMotionController, HandMeshes[RightMotionController], GripInformation);
}

bool UVrCoreHandManager::ShouldGrip(UGripMotionControllerComponent* MotionController,
	FHandInteractable& Grippable)
{
	if (!IsValid(MotionController))
	{
		return false;
	}
	
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

	FHandInteractable NonGrippable;
	// Don't grip if closest object is a non-grippable interactable
	if (HandInteractables[MotionController].ShouldInteractWithNonGrippableInteractable(NonGrippable, Grippable))
	{
		return false;
	}
	
	return Grippable.Valid();
}

bool UVrCoreHandManager::ShouldInteract(UGripMotionControllerComponent* MotionController,
	FHandInteractable& Interactable)
{
	if (IsValid(MotionController))
	{
		return HandInteractables[MotionController].GetClosestInteractableWithoutGrip(Interactable);	
	}

	return false;
}

void UVrCoreHandManager::OnDroppedObject(UGripMotionControllerComponent* MotionController, USkeletalMeshComponent* Mesh,
                                         const FBPActorGripInformation& GripInfo)
{
	// Attach it back to the motion source
	Mesh->AttachToComponent(MotionController, FAttachmentTransformRules::KeepWorldTransform);

	// Reset the transform
	const FTransform RelativeTransform = HandMeshTransforms[MotionController];
	// EControllerHand Hand;
	// MotionController->GetHandType(Hand);
	// switch (Hand)
	// {
	// case EControllerHand::Left:
	// 	RelativeTransform = HandMeshTransforms[LeftMotionController];
	// 	break;
	// case EControllerHand::Right:
	// 	RelativeTransform = HandMeshTransforms[RightMotionController];
	// 	break;
	// default:
	// 	break;
	// }
	Mesh->SetRelativeLocationAndRotation(RelativeTransform.GetLocation(), RelativeTransform.GetRotation().Rotator());

	// Clear gripped pose
	UAnimInstance* AnimInstance = Mesh->GetAnimInstance();
	if (AnimInstance && AnimInstance->Implements<UVrCoreHandAnimInterface>())
	{
		IVrCoreHandAnimInterface::Execute_ClearPose(AnimInstance);
	}

	if (IsValid(ReleaseSound) && IsValid(Mesh))
	{
		UGameplayStatics::SpawnSoundAttached(ReleaseSound, Mesh);
	}
}

bool UVrCoreHandManager::IsServer() const
{
	if (GEngine != nullptr && GWorld != nullptr)
	{
		return GEngine->GetNetMode(GWorld) < NM_Client;
	}

	return false;
	
	return GetOwner()->HasAuthority();
}

void UVrCoreHandManager::ApplyHandPose(UGripMotionControllerComponent* MotionController, USkeletalMeshComponent* Mesh,
                                       UHandSocketComponent* HandSocketComponent, const FBPActorGripInformation& GripInfo)
{
	EControllerHand Hand;
	MotionController->GetHandType(Hand);
		
	FPoseSnapshot Pose;
	if (HandSocketComponent->GetBlendedPoseSnapShot(Pose, Mesh))
	{
		UAnimInstance* AnimInstance = Mesh->GetAnimInstance();
		if (IsValid(AnimInstance) && AnimInstance->Implements<UVrCoreHandAnimInterface>())
		{
			IVrCoreHandAnimInterface::Execute_EnterPose(AnimInstance, Pose);

			UPrimitiveComponent* GrippedComponent = Cast<UPrimitiveComponent>(GripInfo.GrippedObject);
			const AActor* GrippedActor = Cast<AActor>(GripInfo.GrippedObject);
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

void UVrCoreHandManager::ShowInteractionTooltip(UGripMotionControllerComponent* MotionController, UObject* Interactable)
{
	const UVrCoreInteractionTooltipInterface* TooltipInterface = Cast<UVrCoreInteractionTooltipInterface>(Interactable);
	if (!IsValid(TooltipInterface))
	{
		return;
	}
	
	const UVrCoreInteractionDataAsset* InteractionDataAsset = IVrCoreInteractableInterface::Execute_GetTooltip(Interactable);
	USceneComponent* InteractableComponent = Cast<USceneComponent>(Interactable);
	if (!IsValid(InteractableComponent))
	{
		return;
	}

	// Currently showing tooltip for the requested component
	if (InteractableComponent == TooltipParentComponent)
	{
		return;
	}
	
	if (IsValid(InteractionDataAsset))
	{
		if (!IsValid(InteractionTooltip.Get()) && IsValid(TooltipClass))
		{
			InteractionTooltip = GetWorld()->SpawnActor(TooltipClass);
		}

		if (!IsValid(InteractionTooltip.Get()))
		{
			UE_LOG(LogTemp, Error, TEXT("Tooltip not found"));
			return;
		}

		TooltipParentComponent = InteractableComponent;
		
		IVrCoreInteractionTooltipInterface::Execute_SetGripAction(InteractionTooltip, InteractionDataAsset->Grip);
		IVrCoreInteractionTooltipInterface::Execute_SetThumbstickAction(InteractionTooltip, InteractionDataAsset->Thumbstick);
		IVrCoreInteractionTooltipInterface::Execute_SetTriggerAction(InteractionTooltip, InteractionDataAsset->Trigger);
		IVrCoreInteractionTooltipInterface::Execute_SetPrimaryButtonAction(InteractionTooltip, InteractionDataAsset->PrimaryButton);
		IVrCoreInteractionTooltipInterface::Execute_SetSecondaryButtonAction(InteractionTooltip, InteractionDataAsset->SecondaryButton);

		// Set location
		InteractionTooltip->AttachToComponent(MotionController, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
		InteractionTooltip->SetActorLocationAndRotation(MotionController->GetComponentLocation(), MotionController->GetComponentRotation());
		// InteractionTooltip->SetRelativeLocation(FVector(Tooltip->GetWidget()->GetDesiredSize().X, 0, 0)); // TODO: Get better position

		// Face player
		// const APlayerCameraManager* PlayerCamera = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
		// Tooltip->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(Tooltip->GetComponentLocation(), PlayerCamera->GetCameraLocation()));

		// Hydrate & Visibility
		// Tooltip->Hydrate(InteractionDataAsset);
		// InteractionTooltip->SetActorHiddenInGame(false);
		// InteractionTooltip->Activate();
		
		// Deactivate Tooltip after TooltipDuration seconds
		// GetWorld()->GetTimerManager().SetTimer(TooltipTimerHandle, [this, InteractableComponent]()
		// {
		// 	if (IsValid(InteractionTooltip) && InteractableComponent == TooltipParentComponent)
		// 	{
		// 		InteractionTooltip->Destroy();
		// 		TooltipParentComponent = nullptr;
		// 	}
		// }, TooltipDuration, false);
	}
}

void UVrCoreHandManager::TeardownInteractableTooltip()
{
	if (IsValid(InteractionTooltip))
	{
		InteractionTooltip->Destroy();
		TooltipParentComponent = nullptr;
	}
}

void UVrCoreHandManager::OnGrippedObject(UGripMotionControllerComponent* MotionController, USkeletalMeshComponent* Mesh,
                                         const FBPActorGripInformation& GripInfo)
{
	// Apply hand pose 
	if (UHandSocketComponent* HandSocketComponent = UHandSocketComponent::GetHandSocketComponentFromObject(
		GripInfo.GrippedObject, GripInfo.SlotName))
	{
		ApplyHandPose(MotionController, Mesh, HandSocketComponent, GripInfo);
	}

	if (IsValid(GripSound) && IsValid(Mesh))
	{
		UGameplayStatics::SpawnSoundAttached(GripSound, Mesh);
	}

	// if (GripInfo.GrippedObject->Implements<UVrCoreInteractableInterface>())
	// {
	// 	ShowInteractionTooltip(MotionController, GripInfo.GrippedObject);
	// }
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

bool UVrCoreHandManager::HandleThumbstickAxis(UGripMotionControllerComponent* MotionController, float X, float Y)
{
	if (!IsServer())
	{
		Server_HandleThumbstickAxis(MotionController, X, Y);
	}

	// Handle Animation

	// Prepare Impulse values
	bool bFireImpulse = false;
	FVector2D ImpulseDirection;
	EControllerHand Hand;
	MotionController->GetHandType(Hand);

	// if (ImpulseActivations[Hand])
	// {
	// 	if (FMath::Abs(Y) < 0.1)
	// 	{
	// 		ImpulseActivations[Hand] = false;
	// 	}
	// }
	// else
	// {
	// 	if (FMath::Abs(Y) > 0.5)
	// 	{
	// 		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Impulse"));
	//
	// 		ImpulseActivations[Hand] = true;
	// 		bFireImpulse = true;
	// 		
	// 		ImpulseDirection.Y = 1;
	// 		if (Y < 0)
	// 		{
	// 			ImpulseDirection.Y = -1;
	// 		}
	// 	}
	// }
	//
	if (ImpulseActivations[Hand])
	{
		if (abs(X) < ThumbstickResetThreshold && abs(Y) < ThumbstickResetThreshold)
		{
			ImpulseActivations[Hand] = false;
		}
	} else
	{
		if (abs(X) > ThumbstickImpulseActivationThreshold)
		{
			ImpulseActivations[Hand] = true;
			bFireImpulse = true;
			ImpulseDirection.X = 1;
			if (X < 0)
			{
				ImpulseDirection.X = -1;
			}
		}
	
		if (abs(Y) > ThumbstickImpulseActivationThreshold)
		{
			ImpulseActivations[Hand] = true;
			bFireImpulse = true;
			ImpulseDirection.Y = 1;
			if (Y < 0)
			{
				ImpulseDirection.Y = -1;
			}
		}	
	}

	// Send input to gripped objects
	TArray<UObject*> GrippedObjects;
	MotionController->GetGrippedObjects(GrippedObjects);
	for (UObject* GrippedObject : GrippedObjects)
	{
		// Check if the gripped object implements IVrCoreInteractableInterface
		if (GrippedObject->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()))
		{
			if (bFireImpulse)
			{
				IVrCoreInteractableInterface::Execute_SendThumbstickImpulse(GrippedObject, ImpulseDirection);
			}

			IVrCoreInteractableInterface::Execute_K2_SendThumbstickAxis(GrippedObject, X, Y);
			IVrCoreInteractableInterface::Execute_SendThumbstickAxis(GrippedObject, X, Y);
			return IVrCoreInteractableInterface::Execute_ThumbstickConsumesMovement(GrippedObject);
		}
		else
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

			if (Actor->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()))
			{
				if (bFireImpulse)
				{
					IVrCoreInteractableInterface::Execute_SendThumbstickImpulse(Actor, ImpulseDirection);
				}
				
				IVrCoreInteractableInterface::Execute_K2_SendThumbstickAxis(Actor, X, Y);
				IVrCoreInteractableInterface::Execute_SendThumbstickAxis(Actor, X, Y);
				return IVrCoreInteractableInterface::Execute_ThumbstickConsumesMovement(Actor);	
			}
		}
	}

	return false;
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
	{
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
	}

	// Send trigger to nearest object that can be interacted without a grip
	{
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
	Params.bDebugQuery = bDebugGripRadius;

	FName SocketName = MotionController == LeftMotionController ? LeftHandForwardTraceSocket : RightHandForwardTraceSocket;
	FVector SocketLocation = HandMeshes[MotionController]->GetSocketLocation(SocketName);
	FVector SocketForwardVector = HandMeshes[MotionController]->GetSocketRotation(SocketName).Vector();
	const FVector Start = SocketLocation
		+ SocketForwardVector
		* GripTraceLength;

	if (bDebugGripTrace)
	{
		DrawDebugSphere(GetWorld(), Start, TraceRadius, 10, FColor::Red, false, 0, ESceneDepthPriorityGroup::SDPG_World, 1);
	}
	
	VLog([this, Start]()
	{
		UE_VLOG_LOCATION(GetOwner(), LogHandManagerVisualLog, Log, Start, GripRadius, FColor::Black, TEXT("Overlap Radius Check"));
	});
	
	TArray<FOverlapResult> Overlaps;
	const bool Overlap = World->OverlapMultiByChannel(Overlaps,
	                                                  Start, FQuat(),
	                                                  GripCollisionChannel, FCollisionShape::MakeSphere(TraceRadius), Params);
	if (!Overlap)
	{
		return false;
	}
	
	for (FOverlapResult OverlapResult : Overlaps)
	{
		AActor* Actor = OverlapResult.GetActor();
		UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(Actor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
		if (Actor && Actor->Implements<UVrCoreInteractableInterface>())
		{
			// VLogLine(GetOwner(), Start, OverlapResult.Component->GetComponentLocation(), 50, FColor::Green, "Overlap: Actor | UVrCoreInteractableInterface");
			const float Distance = (Actor->GetActorLocation() - Start).Size();
			Interactables.Add(FHandInteractable(Actor, StaticMeshComponent, Distance, Actor->GetActorTransform()));
			
			if (bDebugGripTrace)
			{
				DrawDebugBox(GetWorld(), Actor->GetActorLocation(), FVector(10), FColor::Red, false, 0, ESceneDepthPriorityGroup::SDPG_World, 1);
			}
		}

		if (Actor && Actor->Implements<UVRGripInterface>())
		{
			// VLogLine(GetOwner(), Start, OverlapResult.Component->GetComponentLocation(), 50, FColor::Green, "Overlap: Actor | UVRGripInterface");
			const float Distance = (Actor->GetActorLocation() - Start).Size();
			Interactables.Add(FHandInteractable(Actor, StaticMeshComponent, Distance, Actor->GetActorTransform()));
		}

		UPrimitiveComponent* Component = OverlapResult.GetComponent();
		StaticMeshComponent = Cast<UStaticMeshComponent>(Component);
		if (Component && Component->Implements<UVrCoreInteractableInterface>())
		{
			// VLogLine(GetOwner(), Start, OverlapResult.Component->GetComponentLocation(), 50, FColor::Green, "Overlap: Component | UVrCoreInteractableInterface");
			const float Distance = (Component->GetComponentLocation() - Start).Size();
			Interactables.Add(FHandInteractable(Component, StaticMeshComponent, Distance, Component->GetComponentTransform()));

			if (bDebugGripTrace)
			{
				DrawDebugBox(GetWorld(), Component->GetComponentLocation(), FVector(10), FColor::Red, false, 0, ESceneDepthPriorityGroup::SDPG_World, 1);
			}
		}

		// Forward trace check will only look for interactables
		// if (Component && Component->Implements<UVRGripInterface>())
		// {
		// 	// VLogLine(GetOwner(), Start, OverlapResult.Component->GetComponentLocation(), 50, FColor::Green, "Overlap: Component | UVRGripInterface");
		// 	const float Distance = (Component->GetComponentLocation() - MotionController->GetComponentLocation()).Size();
		// 	Grippables.Add(FHandInteractable(Component, StaticMeshComponent, Distance, Component->GetComponentTransform()));
		// }
	}

	return false;
	
	// UWorld* World = GetWorld();
	// if (!World)
	// {
	// 	return false;
	// }
	//
	// FCollisionQueryParams Params;
	// Params.AddIgnoredActor(GetOwner());
	// Params.bDebugQuery = bDebugGripTrace;
	//
	// const FVector Start = HandMeshes[MotionController]->GetComponentLocation();
	// const FVector End = HandMeshes[MotionController]->GetComponentLocation()
	// 	+ HandMeshes[MotionController]->GetRightVector()
	// 	* GripTraceLength;
	//
	// if (bDebugGripTrace)
	// {
	// 	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 0, ESceneDepthPriorityGroup::SDPG_World, 1);	
	// }
	//
	// VLogLine(GetOwner(), Start, End, 1, FColor::Black, "Forward Trace Check");
	//
	// // Find objects in front of hand
	// TArray<FHitResult> Hits;
	// const bool Hit = World->LineTraceMultiByChannel(Hits,
	// 	Start, End, GripCollisionChannel, Params);
	//
	// if (!Hit)
	// {
	// 	return false;
	// }
	//
	// for (FHitResult HitResult : Hits)
	// {
	// 	AActor* Actor = HitResult.GetActor();
	// 	UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(Actor->GetComponentByClass(UStaticMeshComponent::StaticClass()));
	// 	if (Actor && Actor->Implements<UVrCoreInteractableInterface>())
	// 	{
	// 		// VLogLine(GetOwner(), Start, HitResult.Location, 10, FColor::Blue, "Forward Trace: Actor | UVrCoreInteractableInterface");
	// 		Interactables.Add(FHandInteractable(Actor, StaticMeshComponent, HitResult.Distance, HitResult.GetActor()->GetActorTransform()));
	// 	}
	//
	// 	if (Actor && Actor->Implements<UVRGripInterface>())
	// 	{
	// 		// VLogLine(GetOwner(), Start, HitResult.Location, 10, FColor::Blue, "Forward Trace: Actor | UVRGripInterface");
	// 		Grippables.Add(FHandInteractable(Actor, StaticMeshComponent, HitResult.Distance, HitResult.GetActor()->GetActorTransform()));
	// 	}
	//
	// 	UPrimitiveComponent* Component = HitResult.GetComponent();
	// 	StaticMeshComponent = Cast<UStaticMeshComponent>(Component);
	// 	if (Component && Component->Implements<UVrCoreInteractableInterface>())
	// 	{
	// 		// VLogLine(GetOwner(), Start, HitResult.Location, 3, FColor::Blue, "Forward Trace: Component | UVrCoreInteractableInterface");
	// 		Interactables.Add(FHandInteractable(Component, StaticMeshComponent, HitResult.Distance, HitResult.GetComponent()->GetComponentTransform()));
	// 	}
	//
	// 	if (Component && Component->Implements<UVRGripInterface>())
	// 	{
	// 		// VLogLine(GetOwner(), Start, HitResult.Location, 10, FColor::Blue, "Forward Trace: Component | UVRGripInterface");
	// 		Grippables.Add(FHandInteractable(Component, StaticMeshComponent, HitResult.Distance, HitResult.GetComponent()->GetComponentTransform()));
	// 	}
	// }
	//
	// return false;
}

bool UVrCoreHandManager::RadialOverlapCheck(const ::UGripMotionControllerComponent* MotionController,
                                            TArray<FHandInteractable>& Interactables, TArray<FHandInteractable>& Grippables) const
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return false;
	}

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(GetOwner());
	Params.bDebugQuery = bDebugGripRadius;

	const FVector Start = MotionController->GetComponentLocation();
	VLog([this, Start]()
	{
		UE_VLOG_LOCATION(GetOwner(), LogHandManagerVisualLog, Log, Start, GripRadius, FColor::Black, TEXT("Overlap Radius Check"));
	});
	
	TArray<FOverlapResult> Overlaps;
	const bool Overlap = World->OverlapMultiByChannel(Overlaps,
	                                                  Start, FQuat(),
	                                                  GripCollisionChannel, FCollisionShape::MakeSphere(GripRadius), Params);
	if (!Overlap)
	{
		return false;
	}
	

	for (FOverlapResult OverlapResult : Overlaps)
	{
		AActor* Actor = OverlapResult.GetActor();
		UPrimitiveComponent* Component = OverlapResult.GetComponent();
		UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(Actor->GetComponentByClass(UStaticMeshComponent::StaticClass()));

		// Radial check will only look for grippables
		// if (Actor && Actor->Implements<UVrCoreInteractableInterface>())
		// {
		// 	// VLogLine(GetOwner(), Start, OverlapResult.Component->GetComponentLocation(), 50, FColor::Green, "Overlap: Actor | UVrCoreInteractableInterface");
		// 	const float Distance = (Actor->GetActorLocation() - MotionController->GetComponentLocation()).Size();
		// 	Interactables.Add(FHandInteractable(Actor, StaticMeshComponent, Distance, Actor->GetActorTransform()));
		// }
		//
		// if (Actor && Actor->Implements<UVRGripInterface>())
		// {
		// 	// VLogLine(GetOwner(), Start, OverlapResult.Component->GetComponentLocation(), 50, FColor::Green, "Overlap: Actor | UVRGripInterface");
		// 	const float Distance = (Actor->GetActorLocation() - MotionController->GetComponentLocation()).Size();
		// 	Interactables.Add(FHandInteractable(Actor, StaticMeshComponent, Distance, Actor->GetActorTransform()));
		// }
		//
		// StaticMeshComponent = Cast<UStaticMeshComponent>(Component);
		// if (Component && Component->Implements<UVrCoreInteractableInterface>())
		// {
		// 	// VLogLine(GetOwner(), Start, OverlapResult.Component->GetComponentLocation(), 50, FColor::Green, "Overlap: Component | UVrCoreInteractableInterface");
		// 	const float Distance = (Component->GetComponentLocation() - MotionController->GetComponentLocation()).Size();
		// 	Interactables.Add(FHandInteractable(Component, StaticMeshComponent, Distance, Component->GetComponentTransform()));
		// }
		
		if (Component && Component->Implements<UVRGripInterface>())
		{
			// VLogLine(GetOwner(), Start, OverlapResult.Component->GetComponentLocation(), 50, FColor::Green, "Overlap: Component | UVRGripInterface");
			const float Distance = (Component->GetComponentLocation() - MotionController->GetComponentLocation()).Size();
			Grippables.Add(FHandInteractable(Component, StaticMeshComponent, Distance, Component->GetComponentTransform()));
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
			const IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(CurrentClosest.Object);
			if (!(InteractableInterface && InteractableInterface->Execute_Highlight(CurrentClosest.Object, false)))
			{
				if (IsValid(CurrentClosest.Mesh) && IsValid(HighlightOverlayMaterial) && CurrentClosest.Mesh->GetOverlayMaterial() == HighlightOverlayMaterial)
				{
					CurrentClosest.Mesh->SetOverlayMaterial(nullptr);
				}
			}
		}
		
		if (HandInteractables[MotionController].GetClosestGrippable(CurrentClosest))
		{
			IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(CurrentClosest.Object);
			if (!(InteractableInterface && InteractableInterface->Execute_Highlight(CurrentClosest.Object, false)))
			{
				if (IsValid(CurrentClosest.Mesh) && IsValid(HighlightOverlayMaterial) && CurrentClosest.Mesh->GetOverlayMaterial() == HighlightOverlayMaterial)
				{
					CurrentClosest.Mesh->SetOverlayMaterial(nullptr);
				}
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
		for (const FHandInteractable Interactable : Interactables)
		{
			HandInteractables[MotionController].AddInteractable(Interactable);
		}
		
		RadialOverlapCheck(MotionController, Interactables, Grippables);
		for (const FHandInteractable Grippable : Grippables)
		{
			HandInteractables[MotionController].AddGrippable(Grippable);
		}

#if ENABLE_VISUAL_LOG
		VLog([this, MotionController, Interactables, Grippables]()
		{
			FHandInteractable Closest;
			FString DebugString = "Interactables for " + MotionController->GetName() + ":\n";
			if (HandInteractables[MotionController].GetClosestInteractable(Closest))
			{
				DebugString.Append("Closest: " + Closest.Object->GetName() + "\n");
				UE_VLOG_LOCATION(GetOwner(), LogHandManagerVisualLog, Log, Closest.WorldTransform.GetLocation(), 3, FColor::Blue, TEXT("Closest Interactable"));
			}
			
			for (const FHandInteractable& Interactable : Interactables)
			{
				DebugString.Append(Interactable.Object->GetName() + "\n");
				if (Interactable.Object != Closest.Object)
				{
					UE_VLOG_LOCATION(GetOwner(), LogHandManagerVisualLog, Log, Closest.WorldTransform.GetLocation(), 3, FColor::White, TEXT("Interactable"));
				}
			}

			UE_VLOG(GetOwner(), LogHandManagerVisualLog, Log, TEXT("%s"), *DebugString);

			DebugString = "Grippables for " + MotionController->GetName() + ":\n";
			if (HandInteractables[MotionController].GetClosestInteractable(Closest))
			{
				DebugString.Append("Closest: " + Closest.Object->GetName() + "\n");
				UE_VLOG_LOCATION(GetOwner(), LogHandManagerVisualLog, Log, Closest.WorldTransform.GetLocation(), 3, FColor::Blue, TEXT("Closest Grippable"));
			}

			for (const FHandInteractable& Grippable : Grippables)
			{
				DebugString.Append(Grippable.Object->GetName() + "\n");
				if (Grippable.Object != Closest.Object)
				{
					UE_VLOG_LOCATION(GetOwner(), LogHandManagerVisualLog, Log, Closest.WorldTransform.GetLocation(), 3, FColor::White, TEXT("Grippable"));
				}
			}
			UE_VLOG(GetOwner(), LogHandManagerVisualLog, Log, TEXT("%s"), *DebugString);
		});
#endif

		// User Affordance (highlight, pointing)
		FHandInteractable Closest;
		// EHandInteractableType HandInteractableType =
		bool InteractableExists = HandInteractables[MotionController].GetClosestInteractableWithoutGrip(Closest);

		if (InteractableExists)
		{
			// Point mesh towards Interactable
			UAnimInstance* AnimInstance = HandMeshes[MotionController]->GetAnimInstance();
			if (AnimInstance && AnimInstance->Implements<UVrCoreHandAnimInterface>())
			{
				IVrCoreHandAnimInterface::Execute_PointToLocation(AnimInstance, Closest.WorldTransform.GetLocation());
			}

			ShowInteractionTooltip(MotionController, CurrentClosest.Object);
		}

		// if (HandInteractableType == NonGrippable)
		// {
		// 	// Point mesh towards Interactable
		// 	UAnimInstance* AnimInstance = HandMeshes[MotionController]->GetAnimInstance();
		// 	if (AnimInstance && AnimInstance->Implements<UVrCoreHandAnimInterface>())
		// 	{
		// 		IVrCoreHandAnimInterface::Execute_PointToLocation(AnimInstance, Closest.WorldTransform.GetLocation());
		// 	}
		//
		// 	ShowInteractionTooltip(MotionController, CurrentClosest.Object);
		// }

		// if (HandInteractableType != NonGrippable)
		// {
		// 	// Stop pointing mesh towards interactable
		// 	UAnimInstance* AnimInstance = HandMeshes[MotionController]->GetAnimInstance();
		// 	if (AnimInstance && AnimInstance->Implements<UVrCoreHandAnimInterface>())
		// 	{
		// 		IVrCoreHandAnimInterface::Execute_StopPointing(AnimInstance);
		// 	}
		//
		// 	TeardownInteractableTooltip();
		// }

		if (Closest.Valid())
		{
			// Highlight via Interface
			if (Closest.Object->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()))
			{
				IVrCoreInteractableInterface::Execute_Highlight(Closest.Object, true);
			}

			// Highlight via Overlay Material
			if (HighlightOverlayMaterial && Closest.Mesh)
			{
				Closest.Mesh->SetOverlayMaterial(HighlightOverlayMaterial);
			}
		}
		
		// FHandInteractable NonGrippable;
		// FHandInteractable Grippable;
		// if (HandInteractables[MotionController].ShouldInteractWithNonGrippableInteractable(NonGrippable, Grippable))
		// {
		// 	// Highlight via Interface
		// 	if (NonGrippable.Object->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()))
		// 	{
		// 		IVrCoreInteractableInterface::Execute_Highlight(NonGrippable.Object, true);
		// 	}
		//
		// 	// Highlight via Overlay Material
		// 	if (HighlightOverlayMaterial && NonGrippable.Mesh)
		// 	{
		// 		NonGrippable.Mesh->SetOverlayMaterial(HighlightOverlayMaterial);
		// 	}
		//
		// 	// Point mesh towards Interactable
		// 	UAnimInstance* AnimInstance = HandMeshes[MotionController]->GetAnimInstance();
		// 	if (AnimInstance && AnimInstance->Implements<UVrCoreHandAnimInterface>())
		// 	{
		// 		IVrCoreHandAnimInterface::Execute_PointToLocation(AnimInstance, NonGrippable.WorldTransform.GetLocation());
		// 	}
		//
		// 	// Tooltip
		// 	// ShowInteractionTooltip(MotionController, NonGrippable.Object);
		// }
		// else
		// {
		// 	// Stop pointing mesh towards interactable
		// 	UAnimInstance* AnimInstance = HandMeshes[MotionController]->GetAnimInstance();
		// 	if (AnimInstance && AnimInstance->Implements<UVrCoreHandAnimInterface>())
		// 	{
		// 		IVrCoreHandAnimInterface::Execute_StopPointing(AnimInstance);
		// 	}
		// 	
		// 	// Remove Non Grippable Tooltip
		// 	// TeardownInteractableTooltip();
		// }
		//
		// // Highlight the closest interactable
		// if (HandInteractables[MotionController].GetClosestInteractable(CurrentClosest))
		// {
		// 	if (CurrentClosest.Object->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()))
		// 	{
		// 		IVrCoreInteractableInterface::Execute_Highlight(CurrentClosest.Object, true);
		// 	}
		// 	// const IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(CurrentClosest.Object);
		// 	// if (InteractableInterface)
		// 	// {
		// 	// 	InteractableInterface->Execute_Highlight(CurrentClosest.Object, true);
		// 	// }
		// 	// else
		// 	// {
		// 		if (HighlightOverlayMaterial && CurrentClosest.Mesh)
		// 		{
		// 			CurrentClosest.Mesh->SetOverlayMaterial(HighlightOverlayMaterial);
		// 		}
		// 	// }
		// }
		//
		// // Show tooltip for closest interactable without grip
		// if (HandInteractables[MotionController].GetClosestInteractableWithoutGrip(CurrentClosest))
		// {
		// 	ShowInteractionTooltip(MotionController, CurrentClosest.Object);
		// }
		// else
		// {
		// 	TeardownInteractableTooltip();
		// }
		//
		// if (HandInteractables[MotionController].GetClosestGrippable(CurrentClosest))
		// {
		// 	// const IVrCoreInteractableInterface* InteractableInterface = Cast<IVrCoreInteractableInterface>(CurrentClosest.Object);
		// 	// if (InteractableInterface)
		// 	// {
		// 	// 	InteractableInterface->Execute_Highlight(CurrentClosest.Object, true);
		// 	// }
		// 	// else
		// 	// {
		// 		if (HighlightOverlayMaterial && CurrentClosest.Mesh)
		// 		{
		// 			CurrentClosest.Mesh->SetOverlayMaterial(HighlightOverlayMaterial);
		// 		}
		// 	// }
		// }
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

	FHandInteractable NonGrippable;
	FHandInteractable Grippable;
	// Don't grip if closest object is a non-grippable interactable
	if (HandInteractables[MotionController].ShouldInteractWithNonGrippableInteractable(NonGrippable, Grippable))
	{
		return false;
	}
	
	if (Grippable.Valid())
	{
		if (AttemptGripObject(MotionController, Grippable.Object, Grippable.WorldTransform))
		{
			// vibrate
			if (GripHaptic)
			{
				EControllerHand HandType;
				MotionController->GetHandType(HandType);

				const UWorld* World = GetWorld();
				APlayerController* PC = World->GetFirstPlayerController();
				PC->PlayHapticEffect(GripHaptic, HandType);

				UE_LOG(LogTemp, Warning, TEXT("GRIP DURATION: %f"), GripHaptic->GetDuration());
				FTimerHandle RumbleHandle;
				World->GetTimerManager().SetTimer(RumbleHandle, [PC, HandType]()
				{
					UE_LOG(LogTemp, Warning, TEXT("GRIP STOPPED"));
					PC->StopHapticEffect(HandType);
				}, GripHaptic->GetDuration(), false);
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
	if (!GetOwner()->HasAuthority())
	// if (World->IsNetMode(ENetMode::NM_Client))
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
	if (!GetOwner()->HasAuthority())
	// if (World->IsNetMode(ENetMode::NM_Client))
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