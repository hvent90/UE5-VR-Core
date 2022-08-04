// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/Character/VrCoreHandAnimInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCoreHandAnimInterface() {}
// Cross Module References
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreHandAnimInterface_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreHandAnimInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VrCore();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
// End Cross Module References
	DEFINE_FUNCTION(IVrCoreHandAnimInterface::execClearPose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPose_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreHandAnimInterface::execEnterPose)
	{
		P_GET_STRUCT(FPoseSnapshot,Z_Param_Pose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterPose_Implementation(Z_Param_Pose);
		P_NATIVE_END;
	}
	void IVrCoreHandAnimInterface::ClearPose()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearPose instead.");
	}
	void IVrCoreHandAnimInterface::EnterPose(FPoseSnapshot Pose)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EnterPose instead.");
	}
	void UVrCoreHandAnimInterface::StaticRegisterNativesUVrCoreHandAnimInterface()
	{
		UClass* Class = UVrCoreHandAnimInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPose", &IVrCoreHandAnimInterface::execClearPose },
			{ "EnterPose", &IVrCoreHandAnimInterface::execEnterPose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrCoreHandAnimInterface_ClearPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandAnimInterface_ClearPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreHandAnimInterface" },
		{ "ModuleRelativePath", "Public/Character/VrCoreHandAnimInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandAnimInterface_ClearPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandAnimInterface, nullptr, "ClearPose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandAnimInterface_ClearPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandAnimInterface_ClearPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandAnimInterface_ClearPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandAnimInterface_ClearPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreHandAnimInterface_eventEnterPose_Parms, Pose), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) }; // 1666854200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::NewProp_Pose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreHandAnimInterface" },
		{ "ModuleRelativePath", "Public/Character/VrCoreHandAnimInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreHandAnimInterface, nullptr, "EnterPose", nullptr, nullptr, sizeof(VrCoreHandAnimInterface_eventEnterPose_Parms), Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrCoreHandAnimInterface);
	UClass* Z_Construct_UClass_UVrCoreHandAnimInterface_NoRegister()
	{
		return UVrCoreHandAnimInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVrCoreHandAnimInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrCoreHandAnimInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrCoreHandAnimInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrCoreHandAnimInterface_ClearPose, "ClearPose" }, // 2271954524
		{ &Z_Construct_UFunction_UVrCoreHandAnimInterface_EnterPose, "EnterPose" }, // 1982070549
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreHandAnimInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/VrCoreHandAnimInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrCoreHandAnimInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVrCoreHandAnimInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrCoreHandAnimInterface_Statics::ClassParams = {
		&UVrCoreHandAnimInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVrCoreHandAnimInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreHandAnimInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrCoreHandAnimInterface()
	{
		if (!Z_Registration_Info_UClass_UVrCoreHandAnimInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrCoreHandAnimInterface.OuterSingleton, Z_Construct_UClass_UVrCoreHandAnimInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrCoreHandAnimInterface.OuterSingleton;
	}
	template<> VRCORE_API UClass* StaticClass<UVrCoreHandAnimInterface>()
	{
		return UVrCoreHandAnimInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrCoreHandAnimInterface);
	static FName NAME_UVrCoreHandAnimInterface_ClearPose = FName(TEXT("ClearPose"));
	void IVrCoreHandAnimInterface::Execute_ClearPose(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreHandAnimInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVrCoreHandAnimInterface_ClearPose);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVrCoreHandAnimInterface*)(O->GetNativeInterfaceAddress(UVrCoreHandAnimInterface::StaticClass())))
		{
			I->ClearPose_Implementation();
		}
	}
	static FName NAME_UVrCoreHandAnimInterface_EnterPose = FName(TEXT("EnterPose"));
	void IVrCoreHandAnimInterface::Execute_EnterPose(UObject* O, FPoseSnapshot Pose)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreHandAnimInterface::StaticClass()));
		VrCoreHandAnimInterface_eventEnterPose_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreHandAnimInterface_EnterPose);
		if (Func)
		{
			Parms.Pose=Pose;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreHandAnimInterface*)(O->GetNativeInterfaceAddress(UVrCoreHandAnimInterface::StaticClass())))
		{
			I->EnterPose_Implementation(Pose);
		}
	}
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrCoreHandAnimInterface, UVrCoreHandAnimInterface::StaticClass, TEXT("UVrCoreHandAnimInterface"), &Z_Registration_Info_UClass_UVrCoreHandAnimInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrCoreHandAnimInterface), 857801496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_204908441(TEXT("/Script/VrCore"),
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreHandAnimInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
