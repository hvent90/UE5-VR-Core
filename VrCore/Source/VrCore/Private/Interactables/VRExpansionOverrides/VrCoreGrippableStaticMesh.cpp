// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/VRExpansionOverrides/VrCoreGrippableStaticMesh.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UVrCoreGrippableStaticMesh::UVrCoreGrippableStaticMesh(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UVrCoreGrippableStaticMesh::SendTrigger_Implementation(bool Pressed)
{
	bTriggerPressed = Pressed;

	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_Trigger();
	}
}

void UVrCoreGrippableStaticMesh::SendPrimaryButton_Implementation(bool Pressed)
{
	bPrimaryButtonPressed = Pressed;
	
	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_PrimaryButton();
	}
}

void UVrCoreGrippableStaticMesh::SendSecondaryButton_Implementation(bool Pressed)
{
	bSecondaryButtonPressed = Pressed;
	
	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_SecondaryButton();
	}
}

void UVrCoreGrippableStaticMesh::SendThumbstickPress_Implementation(bool Pressed)
{
	bThumbstickPressed = Pressed;
	
	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_ThumbstickPress();
	}
}

void UVrCoreGrippableStaticMesh::SendThumbstickAxis_Implementation(float X, float Y)
{
	ThumbstickAxis.Set(X, Y);
	
	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_ThumbstickAxis();
	}

	// Check for Impulse
	// float ImpulseX = 0;
	// if (abs(X) > ThumbstickImpulseActivationThreshold)
	// {
	// 	ImpulseX = 1;
	// 	if (X < 0)
	// 	{
	// 		ImpulseX = -1;
	// 	}
	// }
	//
	// float ImpulseY = 0;
	// if (abs(Y) > ThumbstickImpulseActivationThreshold)
	// {
	// 	ImpulseY = 1;
	// 	if (Y < 0)
	// 	{
	// 		ImpulseY = -1;
	// 	}
	// }
	//
	// if (!bThumbstickImpulseActivated && (ImpulseX != 0 || ImpulseY != 0))
	// {
	// 	bThumbstickImpulseActivated = true;
	// 	const FVector2D Impulse{ImpulseX, ImpulseY};
	// 	SendThumbstickImpulse_Implementation(Impulse);
	// }
	//
	// if (bThumbstickImpulseActivated && abs(Y) < ThumbstickResetThreshold && abs(X) < ThumbstickResetThreshold)
	// {
	// 	bThumbstickImpulseActivated = false;
	// }
}

void UVrCoreGrippableStaticMesh::SendThumbstickImpulse_Implementation(FVector2D Direction)
{
	ThumbstickImpulse.Set(Direction.X, Direction.Y);
	
	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_ThumbstickImpulse();
	}
}

void UVrCoreGrippableStaticMesh::OnRep_Trigger()
{
	OnTrigger.Broadcast(bTriggerPressed);
}

void UVrCoreGrippableStaticMesh::OnRep_PrimaryButton()
{
	OnPrimary.Broadcast(bPrimaryButtonPressed);
}

void UVrCoreGrippableStaticMesh::OnRep_SecondaryButton()
{
	OnSecondary.Broadcast(bSecondaryButtonPressed);
}

void UVrCoreGrippableStaticMesh::OnRep_ThumbstickPress()
{
	OnThumbstickPress.Broadcast(bThumbstickPressed);
}

void UVrCoreGrippableStaticMesh::OnRep_ThumbstickAxis()
{
	OnThumbstickAxis.Broadcast(ThumbstickAxis);
}

void UVrCoreGrippableStaticMesh::OnRep_ThumbstickImpulse()
{
	OnThumbstickImpulse.Broadcast(ThumbstickImpulse);
}

void UVrCoreGrippableStaticMesh::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UVrCoreGrippableStaticMesh, bTriggerPressed);
	DOREPLIFETIME(UVrCoreGrippableStaticMesh, bPrimaryButtonPressed);
	DOREPLIFETIME(UVrCoreGrippableStaticMesh, bSecondaryButtonPressed);
	DOREPLIFETIME(UVrCoreGrippableStaticMesh, bThumbstickPressed);
	DOREPLIFETIME(UVrCoreGrippableStaticMesh, ThumbstickAxis);
	DOREPLIFETIME(UVrCoreGrippableStaticMesh, ThumbstickImpulse);
}
