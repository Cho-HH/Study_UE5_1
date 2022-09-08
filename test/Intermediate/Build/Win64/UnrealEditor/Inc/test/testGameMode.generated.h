// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_testGameMode_generated_h
#error "testGameMode.generated.h already included, missing '#pragma once' in testGameMode.h"
#endif
#define TEST_testGameMode_generated_h

#define FID_test_Source_test_testGameMode_h_12_SPARSE_DATA
#define FID_test_Source_test_testGameMode_h_12_RPC_WRAPPERS
#define FID_test_Source_test_testGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_test_Source_test_testGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtestGameMode(); \
	friend struct Z_Construct_UClass_AtestGameMode_Statics; \
public: \
	DECLARE_CLASS(AtestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/test"), TEST_API) \
	DECLARE_SERIALIZER(AtestGameMode)


#define FID_test_Source_test_testGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAtestGameMode(); \
	friend struct Z_Construct_UClass_AtestGameMode_Statics; \
public: \
	DECLARE_CLASS(AtestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/test"), TEST_API) \
	DECLARE_SERIALIZER(AtestGameMode)


#define FID_test_Source_test_testGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEST_API AtestGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEST_API, AtestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEST_API AtestGameMode(AtestGameMode&&); \
	TEST_API AtestGameMode(const AtestGameMode&); \
public:


#define FID_test_Source_test_testGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEST_API AtestGameMode(AtestGameMode&&); \
	TEST_API AtestGameMode(const AtestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEST_API, AtestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtestGameMode)


#define FID_test_Source_test_testGameMode_h_9_PROLOG
#define FID_test_Source_test_testGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_Source_test_testGameMode_h_12_SPARSE_DATA \
	FID_test_Source_test_testGameMode_h_12_RPC_WRAPPERS \
	FID_test_Source_test_testGameMode_h_12_INCLASS \
	FID_test_Source_test_testGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_test_Source_test_testGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_Source_test_testGameMode_h_12_SPARSE_DATA \
	FID_test_Source_test_testGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_Source_test_testGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_test_Source_test_testGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class AtestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_Source_test_testGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
