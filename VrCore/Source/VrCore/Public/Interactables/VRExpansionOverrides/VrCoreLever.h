// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VrCoreTypes.h"
#include "Interactables/VrCoreInteractableInterface.h"
#include "Interactibles/VRLeverComponent.h"
#include "GripScripts/VRGripScriptBase.h"
#include "VrCoreLever.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLeverToggle, bool, bToggled);


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VRCORE_API UVrCoreLever : public UVRLeverComponent, public IVrCoreInteractableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UVrCoreLever(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly, Instanced, Category = "VRGripInterface")
	TArray<TObjectPtr<UVRGripScriptBase>> GripLogicScripts;

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite, Category = "VRGripInterface")
	bool bReplicateGripScripts;

	/**
	 * @brief Generic behavior that can be applied to anything.
	 * In the case of the Beagle, it switches the seat controller between MFD and Weapons
	 */
	UFUNCTION(BlueprintCallable, Category = "VrCore")
	virtual void ToggleSwitch();
	bool ToggleState = false;
	
	FOnLeverToggle OnLeverToggle;

	virtual void PreReplication(IRepChangedPropertyTracker & ChangedPropertyTracker) override;
	virtual bool ReplicateSubobjects(UActorChannel* Channel, class FOutBunch *Bunch, FReplicationFlags *RepFlags) override;

	virtual void EndPlay(EEndPlayReason::Type Reason) override;
	virtual void BeginPlay() override;

	// Get grip scripts
	virtual bool GetGripScripts_Implementation(TArray<UVRGripScriptBase*>& ArrayReference) override;
	
	// Interactable interface
	virtual void SendTrigger_Implementation(bool Pressed) override;
	virtual void SendPrimaryButton_Implementation(bool Pressed) override;
	virtual void SendSecondaryButton_Implementation(bool Pressed) override;
	virtual void SendThumbstickPress_Implementation(bool Pressed) override;
	virtual void SendThumbstickAxis_Implementation(float X, float Y) override;
	virtual UVrCoreInteractionDataAsset* GetTooltip_Implementation() override;
	// End Interactable Interface

	UFUNCTION(BlueprintCallable, Category = "VrCore")
	void ChangeLeverReturnTypeWhenReleased(EVRInteractibleLeverReturnType ReturnType);
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnTriggerPressed OnTrigger;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnPrimaryPressed OnPrimary;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnPrimaryPressed OnPrimaryLongPress;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnSecondaryPressed OnSecondary;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnSecondaryPressed OnSecondaryLongPress;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnThumbstickPress OnThumbstickPress;

	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnThumbstickAxis OnThumbstickAxis;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCore")
	UVrCoreInteractionDataAsset* InteractionDataAsset = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCore")
	float LongPressTimeThreshold = .1;

	UFUNCTION()
	void PrimaryLongPress();
	
	UFUNCTION()
	void SecondaryLongPress();

private:
	
	/**
	 * @brief Call all grip scripts begin play events so they can perform any needed logic
	 */
	void SetupScripts();
	void SetupSounds();
	
	FTimerHandle PrimaryTimerHandle;
	FTimerHandle SecondaryTimerHandle;
	
	float PrimaryPressTime = 0;
	float SecondaryPressTime = 0;
	
	UPROPERTY(ReplicatedUsing=OnRep_Trigger)
	bool bTriggerPressed = false;
    
	UFUNCTION()
	virtual void OnRep_Trigger();

	UPROPERTY(ReplicatedUsing=OnRep_PrimaryButton)
	bool bPrimaryButtonPressed = false;
    
	UFUNCTION()
	virtual void OnRep_PrimaryButton();

	UPROPERTY(ReplicatedUsing=OnRep_SecondaryButton)
	bool bSecondaryButtonPressed = false;
    
	UFUNCTION()
	virtual void OnRep_SecondaryButton();

	UPROPERTY(ReplicatedUsing=OnRep_ThumbstickPress)
	bool bThumbstickPressed = false;
    
	UFUNCTION()
	virtual void OnRep_ThumbstickPress();

	UPROPERTY(ReplicatedUsing=OnRep_ThumbstickAxis)
	FVector2D ThumbstickAxis;
    
	UFUNCTION()
	virtual void OnRep_ThumbstickAxis();
};