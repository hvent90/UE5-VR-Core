// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/Character/VrCoreCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCoreCharacter() {}
// Cross Module References
	VRCORE_API UClass* Z_Construct_UClass_AVrCoreCharacter_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_AVrCoreCharacter();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter();
	UPackage* Z_Construct_UPackage__Script_VrCore();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreHandManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreSittableInterface_NoRegister();
// End Cross Module References
	void AVrCoreCharacter::StaticRegisterNativesAVrCoreCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrCoreCharacter);
	UClass* Z_Construct_UClass_AVrCoreCharacter_NoRegister()
	{
		return AVrCoreCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVrCoreCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslateHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslateHand;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TurnHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TurnHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateThumbstickDeadzone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslateThumbstickDeadzone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnThumbstickDeadzone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnThumbstickDeadzone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnSnapAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSnapAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrCoreCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/VrCoreCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/VrCoreCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateHand_MetaData[] = {
		{ "Category", "VR Core" },
		{ "Comment", "/** The thumbstick's hand used for translating the player */" },
		{ "ModuleRelativePath", "Public/Character/VrCoreCharacter.h" },
		{ "ToolTip", "The thumbstick's hand used for translating the player" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateHand = { "TranslateHand", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreCharacter, TranslateHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateHand_MetaData)) }; // 2206298931
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnHand_MetaData[] = {
		{ "Category", "VR Core" },
		{ "Comment", "/** The thumbstick's hand used for turning the player */" },
		{ "ModuleRelativePath", "Public/Character/VrCoreCharacter.h" },
		{ "ToolTip", "The thumbstick's hand used for turning the player" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnHand = { "TurnHand", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreCharacter, TurnHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnHand_MetaData)) }; // 2206298931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateThumbstickDeadzone_MetaData[] = {
		{ "Category", "VR Core" },
		{ "ModuleRelativePath", "Public/Character/VrCoreCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateThumbstickDeadzone = { "TranslateThumbstickDeadzone", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreCharacter, TranslateThumbstickDeadzone), METADATA_PARAMS(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateThumbstickDeadzone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateThumbstickDeadzone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnThumbstickDeadzone_MetaData[] = {
		{ "Category", "VR Core" },
		{ "ModuleRelativePath", "Public/Character/VrCoreCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnThumbstickDeadzone = { "TurnThumbstickDeadzone", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreCharacter, TurnThumbstickDeadzone), METADATA_PARAMS(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnThumbstickDeadzone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnThumbstickDeadzone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnSnapAngle_MetaData[] = {
		{ "Category", "VR Core" },
		{ "ModuleRelativePath", "Public/Character/VrCoreCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnSnapAngle = { "TurnSnapAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreCharacter, TurnSnapAngle), METADATA_PARAMS(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnSnapAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnSnapAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_HandManager_MetaData[] = {
		{ "Category", "VR Core" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/VrCoreCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_HandManager = { "HandManager", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreCharacter, HandManager), Z_Construct_UClass_UVrCoreHandManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_HandManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_HandManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_LeftHandMesh_MetaData[] = {
		{ "Category", "VR Core" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/VrCoreCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_LeftHandMesh = { "LeftHandMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreCharacter, LeftHandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_LeftHandMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_LeftHandMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_RightHandMesh_MetaData[] = {
		{ "Category", "VR Core" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/VrCoreCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_RightHandMesh = { "RightHandMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreCharacter, RightHandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_RightHandMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_RightHandMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVrCoreCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TranslateThumbstickDeadzone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnThumbstickDeadzone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_TurnSnapAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_HandManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_LeftHandMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreCharacter_Statics::NewProp_RightHandMesh,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVrCoreCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVrCoreSittableInterface_NoRegister, (int32)VTABLE_OFFSET(AVrCoreCharacter, IVrCoreSittableInterface), false },  // 576900013
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrCoreCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrCoreCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrCoreCharacter_Statics::ClassParams = {
		&AVrCoreCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVrCoreCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVrCoreCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVrCoreCharacter()
	{
		if (!Z_Registration_Info_UClass_AVrCoreCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrCoreCharacter.OuterSingleton, Z_Construct_UClass_AVrCoreCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVrCoreCharacter.OuterSingleton;
	}
	template<> VRCORE_API UClass* StaticClass<AVrCoreCharacter>()
	{
		return AVrCoreCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrCoreCharacter);
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVrCoreCharacter, AVrCoreCharacter::StaticClass, TEXT("AVrCoreCharacter"), &Z_Registration_Info_UClass_AVrCoreCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrCoreCharacter), 129140190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreCharacter_h_3880886529(TEXT("/Script/VrCore"),
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Character_VrCoreCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
