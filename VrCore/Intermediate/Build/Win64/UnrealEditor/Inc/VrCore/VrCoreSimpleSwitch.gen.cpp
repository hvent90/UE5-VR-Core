// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/Interactables/VrCoreSimpleSwitch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCoreSimpleSwitch() {}
// Cross Module References
	VRCORE_API UClass* Z_Construct_UClass_AVrCoreSimpleSwitch_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_AVrCoreSimpleSwitch();
	VRCORE_API UClass* Z_Construct_UClass_AVrCoreInteractable();
	UPackage* Z_Construct_UPackage__Script_VrCore();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRDialComponent_NoRegister();
// End Cross Module References
	void AVrCoreSimpleSwitch::StaticRegisterNativesAVrCoreSimpleSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrCoreSimpleSwitch);
	UClass* Z_Construct_UClass_AVrCoreSimpleSwitch_NoRegister()
	{
		return AVrCoreSimpleSwitch::StaticClass();
	}
	struct Z_Construct_UClass_AVrCoreSimpleSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVrCoreInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/VrCoreSimpleSwitch.h" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreSimpleSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "VrCoreSimpleSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreSimpleSwitch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreSimpleSwitch, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_Dial_MetaData[] = {
		{ "Category", "VrCoreSimpleSwitch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreSimpleSwitch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_Dial = { "Dial", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreSimpleSwitch, Dial), Z_Construct_UClass_UVRDialComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_Dial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_Dial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_BaseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::NewProp_Dial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrCoreSimpleSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::ClassParams = {
		&AVrCoreSimpleSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVrCoreSimpleSwitch()
	{
		if (!Z_Registration_Info_UClass_AVrCoreSimpleSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrCoreSimpleSwitch.OuterSingleton, Z_Construct_UClass_AVrCoreSimpleSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVrCoreSimpleSwitch.OuterSingleton;
	}
	template<> VRCORE_API UClass* StaticClass<AVrCoreSimpleSwitch>()
	{
		return AVrCoreSimpleSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrCoreSimpleSwitch);
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreSimpleSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreSimpleSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVrCoreSimpleSwitch, AVrCoreSimpleSwitch::StaticClass, TEXT("AVrCoreSimpleSwitch"), &Z_Registration_Info_UClass_AVrCoreSimpleSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrCoreSimpleSwitch), 1879121038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreSimpleSwitch_h_1475448894(TEXT("/Script/VrCore"),
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreSimpleSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreSimpleSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
