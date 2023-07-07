// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactables/VrCoreInteractableInterface.h"
#include "Interactibles/VRLeverComponent.h"
#include "VrCoreLever.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VRCORE_API UVrCoreLever : public UVRLeverComponent, public IVrCoreInteractableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UVrCoreLever(const FObjectInitializer& ObjectInitializer);
	
	// Interactable interface
	virtual void SendTrigger_Implementation(bool Pressed) override;
	virtual void SendPrimaryButton_Implementation(bool Pressed) override;
	virtual void SendSecondaryButton_Implementation(bool Pressed) override;
	virtual void SendThumbstickPress_Implementation(bool Pressed) override;
	virtual void SendThumbstickAxis_Implementation(float X, float Y) override;
	virtual UVrCoreInteractionDataAsset* GetTooltip_Implementation() override;
	// End Interactable Interface

	UFUNCTION(BlueprintCallable, Category = "VrCore")
	void ChangeLeverReturnTypeWhenReleased(EVRInteractibleLeverReturnType ReturnType);
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnTriggerPressed OnTrigger;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnPrimaryPressed OnPrimary;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnPrimaryPressed OnPrimaryLongPress;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnSecondaryPressed OnSecondary;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnSecondaryPressed OnSecondaryLongPress;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnThumbstickPress OnThumbstickPress;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnThumbstickAxis OnThumbstickAxis;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCore")
	UVrCoreInteractionDataAsset* InteractionDataAsset = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCore")
	float LongPressTimeThreshold = .1;

	UFUNCTION()
	void PrimaryLongPress();
	
	UFUNCTION()
	void SecondaryLongPress();

private:
	FTimerHandle PrimaryTimerHandle;
	FTimerHandle SecondaryTimerHandle;
	
	float PrimaryPressTime = 0;
	float SecondaryPressTime = 0;
	
	UPROPERTY(ReplicatedUsing=OnRep_Trigger)
	bool bTriggerPressed = false;
    
	UFUNCTION()
	virtual void OnRep_Trigger();

	UPROPERTY(ReplicatedUsing=OnRep_PrimaryButton)
	bool bPrimaryButtonPressed = false;
    
	UFUNCTION()
	virtual void OnRep_PrimaryButton();

	UPROPERTY(ReplicatedUsing=OnRep_SecondaryButton)
	bool bSecondaryButtonPressed = false;
    
	UFUNCTION()
	virtual void OnRep_SecondaryButton();

	UPROPERTY(ReplicatedUsing=OnRep_ThumbstickPress)
	bool bThumbstickPressed = false;
    
	UFUNCTION()
	virtual void OnRep_ThumbstickPress();

	UPROPERTY(ReplicatedUsing=OnRep_ThumbstickAxis)
	FVector2D ThumbstickAxis;
    
	UFUNCTION()
	virtual void OnRep_ThumbstickAxis();
};