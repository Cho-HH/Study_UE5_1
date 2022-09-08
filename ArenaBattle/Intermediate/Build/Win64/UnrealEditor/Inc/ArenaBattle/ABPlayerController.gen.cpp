// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ABPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerController() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerController_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABPlayerState_NoRegister();
// End Cross Module References
	void AABPlayerController::StaticRegisterNativesAABPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABPlayerController);
	UClass* Z_Construct_UClass_AABPlayerController_NoRegister()
	{
		return AABPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AABPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_mHUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mHUDWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mPlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ABPlayerController.h" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidgetClass = { "mHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerController, mHUDWidgetClass), Z_Construct_UClass_UABHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidget = { "mHUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerController, mHUDWidget), Z_Construct_UClass_UABHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::NewProp_mPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ABPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_mPlayerState = { "mPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABPlayerController, mPlayerState), Z_Construct_UClass_AABPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABPlayerController_Statics::NewProp_mPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::NewProp_mPlayerState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_mHUDWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_mPlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABPlayerController_Statics::ClassParams = {
		&AABPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABPlayerController()
	{
		if (!Z_Registration_Info_UClass_AABPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABPlayerController.OuterSingleton, Z_Construct_UClass_AABPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABPlayerController.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABPlayerController>()
	{
		return AABPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerController);
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABPlayerController, AABPlayerController::StaticClass, TEXT("AABPlayerController"), &Z_Registration_Info_UClass_AABPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABPlayerController), 3293259900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerController_h_182778263(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ABPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
