// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VrCoreInteractableInterface.h"
#include "Components/ActorComponent.h"
#include "Components/WidgetComponent.h"
#include "VrCoreWidgetComponent.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class UVrCoreWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class VRCORE_API IVrCoreWidgetInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MFD")
	void Highlight(bool Visible);
};


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VRCORE_API UVrCoreWidgetComponent : public UWidgetComponent, public IVrCoreInteractableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UVrCoreWidgetComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/**
	 * Don't neglect an opportunity for an audio response from user input.
	 * If you don't think you need one, then think a little more.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreInteractable")
	USoundCue* SoundCue = nullptr;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	// Interactable interface
	virtual bool Highlight_Implementation(bool Visible) override;
	virtual bool IsInteractableWithoutGrip_Implementation() override;

	// Interactable interface
	virtual void SendTrigger_Implementation(bool Pressed) override;
	// End Interactable Interface
	
	UPROPERTY(BlueprintAssignable, Category = "VrCore")
	FOnTriggerPressed OnTrigger;

private:
	UPROPERTY(ReplicatedUsing=OnRep_Trigger)
	bool bTriggerPressed = false;
    
	UFUNCTION()
	virtual void OnRep_Trigger();
};
