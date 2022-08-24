// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/ABCharacterStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterStatComponent() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	void UABCharacterStatComponent::StaticRegisterNativesUABCharacterStatComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterStatComponent);
	UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister()
	{
		return UABCharacterStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ABCharacterStatComponent.h" },
		{ "ModuleRelativePath", "ABCharacterStatComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterStatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterStatComponent_Statics::ClassParams = {
		&UABCharacterStatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABCharacterStatComponent()
	{
		if (!Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton, Z_Construct_UClass_UABCharacterStatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<UABCharacterStatComponent>()
	{
		return UABCharacterStatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterStatComponent);
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterStatComponent, UABCharacterStatComponent::StaticClass, TEXT("UABCharacterStatComponent"), &Z_Registration_Info_UClass_UABCharacterStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterStatComponent), 1957594997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_3599647174(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacterStatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
