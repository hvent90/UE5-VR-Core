
#pragma once

#include "CoreMinimal.h"
#include "VRGripInterface.h"
#include "Components/ActorComponent.h"
#include <Runtime/Engine/Public/VisualLogger/VisualLogger.h>

#include "Grippables/HandSocketComponent.h"
#include "Interactables/VrCoreInteractionTooltip.h"
#include "Sound/SoundCue.h"
#include "UVrCoreHandManager.generated.h"

DEFINE_LOG_CATEGORY_STATIC(LogHandManagerVisualLog, Log, All);

USTRUCT(BlueprintType)
struct VRCORE_API FHandInteractable
{
	GENERATED_BODY()
	
	UObject* Object;
	UStaticMeshComponent* Mesh;
	float Distance;
	FTransform WorldTransform;

	FHandInteractable() :
		Object(nullptr), Mesh(nullptr), Distance(0), WorldTransform(FTransform()) {};

	FHandInteractable(UObject* _Object, UStaticMeshComponent* _Mesh, float _Distance, FTransform _WorldTransform) :
	 Object(_Object), Mesh(_Mesh), Distance(_Distance), WorldTransform(_WorldTransform) {};

	bool Valid() const
	{
		return IsValid(Object);
	}
};

UENUM()
enum EHandInteractableType
{
	None,
	NonGrippable,
	Grippable
};

struct FHandInteractables
{
	void AddInteractable(FHandInteractable Interactable);
	void AddGrippable(FHandInteractable Grippable);

	bool GetClosestGrippable(FHandInteractable& Grippable);
	bool GetClosestInteractable(FHandInteractable& Interactable);
	EHandInteractableType GetClosest(FHandInteractable& Interactable);

	bool ShouldInteractWithNonGrippableInteractable(FHandInteractable& NonGrippable, FHandInteractable& Grippable);
	
	/**
	 * The closest interactable object that can receive a trigger input wihtout being gripped.
	 * This is normally a switch that is flicked with the trigger button.
	 */
	bool GetClosestInteractableWithoutGrip(FHandInteractable& Interactable);
	void Clear();

private:
	TArray<FHandInteractable> Interactables;
	TArray<FHandInteractable> Grippables;
	
	bool bInteractablesNeedSorting = false;
	bool bGrippablesNeedSorting = false;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VRCORE_API UVrCoreHandManager : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UVrCoreHandManager();

	void RegisterMotionControllers(UGripMotionControllerComponent* LeftSource, USkeletalMeshComponent* LeftSkeletalMesh,
		UGripMotionControllerComponent* RightSource, USkeletalMeshComponent* RightSkeletalMesh);

	UFUNCTION()
	void OnGrippedLeft(const FBPActorGripInformation& GripInfo);
	UFUNCTION()
	void OnGrippedRight(const FBPActorGripInformation& GripInfo);
	UFUNCTION()
	void OnDroppedLeft(const FBPActorGripInformation& GripInformation, bool bWasSocketed);
	UFUNCTION()
	void OnDroppedRight(const FBPActorGripInformation& GripInformation, bool bWasSocketed);

