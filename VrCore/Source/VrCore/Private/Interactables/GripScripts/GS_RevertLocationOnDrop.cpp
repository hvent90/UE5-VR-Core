// Fill out your copyright notice in the Description page of Project Settings.

#include "Interactables/GripScripts/GS_RevertLocationOnDrop.h"
#include "Components/PrimitiveComponent.h"
#include "GripMotionControllerComponent.h"
#include "GameFramework/Actor.h"

UGS_RevertLocationOnDrop::UGS_RevertLocationOnDrop(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	bIsActive = true;
	WorldTransformOverrideType = EGSTransformOverrideType::OverridesWorldTransform;
}

void UGS_RevertLocationOnDrop::OnBeginPlay_Implementation(UObject * CallingOwner)
{
	USceneComponent* GrippableOwner = Cast<USceneComponent>(CallingOwner);
	if (!IsValid(GrippableOwner))
	{
		return;
	}

	USceneComponent* Parent = GrippableOwner->GetAttachParent();
	if (!IsValid(Parent))
	{
		return;
	}

	InteractionSettings.Grippable = GrippableOwner;
	InteractionSettings.Parent = Parent;
	InteractionSettings.BaseRelativeTransform = GrippableOwner->GetRelativeTransform();
	InteractionSettings.bValid = true;
}

void UGS_RevertLocationOnDrop::OnGripRelease_Implementation(UGripMotionControllerComponent * ReleasingController, const FBPActorGripInformation & GripInformation, bool bWasSocketed) 
{
	if (InteractionSettings.bValid && IsValid(InteractionSettings.Grippable) && IsValid(InteractionSettings.Parent))
	{
		InteractionSettings.Grippable->AttachToComponent(InteractionSettings.Parent, FAttachmentTransformRules(EAttachmentRule::KeepWorld, true));
		InteractionSettings.Grippable->SetRelativeTransform(InteractionSettings.BaseRelativeTransform);
	}
}