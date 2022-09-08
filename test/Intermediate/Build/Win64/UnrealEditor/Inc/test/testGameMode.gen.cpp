// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "test/testGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetestGameMode() {}
// Cross Module References
	TEST_API UClass* Z_Construct_UClass_AtestGameMode_NoRegister();
	TEST_API UClass* Z_Construct_UClass_AtestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_test();
// End Cross Module References
	void AtestGameMode::StaticRegisterNativesAtestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AtestGameMode);
	UClass* Z_Construct_UClass_AtestGameMode_NoRegister()
	{
		return AtestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AtestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AtestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "testGameMode.h" },
		{ "ModuleRelativePath", "testGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AtestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AtestGameMode_Statics::ClassParams = {
		&AtestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AtestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AtestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AtestGameMode()
	{
		if (!Z_Registration_Info_UClass_AtestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AtestGameMode.OuterSingleton, Z_Construct_UClass_AtestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AtestGameMode.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<AtestGameMode>()
	{
		return AtestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtestGameMode);
	struct Z_CompiledInDeferFile_FID_test_Source_test_testGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_Source_test_testGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AtestGameMode, AtestGameMode::StaticClass, TEXT("AtestGameMode"), &Z_Registration_Info_UClass_AtestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AtestGameMode), 4236522985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_Source_test_testGameMode_h_586242565(TEXT("/Script/test"),
		Z_CompiledInDeferFile_FID_test_Source_test_testGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_Source_test_testGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
