// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSaveGame() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABSaveGame_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABSaveGame::StaticRegisterNativesUABSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABSaveGame);
	UClass* Z_Construct_UClass_UABSaveGame_NoRegister()
	{
		return UABSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UABSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mExp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mExp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_mPlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHighScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mHighScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABSaveGame.h" },
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::NewProp_mLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_mLevel = { "mLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABSaveGame, mLevel), METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::NewProp_mLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::NewProp_mLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::NewProp_mExp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_mExp = { "mExp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABSaveGame, mExp), METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::NewProp_mExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::NewProp_mExp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::NewProp_mPlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_mPlayerName = { "mPlayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABSaveGame, mPlayerName), METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::NewProp_mPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::NewProp_mPlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABSaveGame_Statics::NewProp_mHighScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UABSaveGame_Statics::NewProp_mHighScore = { "mHighScore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABSaveGame, mHighScore), METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::NewProp_mHighScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::NewProp_mHighScore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_mLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_mExp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_mPlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABSaveGame_Statics::NewProp_mHighScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABSaveGame_Statics::ClassParams = {
		&UABSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABSaveGame()
	{
		if (!Z_Registration_Info_UClass_UABSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABSaveGame.OuterSingleton, Z_Construct_UClass_UABSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABSaveGame.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABSaveGame>()
	{
		return UABSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABSaveGame);
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABSaveGame, UABSaveGame::StaticClass, TEXT("UABSaveGame"), &Z_Registration_Info_UClass_UABSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABSaveGame), 3712763600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSaveGame_h_1785752768(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
