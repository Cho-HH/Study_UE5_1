// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "test2/test2GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetest2GameModeBase() {}
// Cross Module References
	TEST2_API UClass* Z_Construct_UClass_Atest2GameModeBase_NoRegister();
	TEST2_API UClass* Z_Construct_UClass_Atest2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_test2();
// End Cross Module References
	void Atest2GameModeBase::StaticRegisterNativesAtest2GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Atest2GameModeBase);
	UClass* Z_Construct_UClass_Atest2GameModeBase_NoRegister()
	{
		return Atest2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Atest2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atest2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_test2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atest2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "test2GameModeBase.h" },
		{ "ModuleRelativePath", "test2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atest2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atest2GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Atest2GameModeBase_Statics::ClassParams = {
		&Atest2GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Atest2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atest2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atest2GameModeBase()
	{
		if (!Z_Registration_Info_UClass_Atest2GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Atest2GameModeBase.OuterSingleton, Z_Construct_UClass_Atest2GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Atest2GameModeBase.OuterSingleton;
	}
	template<> TEST2_API UClass* StaticClass<Atest2GameModeBase>()
	{
		return Atest2GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atest2GameModeBase);
	struct Z_CompiledInDeferFile_FID_test2_Source_test2_test2GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test2_Source_test2_test2GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Atest2GameModeBase, Atest2GameModeBase::StaticClass, TEXT("Atest2GameModeBase"), &Z_Registration_Info_UClass_Atest2GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Atest2GameModeBase), 2452110437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test2_Source_test2_test2GameModeBase_h_4170739422(TEXT("/Script/test2"),
		Z_CompiledInDeferFile_FID_test2_Source_test2_test2GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test2_Source_test2_test2GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
