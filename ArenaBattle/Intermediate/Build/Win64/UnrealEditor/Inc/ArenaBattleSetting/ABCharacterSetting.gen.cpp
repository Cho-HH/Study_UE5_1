// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattleSetting/Public/ABCharacterSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterSetting() {}
// Cross Module References
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister();
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UABCharacterSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ArenaBattleSetting();
// End Cross Module References
	void UABCharacterSetting::StaticRegisterNativesUABCharacterSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterSetting);
	UClass* Z_Construct_UClass_UABCharacterSetting_NoRegister()
	{
		return UABCharacterSetting::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattleSetting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ABCharacterSetting.h" },
		{ "ModuleRelativePath", "Public/ABCharacterSetting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterSetting_Statics::ClassParams = {
		&UABCharacterSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCharacterSetting()
	{
		if (!Z_Registration_Info_UClass_UABCharacterSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterSetting.OuterSingleton, Z_Construct_UClass_UABCharacterSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABCharacterSetting.OuterSingleton;
	}
	template<> ARENABATTLESETTING_API UClass* StaticClass<UABCharacterSetting>()
	{
		return UABCharacterSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterSetting);
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattleSetting_Public_ABCharacterSetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattleSetting_Public_ABCharacterSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterSetting, UABCharacterSetting::StaticClass, TEXT("UABCharacterSetting"), &Z_Registration_Info_UClass_UABCharacterSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterSetting), 1460799767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattleSetting_Public_ABCharacterSetting_h_626189304(TEXT("/Script/ArenaBattleSetting"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattleSetting_Public_ABCharacterSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattleSetting_Public_ABCharacterSetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
