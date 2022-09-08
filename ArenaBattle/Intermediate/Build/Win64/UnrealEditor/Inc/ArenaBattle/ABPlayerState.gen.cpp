// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerState() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerState_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void AABPlayerState::StaticRegisterNativesAABPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABPlayerState);
	UClass* Z_Construct_UClass_AABPlayerState_NoRegister()
	{
		return AABPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AABPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mGameScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGameHighScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mGameHighScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCharacterLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mCharacterLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mExp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mExp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ABPlayerState.h" },
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameScore = { "mGameScore", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerState, mGameScore), METADATA_PARAMS(Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameHighScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameHighScore = { "mGameHighScore", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerState, mGameHighScore), METADATA_PARAMS(Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameHighScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameHighScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerState_Statics::NewProp_mCharacterLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_mCharacterLevel = { "mCharacterLevel", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerState, mCharacterLevel), METADATA_PARAMS(Z_Construct_UClass_AABPlayerState_Statics::NewProp_mCharacterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::NewProp_mCharacterLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerState_Statics::NewProp_mExp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABPlayerState_Statics::NewProp_mExp = { "mExp", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerState, mExp), METADATA_PARAMS(Z_Construct_UClass_AABPlayerState_Statics::NewProp_mExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::NewProp_mExp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_mGameHighScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_mCharacterLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerState_Statics::NewProp_mExp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABPlayerState_Statics::ClassParams = {
		&AABPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABPlayerState()
	{
		if (!Z_Registration_Info_UClass_AABPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABPlayerState.OuterSingleton, Z_Construct_UClass_AABPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABPlayerState.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABPlayerState>()
	{
		return AABPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerState);
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABPlayerState, AABPlayerState::StaticClass, TEXT("AABPlayerState"), &Z_Registration_Info_UClass_AABPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABPlayerState), 387241489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerState_h_3153366779(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
