// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/Interactables/VrCoreInteractable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCoreInteractable() {}
// Cross Module References
	VRCORE_API UClass* Z_Construct_UClass_AVrCoreInteractable_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_AVrCoreInteractable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VrCore();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreInteractableInterface_NoRegister();
// End Cross Module References
	void AVrCoreInteractable::StaticRegisterNativesAVrCoreInteractable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrCoreInteractable);
	UClass* Z_Construct_UClass_AVrCoreInteractable_NoRegister()
	{
		return AVrCoreInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AVrCoreInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tip_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTip_MetaData[];
#endif
		static void NewProp_bUseTip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTip;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightedMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HighlightedMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeparateMeshesForHighlighting_MetaData[];
#endif
		static void NewProp_bUseSeparateMeshesForHighlighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateMeshesForHighlighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActorUsesTick_MetaData[];
#endif
		static void NewProp_bActorUsesTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorUsesTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteractableWithoutGrip_MetaData[];
#endif
		static void NewProp_bInteractableWithoutGrip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractableWithoutGrip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioResponse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrCoreInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/VrCoreInteractable.h" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_Tip_MetaData[] = {
		{ "Category", "VrCoreInteractable" },
		{ "Comment", "/**\n\x09 * Normally this is the name of the interactable.\n\x09 * In the example of a switch, it is helpful to add \"(Trigger)\" to instruct\n\x09 * the user to press \"trigger\" to interact with the switch.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractable.h" },
		{ "ToolTip", "Normally this is the name of the interactable.\nIn the example of a switch, it is helpful to add \"(Trigger)\" to instruct\nthe user to press \"trigger\" to interact with the switch." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_Tip = { "Tip", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreInteractable, Tip), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_Tip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_Tip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseTip_MetaData[] = {
		{ "Category", "VrCoreInteractable" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractable.h" },
	};
#endif
	void Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseTip_SetBit(void* Obj)
	{
		((AVrCoreInteractable*)Obj)->bUseTip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseTip = { "bUseTip", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVrCoreInteractable), &Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseTip_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseTip_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_HighlightedMeshes_Inner = { "HighlightedMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_HighlightedMeshes_MetaData[] = {
		{ "Category", "VrCoreInteractable" },
		{ "Comment", "/**\n\x09 * Use this if your method of outlining is having duplicate meshes with a world offset material.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractable.h" },
		{ "ToolTip", "Use this if your method of outlining is having duplicate meshes with a world offset material." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_HighlightedMeshes = { "HighlightedMeshes", nullptr, (EPropertyFlags)0x002008800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreInteractable, HighlightedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_HighlightedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_HighlightedMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseSeparateMeshesForHighlighting_MetaData[] = {
		{ "Category", "VrCoreInteractable" },
		{ "Comment", "/**\n\x09 * Use this if your method of outlining is having duplicate meshes with a world offset material.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractable.h" },
		{ "ToolTip", "Use this if your method of outlining is having duplicate meshes with a world offset material." },
	};
#endif
	void Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseSeparateMeshesForHighlighting_SetBit(void* Obj)
	{
		((AVrCoreInteractable*)Obj)->bUseSeparateMeshesForHighlighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseSeparateMeshesForHighlighting = { "bUseSeparateMeshesForHighlighting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVrCoreInteractable), &Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseSeparateMeshesForHighlighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseSeparateMeshesForHighlighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseSeparateMeshesForHighlighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bActorUsesTick_MetaData[] = {
		{ "Category", "VrCoreInteractable" },
		{ "Comment", "/**\n\x09 * This overrides the default actor tick setting for showing the tip to the user.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractable.h" },
		{ "ToolTip", "This overrides the default actor tick setting for showing the tip to the user." },
	};
#endif
	void Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bActorUsesTick_SetBit(void* Obj)
	{
		((AVrCoreInteractable*)Obj)->bActorUsesTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bActorUsesTick = { "bActorUsesTick", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVrCoreInteractable), &Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bActorUsesTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bActorUsesTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bActorUsesTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bInteractableWithoutGrip_MetaData[] = {
		{ "Category", "VrCoreInteractable" },
		{ "Comment", "/**\n\x09 * Allows for inputs to be sent to object without being gripped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractable.h" },
		{ "ToolTip", "Allows for inputs to be sent to object without being gripped." },
	};
#endif
	void Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bInteractableWithoutGrip_SetBit(void* Obj)
	{
		((AVrCoreInteractable*)Obj)->bInteractableWithoutGrip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bInteractableWithoutGrip = { "bInteractableWithoutGrip", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVrCoreInteractable), &Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bInteractableWithoutGrip_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bInteractableWithoutGrip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bInteractableWithoutGrip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_AudioResponse_MetaData[] = {
		{ "Category", "VrCoreInteractable" },
		{ "Comment", "/**\n\x09 * Don't neglect an opportunity for an audio response from user input.\n\x09 * If you don't think you need one, then think a little more.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/VrCoreInteractable.h" },
		{ "ToolTip", "Don't neglect an opportunity for an audio response from user input.\nIf you don't think you need one, then think a little more." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_AudioResponse = { "AudioResponse", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVrCoreInteractable, AudioResponse), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_AudioResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_AudioResponse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVrCoreInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_Tip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_HighlightedMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_HighlightedMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bUseSeparateMeshesForHighlighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bActorUsesTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_bInteractableWithoutGrip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrCoreInteractable_Statics::NewProp_AudioResponse,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVrCoreInteractable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVrCoreInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AVrCoreInteractable, IVrCoreInteractableInterface), false },  // 3615427051
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrCoreInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrCoreInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrCoreInteractable_Statics::ClassParams = {
		&AVrCoreInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVrCoreInteractable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreInteractable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVrCoreInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVrCoreInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVrCoreInteractable()
	{
		if (!Z_Registration_Info_UClass_AVrCoreInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrCoreInteractable.OuterSingleton, Z_Construct_UClass_AVrCoreInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVrCoreInteractable.OuterSingleton;
	}
	template<> VRCORE_API UClass* StaticClass<AVrCoreInteractable>()
	{
		return AVrCoreInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrCoreInteractable);
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVrCoreInteractable, AVrCoreInteractable::StaticClass, TEXT("AVrCoreInteractable"), &Z_Registration_Info_UClass_AVrCoreInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrCoreInteractable), 859808304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractable_h_1802588972(TEXT("/Script/VrCore"),
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_VrCoreInteractable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
