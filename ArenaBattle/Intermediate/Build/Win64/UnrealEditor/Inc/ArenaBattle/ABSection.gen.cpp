// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSection() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABSection_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABSection();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AABSection::StaticRegisterNativesAABSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABSection);
	UClass* Z_Construct_UClass_AABSection_NoRegister()
	{
		return AABSection::StaticClass();
	}
	struct Z_Construct_UClass_AABSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGateMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGateMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mGateMeshes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mGateTriggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mGateTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_mGateTriggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mbNoBattle_MetaData[];
#endif
		static void NewProp_mbNoBattle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mbNoBattle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABSection.h" },
		{ "ModuleRelativePath", "Public/ABSection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABSection_Statics::NewProp_mMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABSection_Statics::NewProp_mMesh = { "mMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABSection, mMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABSection_Statics::NewProp_mMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABSection_Statics::NewProp_mMesh_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABSection_Statics::NewProp_mGateMeshes_Inner = { "mGateMeshes", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABSection_Statics::NewProp_mGateMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABSection_Statics::NewProp_mGateMeshes = { "mGateMeshes", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABSection, mGateMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AABSection_Statics::NewProp_mGateMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABSection_Statics::NewProp_mGateMeshes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABSection_Statics::NewProp_mGateTriggers_Inner = { "mGateTriggers", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABSection_Statics::NewProp_mGateTriggers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Trigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABSection_Statics::NewProp_mGateTriggers = { "mGateTriggers", nullptr, (EPropertyFlags)0x0040008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABSection, mGateTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AABSection_Statics::NewProp_mGateTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABSection_Statics::NewProp_mGateTriggers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABSection_Statics::NewProp_mTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Trigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABSection_Statics::NewProp_mTrigger = { "mTrigger", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABSection, mTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABSection_Statics::NewProp_mTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABSection_Statics::NewProp_mTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABSection_Statics::NewProp_mbNoBattle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/ABSection.h" },
	};
#endif
	void Z_Construct_UClass_AABSection_Statics::NewProp_mbNoBattle_SetBit(void* Obj)
	{
		((AABSection*)Obj)->mbNoBattle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AABSection_Statics::NewProp_mbNoBattle = { "mbNoBattle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AABSection), &Z_Construct_UClass_AABSection_Statics::NewProp_mbNoBattle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AABSection_Statics::NewProp_mbNoBattle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABSection_Statics::NewProp_mbNoBattle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABSection_Statics::NewProp_mMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABSection_Statics::NewProp_mGateMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABSection_Statics::NewProp_mGateMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABSection_Statics::NewProp_mGateTriggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABSection_Statics::NewProp_mGateTriggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABSection_Statics::NewProp_mTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABSection_Statics::NewProp_mbNoBattle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABSection_Statics::ClassParams = {
		&AABSection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABSection_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABSection()
	{
		if (!Z_Registration_Info_UClass_AABSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABSection.OuterSingleton, Z_Construct_UClass_AABSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABSection.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABSection>()
	{
		return AABSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABSection);
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABSection, AABSection::StaticClass, TEXT("AABSection"), &Z_Registration_Info_UClass_AABSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABSection), 3498852801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSection_h_1048579267(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
