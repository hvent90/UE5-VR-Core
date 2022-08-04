// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/Interactables/Chair/VrCoreSittableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCoreSittableInterface() {}
// Cross Module References
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreSittableInterface_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreSittableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VrCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IVrCoreSittableInterface::execGetInitialRelativeLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInitialRelativeLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreSittableInterface::execEject)
	{
		P_GET_STRUCT(FVector,Z_Param_ExitLocation);
		P_GET_STRUCT(FRotator,Z_Param_ExitRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Eject_Implementation(Z_Param_ExitLocation,Z_Param_ExitRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreSittableInterface::execSit)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Seat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sit_Implementation(Z_Param_Seat);
		P_NATIVE_END;
	}
	void IVrCoreSittableInterface::Eject(FVector ExitLocation, FRotator ExitRotation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Eject instead.");
	}
	FVector IVrCoreSittableInterface::GetInitialRelativeLocation()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInitialRelativeLocation instead.");
		VrCoreSittableInterface_eventGetInitialRelativeLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVrCoreSittableInterface::Sit(USceneComponent* Seat)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Sit instead.");
	}
	void UVrCoreSittableInterface::StaticRegisterNativesUVrCoreSittableInterface()
	{
		UClass* Class = UVrCoreSittableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Eject", &IVrCoreSittableInterface::execEject },
			{ "GetInitialRelativeLocation", &IVrCoreSittableInterface::execGetInitialRelativeLocation },
			{ "Sit", &IVrCoreSittableInterface::execSit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExitLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExitRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::NewProp_ExitLocation = { "ExitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreSittableInterface_eventEject_Parms, ExitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::NewProp_ExitRotation = { "ExitRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreSittableInterface_eventEject_Parms, ExitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::NewProp_ExitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::NewProp_ExitRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreSittableInterface" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreSittableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreSittableInterface, nullptr, "Eject", nullptr, nullptr, sizeof(VrCoreSittableInterface_eventEject_Parms), Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreSittableInterface_Eject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreSittableInterface_Eject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreSittableInterface_eventGetInitialRelativeLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreSittableInterface" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreSittableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreSittableInterface, nullptr, "GetInitialRelativeLocation", nullptr, nullptr, sizeof(VrCoreSittableInterface_eventGetInitialRelativeLocation_Parms), Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Seat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::NewProp_Seat_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::NewProp_Seat = { "Seat", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreSittableInterface_eventSit_Parms, Seat), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::NewProp_Seat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::NewProp_Seat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::NewProp_Seat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreSittableInterface" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreSittableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreSittableInterface, nullptr, "Sit", nullptr, nullptr, sizeof(VrCoreSittableInterface_eventSit_Parms), Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreSittableInterface_Sit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreSittableInterface_Sit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrCoreSittableInterface);
	UClass* Z_Construct_UClass_UVrCoreSittableInterface_NoRegister()
	{
		return UVrCoreSittableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVrCoreSittableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrCoreSittableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrCoreSittableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrCoreSittableInterface_Eject, "Eject" }, // 2791622769
		{ &Z_Construct_UFunction_UVrCoreSittableInterface_GetInitialRelativeLocation, "GetInitialRelativeLocation" }, // 3998262770
		{ &Z_Construct_UFunction_UVrCoreSittableInterface_Sit, "Sit" }, // 1843731424
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreSittableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreSittableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrCoreSittableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVrCoreSittableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrCoreSittableInterface_Statics::ClassParams = {
		&UVrCoreSittableInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVrCoreSittableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreSittableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrCoreSittableInterface()
	{
		if (!Z_Registration_Info_UClass_UVrCoreSittableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrCoreSittableInterface.OuterSingleton, Z_Construct_UClass_UVrCoreSittableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrCoreSittableInterface.OuterSingleton;
	}
	template<> VRCORE_API UClass* StaticClass<UVrCoreSittableInterface>()
	{
		return UVrCoreSittableInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrCoreSittableInterface);
	static FName NAME_UVrCoreSittableInterface_Eject = FName(TEXT("Eject"));
	void IVrCoreSittableInterface::Execute_Eject(UObject* O, FVector ExitLocation, FRotator ExitRotation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreSittableInterface::StaticClass()));
		VrCoreSittableInterface_eventEject_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreSittableInterface_Eject);
		if (Func)
		{
			Parms.ExitLocation=ExitLocation;
			Parms.ExitRotation=ExitRotation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreSittableInterface*)(O->GetNativeInterfaceAddress(UVrCoreSittableInterface::StaticClass())))
		{
			I->Eject_Implementation(ExitLocation,ExitRotation);
		}
	}
	static FName NAME_UVrCoreSittableInterface_GetInitialRelativeLocation = FName(TEXT("GetInitialRelativeLocation"));
	FVector IVrCoreSittableInterface::Execute_GetInitialRelativeLocation(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreSittableInterface::StaticClass()));
		VrCoreSittableInterface_eventGetInitialRelativeLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreSittableInterface_GetInitialRelativeLocation);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreSittableInterface*)(O->GetNativeInterfaceAddress(UVrCoreSittableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInitialRelativeLocation_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVrCoreSittableInterface_Sit = FName(TEXT("Sit"));
	void IVrCoreSittableInterface::Execute_Sit(UObject* O, USceneComponent* Seat)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreSittableInterface::StaticClass()));
		VrCoreSittableInterface_eventSit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreSittableInterface_Sit);
		if (Func)
		{
			Parms.Seat=Seat;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreSittableInterface*)(O->GetNativeInterfaceAddress(UVrCoreSittableInterface::StaticClass())))
		{
			I->Sit_Implementation(Seat);
		}
	}
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrCoreSittableInterface, UVrCoreSittableInterface::StaticClass, TEXT("UVrCoreSittableInterface"), &Z_Registration_Info_UClass_UVrCoreSittableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrCoreSittableInterface), 576900013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_3695071073(TEXT("/Script/VrCore"),
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreSittableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
