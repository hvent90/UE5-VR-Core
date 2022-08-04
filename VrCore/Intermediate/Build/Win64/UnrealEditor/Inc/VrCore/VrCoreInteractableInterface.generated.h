// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRCORE_VrCoreInteractableInterface_generated_h
#error "VrCoreInteractableInterface.generated.h already included, missing '#pragma once' in VrCoreInteractableInterface.h"
#endif
#define VRCORE_VrCoreInteractableInterface_generated_h

#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_SPARSE_DATA
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_RPC_WRAPPERS \
	virtual bool IsInteractableWithoutGrip_Implementation() { return false; }; \
	virtual void SendThumbstickAxis_Implementation(float X, float Y) {}; \
	virtual void SendThumbstickPress_Implementation(bool Pressed) {}; \
	virtual void SendSecondaryButton_Implementation(bool Pressed) {}; \
	virtual void SendPrimaryButton_Implementation(bool Pressed) {}; \
	virtual void SendTrigger_Implementation(bool Pressed) {}; \
	virtual void Highlight_Implementation(bool Visible) {}; \
 \
	DECLARE_FUNCTION(execIsInteractableWithoutGrip); \
	DECLARE_FUNCTION(execSendThumbstickAxis); \
	DECLARE_FUNCTION(execSendThumbstickPress); \
	DECLARE_FUNCTION(execSendSecondaryButton); \
	DECLARE_FUNCTION(execSendPrimaryButton); \
	DECLARE_FUNCTION(execSendTrigger); \
	DECLARE_FUNCTION(execHighlight);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsInteractableWithoutGrip_Implementation() { return false; }; \
	virtual void SendThumbstickAxis_Implementation(float X, float Y) {}; \
	virtual void SendThumbstickPress_Implementation(bool Pressed) {}; \
	virtual void SendSecondaryButton_Implementation(bool Pressed) {}; \
	virtual void SendPrimaryButton_Implementation(bool Pressed) {}; \
	virtual void SendTrigger_Implementation(bool Pressed) {}; \
	virtual void Highlight_Implementation(bool Visible) {}; \
 \
	DECLARE_FUNCTION(execIsInteractableWithoutGrip); \
	DECLARE_FUNCTION(execSendThumbstickAxis); \
	DECLARE_FUNCTION(execSendThumbstickPress); \
	DECLARE_FUNCTION(execSendSecondaryButton); \
	DECLARE_FUNCTION(execSendPrimaryButton); \
	DECLARE_FUNCTION(execSendTrigger); \
	DECLARE_FUNCTION(execHighlight);


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_EVENT_PARMS \
	struct VrCoreInteractableInterface_eventHighlight_Parms \
	{ \
		bool Visible; \
	}; \
	struct VrCoreInteractableInterface_eventIsInteractableWithoutGrip_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VrCoreInteractableInterface_eventIsInteractableWithoutGrip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VrCoreInteractableInterface_eventSendPrimaryButton_Parms \
	{ \
		bool Pressed; \
	}; \
	struct VrCoreInteractableInterface_eventSendSecondaryButton_Parms \
	{ \
		bool Pressed; \
	}; \
	struct VrCoreInteractableInterface_eventSendThumbstickAxis_Parms \
	{ \
		float X; \
		float Y; \
	}; \
	struct VrCoreInteractableInterface_eventSendThumbstickPress_Parms \
	{ \
		bool Pressed; \
	}; \
	struct VrCoreInteractableInterface_eventSendTrigger_Parms \
	{ \
		bool Pressed; \
	};


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_CALLBACK_WRAPPERS
#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrCoreInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrCoreInteractableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreInteractableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreInteractableInterface(UVrCoreInteractableInterface&&); \
	NO_API UVrCoreInteractableInterface(const UVrCoreInteractableInterface&); \
public:


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrCoreInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrCoreInteractableInterface(UVrCoreInteractableInterface&&); \
	NO_API UVrCoreInteractableInterface(const UVrCoreInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrCoreInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrCoreInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrCoreInteractableInterface)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVrCoreInteractableInterface(); \
	friend struct Z_Construct_UClass_UVrCoreInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(UVrCoreInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VrCore"), NO_API) \
	DECLARE_SERIALIZER(UVrCoreInteractableInterface)


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVrCoreInteractableInterface() {} \
public: \
	typedef UVrCoreInteractableInterface UClassType; \
	typedef IVrCoreInteractableInterface ThisClass; \
	static void Execute_Highlight(UObject* O, bool Visible); \
	static bool Execute_IsInteractableWithoutGrip(UObject* O); \
	static void Execute_SendPrimaryButton(UObject* O, bool Pressed); \
	static void Execute_SendSecondaryButton(UObject* O, bool Pressed); \
	static void Execute_SendThumbstickAxis(UObject* O, float X, float Y); \
	static void Execute_SendThumbstickPress(UObject* O, bool Pressed); \
	static void Execute_SendTrigger(UObject* O, bool Pressed); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IVrCoreInteractableInterface() {} \
public: \
	typedef UVrCoreInteractableInterface UClassType; \
	typedef IVrCoreInteractableInterface ThisClass; \
	static void Execute_Highlight(UObject* O, bool Visible); \
	static bool Execute_IsInteractableWithoutGrip(UObject* O); \
	static void Execute_SendPrimaryButton(UObject* O, bool Pressed); \
	static void Execute_SendSecondaryButton(UObject* O, bool Pressed); \
	static void Execute_SendThumbstickAxis(UObject* O, float X, float Y); \
	static void Execute_SendThumbstickPress(UObject* O, bool Pressed); \
	static void Execute_SendTrigger(UObject* O, bool Pressed); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_10_PROLOG \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_EVENT_PARMS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_RPC_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_SPARSE_DATA \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_CALLBACK_WRAPPERS \
	FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRCORE_API UClass* StaticClass<class UVrCoreInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
