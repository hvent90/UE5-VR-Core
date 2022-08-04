// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
#ifdef VRCORE_VrCoreChairInterface_generated_h
#error "VrCoreChairInterface.generated.h already included, missing '#pragma once' in VrCoreChairInterface.h"
#endif
#define VRCORE_VrCoreChairInterface_generated_h

#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_SPARSE_DATA
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_RPC_WRAPPERS \
	virtual bool Eject_Implementation(AActor* Tenant) { return false; }; \
	virtual bool SitInFirstAvailable_Implementation(AActor* HopefulTenant) { return false; }; \
	virtual bool Sit_Implementation(USceneComponent* Seat, AActor* HopefulTenant) { return false; }; \
	virtual TArray<USceneComponent*> GetAvailableSeats_Implementation() { return TArray<USceneComponent*>(); }; \
 \
	DECLARE_FUNCTION(execEject); \
	DECLARE_FUNCTION(execSitInFirstAvailable); \
	DECLARE_FUNCTION(execSit); \
	DECLARE_FUNCTION(execGetAvailableSeats);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Eject_Implementation(AActor* Tenant) { return false; }; \
	virtual bool SitInFirstAvailable_Implementation(AActor* HopefulTenant) { return false; }; \
	virtual bool Sit_Implementation(USceneComponent* Seat, AActor* HopefulTenant) { return false; }; \
	virtual TArray<USceneComponent*> GetAvailableSeats_Implementation() { return TArray<USceneComponent*>(); }; \
 \
	DECLARE_FUNCTION(execEject); \
	DECLARE_FUNCTION(execSitInFirstAvailable); \
	DECLARE_FUNCTION(execSit); \
	DECLARE_FUNCTION(execGetAvailableSeats);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_EVENT_PARMS \
	struct VrCoreChairInterface_eventEject_Parms \
	{ \
		AActor* Tenant; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VrCoreChairInterface_eventEject_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VrCoreChairInterface_eventGetAvailableSeats_Parms \
	{ \
		TArray<USceneComponent*> ReturnValue; \
	}; \
	struct VrCoreChairInterface_eventSit_Parms \
	{ \
		USceneComponent* Seat; \
		AActor* HopefulTenant; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VrCoreChairInterface_eventSit_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VrCoreChairInterface_eventSitInFirstAvailable_Parms \
	{ \
		AActor* HopefulTenant; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VrCoreChairInterface_eventSitInFirstAvailable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_CALLBACK_WRAPPERS
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrCoreChairInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrCoreChairInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreChairInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreChairInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreChairInterface(UVrCoreChairInterface&&); \
	NO_API UVrCoreChairInterface(const UVrCoreChairInterface&); \
public:


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrCoreChairInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreChairInterface(UVrCoreChairInterface&&); \
	NO_API UVrCoreChairInterface(const UVrCoreChairInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreChairInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreChairInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrCoreChairInterface)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVrCoreChairInterface(); \
	friend struct Z_Construct_UClass_UVrCoreChairInterface_Statics; \
public: \
	DECLARE_CLASS(UVrCoreChairInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VrCore"), NO_API) \
	DECLARE_SERIALIZER(UVrCoreChairInterface)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVrCoreChairInterface() {} \
public: \
	typedef UVrCoreChairInterface UClassType; \
	typedef IVrCoreChairInterface ThisClass; \
	static bool Execute_Eject(UObject* O, AActor* Tenant); \
	static TArray<USceneComponent*> Execute_GetAvailableSeats(UObject* O); \
	static bool Execute_Sit(UObject* O, USceneComponent* Seat, AActor* HopefulTenant); \
	static bool Execute_SitInFirstAvailable(UObject* O, AActor* HopefulTenant); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IVrCoreChairInterface() {} \
public: \
	typedef UVrCoreChairInterface UClassType; \
	typedef IVrCoreChairInterface ThisClass; \
	static bool Execute_Eject(UObject* O, AActor* Tenant); \
	static TArray<USceneComponent*> Execute_GetAvailableSeats(UObject* O); \
	static bool Execute_Sit(UObject* O, USceneComponent* Seat, AActor* HopefulTenant); \
	static bool Execute_SitInFirstAvailable(UObject* O, AActor* HopefulTenant); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_10_PROLOG \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_EVENT_PARMS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_RPC_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCORE_API UClass* StaticClass<class UVrCoreChairInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
