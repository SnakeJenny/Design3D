// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveLinearColor;
#ifdef ENGINE_CurveLinearColorAtlas_generated_h
#error "CurveLinearColorAtlas.generated.h already included, missing '#pragma once' in CurveLinearColorAtlas.h"
#endif
#define ENGINE_CurveLinearColorAtlas_generated_h

#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurvePosition) \
	{ \
		P_GET_OBJECT(UCurveLinearColor,Z_Param_InCurve); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCurvePosition(Z_Param_InCurve,Z_Param_Out_Position); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurvePosition) \
	{ \
		P_GET_OBJECT(UCurveLinearColor,Z_Param_InCurve); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCurvePosition(Z_Param_InCurve,Z_Param_Out_Position); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveLinearColorAtlas(); \
	friend struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics; \
public: \
	DECLARE_CLASS(UCurveLinearColorAtlas, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveLinearColorAtlas)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUCurveLinearColorAtlas(); \
	friend struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics; \
public: \
	DECLARE_CLASS(UCurveLinearColorAtlas, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveLinearColorAtlas)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveLinearColorAtlas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveLinearColorAtlas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveLinearColorAtlas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveLinearColorAtlas); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveLinearColorAtlas(UCurveLinearColorAtlas&&); \
	NO_API UCurveLinearColorAtlas(const UCurveLinearColorAtlas&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveLinearColorAtlas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveLinearColorAtlas(UCurveLinearColorAtlas&&); \
	NO_API UCurveLinearColorAtlas(const UCurveLinearColorAtlas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveLinearColorAtlas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveLinearColorAtlas); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveLinearColorAtlas)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_26_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveLinearColorAtlas."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveLinearColorAtlas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
