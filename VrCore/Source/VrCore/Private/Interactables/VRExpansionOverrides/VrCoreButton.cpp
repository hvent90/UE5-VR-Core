// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/VRExpansionOverrides/VrCoreButton.h"

#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Sound/SoundCue.h"


// Sets default values for this component's properties
UVrCoreButton::UVrCoreButton(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UVrCoreButton::SendTrigger_Implementation(bool Pressed)
{
	bTriggerPressed = Pressed;

	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_Trigger();
	}
}

void UVrCoreButton::BeginPlay()
{
	Super::BeginPlay();

	if (ActivationSound.IsValid() && !GetWorld()->GetGameInstance()->IsDedicatedServerInstance())
	{
		FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
		Streamable.RequestAsyncLoad(ActivationSound.ToSoftObjectPath());
	}
}

bool UVrCoreButton::Highlight_Implementation(bool Visible, USkeletalMeshComponent* Hand)
{
	OnHighlight.Broadcast(Visible, Hand);
	
	return IVrCoreInteractableInterface::Highlight_Implementation(Visible, Hand);
}

void UVrCoreButton::OnRep_Trigger()
{
	if (bTriggerPressed)
	{
		SetButtonState(!bButtonState);

		if (bButtonState)
		{
			SetRelativeLocation(InitialRelativeTransform.TransformPosition(SetAxisValue(-ButtonEngageDepth)), false);
			SetComponentTickEnabled(true);
		}

		if (ActivationSound.IsValid() && IsValid(ActivationSound.Get()))
		{
			UGameplayStatics::SpawnSoundAttached(ActivationSound.Get(), this);
		}
	}
	
	OnTrigger.Broadcast(bTriggerPressed);
}

void UVrCoreButton::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UVrCoreButton, bTriggerPressed);
}

