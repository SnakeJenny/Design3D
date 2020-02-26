// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraAnimInst_generated_h
#error "CameraAnimInst.generated.h already included, missing '#pragma once' in CameraAnimInst.h"
#endif
#define ENGINE_CameraAnimInst_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScale(Z_Param_NewDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDuration(Z_Param_NewDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(Z_Param_bImmediate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScale(Z_Param_NewDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDuration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDuration(Z_Param_NewDuration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(Z_Param_bImmediate); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraAnimInst(); \
	friend struct Z_Construct_UClass_UCameraAnimInst_Statics; \
public: \
	DECLARE_CLASS(UCameraAnimInst, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraAnimInst)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCameraAnimInst(); \
	friend struct Z_Construct_UClass_UCameraAnimInst_Statics; \
public: \
	DECLARE_CLASS(UCameraAnimInst, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraAnimInst)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraAnimInst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnimInst) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAnimInst); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnimInst); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraAnimInst(UCameraAnimInst&&); \
	NO_API UCameraAnimInst(const UCameraAnimInst&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraAnimInst(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraAnimInst(UCameraAnimInst&&); \
	NO_API UCameraAnimInst(const UCameraAnimInst&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAnimInst); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnimInst); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnimInst)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InterpGroupInst() { return STRUCT_OFFSET(UCameraAnimInst, InterpGroupInst); }


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraAnimInst."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraAnimInst>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
