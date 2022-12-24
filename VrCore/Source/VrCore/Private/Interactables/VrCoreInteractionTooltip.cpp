// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/VrCoreInteractionTooltip.h"


// Sets default values for this component's properties
UVrCoreInteractionTooltip::UVrCoreInteractionTooltip()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UVrCoreInteractionTooltip::Hydrate(const UVrCoreInteractionDataAsset* DataAsset)
{
	UUserWidget* UserWidget = GetWidget();
	if (UserWidget && UserWidget->Implements<UVrCoreInteractionTooltipInterface>())
	{
		IVrCoreInteractionTooltipInterface::Execute_SetGripAction(UserWidget, DataAsset->Grip);
		IVrCoreInteractionTooltipInterface::Execute_SetThumbstickAction(UserWidget, DataAsset->Thumbstick);
		IVrCoreInteractionTooltipInterface::Execute_SetTriggerAction(UserWidget, DataAsset->Trigger);
		IVrCoreInteractionTooltipInterface::Execute_SetPrimaryButtonAction(UserWidget, DataAsset->PrimaryButton);
		IVrCoreInteractionTooltipInterface::Execute_SetSecondaryButtonAction(UserWidget, DataAsset->SecondaryButton);
	}
}

// Called when the game starts
void UVrCoreInteractionTooltip::BeginPlay()
{
	Super::BeginPlay();
}