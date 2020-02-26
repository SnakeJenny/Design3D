// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ENGINE_CurveVector_generated_h
#error "CurveVector.generated.h already included, missing '#pragma once' in CurveVector.h"
#endif
#define ENGINE_CurveVector_generated_h

#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVectorValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetVectorValue(Z_Param_InTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVectorValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetVectorValue(Z_Param_InTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveVector(); \
	friend struct Z_Construct_UClass_UCurveVector_Statics; \
public: \
	DECLARE_CLASS(UCurveVector, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveVector)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCurveVector(); \
	friend struct Z_Construct_UClass_UCurveVector_Statics; \
public: \
	DECLARE_CLASS(UCurveVector, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveVector)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCurveVector(UCurveVector&&); \
	ENGINE_API UCurveVector(const UCurveVector&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCurveVector(UCurveVector&&); \
	ENGINE_API UCurveVector(const UCurveVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveVector)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveVector."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
