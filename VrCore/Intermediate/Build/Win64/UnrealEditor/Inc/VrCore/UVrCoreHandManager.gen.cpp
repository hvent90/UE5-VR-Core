// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/Character/UVrCoreHandManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVrCoreHandManager() {}
// Cross Module References
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreHandManager_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreHandManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VrCore();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrCoreHandManager::execServer_HandleThumbstickAxis)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HandleThumbstickAxis_Validate(Z_Param_MotionController,Z_Param_X,Z_Param_Y))
		{
			RPC_ValidateFailed(TEXT("Server_HandleThumbstickAxis_Validate"));
			return;
		}
		P_THIS->Server_HandleThumbstickAxis_Implementation(Z_Param_MotionController,Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execServer_HandleThumbstickPress)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_UBOOL(Z_Param_bPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HandleThumbstickPress_Validate(Z_Param_MotionController,Z_Param_bPressed))
		{
			RPC_ValidateFailed(TEXT("Server_HandleThumbstickPress_Validate"));
			return;
		}
		P_THIS->Server_HandleThumbstickPress_Implementation(Z_Param_MotionController,Z_Param_bPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execServer_HandleSecondaryButton)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_UBOOL(Z_Param_bPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HandleSecondaryButton_Validate(Z_Param_MotionController,Z_Param_bPressed))
		{
			RPC_ValidateFailed(TEXT("Server_HandleSecondaryButton_Validate"));
			return;
		}
		P_THIS->Server_HandleSecondaryButton_Implementation(Z_Param_MotionController,Z_Param_bPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execServer_HandlePrimaryButton)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_UBOOL(Z_Param_bPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HandlePrimaryButton_Validate(Z_Param_MotionController,Z_Param_bPressed))
		{
			RPC_ValidateFailed(TEXT("Server_HandlePrimaryButton_Validate"));
			return;
		}
		P_THIS->Server_HandlePrimaryButton_Implementation(Z_Param_MotionController,Z_Param_bPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execServer_HandleTrigger)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_UBOOL(Z_Param_bPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HandleTrigger_Validate(Z_Param_MotionController,Z_Param_bPressed))
		{
			RPC_ValidateFailed(TEXT("Server_HandleTrigger_Validate"));
			return;
		}
		P_THIS->Server_HandleTrigger_Implementation(Z_Param_MotionController,Z_Param_bPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execServer_AttemptReleaseObject)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_AttemptReleaseObject_Validate(Z_Param_MotionController,Z_Param_Object))
		{
			RPC_ValidateFailed(TEXT("Server_AttemptReleaseObject_Validate"));
			return;
		}
		P_THIS->Server_AttemptReleaseObject_Implementation(Z_Param_MotionController,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execServer_AttemptGripObject)
	{
		P_GET_OBJECT(UGripMotionControllerComponent,Z_Param_MotionController);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_STRUCT(FTransform,Z_Param_WorldTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_AttemptGripObject_Validate(Z_Param_MotionController,Z_Param_Object,Z_Param_WorldTransform))
		{
			RPC_ValidateFailed(TEXT("Server_AttemptGripObject_Validate"));
			return;
		}
		P_THIS->Server_AttemptGripObject_Implementation(Z_Param_MotionController,Z_Param_Object,Z_Param_WorldTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execOnDroppedRight)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDroppedRight(Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execOnDroppedLeft)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInformation);
		P_GET_UBOOL(Z_Param_bWasSocketed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDroppedLeft(Z_Param_Out_GripInformation,Z_Param_bWasSocketed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execOnGrippedRight)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrippedRight(Z_Param_Out_GripInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrCoreHandManager::execOnGrippedLeft)
	{
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGrippedLeft(Z_Param_Out_GripInfo);
		P_NATIVE_END;
	}
	static FName NAME_UVrCoreHandManager_Server_AttemptGripObject = FName(TEXT("Server_AttemptGripObject"));
	void UVrCoreHandManager::Server_AttemptGripObject(UGripMotionControllerComponent* MotionController, UObject* Object, FTransform WorldTransform)
	{
		VrCoreHandManager_eventServer_AttemptGripObject_Parms Parms;
		Parms.MotionController=MotionController;
		Parms.Object=Object;
		Parms.WorldTransform=WorldTransform;
		ProcessEvent(FindFunctionChecked(NAME_UVrCoreHandManager_Server_AttemptGripObject),&Parms);
	}
	static FName NAME_UVrCoreHandManager_Server_AttemptReleaseObject = FName(TEXT("Server_AttemptReleaseObject"));
	void UVrCoreHandManager::Server_AttemptReleaseObject(UGripMotionControllerComponent* MotionController, UObject* Object)
	{
		VrCoreHandManager_eventServer_AttemptReleaseObject_Parms Parms;
		Parms.MotionController=MotionController;
		Parms.Object=Object;
		ProcessEvent(FindFunctionChecked(NAME_UVrCoreHandManager_Server_AttemptReleaseObject),&Parms);
	}
	static FName NAME_UVrCoreHandManager_Server_HandlePrimaryButton = FName(TEXT("Server_HandlePrimaryButton"));
	void UVrCoreHandManager::Server_HandlePrimaryButton(UGripMotionControllerComponent* MotionController, bool bPressed)
	{
		VrCoreHandManager_eventServer_HandlePrimaryButton_Parms Parms;
		Parms.MotionController=MotionController;
		Parms.bPressed=bPressed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVrCoreHandManager_Server_HandlePrimaryButton),&Parms);
	}
	static FName NAME_UVrCoreHandManager_Server_HandleSecondaryButton = FName(TEXT("Server_HandleSecondaryButton"));
	void UVrCoreHandManager::Server_HandleSecondaryButton(UGripMotionControllerComponent* MotionController, bool bPressed)
	{
		VrCoreHandManager_eventServer_HandleSecondaryButton_Parms Parms;
		Parms.MotionController=MotionController;
		Parms.bPressed=bPressed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVrCoreHandManager_Server_HandleSecondaryButton),&Parms);
	}
	static FName NAME_UVrCoreHandManager_Server_HandleThumbstickAxis = FName(TEXT("Server_HandleThumbstickAxis"));
	void UVrCoreHandManager::Server_HandleThumbstickAxis(UGripMotionControllerComponent* MotionController, float X, float Y)
	{
		VrCoreHandManager_eventServer_HandleThumbstickAxis_Parms Parms;
		Parms.MotionController=MotionController;
		Parms.X=X;
		Parms.Y=Y;
		ProcessEvent(FindFunctionChecked(NAME_UVrCoreHandManager_Server_HandleThumbstickAxis),&Parms);
	}
	static FName NAME_UVrCoreHandManager_Server_HandleThumbstickPress = FName(TEXT("Server_HandleThumbstickPress"));
	void UVrCoreHandManager::Server_HandleThumbstickPress(UGripMotionControllerComponent* MotionController, bool bPressed)
	{
		VrCoreHandManager_eventServer_HandleThumbstickPress_Parms Parms;
		Parms.MotionController=MotionController;
		Parms.bPressed=bPressed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVrCoreHandManager_Server_HandleThumbstickPress),&Parms);
	}
	static FName NAME_UVrCoreHandManager_Server_HandleTrigger = FName(TEXT("Server_HandleTrigger"));
	void UVrCoreHandManager::Server_HandleTrigger(UGripMotionControllerComponent* MotionController, bool bPressed)
	{
		VrCoreHandManager_eventServer_HandleTrigger_Parms Parms;
		Parms.MotionController=MotionController;
		Parms.bPressed=bPressed ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVrCoreHandManager_Server_HandleTrigger),&Parms);
	}
	void UVrCoreHandManager::StaticRegisterNativesUVrCoreHandManager()
	{
		UClass* Class = UVrCoreHandManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDroppedLeft", &UVrCoreHandManager::execOnDroppedLeft },
			{ "OnDroppedRight", &UVrCoreHandManager::execOnDroppedRight },
			{ "OnGrippedLeft", &UVrCoreHandManager::execOnGrippedLeft },
			{ "OnGrippedRight", &UVrCoreHandManager::execOnGrippedRight },
			{ "Server_AttemptGripObject", &UVrCoreHandManager::execServer_AttemptGripObject },
			{ "Server_AttemptReleaseObject", &UVrCoreHandManager::execServer_AttemptReleaseObject },
			{ "Server_HandlePrimaryButton", &UVrCoreHandManager::execServer_HandlePrimaryButton },
			{ "Server_HandleSecondaryButton", &UVrCoreHandManager::execServer_HandleSecondaryButton },
			{ "Server_HandleThumbstickAxis", &UVrCoreHandManager::execServer_HandleThumbstickAxis },
			{ "Server_HandleThumbstickPress", &UVrCoreHandManager::execServer_HandleThumbstickPress },
			{ "Server_HandleTrigger", &UVrCoreHandManager::execServer_HandleTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics
	{
		struct VrCoreHandManager_eventOnDroppedLeft_Parms
		{
			FBPActorGripInformation GripInformation;
			bool bWasSocketed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventOnDroppedLeft_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::NewProp_GripInformation_MetaData)) }; // 2559775509
	void Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VrCoreHandManager_eventOnDroppedLeft_Parms*)Obj)->bWasSocketed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreHandManager_eventOnDroppedLeft_Parms), &Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::NewProp_GripInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::NewProp_bWasSocketed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "OnDroppedLeft", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::VrCoreHandManager_eventOnDroppedLeft_Parms), Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics
	{
		struct VrCoreHandManager_eventOnDroppedRight_Parms
		{
			FBPActorGripInformation GripInformation;
			bool bWasSocketed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GripInformation;
		static void NewProp_bWasSocketed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSocketed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::NewProp_GripInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::NewProp_GripInformation = { "GripInformation", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventOnDroppedRight_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::NewProp_GripInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::NewProp_GripInformation_MetaData)) }; // 2559775509
	void Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::NewProp_bWasSocketed_SetBit(void* Obj)
	{
		((VrCoreHandManager_eventOnDroppedRight_Parms*)Obj)->bWasSocketed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::NewProp_bWasSocketed = { "bWasSocketed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreHandManager_eventOnDroppedRight_Parms), &Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::NewProp_bWasSocketed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::NewProp_GripInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::NewProp_bWasSocketed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "OnDroppedRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::VrCoreHandManager_eventOnDroppedRight_Parms), Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics
	{
		struct VrCoreHandManager_eventOnGrippedLeft_Parms
		{
			FBPActorGripInformation GripInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GripInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventOnGrippedLeft_Parms, GripInfo), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::NewProp_GripInfo_MetaData)) }; // 2559775509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::NewProp_GripInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "OnGrippedLeft", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::VrCoreHandManager_eventOnGrippedLeft_Parms), Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics
	{
		struct VrCoreHandManager_eventOnGrippedRight_Parms
		{
			FBPActorGripInformation GripInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GripInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::NewProp_GripInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::NewProp_GripInfo = { "GripInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventOnGrippedRight_Parms, GripInfo), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::NewProp_GripInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::NewProp_GripInfo_MetaData)) }; // 2559775509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::NewProp_GripInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "OnGrippedRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::VrCoreHandManager_eventOnGrippedRight_Parms), Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_AttemptGripObject_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::NewProp_MotionController_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_AttemptGripObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_AttemptGripObject_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::NewProp_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::NewProp_WorldTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "Server_AttemptGripObject", nullptr, nullptr, sizeof(VrCoreHandManager_eventServer_AttemptGripObject_Parms), Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_AttemptReleaseObject_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::NewProp_MotionController_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_AttemptReleaseObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::NewProp_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "Server_AttemptReleaseObject", nullptr, nullptr, sizeof(VrCoreHandManager_eventServer_AttemptReleaseObject_Parms), Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static void NewProp_bPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_HandlePrimaryButton_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::NewProp_MotionController_MetaData)) };
	void Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::NewProp_bPressed_SetBit(void* Obj)
	{
		((VrCoreHandManager_eventServer_HandlePrimaryButton_Parms*)Obj)->bPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::NewProp_bPressed = { "bPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreHandManager_eventServer_HandlePrimaryButton_Parms), &Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::NewProp_bPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::NewProp_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::NewProp_bPressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "Server_HandlePrimaryButton", nullptr, nullptr, sizeof(VrCoreHandManager_eventServer_HandlePrimaryButton_Parms), Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static void NewProp_bPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_HandleSecondaryButton_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::NewProp_MotionController_MetaData)) };
	void Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::NewProp_bPressed_SetBit(void* Obj)
	{
		((VrCoreHandManager_eventServer_HandleSecondaryButton_Parms*)Obj)->bPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::NewProp_bPressed = { "bPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreHandManager_eventServer_HandleSecondaryButton_Parms), &Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::NewProp_bPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::NewProp_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::NewProp_bPressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "Server_HandleSecondaryButton", nullptr, nullptr, sizeof(VrCoreHandManager_eventServer_HandleSecondaryButton_Parms), Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_HandleThumbstickAxis_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::NewProp_MotionController_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_HandleThumbstickAxis_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_HandleThumbstickAxis_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::NewProp_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "Server_HandleThumbstickAxis", nullptr, nullptr, sizeof(VrCoreHandManager_eventServer_HandleThumbstickAxis_Parms), Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static void NewProp_bPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_HandleThumbstickPress_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::NewProp_MotionController_MetaData)) };
	void Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::NewProp_bPressed_SetBit(void* Obj)
	{
		((VrCoreHandManager_eventServer_HandleThumbstickPress_Parms*)Obj)->bPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::NewProp_bPressed = { "bPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreHandManager_eventServer_HandleThumbstickPress_Parms), &Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::NewProp_bPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::NewProp_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::NewProp_bPressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "Server_HandleThumbstickPress", nullptr, nullptr, sizeof(VrCoreHandManager_eventServer_HandleThumbstickPress_Parms), Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static void NewProp_bPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::NewProp_MotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandManager_eventServer_HandleTrigger_Parms, MotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::NewProp_MotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::NewProp_MotionController_MetaData)) };
	void Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::NewProp_bPressed_SetBit(void* Obj)
	{
		((VrCoreHandManager_eventServer_HandleTrigger_Parms*)Obj)->bPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::NewProp_bPressed = { "bPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreHandManager_eventServer_HandleTrigger_Parms), &Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::NewProp_bPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::NewProp_MotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::NewProp_bPressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandManager, nullptr, "Server_HandleTrigger", nullptr, nullptr, sizeof(VrCoreHandManager_eventServer_HandleTrigger_Parms), Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrCoreHandManager);
	UClass* Z_Construct_UClass_UVrCoreHandManager_NoRegister()
	{
		return UVrCoreHandManager::StaticClass();
	}
	struct Z_Construct_UClass_UVrCoreHandManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GripCollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GripTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GripRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripHaptic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GripHaptic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseHaptic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleaseHaptic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerWithoutGripHaptic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerWithoutGripHaptic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMotionController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightMotionController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMotionController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrCoreHandManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrCoreHandManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrCoreHandManager_OnDroppedLeft, "OnDroppedLeft" }, // 1479810725
		{ &Z_Construct_UFunction_UVrCoreHandManager_OnDroppedRight, "OnDroppedRight" }, // 3845890991
		{ &Z_Construct_UFunction_UVrCoreHandManager_OnGrippedLeft, "OnGrippedLeft" }, // 3800079338
		{ &Z_Construct_UFunction_UVrCoreHandManager_OnGrippedRight, "OnGrippedRight" }, // 3649983401
		{ &Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptGripObject, "Server_AttemptGripObject" }, // 2016766226
		{ &Z_Construct_UFunction_UVrCoreHandManager_Server_AttemptReleaseObject, "Server_AttemptReleaseObject" }, // 2652876614
		{ &Z_Construct_UFunction_UVrCoreHandManager_Server_HandlePrimaryButton, "Server_HandlePrimaryButton" }, // 1076259319
		{ &Z_Construct_UFunction_UVrCoreHandManager_Server_HandleSecondaryButton, "Server_HandleSecondaryButton" }, // 376319694
		{ &Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickAxis, "Server_HandleThumbstickAxis" }, // 2963062758
		{ &Z_Construct_UFunction_UVrCoreHandManager_Server_HandleThumbstickPress, "Server_HandleThumbstickPress" }, // 3892963706
		{ &Z_Construct_UFunction_UVrCoreHandManager_Server_HandleTrigger, "Server_HandleTrigger" }, // 716019888
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Character/UVrCoreHandManager.h" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripCollisionChannel_MetaData[] = {
		{ "Category", "VR Core" },
		{ "Comment", "/** The Collision Channel to check for objects implementing IVRGripInterface */" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
		{ "ToolTip", "The Collision Channel to check for objects implementing IVRGripInterface" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripCollisionChannel = { "GripCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, GripCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripCollisionChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripTraceLength_MetaData[] = {
		{ "Category", "VR Core" },
		{ "Comment", "/** The distance in front of the player's hand to trace for grippable objects */" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
		{ "ToolTip", "The distance in front of the player's hand to trace for grippable objects" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripTraceLength = { "GripTraceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, GripTraceLength), METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripTraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripRadius_MetaData[] = {
		{ "Category", "VR Core" },
		{ "Comment", "/** The distance around a player's hand to overlap for grippable objects */" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
		{ "ToolTip", "The distance around a player's hand to overlap for grippable objects" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripRadius = { "GripRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, GripRadius), METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripHaptic_MetaData[] = {
		{ "Category", "VR Core" },
		{ "Comment", "// Haptics\n" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
		{ "ToolTip", "Haptics" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripHaptic = { "GripHaptic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, GripHaptic), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripHaptic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripHaptic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_ReleaseHaptic_MetaData[] = {
		{ "Category", "VR Core" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_ReleaseHaptic = { "ReleaseHaptic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, ReleaseHaptic), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_ReleaseHaptic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_ReleaseHaptic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_TriggerWithoutGripHaptic_MetaData[] = {
		{ "Category", "VR Core" },
		{ "Comment", "/** This is mainly used for flicking switches */" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
		{ "ToolTip", "This is mainly used for flicking switches" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_TriggerWithoutGripHaptic = { "TriggerWithoutGripHaptic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, TriggerWithoutGripHaptic), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_TriggerWithoutGripHaptic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_TriggerWithoutGripHaptic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMotionController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMotionController = { "LeftMotionController", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, LeftMotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMotionController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMotionController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMotionController = { "RightMotionController", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, RightMotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMotionController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMotionController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMesh = { "LeftMesh", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, LeftMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/UVrCoreHandManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMesh = { "RightMesh", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrCoreHandManager, RightMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrCoreHandManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_GripHaptic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_ReleaseHaptic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_TriggerWithoutGripHaptic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMotionController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_LeftMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrCoreHandManager_Statics::NewProp_RightMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrCoreHandManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrCoreHandManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrCoreHandManager_Statics::ClassParams = {
		&UVrCoreHandManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrCoreHandManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrCoreHandManager()
	{
		if (!Z_Registration_Info_UClass_UVrCoreHandManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrCoreHandManager.OuterSingleton, Z_Construct_UClass_UVrCoreHandManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrCoreHandManager.OuterSingleton;
	}
	template<> VRCORE_API UClass* StaticClass<UVrCoreHandManager>()
	{
		return UVrCoreHandManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrCoreHandManager);
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrCoreHandManager, UVrCoreHandManager::StaticClass, TEXT("UVrCoreHandManager"), &Z_Registration_Info_UClass_UVrCoreHandManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrCoreHandManager), 1740987873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_193426431(TEXT("/Script/VrCore"),
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_UVrCoreHandManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
