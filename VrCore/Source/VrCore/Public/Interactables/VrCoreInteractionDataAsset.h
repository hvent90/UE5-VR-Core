// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VrCoreInteractionDataAsset.generated.h"

class UImpactEffectDataAsset;
class USoundCue;
class UNiagaraSystem;

/**
 * 
 */
UCLASS()
class VRCORE_API UVrCoreInteractionDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	FText Name;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	FText Description;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	FText Trigger;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	TSoftObjectPtr<USoundCue> TriggerSound;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	FText PrimaryButton;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	TSoftObjectPtr<USoundCue> PrimarySound;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	FText SecondaryButton;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	TSoftObjectPtr<USoundCue> SecondarySound;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	FText Grip;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "VrCore Interaction")
	FText Thumbstick;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Vr Core Interaction Tooltip", GetFName());
	}
};