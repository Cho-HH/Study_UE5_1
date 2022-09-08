// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetest2_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_test2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_test2()
	{
		if (!Z_Registration_Info_UPackage__Script_test2.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/test2",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x58CEA211,
				0x83D5B038,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_test2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_test2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_test2(Z_Construct_UPackage__Script_test2, TEXT("/Script/test2"), Z_Registration_Info_UPackage__Script_test2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x58CEA211, 0x83D5B038));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
