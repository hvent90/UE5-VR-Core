// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VrCore/Public/Interactables/Chair/VrCoreChairInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCoreChairInterface() {}
// Cross Module References
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreChairInterface_NoRegister();
	VRCORE_API UClass* Z_Construct_UClass_UVrCoreChairInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VrCore();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IVrCoreChairInterface::execEject)
	{
		P_GET_OBJECT(AActor,Z_Param_Tenant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Eject_Implementation(Z_Param_Tenant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreChairInterface::execSitInFirstAvailable)
	{
		P_GET_OBJECT(AActor,Z_Param_HopefulTenant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SitInFirstAvailable_Implementation(Z_Param_HopefulTenant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreChairInterface::execSit)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Seat);
		P_GET_OBJECT(AActor,Z_Param_HopefulTenant);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Sit_Implementation(Z_Param_Seat,Z_Param_HopefulTenant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVrCoreChairInterface::execGetAvailableSeats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USceneComponent*>*)Z_Param__Result=P_THIS->GetAvailableSeats_Implementation();
		P_NATIVE_END;
	}
	bool IVrCoreChairInterface::Eject(AActor* Tenant)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Eject instead.");
		VrCoreChairInterface_eventEject_Parms Parms;
		return Parms.ReturnValue;
	}
	TArray<USceneComponent*> IVrCoreChairInterface::GetAvailableSeats()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAvailableSeats instead.");
		VrCoreChairInterface_eventGetAvailableSeats_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVrCoreChairInterface::Sit(USceneComponent* Seat, AActor* HopefulTenant)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Sit instead.");
		VrCoreChairInterface_eventSit_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVrCoreChairInterface::SitInFirstAvailable(AActor* HopefulTenant)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SitInFirstAvailable instead.");
		VrCoreChairInterface_eventSitInFirstAvailable_Parms Parms;
		return Parms.ReturnValue;
	}
	void UVrCoreChairInterface::StaticRegisterNativesUVrCoreChairInterface()
	{
		UClass* Class = UVrCoreChairInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Eject", &IVrCoreChairInterface::execEject },
			{ "GetAvailableSeats", &IVrCoreChairInterface::execGetAvailableSeats },
			{ "Sit", &IVrCoreChairInterface::execSit },
			{ "SitInFirstAvailable", &IVrCoreChairInterface::execSitInFirstAvailable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tenant;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::NewProp_Tenant = { "Tenant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreChairInterface_eventEject_Parms, Tenant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrCoreChairInterface_eventEject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreChairInterface_eventEject_Parms), &Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::NewProp_Tenant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreChairInterface" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreChairInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreChairInterface, nullptr, "Eject", nullptr, nullptr, sizeof(VrCoreChairInterface_eventEject_Parms), Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreChairInterface_Eject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreChairInterface_Eject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreChairInterface_eventGetAvailableSeats_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreChairInterface" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreChairInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreChairInterface, nullptr, "GetAvailableSeats", nullptr, nullptr, sizeof(VrCoreChairInterface_eventGetAvailableSeats_Parms), Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Seat;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HopefulTenant;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_Seat_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_Seat = { "Seat", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreChairInterface_eventSit_Parms, Seat), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_Seat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_Seat_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_HopefulTenant = { "HopefulTenant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreChairInterface_eventSit_Parms, HopefulTenant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrCoreChairInterface_eventSit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreChairInterface_eventSit_Parms), &Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_Seat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_HopefulTenant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreChairInterface" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreChairInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreChairInterface, nullptr, "Sit", nullptr, nullptr, sizeof(VrCoreChairInterface_eventSit_Parms), Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreChairInterface_Sit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreChairInterface_Sit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HopefulTenant;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::NewProp_HopefulTenant = { "HopefulTenant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrCoreChairInterface_eventSitInFirstAvailable_Parms, HopefulTenant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrCoreChairInterface_eventSitInFirstAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrCoreChairInterface_eventSitInFirstAvailable_Parms), &Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::NewProp_HopefulTenant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "VrCoreChairInterface" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreChairInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrCoreChairInterface, nullptr, "SitInFirstAvailable", nullptr, nullptr, sizeof(VrCoreChairInterface_eventSitInFirstAvailable_Parms), Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrCoreChairInterface);
	UClass* Z_Construct_UClass_UVrCoreChairInterface_NoRegister()
	{
		return UVrCoreChairInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVrCoreChairInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrCoreChairInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VrCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrCoreChairInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrCoreChairInterface_Eject, "Eject" }, // 2206790473
		{ &Z_Construct_UFunction_UVrCoreChairInterface_GetAvailableSeats, "GetAvailableSeats" }, // 2890688657
		{ &Z_Construct_UFunction_UVrCoreChairInterface_Sit, "Sit" }, // 4112597286
		{ &Z_Construct_UFunction_UVrCoreChairInterface_SitInFirstAvailable, "SitInFirstAvailable" }, // 3723289514
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrCoreChairInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactables/Chair/VrCoreChairInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrCoreChairInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVrCoreChairInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrCoreChairInterface_Statics::ClassParams = {
		&UVrCoreChairInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVrCoreChairInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrCoreChairInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrCoreChairInterface()
	{
		if (!Z_Registration_Info_UClass_UVrCoreChairInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrCoreChairInterface.OuterSingleton, Z_Construct_UClass_UVrCoreChairInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrCoreChairInterface.OuterSingleton;
	}
	template<> VRCORE_API UClass* StaticClass<UVrCoreChairInterface>()
	{
		return UVrCoreChairInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrCoreChairInterface);
	static FName NAME_UVrCoreChairInterface_Eject = FName(TEXT("Eject"));
	bool IVrCoreChairInterface::Execute_Eject(UObject* O, AActor* Tenant)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreChairInterface::StaticClass()));
		VrCoreChairInterface_eventEject_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreChairInterface_Eject);
		if (Func)
		{
			Parms.Tenant=Tenant;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreChairInterface*)(O->GetNativeInterfaceAddress(UVrCoreChairInterface::StaticClass())))
		{
			Parms.ReturnValue = I->Eject_Implementation(Tenant);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVrCoreChairInterface_GetAvailableSeats = FName(TEXT("GetAvailableSeats"));
	TArray<USceneComponent*> IVrCoreChairInterface::Execute_GetAvailableSeats(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreChairInterface::StaticClass()));
		VrCoreChairInterface_eventGetAvailableSeats_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreChairInterface_GetAvailableSeats);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreChairInterface*)(O->GetNativeInterfaceAddress(UVrCoreChairInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAvailableSeats_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVrCoreChairInterface_Sit = FName(TEXT("Sit"));
	bool IVrCoreChairInterface::Execute_Sit(UObject* O, USceneComponent* Seat, AActor* HopefulTenant)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreChairInterface::StaticClass()));
		VrCoreChairInterface_eventSit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreChairInterface_Sit);
		if (Func)
		{
			Parms.Seat=Seat;
			Parms.HopefulTenant=HopefulTenant;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreChairInterface*)(O->GetNativeInterfaceAddress(UVrCoreChairInterface::StaticClass())))
		{
			Parms.ReturnValue = I->Sit_Implementation(Seat,HopefulTenant);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVrCoreChairInterface_SitInFirstAvailable = FName(TEXT("SitInFirstAvailable"));
	bool IVrCoreChairInterface::Execute_SitInFirstAvailable(UObject* O, AActor* HopefulTenant)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVrCoreChairInterface::StaticClass()));
		VrCoreChairInterface_eventSitInFirstAvailable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVrCoreChairInterface_SitInFirstAvailable);
		if (Func)
		{
			Parms.HopefulTenant=HopefulTenant;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVrCoreChairInterface*)(O->GetNativeInterfaceAddress(UVrCoreChairInterface::StaticClass())))
		{
			Parms.ReturnValue = I->SitInFirstAvailable_Implementation(HopefulTenant);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrCoreChairInterface, UVrCoreChairInterface::StaticClass, TEXT("UVrCoreChairInterface"), &Z_Registration_Info_UClass_UVrCoreChairInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrCoreChairInterface), 831416493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_389361712(TEXT("/Script/VrCore"),
		Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VrPlugin_Plugins_VrCore_Source_VrCore_Public_Interactables_Chair_VrCoreChairInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
