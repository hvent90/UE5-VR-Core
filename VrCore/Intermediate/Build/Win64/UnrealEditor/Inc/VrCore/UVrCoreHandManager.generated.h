// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGripMotionControllerComponent;
class UObject;
struct FBPActorGripInformation;
#ifdef VRCORE_UVrCoreHandManager_generated_h
#error "UVrCoreHandManager.generated.h already included, missing '#pragma once' in UVrCoreHandManager.h"
#endif
#define VRCORE_UVrCoreHandManager_generated_h

#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_SPARSE_DATA
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_RPC_WRAPPERS \
	virtual bool Server_HandleThumbstickAxis_Validate(UGripMotionControllerComponent* , float , float ); \
	virtual void Server_HandleThumbstickAxis_Implementation(UGripMotionControllerComponent* MotionController, float X, float Y); \
	virtual bool Server_HandleThumbstickPress_Validate(UGripMotionControllerComponent* , bool ); \
	virtual void Server_HandleThumbstickPress_Implementation(UGripMotionControllerComponent* MotionController, bool bPressed); \
	virtual bool Server_HandleSecondaryButton_Validate(UGripMotionControllerComponent* , bool ); \
	virtual void Server_HandleSecondaryButton_Implementation(UGripMotionControllerComponent* MotionController, bool bPressed); \
	virtual bool Server_HandlePrimaryButton_Validate(UGripMotionControllerComponent* , bool ); \
	virtual void Server_HandlePrimaryButton_Implementation(UGripMotionControllerComponent* MotionController, bool bPressed); \
	virtual bool Server_HandleTrigger_Validate(UGripMotionControllerComponent* , bool ); \
	virtual void Server_HandleTrigger_Implementation(UGripMotionControllerComponent* MotionController, bool bPressed); \
	virtual bool Server_AttemptReleaseObject_Validate(UGripMotionControllerComponent* , UObject* ); \
	virtual void Server_AttemptReleaseObject_Implementation(UGripMotionControllerComponent* MotionController, UObject* Object); \
	virtual bool Server_AttemptGripObject_Validate(UGripMotionControllerComponent* , UObject* , FTransform ); \
	virtual void Server_AttemptGripObject_Implementation(UGripMotionControllerComponent* MotionController, UObject* Object, FTransform WorldTransform); \
 \
	DECLARE_FUNCTION(execServer_HandleThumbstickAxis); \
	DECLARE_FUNCTION(execServer_HandleThumbstickPress); \
	DECLARE_FUNCTION(execServer_HandleSecondaryButton); \
	DECLARE_FUNCTION(execServer_HandlePrimaryButton); \
	DECLARE_FUNCTION(execServer_HandleTrigger); \
	DECLARE_FUNCTION(execServer_AttemptReleaseObject); \
	DECLARE_FUNCTION(execServer_AttemptGripObject); \
	DECLARE_FUNCTION(execOnDroppedRight); \
	DECLARE_FUNCTION(execOnDroppedLeft); \
	DECLARE_FUNCTION(execOnGrippedRight); \
	DECLARE_FUNCTION(execOnGrippedLeft);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_HandleThumbstickAxis_Validate(UGripMotionControllerComponent* , float , float ); \
	virtual void Server_HandleThumbstickAxis_Implementation(UGripMotionControllerComponent* MotionController, float X, float Y); \
	virtual bool Server_HandleThumbstickPress_Validate(UGripMotionControllerComponent* , bool ); \
	virtual void Server_HandleThumbstickPress_Implementation(UGripMotionControllerComponent* MotionController, bool bPressed); \
	virtual bool Server_HandleSecondaryButton_Validate(UGripMotionControllerComponent* , bool ); \
	virtual void Server_HandleSecondaryButton_Implementation(UGripMotionControllerComponent* MotionController, bool bPressed); \
	virtual bool Server_HandlePrimaryButton_Validate(UGripMotionControllerComponent* , bool ); \
	virtual void Server_HandlePrimaryButton_Implementation(UGripMotionControllerComponent* MotionController, bool bPressed); \
	virtual bool Server_HandleTrigger_Validate(UGripMotionControllerComponent* , bool ); \
	virtual void Server_HandleTrigger_Implementation(UGripMotionControllerComponent* MotionController, bool bPressed); \
	virtual bool Server_AttemptReleaseObject_Validate(UGripMotionControllerComponent* , UObject* ); \
	virtual void Server_AttemptReleaseObject_Implementation(UGripMotionControllerComponent* MotionController, UObject* Object); \
	virtual bool Server_AttemptGripObject_Validate(UGripMotionControllerComponent* , UObject* , FTransform ); \
	virtual void Server_AttemptGripObject_Implementation(UGripMotionControllerComponent* MotionController, UObject* Object, FTransform WorldTransform); \
 \
	DECLARE_FUNCTION(execServer_HandleThumbstickAxis); \
	DECLARE_FUNCTION(execServer_HandleThumbstickPress); \
	DECLARE_FUNCTION(execServer_HandleSecondaryButton); \
	DECLARE_FUNCTION(execServer_HandlePrimaryButton); \
	DECLARE_FUNCTION(execServer_HandleTrigger); \
	DECLARE_FUNCTION(execServer_AttemptReleaseObject); \
	DECLARE_FUNCTION(execServer_AttemptGripObject); \
	DECLARE_FUNCTION(execOnDroppedRight); \
	DECLARE_FUNCTION(execOnDroppedLeft); \
	DECLARE_FUNCTION(execOnGrippedRight); \
	DECLARE_FUNCTION(execOnGrippedLeft);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_EVENT_PARMS \
	struct VrCoreHandManager_eventServer_AttemptGripObject_Parms \
	{ \
		UGripMotionControllerComponent* MotionController; \
		UObject* Object; \
		FTransform WorldTransform; \
	}; \
	struct VrCoreHandManager_eventServer_AttemptReleaseObject_Parms \
	{ \
		UGripMotionControllerComponent* MotionController; \
		UObject* Object; \
	}; \
	struct VrCoreHandManager_eventServer_HandlePrimaryButton_Parms \
	{ \
		UGripMotionControllerComponent* MotionController; \
		bool bPressed; \
	}; \
	struct VrCoreHandManager_eventServer_HandleSecondaryButton_Parms \
	{ \
		UGripMotionControllerComponent* MotionController; \
		bool bPressed; \
	}; \
	struct VrCoreHandManager_eventServer_HandleThumbstickAxis_Parms \
	{ \
		UGripMotionControllerComponent* MotionController; \
		float X; \
		float Y; \
	}; \
	struct VrCoreHandManager_eventServer_HandleThumbstickPress_Parms \
	{ \
		UGripMotionControllerComponent* MotionController; \
		bool bPressed; \
	}; \
	struct VrCoreHandManager_eventServer_HandleTrigger_Parms \
	{ \
		UGripMotionControllerComponent* MotionController; \
		bool bPressed; \
	};


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_CALLBACK_WRAPPERS
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrCoreHandManager(); \
	friend struct Z_Construct_UClass_UVrCoreHandManager_Statics; \
public: \
	DECLARE_CLASS(UVrCoreHandManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VrCore"), NO_API) \
	DECLARE_SERIALIZER(UVrCoreHandManager)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUVrCoreHandManager(); \
	friend struct Z_Construct_UClass_UVrCoreHandManager_Statics; \
public: \
	DECLARE_CLASS(UVrCoreHandManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VrCore"), NO_API) \
	DECLARE_SERIALIZER(UVrCoreHandManager)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrCoreHandManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrCoreHandManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreHandManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreHandManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreHandManager(UVrCoreHandManager&&); \
	NO_API UVrCoreHandManager(const UVrCoreHandManager&); \
public:


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreHandManager(UVrCoreHandManager&&); \
	NO_API UVrCoreHandManager(const UVrCoreHandManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreHandManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreHandManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVrCoreHandManager)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_44_PROLOG \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_EVENT_PARMS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_RPC_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_INCLASS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_INCLASS_NO_PURE_DECLS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCORE_API UClass* StaticClass<class UVrCoreHandManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
