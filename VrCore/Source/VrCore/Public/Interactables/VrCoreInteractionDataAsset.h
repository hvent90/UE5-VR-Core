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
	UPROPERTY(EditAnywhere, Category = "Defaults")
	FText Name;

	UPROPERTY(EditAnywhere, Category = "Defaults")
	FText Description;

	UPROPERTY(EditAnywhere, Category = "Defaults")
	FText Trigger;

	UPROPERTY(EditAnywhere, Category = "Defaults")
	FText PrimaryButton;

	UPROPERTY(EditAnywhere, Category = "Defaults")
	FText SecondaryButton;

	UPROPERTY(EditAnywhere, Category = "Defaults")
	FText Grip;
	
	UPROPERTY(EditAnywhere, Category = "Defaults")
	FText Thumbstick;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("Vr Core Interaction Tooltip", GetFName());
	}
};
