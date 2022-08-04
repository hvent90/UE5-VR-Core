// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/VrCoreSimpleSwitch.h"

#include "Components/AudioComponent.h"


// Sets default values
AVrCoreSimpleSwitch::AVrCoreSimpleSwitch()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AVrCoreSimpleSwitch::SendTrigger_Implementation(bool bPressed)
{
	if (Dial->CurrentDialAngle >= Dial->ClockwiseMaximumDialAngle)
	{
		Dial->SetDialAngle(0);
	} else
	{
		Dial->SetDialAngle(Dial->ClockwiseMaximumDialAngle);
	}

	OnSwitchActivate(Dial->CurrentDialAngle);
}

void AVrCoreSimpleSwitch::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	Dial->OnDialHitSnapAngle.AddDynamic(this, &AVrCoreSimpleSwitch::OnSwitchActivate);
}

void AVrCoreSimpleSwitch::OnSwitchActivate(float DialMilestoneAngle)
{
	AudioResponse->Play();
}
