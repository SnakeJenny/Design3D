// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PointLight_generated_h
#error "PointLight.generated.h already included, missing '#pragma once' in PointLight.h"
#endif
#define ENGINE_PointLight_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLightFalloffExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLightFalloffExponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFalloffExponent(Z_Param_NewLightFalloffExponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadius(Z_Param_NewRadius); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLightFalloffExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLightFalloffExponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFalloffExponent(Z_Param_NewLightFalloffExponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRadius(Z_Param_NewRadius); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPointLight(); \
	friend struct Z_Construct_UClass_APointLight_Statics; \
public: \
	DECLARE_CLASS(APointLight, ALight, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APointLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPointLight(); \
	friend struct Z_Construct_UClass_APointLight_Statics; \
public: \
	DECLARE_CLASS(APointLight, ALight, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(APointLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APointLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APointLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APointLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APointLight(APointLight&&); \
	ENGINE_API APointLight(const APointLight&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API APointLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API APointLight(APointLight&&); \
	ENGINE_API APointLight(const APointLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, APointLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APointLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APointLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PointLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APointLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PointLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
