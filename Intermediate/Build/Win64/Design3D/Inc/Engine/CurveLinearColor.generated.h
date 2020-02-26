// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_CurveLinearColor_generated_h
#error "CurveLinearColor.generated.h already included, missing '#pragma once' in CurveLinearColor.h"
#endif
#define ENGINE_CurveLinearColor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRuntimeCurveLinearColor>();

#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetClampedLinearColorValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetClampedLinearColorValue(Z_Param_InTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLinearColorValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLinearColorValue(Z_Param_InTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetClampedLinearColorValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetClampedLinearColorValue(Z_Param_InTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLinearColorValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLinearColorValue(Z_Param_InTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveLinearColor, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveLinearColor(); \
	friend struct Z_Construct_UClass_UCurveLinearColor_Statics; \
public: \
	DECLARE_CLASS(UCurveLinearColor, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveLinearColor) \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCurveLinearColor(); \
	friend struct Z_Construct_UClass_UCurveLinearColor_Statics; \
public: \
	DECLARE_CLASS(UCurveLinearColor, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveLinearColor) \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveLinearColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveLinearColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveLinearColor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveLinearColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveLinearColor(UCurveLinearColor&&); \
	NO_API UCurveLinearColor(const UCurveLinearColor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveLinearColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveLinearColor(UCurveLinearColor&&); \
	NO_API UCurveLinearColor(const UCurveLinearColor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveLinearColor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveLinearColor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveLinearColor)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_29_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveLinearColor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveLinearColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
