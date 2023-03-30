// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UVrCoreHandManager.h"
#include "VRCharacter.h"
#include "Interactables/Chair/VrCoreSittableInterface.h"
#include "VrCoreCharacter.generated.h"

/**
 * 
 */
UCLASS()
class VRCORE_API AVrCoreCharacter : public AVRCharacter, public IVrCoreSittableInterface
{
	GENERATED_BODY()

public:
	AVrCoreCharacter();
	
	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// Input
	void OnTriggerLeft();
	void OnTriggerRight();
	void OnTriggerReleaseLeft();
	void OnTriggerReleaseRight();
	void OnGripLeft();
	void OnGripRight();
	void OnGripReleaseLeft();
	void OnGripReleaseRight();
	void OnPrimaryButtonLeft();
	void OnPrimaryButtonRight();
	void OnPrimaryButtonReleasedLeft();
	void OnPrimaryButtonReleasedRight();
	void OnSecondaryButtonLeft();
	void OnSecondaryButtonRight();
	void OnSecondaryButtonReleasedLeft();
	void OnSecondaryButtonReleasedRight();
	void OnThumbstickPressLeft();
	void OnThumbstickPressRight();
	void OnThumbstickPressReleasedLeft();
	void OnThumbstickPressReleasedRight();
	void OnThumbstickAxisXLeft(float Value);
	void OnThumbstickAxisXRight(float Value);
	void OnThumbstickAxis(EControllerHand Hand, float X, float Y);
	void OnThumbstickAxisX(EControllerHand Hand, float Value);
	void OnThumbstickAxisYLeft(float Value);
	void OnThumbstickAxisYRight(float Value);
	void OnThumbstickAxisY(EControllerHand Hand, float Value);

	// Sitting
	virtual void Sit_Implementation(USceneComponent* Seat) override;
	virtual void Eject_Implementation(FVector ExitLocation, FRotator ExitRotation) override;
	virtual FVector GetInitialRelativeLocation_Implementation() override;

protected:
	/** The thumbstick's hand used for translating the player */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	EControllerHand TranslateHand = EControllerHand::Left;
	
	/** The thumbstick's hand used for turning the player */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	EControllerHand TurnHand = EControllerHand::Right;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	float TranslateThumbstickDeadzone = .01;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	float TurnThumbstickDeadzone = .7;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	float TurnSnapAngle = 45;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	UVrCoreHandManager* HandManager = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	USkeletalMeshComponent* LeftHandMesh = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	USkeletalMeshComponent* RightHandMesh = nullptr;

private:
	bool IsSeated() const;

	void Translate(float Right, float Forward);
	void Turn(float Right);

public:
	virtual void PostInitializeComponents() override;
	
private:
	bool bTurnRequiresReset = false;
};
