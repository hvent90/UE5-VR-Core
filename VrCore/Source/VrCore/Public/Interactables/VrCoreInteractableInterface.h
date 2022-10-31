// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VrCoreInteractableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UVrCoreInteractableInterface : public UInterface
{
	GENERATED_BODY()
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThumbstickImpulse, FVector2D, Direction);

/**
 * 
 */
class VRCORE_API IVrCoreInteractableInterface
{
	GENERATED_BODY()

public:
	/**
	 * Suggested use:
     * - Highlight the closest object to the user's motion controller that is within interaction radius.
	 *     If the object is a switch, show the text "trigger" informing them to interact with the
     *     object by pressing trigger.
	 * - Have a frenel shader or some equivalent to do the highlight effect.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	void Highlight(bool Visible);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	void SendTrigger(bool Pressed);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	void SendPrimaryButton(bool Pressed);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	void SendSecondaryButton(bool Pressed);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	void SendThumbstickPress(bool Pressed);

	/**
	 * @return Returns true if it should prevent moving/turning 
	 */
	UFUNCTION(Category = "VrCoreInteractableInterface")
	virtual void SendThumbstickAxis(float X, float Y);

	UFUNCTION(BlueprintNativeEvent, Category = "VrCoreInteractableInterface")
	void SendThumbstickImpulse(FVector2D Direction);

	UFUNCTION(BlueprintImplementableEvent, Category = "VrCoreInteractableInterface")
	void K2_SendThumbstickAxis(float X, float Y);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "VrCoreInteractableInterface")
	void K2_SendThumbstickAxisImpulse(FVector2D Direction);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	bool IsInteractableWithoutGrip();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	bool ThumbstickConsumesMovement();
};
