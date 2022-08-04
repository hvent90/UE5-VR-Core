#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "VrCoreChairInterface.generated.h"

class AVrCoreCharacter;

UINTERFACE(Blueprintable)
class VRCORE_API UVrCoreChairInterface: public UInterface
{
	GENERATED_UINTERFACE_BODY()
};


class VRCORE_API IVrCoreChairInterface
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreChairInterface")
	TArray<USceneComponent*> GetAvailableSeats();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreChairInterface")
	bool Sit(USceneComponent* Seat, AActor* HopefulTenant);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreChairInterface")
	bool SitInFirstAvailable(AActor* HopefulTenant);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VrCoreChairInterface")
	bool Eject(AActor* Tenant);
};