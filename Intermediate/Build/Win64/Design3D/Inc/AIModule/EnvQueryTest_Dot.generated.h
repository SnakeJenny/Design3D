// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_EnvQueryTest_Dot_generated_h
#error "EnvQueryTest_Dot.generated.h already included, missing '#pragma once' in EnvQueryTest_Dot.h"
#endif
#define AIMODULE_EnvQueryTest_Dot_generated_h

#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Dot(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Dot_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Dot, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Dot)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEnvQueryTest_Dot(); \
	friend struct Z_Construct_UClass_UEnvQueryTest_Dot_Statics; \
public: \
	DECLARE_CLASS(UEnvQueryTest_Dot, UEnvQueryTest, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UEnvQueryTest_Dot)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryTest_Dot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Dot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryTest_Dot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Dot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UEnvQueryTest_Dot(UEnvQueryTest_Dot&&); \
	AIMODULE_API UEnvQueryTest_Dot(const UEnvQueryTest_Dot&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UEnvQueryTest_Dot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UEnvQueryTest_Dot(UEnvQueryTest_Dot&&); \
	AIMODULE_API UEnvQueryTest_Dot(const UEnvQueryTest_Dot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UEnvQueryTest_Dot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvQueryTest_Dot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvQueryTest_Dot)


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LineA() { return STRUCT_OFFSET(UEnvQueryTest_Dot, LineA); } \
	FORCEINLINE static uint32 __PPO__LineB() { return STRUCT_OFFSET(UEnvQueryTest_Dot, LineB); } \
	FORCEINLINE static uint32 __PPO__TestMode() { return STRUCT_OFFSET(UEnvQueryTest_Dot, TestMode); } \
	FORCEINLINE static uint32 __PPO__bAbsoluteValue() { return STRUCT_OFFSET(UEnvQueryTest_Dot, bAbsoluteValue); }


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_21_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EnvQueryTest_Dot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UEnvQueryTest_Dot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h


#define FOREACH_ENUM_EENVTESTDOT(op) \
	op(EEnvTestDot::Dot3D) \
	op(EEnvTestDot::Dot2D) 

enum class EEnvTestDot : uint8;
template<> AIMODULE_API UEnum* StaticEnum<EEnvTestDot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
