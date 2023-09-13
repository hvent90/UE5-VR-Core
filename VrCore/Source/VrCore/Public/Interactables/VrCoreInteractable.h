// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VrCoreInteractableInterface.h"
#include "Components/TextRenderComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Actor.h"
#include "VrCoreInteractable.generated.h"

UCLASS()
class VRCORE_API AVrCoreInteractable : public AActor, public IVrCoreInteractableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AVrCoreInteractable();

	// Interactable interface
	virtual bool Highlight_Implementation(bool Visible, USkeletalMeshComponent* Hand) override;
	virtual bool IsInteractableWithoutGrip_Implementation() override;

	virtual void TickActor(float DeltaTime, ELevelTick TickType, FActorTickFunction& ThisTickFunction) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
protected:
	/**
	 * Normally this is the name of the interactable.
	 * In the example of a switch, it is helpful to add "(Trigger)" to instruct
	 * the user to press "trigger" to interact with the switch.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreInteractable")
	UWidgetComponent* Tip = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreInteractable")
	bool bUseTip = true;

	/**
	 * Use this if your method of outlining is having duplicate meshes with a world offset material.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreInteractable")
	TArray<UStaticMeshComponent*> HighlightedMeshes;

	/**
	 * Use this if your method of outlining is having duplicate meshes with a world offset material.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreInteractable")
	bool bUseSeparateMeshesForHighlighting = true;

	/**
	 * This overrides the default actor tick setting for showing the tip to the user.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreInteractable")
	bool bActorUsesTick = true;

	/**
	 * Allows for inputs to be sent to object without being gripped.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreInteractable")
	bool bInteractableWithoutGrip = false;

	/**
	 * Don't neglect an opportunity for an audio response from user input.
	 * If you don't think you need one, then think a little more.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreInteractable")
	UAudioComponent* AudioResponse = nullptr;
};