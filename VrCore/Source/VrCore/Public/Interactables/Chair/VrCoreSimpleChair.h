// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VrCoreChairInterface.h"
#include "VrCoreTypes.h"
#include "Character/VrCoreCharacter.h"
#include "GameFramework/Actor.h"
#include "VrCoreSimpleChair.generated.h"

UCLASS()
class VRCORE_API AVrCoreSimpleChair : public AActor, public IVrCoreChairInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AVrCoreSimpleChair();
	
	virtual TArray<USceneComponent*> GetAvailableSeats_Implementation() override;
	virtual bool Sit_Implementation(USceneComponent* Chair, AActor* HopefulTenant) override;
	virtual bool SitInFirstAvailable_Implementation(AActor* HopefulTenant) override;
	virtual bool Eject_Implementation(AActor* Tenant) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreSimpleChair")
	USceneComponent* Seat = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCoreSimpleChair")
	USceneComponent* ExitLocation = nullptr;

private:
	UPROPERTY()
	TMap<USceneComponent*, FVrCorePassengerInfo> Seats;
};