	UFUNCTION(BlueprintCallable, Category = "VR Hand Manager")
	bool ShouldGrip(UGripMotionControllerComponent* MotionController, FHandInteractable& Grippable);
	UFUNCTION(BlueprintCallable, Category = "VR Hand Manager")
	bool ShouldInteract(UGripMotionControllerComponent* MotionController, FHandInteractable& Interactable);

	

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
							   FActorComponentTickFunction* ThisTickFunction) override;

	/** The Collision Channel to check for objects implementing IVRGripInterface */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	TEnumAsByte<ECollisionChannel> GripCollisionChannel = ECollisionChannel::ECC_WorldDynamic;

	UPROPERTY(EditAnywhere, Category = "VR Core|Grip")
	FName LeftHandForwardTraceSocket = "GripTrace_Left";
	
	UPROPERTY(EditAnywhere, Category = "VR Core|Grip")
	FName RightHandForwardTraceSocket = "GripTrace_Right";
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core|Grip")
	float TraceRadius = 6;
	
	/** The distance in front of the player's hand to trace for grippable objects */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core|Grip")
	float GripTraceLength = 100;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core|Grip")
	bool bDebugGripTrace = false;
	
	/** The distance around a player's hand to overlap for grippable objects */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core|Grip")
	float GripRadius = 50;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core|Grip")
	bool bDebugGripRadius = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	UMaterialInterface* HighlightOverlayMaterial = nullptr;

	// Sounds
	UPROPERTY(EditAnywhere, Category = "VR Core|Grip")
	USoundCue* GripSound = nullptr;
	UPROPERTY(EditAnywhere, Category = "VR Core|Grip")
	USoundCue* ReleaseSound = nullptr;

	// Haptics
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	UHapticFeedbackEffect_Base* GripHaptic;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	UHapticFeedbackEffect_Base* ReleaseHaptic;
	/** This is mainly used for flicking switches */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "VR Core")
	UHapticFeedbackEffect_Base* TriggerWithoutGripHaptic;
	

	// Grip
	bool AttemptGrip(UGripMotionControllerComponent* MotionController);
	bool AttemptGripObject(UGripMotionControllerComponent* MotionController, UObject* Object, FTransform WorldTransform);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AttemptGripObject(UGripMotionControllerComponent* MotionController, UObject* Object, FTransform WorldTransform);

	// Grip Release
	void AttemptRelease(UGripMotionControllerComponent* MotionController);
	void AttemptReleaseObject(UGripMotionControllerComponent* MotionController, UObject* Object);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AttemptReleaseObject(UGripMotionControllerComponent* MotionController, UObject* Object);

	/** Other Controls */

	// Trigger
	void HandleTrigger(UGripMotionControllerComponent* MotionController, bool bPressed);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_HandleTrigger(UGripMotionControllerComponent* MotionController, bool bPressed);

	// Face Buttons
	void HandlePrimaryButton(UGripMotionControllerComponent* MotionController, bool bPressed);
	void HandleSecondaryButton(UGripMotionControllerComponent* MotionController, bool bPressed);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_HandlePrimaryButton(UGripMotionControllerComponent* MotionController, bool bPressed);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_HandleSecondaryButton(UGripMotionControllerComponent* MotionController, bool bPressed);

	// Thumbstick
	void HandleThumbstickPress(UGripMotionControllerComponent* MotionController, bool bPressed);
	
	/**
	 * @brief 
	 * @return Returns true if the gripped object's usage of the thumbstick axis
	 * should prevent the player from moving/turning. Example: using the thumbstick to
	 * navigate a menu.
	 */
	bool HandleThumbstickAxis(UGripMotionControllerComponent* MotionController, float X, float Y);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_HandleThumbstickPress(UGripMotionControllerComponent* MotionController, bool bPressed);
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_HandleThumbstickAxis(UGripMotionControllerComponent* MotionController, float X, float Y);

	UFUNCTION(BlueprintCallable, Category = "VR Core")
	void HydrateHandInteractables();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool ForwardTraceCheck(UGripMotionControllerComponent* MotionController,
	                       TArray<FHandInteractable>& Interactables,
	                       TArray<FHandInteractable>& Grippables) const;
	bool RadialOverlapCheck(const ::UGripMotionControllerComponent* MotionController,
	                        TArray<FHandInteractable>&,
	                        TArray<FHandInteractable>&) const;
	
	TMap<UGripMotionControllerComponent*, FHandInteractables> HandInteractables;
	UPROPERTY()
	TMap<UGripMotionControllerComponent*, USkeletalMeshComponent*> HandMeshes;
	TMap<UGripMotionControllerComponent*, FTransform> HandMeshTransforms;

	UPROPERTY()
	UGripMotionControllerComponent* LeftMotionController = nullptr;
	UPROPERTY()
	UGripMotionControllerComponent* RightMotionController = nullptr;

	void OnGrippedObject(UGripMotionControllerComponent* MotionController, USkeletalMeshComponent* Mesh, const FBPActorGripInformation& GripInfo);
	void OnDroppedObject(UGripMotionControllerComponent* MotionController, USkeletalMeshComponent* Mesh, const FBPActorGripInformation& GripInfo);
	
	float ThumbstickResetThreshold = .15;
	float ThumbstickImpulseActivationThreshold = .5;

	UPROPERTY(EditAnywhere, Category = "Vr Core Tooltip")
	TSubclassOf<AActor> TooltipClass;
	UPROPERTY(EditAnywhere, Category = "Vr Core Tooltip")
	float TooltipDuration = 5;
	TObjectPtr<AActor> InteractionTooltip;
	UPROPERTY()
	USceneComponent* TooltipParentComponent = nullptr;
	FTimerHandle TooltipTimerHandle;

private:
	TMap<EControllerHand, bool> ImpulseActivations;

	bool IsServer() const;

	void ApplyHandPose(UGripMotionControllerComponent* MotionController, USkeletalMeshComponent* Mesh, UHandSocketComponent* HandSocketComponent, const FBPActorGripInformation& GripInfo);
	void ShowInteractionTooltip(UGripMotionControllerComponent* MotionController, UObject* Interactable);
	void TeardownInteractableTooltip();
};
