// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/VRExpansionOverrides/VrCoreLever.h"

#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Sound/SoundCue.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UVrCoreLever::UVrCoreLever(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bReplicateGripScripts = false;

	SetIsReplicatedByDefault(true);
}

bool UVrCoreLever::GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference)
{
	ArrayReference = GripLogicScripts;
	return GripLogicScripts.Num() > 0;
}

void UVrCoreLever::SendTrigger_Implementation(bool Pressed)
{
	bTriggerPressed = Pressed;

	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_Trigger();
	}

	if (!bTriggerPressed || !IsValid(InteractionDataAsset))
	{
		return;
	}
	
	if (InteractionDataAsset->TriggerSound.IsValid())
	{
		UGameplayStatics::SpawnSoundAttached(InteractionDataAsset->TriggerSound.Get(), this);
	}
}

void UVrCoreLever::SendPrimaryButton_Implementation(bool Pressed)
{
	bPrimaryButtonPressed = Pressed;
	
	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_PrimaryButton();
	}

	if (!bPrimaryButtonPressed || !IsValid(InteractionDataAsset))
	{
		return;
	}
	
	if (InteractionDataAsset->PrimarySound.IsValid())
	{
		UGameplayStatics::SpawnSoundAttached(InteractionDataAsset->PrimarySound.Get(), this);
	}
}

void UVrCoreLever::SendSecondaryButton_Implementation(bool Pressed)
{
	bSecondaryButtonPressed = Pressed;
	
	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_SecondaryButton();
	}

	if (!bSecondaryButtonPressed || !IsValid(InteractionDataAsset))
	{
		return;
	}
	
	if (InteractionDataAsset->SecondarySound.IsValid())
	{
		UGameplayStatics::SpawnSoundAttached(InteractionDataAsset->SecondarySound.Get(), this);
	}
}

void UVrCoreLever::SendThumbstickPress_Implementation(bool Pressed)
{
	bThumbstickPressed = Pressed;
	
	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_ThumbstickPress();
	}
}

void UVrCoreLever::SendThumbstickAxis_Implementation(float X, float Y)
{
	ThumbstickAxis.Set(X, Y);
	
	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_ThumbstickAxis();
	}
}

UVrCoreInteractionDataAsset* UVrCoreLever::GetTooltip_Implementation()
{
	return InteractionDataAsset;
}

void UVrCoreLever::ChangeLeverReturnTypeWhenReleased(EVRInteractibleLeverReturnType ReturnType)
{
	LeverReturnTypeWhenReleased = ReturnType;

	if (ReturnType != EVRInteractibleLeverReturnType::Stay && !bIsHeld)
	{
		bIsLerping = true;
		this->SetComponentTickEnabled(true);
		if (MovementReplicationSetting != EGripMovementReplicationSettings::ForceServerSideMovement)
			bReplicateMovement = false;
	}
}

void UVrCoreLever::PrimaryLongPress()
{
	OnPrimaryLongPress.Broadcast(true);
}

void UVrCoreLever::SecondaryLongPress()
{
	OnSecondaryLongPress.Broadcast(true);
}

void UVrCoreLever::OnRep_Trigger()
{
	OnTrigger.Broadcast(bTriggerPressed);
}

void UVrCoreLever::OnRep_PrimaryButton()
{
	OnPrimary.Broadcast(bPrimaryButtonPressed);

	// if (bPrimaryButtonPressed)
	// {
	// 	PrimaryPressTime = GetWorld()->GetTimeSeconds();
	// 	GetWorld()->GetTimerManager().SetTimer(PrimaryTimerHandle, this, &UVrCoreLever::PrimaryLongPress, LongPressTimeThreshold);
	// }
	// else
	// {
	// 	GetWorld()->GetTimerManager().ClearTimer(PrimaryTimerHandle);
	//
	// 	const float GameTimeSeconds = GetWorld()->GetTimeSeconds();
	// 	const float TimeSincePress = GameTimeSeconds - PrimaryPressTime;
	// 	if (TimeSincePress > LongPressTimeThreshold)
	// 	{
	// 		OnPrimaryLongPress.Broadcast(false);
	// 	}
	// 	else
	// 	{
	// 		OnPrimary.Broadcast(true);
	// 		// OnPrimary.Broadcast(false);
	// 	}
	// }
}

