// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/Interactables/VrCoreInteractableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCoreInteractableInterface() {}
// Cross Module References
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreInteractableInterface_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreInteractableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VrCore();
// End Cross Module References
	DEFINE_FUNCTION(IVrCoreInteractableInterface::execIsInteractableWithoutGrip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractableWithoutGrip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreInteractableInterface::execSendThumbstickAxis)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendThumbstickAxis_Implementation(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreInteractableInterface::execSendThumbstickPress)
	{
		P_GET_UBOOL(Z_Param_Pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendThumbstickPress_Implementation(Z_Param_Pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreInteractableInterface::execSendSecondaryButton)
	{
		P_GET_UBOOL(Z_Param_Pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendSecondaryButton_Implementation(Z_Param_Pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreInteractableInterface::execSendPrimaryButton)
	{
		P_GET_UBOOL(Z_Param_Pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPrimaryButton_Implementation(Z_Param_Pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreInteractableInterface::execSendTrigger)
	{
		P_GET_UBOOL(Z_Param_Pressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendTrigger_Implementation(Z_Param_Pressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreInteractableInterface::execHighlight)
	{
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Highlight_Implementation(Z_Param_Visible);
		P_NATIVE_END;
	}
	void IVrCoreInteractableInterface::Highlight(bool Visible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Highlight instead.");
	}
	bool IVrCoreInteractableInterface::IsInteractableWithoutGrip()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInteractableWithoutGrip instead.");
		VrCoreInteractableInterface_eventIsInteractableWithoutGrip_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVrCoreInteractableInterface::SendPrimaryButton(bool Pressed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SendPrimaryButton instead.");
	}
	void IVrCoreInteractableInterface::SendSecondaryButton(bool Pressed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SendSecondaryButton instead.");
	}
	void IVrCoreInteractableInterface::SendThumbstickAxis(float X, float Y)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SendThumbstickAxis instead.");
	}
	void IVrCoreInteractableInterface::SendThumbstickPress(bool Pressed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SendThumbstickPress instead.");
	}
	void IVrCoreInteractableInterface::SendTrigger(bool Pressed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SendTrigger instead.");
	}
	void UVrCoreInteractableInterface::StaticRegisterNativesUVrCoreInteractableInterface()
	{
		UClass* Class = UVrCoreInteractableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Highlight", &IVrCoreInteractableInterface::execHighlight },
			{ "IsInteractableWithoutGrip", &IVrCoreInteractableInterface::execIsInteractableWithoutGrip },
			{ "SendPrimaryButton", &IVrCoreInteractableInterface::execSendPrimaryButton },
			{ "SendSecondaryButton", &IVrCoreInteractableInterface::execSendSecondaryButton },
			{ "SendThumbstickAxis", &IVrCoreInteractableInterface::execSendThumbstickAxis },
			{ "SendThumbstickPress", &IVrCoreInteractableInterface::execSendThumbstickPress },
			{ "SendTrigger", &IVrCoreInteractableInterface::execSendTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics
	{
		static void NewProp_Visible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((VrCoreInteractableInterface_eventHighlight_Parms*)Obj)->Visible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreInteractableInterface_eventHighlight_Parms), &Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreInteractableInterface" },
		{ "Comment", "/**\n\x09 * Suggested use:\n     * - Highlight the closest object to the user's motion controller that is within interaction radius.\n\x09 *     If the object is a switch, show the text \"trigger\" informing them to interact with the\n     *     object by pressing trigger.\n\x09 * - Have a frenel shader or some equivalent to do the highlight effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractableInterface.h" },
		{ "ToolTip", "Suggested use:\n- Highlight the closest object to the user's motion controller that is within interaction radius.\n    If the object is a switch, show the text \"trigger\" informing them to interact with the\n    object by pressing trigger.\n- Have a frenel shader or some equivalent to do the highlight effect." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreInteractableInterface, nullptr, "Highlight", nullptr, nullptr, sizeof(VrCoreInteractableInterface_eventHighlight_Parms), Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrCoreInteractableInterface_eventIsInteractableWithoutGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreInteractableInterface_eventIsInteractableWithoutGrip_Parms), &Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreInteractableInterface" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreInteractableInterface, nullptr, "IsInteractableWithoutGrip", nullptr, nullptr, sizeof(VrCoreInteractableInterface_eventIsInteractableWithoutGrip_Parms), Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics
	{
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((VrCoreInteractableInterface_eventSendPrimaryButton_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreInteractableInterface_eventSendPrimaryButton_Parms), &Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::NewProp_Pressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreInteractableInterface" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreInteractableInterface, nullptr, "SendPrimaryButton", nullptr, nullptr, sizeof(VrCoreInteractableInterface_eventSendPrimaryButton_Parms), Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics
	{
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((VrCoreInteractableInterface_eventSendSecondaryButton_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreInteractableInterface_eventSendSecondaryButton_Parms), &Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::NewProp_Pressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreInteractableInterface" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreInteractableInterface, nullptr, "SendSecondaryButton", nullptr, nullptr, sizeof(VrCoreInteractableInterface_eventSendSecondaryButton_Parms), Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreInteractableInterface_eventSendThumbstickAxis_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreInteractableInterface_eventSendThumbstickAxis_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::NewProp_Y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreInteractableInterface" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreInteractableInterface, nullptr, "SendThumbstickAxis", nullptr, nullptr, sizeof(VrCoreInteractableInterface_eventSendThumbstickAxis_Parms), Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics
	{
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((VrCoreInteractableInterface_eventSendThumbstickPress_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreInteractableInterface_eventSendThumbstickPress_Parms), &Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::NewProp_Pressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreInteractableInterface" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreInteractableInterface, nullptr, "SendThumbstickPress", nullptr, nullptr, sizeof(VrCoreInteractableInterface_eventSendThumbstickPress_Parms), Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics
	{
		static void NewProp_Pressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::NewProp_Pressed_SetBit(void* Obj)
	{
		((VrCoreInteractableInterface_eventSendTrigger_Parms*)Obj)->Pressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::NewProp_Pressed = { "Pressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreInteractableInterface_eventSendTrigger_Parms), &Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::NewProp_Pressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::NewProp_Pressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreInteractableInterface" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreInteractableInterface, nullptr, "SendTrigger", nullptr, nullptr, sizeof(VrCoreInteractableInterface_eventSendTrigger_Parms), Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrCoreInteractableInterface);
	UClass* Z_Construct_UClass_UVrCoreInteractableInterface_NoRegister()
	{
		return UVrCoreInteractableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVrCoreInteractableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrCoreInteractableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrCoreInteractableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrCoreInteractableInterface_Highlight, "Highlight" }, // 2707518140
		{ &Z_Construct_UFunction_UVrCoreInteractableInterface_IsInteractableWithoutGrip, "IsInteractableWithoutGrip" }, // 1611016832
		{ &Z_Construct_UFunction_UVrCoreInteractableInterface_SendPrimaryButton, "SendPrimaryButton" }, // 3415427524
		{ &Z_Construct_UFunction_UVrCoreInteractableInterface_SendSecondaryButton, "SendSecondaryButton" }, // 1830810015
		{ &Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickAxis, "SendThumbstickAxis" }, // 1618593401
		{ &Z_Construct_UFunction_UVrCoreInteractableInterface_SendThumbstickPress, "SendThumbstickPress" }, // 2283757816
		{ &Z_Construct_UFunction_UVrCoreInteractableInterface_SendTrigger, "SendTrigger" }, // 808741569
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreInteractableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrCoreInteractableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVrCoreInteractableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrCoreInteractableInterface_Statics::ClassParams = {
		&UVrCoreInteractableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVrCoreInteractableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreInteractableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrCoreInteractableInterface()
	{
		if (!Z_Registration_Info_UClass_UVrCoreInteractableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrCoreInteractableInterface.OuterSingleton, Z_Construct_UClass_UVrCoreInteractableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrCoreInteractableInterface.OuterSingleton;
	}
	template<> VRCORE_API UClass* StaticClass<UVrCoreInteractableInterface>()
	{
		return UVrCoreInteractableInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrCoreInteractableInterface);
	static FName NAME_UVrCoreInteractableInterface_Highlight = FName(TEXT("Highlight"));
	void IVrCoreInteractableInterface::Execute_Highlight(UObject* O, bool Visible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()));
		VrCoreInteractableInterface_eventHighlight_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreInteractableInterface_Highlight);
		if (Func)
		{
			Parms.Visible=Visible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreInteractableInterface*)(O->GetNativeInterfaceAddress(UVrCoreInteractableInterface::StaticClass())))
		{
			I->Highlight_Implementation(Visible);
		}
	}
	static FName NAME_UVrCoreInteractableInterface_IsInteractableWithoutGrip = FName(TEXT("IsInteractableWithoutGrip"));
	bool IVrCoreInteractableInterface::Execute_IsInteractableWithoutGrip(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()));
		VrCoreInteractableInterface_eventIsInteractableWithoutGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreInteractableInterface_IsInteractableWithoutGrip);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreInteractableInterface*)(O->GetNativeInterfaceAddress(UVrCoreInteractableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsInteractableWithoutGrip_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVrCoreInteractableInterface_SendPrimaryButton = FName(TEXT("SendPrimaryButton"));
	void IVrCoreInteractableInterface::Execute_SendPrimaryButton(UObject* O, bool Pressed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()));
		VrCoreInteractableInterface_eventSendPrimaryButton_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreInteractableInterface_SendPrimaryButton);
		if (Func)
		{
			Parms.Pressed=Pressed;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreInteractableInterface*)(O->GetNativeInterfaceAddress(UVrCoreInteractableInterface::StaticClass())))
		{
			I->SendPrimaryButton_Implementation(Pressed);
		}
	}
	static FName NAME_UVrCoreInteractableInterface_SendSecondaryButton = FName(TEXT("SendSecondaryButton"));
	void IVrCoreInteractableInterface::Execute_SendSecondaryButton(UObject* O, bool Pressed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()));
		VrCoreInteractableInterface_eventSendSecondaryButton_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreInteractableInterface_SendSecondaryButton);
		if (Func)
		{
			Parms.Pressed=Pressed;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreInteractableInterface*)(O->GetNativeInterfaceAddress(UVrCoreInteractableInterface::StaticClass())))
		{
			I->SendSecondaryButton_Implementation(Pressed);
		}
	}
	static FName NAME_UVrCoreInteractableInterface_SendThumbstickAxis = FName(TEXT("SendThumbstickAxis"));
	void IVrCoreInteractableInterface::Execute_SendThumbstickAxis(UObject* O, float X, float Y)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()));
		VrCoreInteractableInterface_eventSendThumbstickAxis_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreInteractableInterface_SendThumbstickAxis);
		if (Func)
		{
			Parms.X=X;
			Parms.Y=Y;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreInteractableInterface*)(O->GetNativeInterfaceAddress(UVrCoreInteractableInterface::StaticClass())))
		{
			I->SendThumbstickAxis_Implementation(X,Y);
		}
	}
	static FName NAME_UVrCoreInteractableInterface_SendThumbstickPress = FName(TEXT("SendThumbstickPress"));
	void IVrCoreInteractableInterface::Execute_SendThumbstickPress(UObject* O, bool Pressed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()));
		VrCoreInteractableInterface_eventSendThumbstickPress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreInteractableInterface_SendThumbstickPress);
		if (Func)
		{
			Parms.Pressed=Pressed;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreInteractableInterface*)(O->GetNativeInterfaceAddress(UVrCoreInteractableInterface::StaticClass())))
		{
			I->SendThumbstickPress_Implementation(Pressed);
		}
	}
	static FName NAME_UVrCoreInteractableInterface_SendTrigger = FName(TEXT("SendTrigger"));
	void IVrCoreInteractableInterface::Execute_SendTrigger(UObject* O, bool Pressed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreInteractableInterface::StaticClass()));
		VrCoreInteractableInterface_eventSendTrigger_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreInteractableInterface_SendTrigger);
		if (Func)
		{
			Parms.Pressed=Pressed;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreInteractableInterface*)(O->GetNativeInterfaceAddress(UVrCoreInteractableInterface::StaticClass())))
		{
			I->SendTrigger_Implementation(Pressed);
		}
	}
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrCoreInteractableInterface, UVrCoreInteractableInterface::StaticClass, TEXT("UVrCoreInteractableInterface"), &Z_Registration_Info_UClass_UVrCoreInteractableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrCoreInteractableInterface), 3615427051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_2741059230(TEXT("/Script/VrCore"),
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
