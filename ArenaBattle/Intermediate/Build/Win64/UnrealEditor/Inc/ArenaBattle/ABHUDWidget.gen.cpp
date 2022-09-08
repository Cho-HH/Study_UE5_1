// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABHUDWidget() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UABHUDWidget::StaticRegisterNativesUABHUDWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABHUDWidget);
	UClass* Z_Construct_UClass_UABHUDWidget_NoRegister()
	{
		return UABHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UABHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHPBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mHPBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mExpBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mExpBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mPlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPlayerLevel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mPlayerLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCurScore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCurScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHighScore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mHighScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABHUDWidget.h" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHPBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHPBar = { "mHPBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, mHPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHPBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mExpBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mExpBar = { "mExpBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, mExpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mExpBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mExpBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerName = { "mPlayerName", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, mPlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerLevel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerLevel = { "mPlayerLevel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, mPlayerLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mCurScore_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mCurScore = { "mCurScore", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, mCurScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mCurScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mCurScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHighScore_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHighScore = { "mHighScore", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABHUDWidget, mHighScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHighScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHighScore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABHUDWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHPBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mExpBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mPlayerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mCurScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABHUDWidget_Statics::NewProp_mHighScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABHUDWidget_Statics::ClassParams = {
		&UABHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UABHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABHUDWidget.OuterSingleton, Z_Construct_UClass_UABHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABHUDWidget.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABHUDWidget>()
	{
		return UABHUDWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABHUDWidget);
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABHUDWidget, UABHUDWidget::StaticClass, TEXT("UABHUDWidget"), &Z_Registration_Info_UClass_UABHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABHUDWidget), 433328433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABHUDWidget_h_2159471742(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
