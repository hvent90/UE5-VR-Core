// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactables/VrCoreInteractableInterface.h"
#include "Grippables/GrippableStaticMeshComponent.h"
#include "VrCoreGrippableStaticMesh.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VRCORE_API UVrCoreGrippableStaticMesh : public UGrippableStaticMeshComponent, public IVrCoreInteractableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UVrCoreGrippableStaticMesh(const FObjectInitializer& ObjectInitializer);
	
	// Interactable interface
	virtual void SendTrigger_Implementation(bool Pressed) override;
	virtual void SendPrimaryButton_Implementation(bool Pressed) override;
	virtual void SendSecondaryButton_Implementation(bool Pressed) override;
	virtual void SendThumbstickPress_Implementation(bool Pressed) override;
	virtual void SendThumbstickAxis_Implementation(float X, float Y) override;
	virtual void SendThumbstickImpulse_Implementation(FVector2D Direction) override;
	// End Interactable Interface
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnTriggerPressed OnTrigger;
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnPrimaryPressed OnPrimary;
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnSecondaryPressed OnSecondary;
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnThumbstickPress OnThumbstickPress;
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnThumbstickAxis OnThumbstickAxis;
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnThumbstickImpulse OnThumbstickImpulse;

	UPROPERTY(EditAnywhere, Category = "VrCore")
	float ThumbstickImpulseActivationThreshold = 0.3;

	UPROPERTY(EditAnywhere, Category = "VrCore")
	float ThumbstickResetThreshold = 0.05;

private:
	bool bThumbstickImpulseActivated;
	
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
	
	UPROPERTY(ReplicatedUsing=OnRep_ThumbstickAxis)
	FVector2D ThumbstickImpulse;
    
	UFUNCTION()
	virtual void OnRep_ThumbstickImpulse();
};