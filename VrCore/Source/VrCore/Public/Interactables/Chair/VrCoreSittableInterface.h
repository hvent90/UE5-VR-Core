// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VrCoreSittableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UVrCoreSittableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * This manages the attachment of the hopeful sittee. It does not manage the state of the sittable object (chair).
 */
class VRCORE_API IVrCoreSittableInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreSittableInterface")
	void Sit(AActor* TiredPerson, USceneComponent* Seat);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreSittableInterface")
	void Eject(AActor* WakefulPerson, USceneComponent* Seat, FVector _ExitLocation, FRotator _ExitRotation);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreSittableInterface")
	void RecenterSeatedPosition();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreSittableInterface")
	FVector GetInitialRelativeLocation();
};
