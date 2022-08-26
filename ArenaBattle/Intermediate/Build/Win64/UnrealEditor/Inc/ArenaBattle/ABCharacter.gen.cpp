// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattle/ABCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacter() {}
// Cross Module References
	ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacter_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ArenaBattle();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_AABWeapon_NoRegister();
	ARENABATTLE_API UClass* Z_Construct_UClass_UABAnimInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AABCharacter::execOnAttackMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	void AABCharacter::StaticRegisterNativesAABCharacter()
	{
		UClass* Class = AABCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackMontageEnded", &AABCharacter::execOnAttackMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics
	{
		struct ABCharacter_eventOnAttackMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABCharacter_eventOnAttackMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((ABCharacter_eventOnAttackMontageEnded_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABCharacter_eventOnAttackMontageEnded_Parms), &Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABCharacter, nullptr, "OnAttackMontageEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::ABCharacter_eventOnAttackMontageEnded_Parms), Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABCharacter);
	UClass* Z_Construct_UClass_AABCharacter_NoRegister()
	{
		return AABCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AABCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCharStat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mCharStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mHPBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mHPBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_curWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_curWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttacking_MetaData[];
#endif
		static void NewProp_bAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mABAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mABAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanNextCombo_MetaData[];
#endif
		static void NewProp_bCanNextCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanNextCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComboInputOn_MetaData[];
#endif
		static void NewProp_bComboInputOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComboInputOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mCurrentCombo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mCurrentCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mMaxCombo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_mMaxCombo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AABCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AABCharacter_OnAttackMontageEnded, "OnAttackMontageEnded" }, // 352743505
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ABCharacter.h" },
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_mSpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_mSpringArm = { "mSpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, mSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_mSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_mSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_mCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_mCamera = { "mCamera", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, mCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_mCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_mCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_mCharStat_MetaData[] = {
		{ "Category", "Stat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_mCharStat = { "mCharStat", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, mCharStat), Z_Construct_UClass_UABCharacterStatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_mCharStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_mCharStat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_mHPBar_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_mHPBar = { "mHPBar", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, mHPBar), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_mHPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_mHPBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_curWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_curWeapon = { "curWeapon", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, curWeapon), Z_Construct_UClass_AABWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_curWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_curWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_bAttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AABCharacter_Statics::NewProp_bAttacking_SetBit(void* Obj)
	{
		((AABCharacter*)Obj)->bAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_bAttacking = { "bAttacking", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AABCharacter), &Z_Construct_UClass_AABCharacter_Statics::NewProp_bAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_bAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_bAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_mABAnim_MetaData[] = {
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_mABAnim = { "mABAnim", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, mABAnim), Z_Construct_UClass_UABAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_mABAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_mABAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_bCanNextCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "Comment", "//???? ?\xde\xba????? ?\xcc\xb5? ???? ????\n" },
		{ "ModuleRelativePath", "ABCharacter.h" },
		{ "ToolTip", "???? ?\xde\xba????? ?\xcc\xb5? ???? ????" },
	};
#endif
	void Z_Construct_UClass_AABCharacter_Statics::NewProp_bCanNextCombo_SetBit(void* Obj)
	{
		((AABCharacter*)Obj)->bCanNextCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_bCanNextCombo = { "bCanNextCombo", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AABCharacter), &Z_Construct_UClass_AABCharacter_Statics::NewProp_bCanNextCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_bCanNextCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_bCanNextCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_bComboInputOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "Comment", "//?\xde\xba? ?\xd4\xb7? ????\n" },
		{ "ModuleRelativePath", "ABCharacter.h" },
		{ "ToolTip", "?\xde\xba? ?\xd4\xb7? ????" },
	};
#endif
	void Z_Construct_UClass_AABCharacter_Statics::NewProp_bComboInputOn_SetBit(void* Obj)
	{
		((AABCharacter*)Obj)->bComboInputOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_bComboInputOn = { "bComboInputOn", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AABCharacter), &Z_Construct_UClass_AABCharacter_Statics::NewProp_bComboInputOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_bComboInputOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_bComboInputOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_mCurrentCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "Comment", "//???? ???? ???? ?\xde\xba? \xc4\xab????\n" },
		{ "ModuleRelativePath", "ABCharacter.h" },
		{ "ToolTip", "???? ???? ???? ?\xde\xba? \xc4\xab????" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_mCurrentCombo = { "mCurrentCombo", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, mCurrentCombo), METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_mCurrentCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_mCurrentCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_mMaxCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "Comment", "//?\xde\xba?\xc4\xab?????? ?\xd6\xb4?\xc4\xa1\n" },
		{ "ModuleRelativePath", "ABCharacter.h" },
		{ "ToolTip", "?\xde\xba?\xc4\xab?????? ?\xd6\xb4?\xc4\xa1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_mMaxCombo = { "mMaxCombo", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, mMaxCombo), METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_mMaxCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_mMaxCombo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "ABCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0040000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AABCharacter, AttackRadius), METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_mSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_mCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_mCharStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_mHPBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_curWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_bAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_mABAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_bCanNextCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_bComboInputOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_mCurrentCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_mMaxCombo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacter_Statics::NewProp_AttackRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABCharacter_Statics::ClassParams = {
		&AABCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AABCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AABCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABCharacter()
	{
		if (!Z_Registration_Info_UClass_AABCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABCharacter.OuterSingleton, Z_Construct_UClass_AABCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABCharacter.OuterSingleton;
	}
	template<> ARENABATTLE_API UClass* StaticClass<AABCharacter>()
	{
		return AABCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABCharacter);
	struct Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABCharacter, AABCharacter::StaticClass, TEXT("AABCharacter"), &Z_Registration_Info_UClass_AABCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABCharacter), 2841174322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacter_h_373341270(TEXT("/Script/ArenaBattle"),
		Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaBattle_Source_ArenaBattle_ABCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
