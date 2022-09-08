// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/Public/ArenaBattle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaBattle() {}
// Cross Module References
	ARENABATTLE_API UEnum* Z_Construct_UEnum_ArenaBattle_ECharacterState();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
	static UEnum* ECharacterState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ArenaBattle_ECharacterState, Z_Construct_UPackage__Script_ArenaBattle(), TEXT("ECharacterState"));
		}
		return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
	}
	template<> ARENABATTLE_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	struct Z_Construct_UEnum_ArenaBattle_ECharacterState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ArenaBattle_ECharacterState_Statics::Enumerators[] = {
		{ "ECharacterState::PREINIT", (int64)ECharacterState::PREINIT },
		{ "ECharacterState::LOADING", (int64)ECharacterState::LOADING },
		{ "ECharacterState::READY", (int64)ECharacterState::READY },
		{ "ECharacterState::DEAD", (int64)ECharacterState::DEAD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ArenaBattle_ECharacterState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DEAD.Name", "ECharacterState::DEAD" },
		{ "LOADING.Name", "ECharacterState::LOADING" },
		{ "ModuleRelativePath", "Public/ArenaBattle.h" },
		{ "PREINIT.Name", "ECharacterState::PREINIT" },
		{ "READY.Name", "ECharacterState::READY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ArenaBattle_ECharacterState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ArenaBattle,
		nullptr,
		"ECharacterState",
		"ECharacterState",
		Z_Construct_UEnum_ArenaBattle_ECharacterState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle_ECharacterState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ArenaBattle_ECharacterState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ArenaBattle_ECharacterState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ArenaBattle_ECharacterState()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_ArenaBattle_ECharacterState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ArenaBattle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ArenaBattle_h_Statics::EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2123950064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ArenaBattle_h_3498218522(TEXT("/Script/ArenaBattle"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ArenaBattle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_Public_ArenaBattle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
