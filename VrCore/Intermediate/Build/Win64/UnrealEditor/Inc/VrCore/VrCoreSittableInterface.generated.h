// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef VRCORE_VrCoreSittableInterface_generated_h
#error "VrCoreSittableInterface.generated.h already included, missing '#pragma once' in VrCoreSittableInterface.h"
#endif
#define VRCORE_VrCoreSittableInterface_generated_h

#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_SPARSE_DATA
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_RPC_WRAPPERS \
	virtual FVector GetInitialRelativeLocation_Implementation() { return FVector(ForceInit); }; \
	virtual void Eject_Implementation(FVector ExitLocation, FRotator ExitRotation) {}; \
	virtual void Sit_Implementation(USceneComponent* Seat) {}; \
 \
	DECLARE_FUNCTION(execGetInitialRelativeLocation); \
	DECLARE_FUNCTION(execEject); \
	DECLARE_FUNCTION(execSit);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetInitialRelativeLocation_Implementation() { return FVector(ForceInit); }; \
	virtual void Eject_Implementation(FVector ExitLocation, FRotator ExitRotation) {}; \
	virtual void Sit_Implementation(USceneComponent* Seat) {}; \
 \
	DECLARE_FUNCTION(execGetInitialRelativeLocation); \
	DECLARE_FUNCTION(execEject); \
	DECLARE_FUNCTION(execSit);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_EVENT_PARMS \
	struct VrCoreSittableInterface_eventEject_Parms \
	{ \
		FVector ExitLocation; \
		FRotator ExitRotation; \
	}; \
	struct VrCoreSittableInterface_eventGetInitialRelativeLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VrCoreSittableInterface_eventGetInitialRelativeLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct VrCoreSittableInterface_eventSit_Parms \
	{ \
		USceneComponent* Seat; \
	};


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_CALLBACK_WRAPPERS
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrCoreSittableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrCoreSittableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreSittableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreSittableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreSittableInterface(UVrCoreSittableInterface&&); \
	NO_API UVrCoreSittableInterface(const UVrCoreSittableInterface&); \
public:


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrCoreSittableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreSittableInterface(UVrCoreSittableInterface&&); \
	NO_API UVrCoreSittableInterface(const UVrCoreSittableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreSittableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreSittableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrCoreSittableInterface)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVrCoreSittableInterface(); \
	friend struct Z_Construct_UClass_UVrCoreSittableInterface_Statics; \
public: \
	DECLARE_CLASS(UVrCoreSittableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VrCore"), NO_API) \
	DECLARE_SERIALIZER(UVrCoreSittableInterface)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVrCoreSittableInterface() {} \
public: \
	typedef UVrCoreSittableInterface UClassType; \
	typedef IVrCoreSittableInterface ThisClass; \
	static void Execute_Eject(UObject* O, FVector ExitLocation, FRotator ExitRotation); \
	static FVector Execute_GetInitialRelativeLocation(UObject* O); \
	static void Execute_Sit(UObject* O, USceneComponent* Seat); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IVrCoreSittableInterface() {} \
public: \
	typedef UVrCoreSittableInterface UClassType; \
	typedef IVrCoreSittableInterface ThisClass; \
	static void Execute_Eject(UObject* O, FVector ExitLocation, FRotator ExitRotation); \
	static FVector Execute_GetInitialRelativeLocation(UObject* O); \
	static void Execute_Sit(UObject* O, USceneComponent* Seat); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_10_PROLOG \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_EVENT_PARMS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_RPC_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCORE_API UClass* StaticClass<class UVrCoreSittableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
