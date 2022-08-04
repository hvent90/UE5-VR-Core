#pragma once

#include "CoreMinimal.h"
#include "VrCoreTypes.generated.h"

USTRUCT(BlueprintType, Category = "VrCore")
struct VRCORE_API FVrCorePassengerInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCorePassengerInfo")
	AActor* Tenant;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VrCorePassengerInfo")
	FVector InitialRelativeLocation;

	FVrCorePassengerInfo():
		Tenant(nullptr),
		InitialRelativeLocation(FVector())
	{}
};