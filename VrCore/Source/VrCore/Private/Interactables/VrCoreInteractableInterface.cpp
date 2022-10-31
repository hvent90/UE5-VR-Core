// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/VrCoreInteractableInterface.h"


// Add default functionality here for any IVrCoreInteractableInterface functions that are not pure virtual.
void IVrCoreInteractableInterface::SendThumbstickAxis(const float X, const float Y)
{
	UObject* Object = Cast<UObject>(this);
	Execute_K2_SendThumbstickAxis(Object, X, Y);
	//
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
	// 	Execute_K2_SendThumbstickAxisImpulse(Object, Impulse);
	// 	OnThumbstickImpulse.Broadcast(Impulse);
	// }
	//
	// if (bThumbstickImpulseActivated && abs(Y) < ThumbstickResetThreshold && abs(X) < ThumbstickResetThreshold)
	// {
	// 	bThumbstickImpulseActivated = false;
	// }
}
