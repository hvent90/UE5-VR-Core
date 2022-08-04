// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPoseSnapshot;
#ifdef VRCORE_VrCoreHandAnimInterface_generated_h
#error "VrCoreHandAnimInterface.generated.h already included, missing '#pragma once' in VrCoreHandAnimInterface.h"
#endif
#define VRCORE_VrCoreHandAnimInterface_generated_h

#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_SPARSE_DATA
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_RPC_WRAPPERS \
	virtual void ClearPose_Implementation() {}; \
	virtual void EnterPose_Implementation(FPoseSnapshot Pose) {}; \
 \
	DECLARE_FUNCTION(execClearPose); \
	DECLARE_FUNCTION(execEnterPose);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearPose_Implementation() {}; \
	virtual void EnterPose_Implementation(FPoseSnapshot Pose) {}; \
 \
	DECLARE_FUNCTION(execClearPose); \
	DECLARE_FUNCTION(execEnterPose);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_EVENT_PARMS \
	struct VrCoreHandAnimInterface_eventEnterPose_Parms \
	{ \
		FPoseSnapshot Pose; \
	};


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_CALLBACK_WRAPPERS
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrCoreHandAnimInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrCoreHandAnimInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreHandAnimInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreHandAnimInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreHandAnimInterface(UVrCoreHandAnimInterface&&); \
	NO_API UVrCoreHandAnimInterface(const UVrCoreHandAnimInterface&); \
public:


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrCoreHandAnimInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreHandAnimInterface(UVrCoreHandAnimInterface&&); \
	NO_API UVrCoreHandAnimInterface(const UVrCoreHandAnimInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreHandAnimInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreHandAnimInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrCoreHandAnimInterface)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVrCoreHandAnimInterface(); \
	friend struct Z_Construct_UClass_UVrCoreHandAnimInterface_Statics; \
public: \
	DECLARE_CLASS(UVrCoreHandAnimInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VrCore"), NO_API) \
	DECLARE_SERIALIZER(UVrCoreHandAnimInterface)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVrCoreHandAnimInterface() {} \
public: \
	typedef UVrCoreHandAnimInterface UClassType; \
	typedef IVrCoreHandAnimInterface ThisClass; \
	static void Execute_ClearPose(UObject* O); \
	static void Execute_EnterPose(UObject* O, FPoseSnapshot Pose); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IVrCoreHandAnimInterface() {} \
public: \
	typedef UVrCoreHandAnimInterface UClassType; \
	typedef IVrCoreHandAnimInterface ThisClass; \
	static void Execute_ClearPose(UObject* O); \
	static void Execute_EnterPose(UObject* O, FPoseSnapshot Pose); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_10_PROLOG \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_EVENT_PARMS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_RPC_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCORE_API UClass* StaticClass<class UVrCoreHandAnimInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
