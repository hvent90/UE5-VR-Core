// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/VrCoreInteractable.h"

#include "Components/AudioComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values
AVrCoreInteractable::AVrCoreInteractable()
{
	PrimaryActorTick.bCanEverTick = true;

	SetRootComponent(CreateDefaultSubobject<USceneComponent>(FName("Root")));

	Tip = CreateDefaultSubobject<UWidgetComponent>(FName("Tip"));
	Tip->SetupAttachment(GetRootComponent());

	AudioResponse = CreateDefaultSubobject<UAudioComponent>(FName("Audio Response"));
	AudioResponse->SetupAttachment(GetRootComponent());
	AudioResponse->bAutoActivate = false;
}

// Called when the game starts or when spawned
void AVrCoreInteractable::BeginPlay()
{
	Super::BeginPlay();

	Tip->SetVisibility(false);
}

void AVrCoreInteractable::Highlight_Implementation(bool Visible)
{
	const bool bShowTip = Visible && bUseTip;
	Tip->SetVisibility(bShowTip);

	// Handle tick
	if (bActorUsesTick)
	{
		SetActorTickEnabled(true);
	} else if (Visible && bUseTip)
	{
		SetActorTickEnabled(true);
	} else
	{
		SetActorTickEnabled(false);
	}

	for (UStaticMeshComponent* Mesh : HighlightedMeshes)
	{
		if (IsValid(Mesh))
		{
			Mesh->SetVisibility(Visible && bUseSeparateMeshesForHighlighting);
		}
	}
}

bool AVrCoreInteractable::IsInteractableWithoutGrip_Implementation()
{
	return bInteractableWithoutGrip;
}

void AVrCoreInteractable::TickActor(float DeltaTime, ELevelTick Tick, FActorTickFunction& ThisTickFunction)
{
	Super::TickActor(DeltaTime, Tick, ThisTickFunction);

	// Make tip face the player
	if (UWorld* World = GetWorld(); World && bUseTip && Tip->IsVisible())
	{
		const APlayerCameraManager* PlayerCamera = World->GetFirstPlayerController()->PlayerCameraManager;
		Tip->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(Tip->GetComponentLocation(),
			PlayerCamera->GetCameraLocation()));
	}
}
