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
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnTriggerLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnTriggerRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnTriggerReleaseLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnTriggerReleaseRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnGripLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnGripRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnGripReleaseLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnGripReleaseRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnPrimaryButtonLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnPrimaryButtonRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnPrimaryButtonReleasedLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnPrimaryButtonReleasedRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnSecondaryButtonLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnSecondaryButtonRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnSecondaryButtonReleasedLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnSecondaryButtonReleasedRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickPressLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickPressRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickPressReleasedLeft();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickPressReleasedRight();
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickAxisXLeft(float Value);
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickAxisXRight(float Value);
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickAxis(EControllerHand Hand, float X, float Y);
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickAxisX(EControllerHand Hand, float Value);
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickAxisYLeft(float Value);
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickAxisYRight(float Value);
	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void OnThumbstickAxisY(EControllerHand Hand, float Value);

	// Sitting
	virtual void Sit_Implementation(AActor* TiredPerson, USceneComponent* Seat) override;
	virtual void Eject_Implementation(AActor* WakefulPerson, USceneComponent* Chair, FVector ExitLocation, FRotator ExitRotation) override;
	virtual void RecenterSeatedPosition_Implementation() override;
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
