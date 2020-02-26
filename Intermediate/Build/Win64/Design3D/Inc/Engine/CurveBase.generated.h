// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CurveBase_generated_h
#error "CurveBase.generated.h already included, missing '#pragma once' in CurveBase.h"
#endif
#define ENGINE_CurveBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetValueRange) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetValueRange(Z_Param_Out_MinValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeRange) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinTime); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTimeRange(Z_Param_Out_MinTime,Z_Param_Out_MaxTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetValueRange) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinValue); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetValueRange(Z_Param_Out_MinValue,Z_Param_Out_MaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeRange) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MinTime); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_MaxTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTimeRange(Z_Param_Out_MinTime,Z_Param_Out_MaxTime); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveBase(); \
	friend struct Z_Construct_UClass_UCurveBase_Statics; \
public: \
	DECLARE_CLASS(UCurveBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveBase)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCurveBase(); \
	friend struct Z_Construct_UClass_UCurveBase_Statics; \
public: \
	DECLARE_CLASS(UCurveBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveBase)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveBase(UCurveBase&&); \
	NO_API UCurveBase(const UCurveBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveBase(UCurveBase&&); \
	NO_API UCurveBase(const UCurveBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveBase)


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CurveBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
