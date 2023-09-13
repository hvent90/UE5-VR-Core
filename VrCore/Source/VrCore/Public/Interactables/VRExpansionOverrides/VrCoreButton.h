// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactables/VrCoreInteractableInterface.h"
#include "Interactibles/VRButtonComponent.h"
#include "VrCoreButton.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHighlight, bool, Visible, USkeletalMeshComponent*, Hand);

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

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnTriggerPressed OnTrigger;

	UPROPERTY(EditAnywhere, Category = "VrCore")
	TSoftObjectPtr<USoundCue> ActivationSound;

	virtual bool Highlight_Implementation(bool Visible, USkeletalMeshComponent* Hand) override;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnHighlight OnHighlight;

private:
	UPROPERTY(ReplicatedUsing=OnRep_Trigger)
	bool bTriggerPressed = false;
    
	UFUNCTION()
	virtual void OnRep_Trigger();
};