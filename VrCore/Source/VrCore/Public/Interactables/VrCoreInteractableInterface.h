// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VrCoreInteractionDataAsset.h"
#include "UObject/Interface.h"
#include "VrCoreInteractableInterface.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTriggerPressed, bool, bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrimaryPressed, bool, bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSecondaryPressed, bool, bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThumbstickAxis, FVector2D, Value);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThumbstickPress, bool, bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThumbstickImpulse, FVector2D, Direction);

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
	 * @brief Suggested use:
	 * - Highlight the closest object to the user's motion controller that is within interaction radius.
	 *     If the object is a switch, show the text "trigger" informing them to interact with the
	 *     object by pressing trigger.
	 * - Have a fresnel shader or some equivalent to do the highlight effect.
	 *
	 * @return Returns false if it has failed.
	 */
	
	/**
	 * @brief 
	 * @param Visible 
	 * @return 
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	bool Highlight(bool Visible);

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
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	void SendThumbstickAxis(float X, float Y);

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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreInteractableInterface")
	UVrCoreInteractionDataAsset* GetTooltip();
};
