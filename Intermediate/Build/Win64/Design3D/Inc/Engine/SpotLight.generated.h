// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SpotLight_generated_h
#error "SpotLight.generated.h already included, missing '#pragma once' in SpotLight.h"
#endif
#define ENGINE_SpotLight_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOuterConeAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewOuterConeAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOuterConeAngle(Z_Param_NewOuterConeAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInnerConeAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewInnerConeAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInnerConeAngle(Z_Param_NewInnerConeAngle); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOuterConeAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewOuterConeAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOuterConeAngle(Z_Param_NewOuterConeAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInnerConeAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewInnerConeAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInnerConeAngle(Z_Param_NewInnerConeAngle); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpotLight(); \
	friend struct Z_Construct_UClass_ASpotLight_Statics; \
public: \
	DECLARE_CLASS(ASpotLight, ALight, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASpotLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASpotLight(); \
	friend struct Z_Construct_UClass_ASpotLight_Statics; \
public: \
	DECLARE_CLASS(ASpotLight, ALight, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASpotLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASpotLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpotLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASpotLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASpotLight(ASpotLight&&); \
	ENGINE_API ASpotLight(const ASpotLight&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASpotLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASpotLight(ASpotLight&&); \
	ENGINE_API ASpotLight(const ASpotLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASpotLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpotLight)


#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpotLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASpotLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_SpotLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
