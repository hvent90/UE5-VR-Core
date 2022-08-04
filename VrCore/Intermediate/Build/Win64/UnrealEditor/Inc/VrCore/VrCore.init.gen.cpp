// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VrCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VrCore()
	{
		if (!Z_Registration_Info_UPackage__Script_VrCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VrCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCC5DDE16,
				0x705B43C9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VrCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VrCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VrCore(Z_Construct_UPackage__Script_VrCore, TEXT("/Script/VrCore"), Z_Registration_Info_UPackage__Script_VrCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCC5DDE16, 0x705B43C9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
