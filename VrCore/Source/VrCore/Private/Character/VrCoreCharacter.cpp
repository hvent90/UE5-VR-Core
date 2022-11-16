// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/VrCoreCharacter.h"

#include "GripMotionControllerComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "SteamVRInputDeviceFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"

AVrCoreCharacter::AVrCoreCharacter()
{
	bReplicates = true;
	SetReplicateMovement(true);

	HandManager = CreateDefaultSubobject<UVrCoreHandManager>(FName("Hand Manager"));

	LeftHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("Left Hand Mesh"));
	LeftHandMesh->SetupAttachment(LeftMotionController);

	RightHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("Right Hand Mesh"));
	RightHandMesh->SetupAttachment(RightMotionController);
}

void AVrCoreCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AVrCoreCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("VrCore_TriggerLeft", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnTriggerLeft);
	PlayerInputComponent->BindAction("VrCore_TriggerRight", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnTriggerRight);
	PlayerInputComponent->BindAction("VrCore_TriggerLeft", EInputEvent::IE_Released, this, &AVrCoreCharacter::OnTriggerReleaseLeft);
	PlayerInputComponent->BindAction("VrCore_TriggerRight", EInputEvent::IE_Released, this, &AVrCoreCharacter::OnTriggerReleaseRight);
	
	PlayerInputComponent->BindAction("VrCore_GripLeft", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnGripLeft);
	PlayerInputComponent->BindAction("VrCore_GripRight", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnGripRight);
	PlayerInputComponent->BindAction("VrCore_GripLeft", EInputEvent::IE_Released, this, &AVrCoreCharacter::OnGripReleaseLeft);
	PlayerInputComponent->BindAction("VrCore_GripRight", EInputEvent::IE_Released, this, &AVrCoreCharacter::OnGripReleaseRight);
	
	PlayerInputComponent->BindAction("VrCore_PrimaryButtonLeft", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnPrimaryButtonLeft);
	PlayerInputComponent->BindAction("VrCore_PrimaryButtonRight", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnPrimaryButtonRight);
	
	PlayerInputComponent->BindAction("VrCore_SecondaryButtonLeft", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnSecondaryButtonLeft);
	PlayerInputComponent->BindAction("VrCore_SecondaryButtonRight", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnSecondaryButtonRight);
	
	PlayerInputComponent->BindAction("VrCore_ThumbstickPressLeft", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnThumbstickPressLeft);
	PlayerInputComponent->BindAction("VrCore_ThumbstickPressRight", EInputEvent::IE_Pressed, this, &AVrCoreCharacter::OnThumbstickPressRight);
	
	PlayerInputComponent->BindAxis("VrCore_ThumbstickAxisXLeft", this, &AVrCoreCharacter::OnThumbstickAxisXLeft);
	PlayerInputComponent->BindAxis("VrCore_ThumbstickAxisXRight", this, &AVrCoreCharacter::OnThumbstickAxisXRight);
	
	PlayerInputComponent->BindAxis("VrCore_ThumbstickAxisYLeft", this, &AVrCoreCharacter::OnThumbstickAxisYLeft);
	PlayerInputComponent->BindAxis("VrCore_ThumbstickAxisYRight", this, &AVrCoreCharacter::OnThumbstickAxisYRight);
}

void AVrCoreCharacter::OnTriggerLeft()
{
	HandManager->HandleTrigger(LeftMotionController, true);
}

void AVrCoreCharacter::OnTriggerRight()
{
	HandManager->HandleTrigger(RightMotionController, true);
}

void AVrCoreCharacter::OnTriggerReleaseLeft()
{
	HandManager->HandleTrigger(LeftMotionController, false);
}

void AVrCoreCharacter::OnTriggerReleaseRight()
{
	HandManager->HandleTrigger(RightMotionController, false);
}

void AVrCoreCharacter::OnGripLeft()
{
	HandManager->AttemptGrip(LeftMotionController);
}

void AVrCoreCharacter::OnGripRight()
{
	HandManager->AttemptGrip(RightMotionController);
}

