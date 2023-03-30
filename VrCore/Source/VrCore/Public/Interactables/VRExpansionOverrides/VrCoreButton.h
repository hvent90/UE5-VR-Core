// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactables/VrCoreInteractableInterface.h"
#include "Interactibles/VRButtonComponent.h"
#include "VrCoreButton.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VRCORE_API UVrCoreButton : public UVRButtonComponent, public IVrCoreInteractableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UVrCoreButton(const FObjectInitializer& ObjectInitializer);
	
	// Interactable interface
	virtual void SendTrigger_Implementation(bool Pressed) override;
	// End Interactable Interface

	virtual bool IsInteractableWithoutGrip_Implementation() override
	{
		return true;
	}
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnTriggerPressed OnTrigger;

private:
	UPROPERTY(ReplicatedUsing=OnRep_Trigger)
	bool bTriggerPressed = false;
    
	UFUNCTION()
	virtual void OnRep_Trigger();
};