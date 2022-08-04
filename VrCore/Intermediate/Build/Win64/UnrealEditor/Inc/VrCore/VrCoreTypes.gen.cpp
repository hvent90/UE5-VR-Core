// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/VrCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCoreTypes() {}
// Cross Module References
	VRCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVrCorePassengerInfo();
	UPackage* Z_Construct_UPackage__Script_VrCore();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrCorePassengerInfo;
class UScriptStruct* FVrCorePassengerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrCorePassengerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrCorePassengerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrCorePassengerInfo, Z_Construct_UPackage__Script_VrCore(), TEXT("VrCorePassengerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VrCorePassengerInfo.OuterSingleton;
}
template<> VRCORE_API UScriptStruct* StaticStruct<FVrCorePassengerInfo>()
{
	return FVrCorePassengerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tenant_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tenant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRelativeLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VrCore" },
		{ "ModuleRelativePath", "Public/VrCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrCorePassengerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_Tenant_MetaData[] = {
		{ "Category", "VrCorePassengerInfo" },
		{ "ModuleRelativePath", "Public/VrCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_Tenant = { "Tenant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrCorePassengerInfo, Tenant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_Tenant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_Tenant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_InitialRelativeLocation_MetaData[] = {
		{ "Category", "VrCorePassengerInfo" },
		{ "ModuleRelativePath", "Public/VrCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_InitialRelativeLocation = { "InitialRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrCorePassengerInfo, InitialRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_InitialRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_InitialRelativeLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_Tenant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewProp_InitialRelativeLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
		nullptr,
		&NewStructOps,
		"VrCorePassengerInfo",
		sizeof(FVrCorePassengerInfo),
		alignof(FVrCorePassengerInfo),
		Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrCorePassengerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VrCorePassengerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrCorePassengerInfo.InnerSingleton, Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrCorePassengerInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_VrCoreTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_VrCoreTypes_h_Statics::ScriptStructInfo[] = {
		{ FVrCorePassengerInfo::StaticStruct, Z_Construct_UScriptStruct_FVrCorePassengerInfo_Statics::NewStructOps, TEXT("VrCorePassengerInfo"), &Z_Registration_Info_UScriptStruct_VrCorePassengerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrCorePassengerInfo), 3962266156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_VrCoreTypes_h_3056057504(TEXT("/Script/VrCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_VrCoreTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_VrCoreTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
