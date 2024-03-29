﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VrCoreInteractableInterface.h"
#include "VrCoreInteractionTooltip.h"
#include "Components/ActorComponent.h"
#include "Interactibles/VRDialComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Sound/SoundCue.h"
#include "VrCoreSwitch.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSwitchStateChanged, bool, bSwitchActivation);

UCLASS(ClassGroup=(VrCore), meta=(BlueprintSpawnableComponent))
class VRCORE_API UVrCoreSwitch : public UVRDialComponent, public IVrCoreInteractableInterface, public IVrCoreInteractionTooltipInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UVrCoreSwitch(const FObjectInitializer& ObjectInitializer);

	virtual void PostInitProperties() override;

	virtual bool ShouldUseSimpleName_Implementation(FText& OutName) override;
	
	// Interactable interface
	virtual UVrCoreInteractionDataAsset* GetTooltip_Implementation() override
	{
		return Tooltip;
	}
	virtual bool IsInteractableWithoutGrip_Implementation() override
	{
		return true;
	}
	virtual void SendTrigger_Implementation(bool Pressed) override
	{
		if (!Pressed)
		{
			return;
		}

		ToggleSwitch();
	}

	UFUNCTION(BlueprintCallable, Category = "VrCore")
	void ToggleSwitch();
	
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnSwitchStateChanged OnSwitchStateChanged;

protected:
	UPROPERTY(EditAnywhere, Category = "VrCore")
	FText TooltipName;
	
	UPROPERTY(EditAnywhere, Category = "VrCore")
	TObjectPtr<UVrCoreInteractionDataAsset> Tooltip;
	
	UPROPERTY(EditAnywhere, Category = "VrCore|BaseMesh")
	TObjectPtr<UStaticMesh> BaseMesh;
	
	UPROPERTY(EditAnywhere, Category = "VrCore|BaseMesh")
	FTransform BaseMeshOffset = FTransform();
	
	UPROPERTY(EditAnywhere, Category = "VrCore")
	TSoftObjectPtr<USoundCue> ActivationSound;
	
	/**
	 * @brief Adjust the VRDial by this angle
	 */
	UPROPERTY(EditAnywhere, Category = "VrCore")
	float ActivationAngle = 21;

private:
	TObjectPtr<UStaticMeshComponent> BaseMeshComponent;
	
	UPROPERTY(ReplicatedUsing=OnRep_SwitchActivation)
    bool bSwitchActivated = false;
    
    UFUNCTION()
    virtual void OnRep_SwitchActivation();
};
