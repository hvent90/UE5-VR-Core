// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VrCoreInteractionDataAsset.h"
#include "Components/WidgetComponent.h"
#include "VrCoreInteractionTooltip.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UVrCoreInteractionTooltipInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class VRCORE_API IVrCoreInteractionTooltipInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "VrCoreTooltipInteractionInterface")
	void SetTriggerAction(const FText& Text);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "VrCoreTooltipInteractionInterface")
	void SetGripAction(const FText& Text);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "VrCoreTooltipInteractionInterface")
	void SetPrimaryButtonAction(const FText& Text);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "VrCoreTooltipInteractionInterface")
	void SetSecondaryButtonAction(const FText& Text);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "VrCoreTooltipInteractionInterface")
	void SetThumbstickAction(const FText& Text);
};


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VRCORE_API UVrCoreInteractionTooltip : public UWidgetComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UVrCoreInteractionTooltip();

	UFUNCTION(BlueprintCallable, Category = "VrCore Tooltip Interaction")
	void Hydrate(const UVrCoreInteractionDataAsset* DataAsset);
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

};
