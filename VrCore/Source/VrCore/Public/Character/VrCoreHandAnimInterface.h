// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VrCoreHandAnimInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UVrCoreHandAnimInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class VRCORE_API IVrCoreHandAnimInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreHandAnimInterface")
	void EnterPose(FPoseSnapshot Pose);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreHandAnimInterface")
	void ClearPose();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreHandAnimInterface")
	void PointToLocation(FVector Location);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreHandAnimInterface")
	void StopPointing();
};
