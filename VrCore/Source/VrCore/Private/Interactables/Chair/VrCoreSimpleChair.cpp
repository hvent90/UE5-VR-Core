// Fill out your copyright notice in the Description page of Project Settings.


#include "interactables/Chair/VrCoreSimpleChair.h"


// Sets default values
AVrCoreSimpleChair::AVrCoreSimpleChair()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetRootComponent(CreateDefaultSubobject<USceneComponent>(TEXT("Root")));

	Seat = CreateDefaultSubobject<USceneComponent>(FName("Seat"));
	Seat->SetupAttachment(GetRootComponent());
	Seats.Add(Seat);

	ExitLocation = CreateDefaultSubobject<USceneComponent>(FName("Exit Location"));
	ExitLocation->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AVrCoreSimpleChair::BeginPlay()
{
	Super::BeginPlay();
}

TArray<USceneComponent*> AVrCoreSimpleChair::GetAvailableSeats_Implementation()
{
	TArray<USceneComponent*> AllSeats;
	Seats.GetKeys(AllSeats);

	TArray<USceneComponent*> EmptySeats;
	for (USceneComponent* Chair : AllSeats)
	{
		if (!Seats[Chair].Tenant)
		{
			EmptySeats.AddUnique(Chair);
		}
	}

	return EmptySeats;
}

bool AVrCoreSimpleChair::Sit_Implementation(USceneComponent* Chair, AActor* HopefulTenant)
{
	// Seat is not registered with this chair
	if (!Seats.Contains(Chair))
	{
		return false;
	}

	// Seat is occupied
	if (Seats[Chair].Tenant)
	{
		return false;
	}

	IVrCoreSittableInterface* SitInterface = Cast<IVrCoreSittableInterface>(HopefulTenant);
	if (!SitInterface)
	{
		// TODO: Manual attachment
	} else
	{
		// SitInterface->Execute_Sit(HopefulTenant, Chair);
		Seats[Chair].InitialRelativeLocation = SitInterface->Execute_GetInitialRelativeLocation(HopefulTenant);
	}

	// Register the new tenant
	Seats[Chair].Tenant = HopefulTenant;

	return true;
}

bool AVrCoreSimpleChair::SitInFirstAvailable_Implementation(AActor* HopefulTenant)
{
	for (const TTuple<USceneComponent*, FVrCorePassengerInfo>& Elem : Seats)
	{
		if (Elem.Key && !Elem.Value.Tenant)
		{
			return Sit_Implementation(Elem.Key, HopefulTenant);
		}
	}

	return false;
}

bool AVrCoreSimpleChair::Eject_Implementation(AActor* Tenant)
{
	for (const TTuple<USceneComponent*, FVrCorePassengerInfo>& Elem : Seats)
	{
		if (Elem.Value.Tenant == Tenant)
		{
			// Get them outta here!
			IVrCoreSittableInterface* SitInterface = Cast<IVrCoreSittableInterface>(Tenant);
			if (!SitInterface)
			{
				// TODO: Manual attachment
			} else
			{
				// SitInterface->Execute_Eject(Tenant, ExitLocation->GetComponentLocation(),
					// ExitLocation->GetComponentRotation());	
			}

			// Unregister tenant
			Seats[Elem.Key].Tenant = nullptr;
			Seats[Elem.Key].InitialRelativeLocation = FVector();
			return true;
		}
	}

	return false;
}


