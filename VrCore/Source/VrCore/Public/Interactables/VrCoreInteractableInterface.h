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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	void SendThumbstickAxis(float X, float Y);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	bool IsInteractableWithoutGrip();
};
