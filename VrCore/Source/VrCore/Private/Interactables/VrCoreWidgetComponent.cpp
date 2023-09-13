// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactables/VrCoreWidgetComponent.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"


// Sets default values for this component's properties
UVrCoreWidgetComponent::UVrCoreWidgetComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVrCoreWidgetComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UVrCoreWidgetComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// bool UVrCoreWidgetComponent::Highlight_Implementation(bool Visible, USkeletalMeshComponent* Hand)
// {
// 	return IVrCoreInteractableInterface::Highlight_Implementation(Visible, Hand);
// }

bool UVrCoreWidgetComponent::Highlight_Implementation(bool Visible, USkeletalMeshComponent* Hand)
{
	UWidget* VrCoreWidget = GetWidget();
	if (IsValid(VrCoreWidget) && VrCoreWidget->GetClass()->ImplementsInterface(UVrCoreWidgetInterface::StaticClass()))
	{
		IVrCoreWidgetInterface::Execute_Highlight(VrCoreWidget, Visible);
	}

	return true;
}

bool UVrCoreWidgetComponent::IsInteractableWithoutGrip_Implementation()
{
	return true;
}

void UVrCoreWidgetComponent::SendTrigger_Implementation(bool Pressed)
{
	bTriggerPressed = Pressed;

	if (UKismetSystemLibrary::IsServer(GetWorld()))
	{
		OnRep_Trigger();
	}
}

void UVrCoreWidgetComponent::OnRep_Trigger()
{
	OnTrigger.Broadcast(bTriggerPressed);
}

void UVrCoreWidgetComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UVrCoreWidgetComponent, bTriggerPressed);
}