void AVrCoreCharacter::OnGripReleaseLeft()
{
	HandManager->AttemptRelease(LeftMotionController);
}

void AVrCoreCharacter::OnGripReleaseRight()
{
	HandManager->AttemptRelease(RightMotionController);
}

void AVrCoreCharacter::OnPrimaryButtonLeft()
{
}

void AVrCoreCharacter::OnPrimaryButtonRight()
{
}

void AVrCoreCharacter::OnSecondaryButtonLeft()
{
}

void AVrCoreCharacter::OnSecondaryButtonRight()
{
}

void AVrCoreCharacter::OnThumbstickPressLeft()
{
}

void AVrCoreCharacter::OnThumbstickPressRight()
{
}

void AVrCoreCharacter::OnThumbstickAxisXLeft(float Value)
{
	OnThumbstickAxis(EControllerHand::Left, Value, GetInputAxisValue("VrCore_ThumbstickAxisYLeft"));
	// OnThumbstickAxisX(EControllerHand::Left, Value);
}

void AVrCoreCharacter::OnThumbstickAxisXRight(float Value)
{
	OnThumbstickAxis(EControllerHand::Right, Value, GetInputAxisValue("VrCore_ThumbstickAxisYRight"));
	// OnThumbstickAxisX(EControllerHand::Right, Value);
}

void AVrCoreCharacter::OnThumbstickAxis(EControllerHand Hand, float X, float Y)
{
	// if (FMath::IsNearlyZero(X) && FMath::IsNearlyZero(Y))
	// {
	// 	return;
	// }
	
	UGripMotionControllerComponent* MotionController = nullptr;
	if (Hand == EControllerHand::Left)
	{
		MotionController = LeftMotionController;	
	} else if (Hand == EControllerHand::Right)
	{
		MotionController = RightMotionController;
	}
	
	/**
	 * 1. User has gripped object
	 * 2. Gripped object accepts thumbstick input
	 * 3. Usage of gripped object's thumbstick input should prevent movement
	 */
	if (MotionController && HandManager->HandleThumbstickAxis(MotionController, X, Y))
	{
		return;
	}
	
	if (!IsSeated())
	{
		if (TranslateHand == Hand)
		{
			Translate(X, Y);
		}
		
		if (TurnHand == Hand)
		{
			Turn(X);
		}

		return;
	}
}

void AVrCoreCharacter::OnThumbstickAxisX(EControllerHand Hand, float Value)
{
	if (FMath::IsNearlyZero(Value, .01))
	{
		return;
	}
	
	UGripMotionControllerComponent* MotionController = nullptr;
	if (Hand == EControllerHand::Left)
	{
		MotionController = LeftMotionController;	
	} else if (Hand == EControllerHand::Right)
	{
		MotionController = RightMotionController;
	}
	
	/**
	 * 1. User has gripped object
	 * 2. Gripped object accepts thumbstick input
	 * 3. Usage of gripped object's thumbstick input should prevent movement
	 */
	if (MotionController && HandManager->HandleThumbstickAxis(MotionController, Value, 0))
	{
		return;
	}
	
	if (!IsSeated())
	{
		if (TranslateHand == Hand)
		{
			Translate(Value, 0);
		}
		
		if (TurnHand == Hand)
		{
			Turn(Value);
		}

		return;
	}
}

void AVrCoreCharacter::OnThumbstickAxisYLeft(float Value)
{
	OnThumbstickAxis(EControllerHand::Left, GetInputAxisValue("VrCore_ThumbstickAxisXLeft"), Value);
	// OnThumbstickAxisY(EControllerHand::Left, Value);
}

void AVrCoreCharacter::OnThumbstickAxisYRight(float Value)
{
	OnThumbstickAxis(EControllerHand::Right, GetInputAxisValue("VrCore_ThumbstickAxisXRight"), Value);
	// OnThumbstickAxisY(EControllerHand::Right, Value);
}

