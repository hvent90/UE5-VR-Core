// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/VrCoreSwitch.h"

#include "Engine/AssetManager.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UVrCoreSwitch::UVrCoreSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// BaseMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Base Mesh");
	// BaseMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// BaseMeshComponent->SetGenerateOverlapEvents(false);
	// BaseMeshComponent->SetupAttachment(this);

	bDenyGripping = true;
}

void UVrCoreSwitch::PostInitProperties()
{
	Super::PostInitProperties();

	// BaseMeshComponent->SetStaticMesh(BaseMesh);
	// BaseMeshComponent->SetRelativeTransform(BaseMeshOffset);
}

void UVrCoreSwitch::ToggleSwitch()
{
	bSwitchActivated = !bSwitchActivated;

	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_SwitchActivation();
	}
}

void UVrCoreSwitch::BeginPlay()
{
	Super::BeginPlay();

	// Async load in assets
	if (ActivationSound.IsValid() && !GetWorld()->GetGameInstance()->IsDedicatedServerInstance())
	{
		FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
		Streamable.RequestAsyncLoad(ActivationSound.ToSoftObjectPath());
	}
}

void UVrCoreSwitch::OnRep_SwitchActivation()
{
	// No need to play audio or visually move the switch on dedicated server
	if (GetWorld()->GetGameInstance()->IsDedicatedServerInstance())
	{
		return;
	}

	if (ActivationSound.IsValid() && IsValid(ActivationSound.Get()))
	{
		UGameplayStatics::SpawnSoundAttached(ActivationSound.Get(), this);
	}

	const float DialAngle = bSwitchActivated ? ActivationAngle : 0;
	SetDialAngle(DialAngle);

	OnSwitchStateChanged.Broadcast(bSwitchActivated);
}

void UVrCoreSwitch::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UVrCoreSwitch, bSwitchActivated);
}
