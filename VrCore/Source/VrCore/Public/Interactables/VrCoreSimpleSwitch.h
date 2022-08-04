// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VrCoreInteractable.h"
#include "Interactibles/VRDialComponent.h"
#include "VrCoreSimpleSwitch.generated.h"

UCLASS()
class VRCORE_API AVrCoreSimpleSwitch : public AVrCoreInteractable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AVrCoreSimpleSwitch();

	virtual void SendTrigger_Implementation(bool Pressed) override;

protected:
	virtual void PostInitializeComponents() override;
	
	void OnSwitchActivate(float DialMilestoneAngle);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMeshComponent* BaseMesh = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UVRDialComponent* Dial = nullptr;
};