void UVrCoreLever::OnRep_SecondaryButton()
{
	OnSecondary.Broadcast(bSecondaryButtonPressed);
	//
	// if (bSecondaryButtonPressed)
	// {
	// 	SecondaryPressTime = GetWorld()->GetTimeSeconds();
	// 	GetWorld()->GetTimerManager().SetTimer(SecondaryTimerHandle, this, &UVrCoreLever::SecondaryLongPress, LongPressTimeThreshold);
	// }
	// else
	// {
	// 	GetWorld()->GetTimerManager().ClearTimer(SecondaryTimerHandle);
	//
	// 	const float GameTimeSeconds = GetWorld()->GetTimeSeconds();
	// 	const float TimeSincePress = GameTimeSeconds - SecondaryPressTime;
	// 	if (TimeSincePress > SecondaryPressTime)
	// 	{
	// 		OnSecondaryLongPress.Broadcast(false);
	// 	}
	// 	else
	// 	{
	// 		OnSecondary.Broadcast(true);
	// 		// OnSecondary.Broadcast(false);
	// 	}
	// }
}

void UVrCoreLever::OnRep_ThumbstickPress()
{
	OnThumbstickPress.Broadcast(bThumbstickPressed);
}

void UVrCoreLever::OnRep_ThumbstickAxis()
{
	OnThumbstickAxis.Broadcast(ThumbstickAxis);
}

void UVrCoreLever::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(UVrCoreLever, GripLogicScripts, COND_Custom);
	DOREPLIFETIME(UVrCoreLever, bTriggerPressed);
	DOREPLIFETIME(UVrCoreLever, bPrimaryButtonPressed);
	DOREPLIFETIME(UVrCoreLever, bSecondaryButtonPressed);
	DOREPLIFETIME(UVrCoreLever, bThumbstickPressed);
	DOREPLIFETIME(UVrCoreLever, ThumbstickAxis);
}

void UVrCoreLever::ToggleSwitch()
{
	ToggleState = !ToggleState;
	OnLeverToggle.Broadcast(ToggleState);
}

void UVrCoreLever::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);

	DOREPLIFETIME_ACTIVE_OVERRIDE_FAST(UVrCoreLever, GripLogicScripts, bReplicateGripScripts);
}

bool UVrCoreLever::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);
	//
	// if (bReplicateGripScripts)
	// {
	// 	for (UVRGripScriptBase* Script : GripLogicScripts)
	// 	{
	// 		if (Script && IsValid(Script))
	// 		{
	// 			WroteSomething |= Channel->ReplicateSubobject(Script, *Bunch, *RepFlags);
	// 		}
	// 	}
	// }

	return WroteSomething;
}

void UVrCoreLever::EndPlay(EEndPlayReason::Type Reason)
{
	// Call the base class 
	Super::EndPlay(Reason);

	// Call all grip scripts begin play events so they can perform any needed logic
	for (UVRGripScriptBase* Script : GripLogicScripts)
	{
		if (Script)
		{
			Script->EndPlay(Reason);
		}
	}
}

void UVrCoreLever::SetupScripts()
{
	for (UVRGripScriptBase* Script : GripLogicScripts)
	{
		if (Script)
		{
			Script->BeginPlay(this);
		}
	}
}

void UVrCoreLever::SetupSounds()
{
	if (!IsValid(InteractionDataAsset))
	{
		return;
	}
	
	// Load async assets
	TArray<FSoftObjectPath> ObjectsToLoad;
	const FSoftObjectPath& PrimarySoundPath = InteractionDataAsset->PrimarySound.ToSoftObjectPath();
	if (PrimarySoundPath.IsValid())
	{
		ObjectsToLoad.Add(PrimarySoundPath);
	}
	const FSoftObjectPath& SecondarySoundPath = InteractionDataAsset->SecondarySound.ToSoftObjectPath();
	if (SecondarySoundPath.IsValid())
	{
		ObjectsToLoad.Add(SecondarySoundPath);
	}
	const FSoftObjectPath& TriggerSoundPath = InteractionDataAsset->TriggerSound.ToSoftObjectPath();
	if (TriggerSoundPath.IsValid())
	{
		ObjectsToLoad.Add(TriggerSoundPath);
	}

	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
	Streamable.RequestAsyncLoad(ObjectsToLoad);
}

void UVrCoreLever::BeginPlay()
{
	// Call the base class 
	Super::BeginPlay();
	
	SetupScripts();

	SetupSounds();

	bOriginalReplicatesMovement = bReplicateMovement;
}