void AVrCoreCharacter::OnThumbstickAxisY(EControllerHand Hand, float Value)
{
	if (FMath::IsNearlyZero(Value, .01))
	{
		return;
	}
	
	UGripMotionControllerComponent* MotionController = nullptr;
	if (Hand == EControllerHand::Left)
	{
		MotionController = LeftMotionController;	
	} else if (Hand == EControllerHand::Right)
	{
		MotionController = RightMotionController;
	}

	/**
	 * 1. User has gripped object
	 * 2. Gripped object accepts thumbstick input
	 * 3. Usage of gripped object's thumbstick input should prevent movement
	 */
	if (MotionController && HandManager->HandleThumbstickAxis(MotionController, 0, Value))
	{
		return;
	}
	
	if (!IsSeated())
	{
		if (TranslateHand == Hand)
		{
			Translate(0, Value);
		}
	}

	TArray<UObject*> GrippedObjects;
	if (Hand == EControllerHand::Left)
	{
		LeftMotionController->GetGrippedObjects(GrippedObjects);	
	} else if (Hand == EControllerHand::Right)
	{
		RightMotionController->GetGrippedObjects(GrippedObjects);
	}
}

void AVrCoreCharacter::Sit_Implementation(USceneComponent* Seat)
{
	Server_SetSeatedMode(Seat, true, FTransform(),
VRReplicatedCamera->GetRelativeTransform(), 1000, 1000);
}

void AVrCoreCharacter::Eject_Implementation(FVector ExitLocation, FRotator ExitRotation)
{
	FTransform ExitTransform;
	ExitTransform.SetLocation(ExitLocation);
	ExitTransform.SetRotation(ExitRotation.Quaternion());
	ExitTransform.SetScale3D(FVector(1));
	
	Server_SetSeatedMode(nullptr, false, FTransform(),
ExitTransform, 0, 0);
}

FVector AVrCoreCharacter::GetInitialRelativeLocation_Implementation()
{
	return VRReplicatedCamera->GetRelativeLocation();
}

bool AVrCoreCharacter::IsSeated() const
{
	return static_cast<EVRConjoinedMovementModes>(GetReplicatedMovementMode()) == EVRConjoinedMovementModes::C_VRMOVE_Seated;
}

void AVrCoreCharacter::Translate(float Right, float Forward)
{
	// Filter out unintentional movement
	if (abs(Right) < TranslateThumbstickDeadzone && abs(Forward) < TranslateThumbstickDeadzone)
	{
		return;
	}

	// Get the direction of travel
	const FVector ForwardVector = GetVRForwardVector();
	const FRotator Rotation = UKismetMathLibrary::MakeRotFromX(FVector(Forward, Right, 0));
	const FVector RotatedVector = Rotation.RotateVector(ForwardVector);

	// Get the scalar
	const float MaxInput = UKismetMathLibrary::GetMaxElement(FVector(abs(Forward), abs(Right), 0));

	// Let's go!
	AddMovementInput(RotatedVector, FMath::Clamp<float>(MaxInput, 0, 1));
}

void AVrCoreCharacter::Turn(float Right)
{
	// Wait for thumbstick to re-center before allowing for a second turn input
	if (bTurnRequiresReset)
	{
		bTurnRequiresReset = abs(Right) > 0.1;
		return;
	}

	// Thumbstick must exceed threshold to filter out unintentional inputs
	if (abs(Right) < TurnThumbstickDeadzone)
	{
		return;
	}

	// Let's go!
	VRMovementReference->PerformMoveAction_SnapTurn(TurnSnapAngle * FMath::Sign(Right),
		EVRMoveActionVelocityRetention::VRMOVEACTION_Velocity_Turn, true, true);

	// User must recenter their thumbstick before allowing another turn
	bTurnRequiresReset = true;
}

void AVrCoreCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	TArray<UGripMotionControllerComponent*> MotionControllers;
	MotionControllers.Add(LeftMotionController);
	MotionControllers.Add(RightMotionController);
	HandManager->RegisterMotionControllers(LeftMotionController, LeftHandMesh,
		RightMotionController, RightHandMesh);
}
