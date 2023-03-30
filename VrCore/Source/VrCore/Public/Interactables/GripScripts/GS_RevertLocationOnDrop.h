// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GripScripts/VRGripScriptBase.h"
#include "GS_RevertLocationOnDrop.generated.h"

class UGripMotionControllerComponent;

USTRUCT(BlueprintType, Category = "VRExpansionLibrary")
struct VRCORE_API FBPGS_RevertToLocationOnDrop
{
	GENERATED_BODY()
public:
	bool bValid = false;
	
	UPROPERTY()
	USceneComponent* Parent = nullptr;

	UPROPERTY()
	USceneComponent* Grippable = nullptr;
	
	FTransform BaseRelativeTransform;

	FBPGS_RevertToLocationOnDrop()
	{
		BaseRelativeTransform = FTransform::Identity;
	}
};

// A Grip script that overrides the default grip behavior and adds custom clamping logic instead,
UCLASS(NotBlueprintable, ClassGroup = (VRExpansionPlugin), hideCategories = TickSettings)
class VRCORE_API UGS_RevertLocationOnDrop : public UVRGripScriptBase
{
	GENERATED_BODY()
public:

	UGS_RevertLocationOnDrop(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InteractionSettings")
	FBPGS_RevertToLocationOnDrop InteractionSettings;

	virtual void OnBeginPlay_Implementation(UObject * CallingOwner) override;
	virtual void OnGripRelease_Implementation(UGripMotionControllerComponent * ReleasingController, const FBPActorGripInformation & GripInformation, bool bWasSocketed = false) override;
};
