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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTriggerPressed, bool, bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPrimaryPressed, bool, bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSecondaryPressed, bool, bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThumbstickAxis, FVector2D, Value);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThumbstickPress, bool, bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThumbstickImpulse, FVector2D, Direction);