// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/Interactables/Chair/VrCoreSimpleChair.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCoreSimpleChair() {}
// Cross Module References
	VRCORE_API UClass* Z_Construct_UClass_AVrCoreSimpleChair_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_AVrCoreSimpleChair();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VrCore();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VRCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVrCorePassengerInfo();
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreChairInterface_NoRegister();
// End Cross Module References
	void AVrCoreSimpleChair::StaticRegisterNativesAVrCoreSimpleChair()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrCoreSimpleChair);
	UClass* Z_Construct_UClass_AVrCoreSimpleChair_NoRegister()
	{
		return AVrCoreSimpleChair::StaticClass();
	}
	struct Z_Construct_UClass_AVrCoreSimpleChair_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Seat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Seats_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Seats_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seats_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Seats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrCoreSimpleChair_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreSimpleChair_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/Chair/VrCoreSimpleChair.h" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreSimpleChair.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seat_MetaData[] = {
		{ "Category", "VrCoreSimpleChair" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreSimpleChair.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seat = { "Seat", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreSimpleChair, Seat), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_ExitLocation_MetaData[] = {
		{ "Category", "VrCoreSimpleChair" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreSimpleChair.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_ExitLocation = { "ExitLocation", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreSimpleChair, ExitLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_ExitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_ExitLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seats_ValueProp = { "Seats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVrCorePassengerInfo, METADATA_PARAMS(nullptr, 0) }; // 3962266156
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seats_Key_KeyProp = { "Seats_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seats_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreSimpleChair.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seats = { "Seats", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreSimpleChair, Seats), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seats_MetaData)) }; // 3962266156
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVrCoreSimpleChair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_ExitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seats_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seats_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreSimpleChair_Statics::NewProp_Seats,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVrCoreSimpleChair_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVrCoreChairInterface_NoRegister, (int32)VTABLE_OFFSET(AVrCoreSimpleChair, IVrCoreChairInterface), false },  // 831416493
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrCoreSimpleChair_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrCoreSimpleChair>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrCoreSimpleChair_Statics::ClassParams = {
		&AVrCoreSimpleChair::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVrCoreSimpleChair_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreSimpleChair_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVrCoreSimpleChair_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreSimpleChair_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVrCoreSimpleChair()
	{
		if (!Z_Registration_Info_UClass_AVrCoreSimpleChair.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrCoreSimpleChair.OuterSingleton, Z_Construct_UClass_AVrCoreSimpleChair_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVrCoreSimpleChair.OuterSingleton;
	}
	template<> VRCORE_API UClass* StaticClass<AVrCoreSimpleChair>()
	{
		return AVrCoreSimpleChair::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrCoreSimpleChair);
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSimpleChair_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSimpleChair_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVrCoreSimpleChair, AVrCoreSimpleChair::StaticClass, TEXT("AVrCoreSimpleChair"), &Z_Registration_Info_UClass_AVrCoreSimpleChair, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrCoreSimpleChair), 1983036922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSimpleChair_h_749375998(TEXT("/Script/VrCore"),
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSimpleChair_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSimpleChair_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
