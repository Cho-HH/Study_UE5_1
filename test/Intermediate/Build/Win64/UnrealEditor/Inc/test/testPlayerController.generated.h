// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_testPlayerController_generated_h
#error "testPlayerController.generated.h already included, missing '#pragma once' in testPlayerController.h"
#endif
#define TEST_testPlayerController_generated_h

#define FID_test_Source_test_testPlayerController_h_16_SPARSE_DATA
#define FID_test_Source_test_testPlayerController_h_16_RPC_WRAPPERS
#define FID_test_Source_test_testPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_test_Source_test_testPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtestPlayerController(); \
	friend struct Z_Construct_UClass_AtestPlayerController_Statics; \
public: \
	DECLARE_CLASS(AtestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test"), NO_API) \
	DECLARE_SERIALIZER(AtestPlayerController)


#define FID_test_Source_test_testPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAtestPlayerController(); \
	friend struct Z_Construct_UClass_AtestPlayerController_Statics; \
public: \
	DECLARE_CLASS(AtestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/test"), NO_API) \
	DECLARE_SERIALIZER(AtestPlayerController)


#define FID_test_Source_test_testPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtestPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtestPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestPlayerController(AtestPlayerController&&); \
	NO_API AtestPlayerController(const AtestPlayerController&); \
public:


#define FID_test_Source_test_testPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestPlayerController(AtestPlayerController&&); \
	NO_API AtestPlayerController(const AtestPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AtestPlayerController)


#define FID_test_Source_test_testPlayerController_h_13_PROLOG
#define FID_test_Source_test_testPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_Source_test_testPlayerController_h_16_SPARSE_DATA \
	FID_test_Source_test_testPlayerController_h_16_RPC_WRAPPERS \
	FID_test_Source_test_testPlayerController_h_16_INCLASS \
	FID_test_Source_test_testPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_test_Source_test_testPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_Source_test_testPlayerController_h_16_SPARSE_DATA \
	FID_test_Source_test_testPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_Source_test_testPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_test_Source_test_testPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class AtestPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_Source_test_testPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
