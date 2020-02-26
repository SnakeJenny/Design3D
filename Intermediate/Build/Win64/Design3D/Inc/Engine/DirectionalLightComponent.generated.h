// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ENGINE_DirectionalLightComponent_generated_h
#error "DirectionalLightComponent.generated.h already included, missing '#pragma once' in DirectionalLightComponent.h"
#endif
#define ENGINE_DirectionalLightComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLightShaftOverrideDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightShaftOverrideDirection(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionMaskDarkness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOcclusionMaskDarkness(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableLightShaftOcclusion) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableLightShaftOcclusion(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowDistanceFadeoutFraction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowDistanceFadeoutFraction(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCascadeTransitionFraction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCascadeTransitionFraction(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCascadeDistributionExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCascadeDistributionExponent(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicShadowCascades) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicShadowCascades(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicShadowDistanceStationaryLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicShadowDistanceStationaryLight(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicShadowDistanceMovableLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicShadowDistanceMovableLight(Z_Param_NewValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLightShaftOverrideDirection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightShaftOverrideDirection(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionMaskDarkness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOcclusionMaskDarkness(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableLightShaftOcclusion) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableLightShaftOcclusion(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowDistanceFadeoutFraction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowDistanceFadeoutFraction(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCascadeTransitionFraction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCascadeTransitionFraction(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCascadeDistributionExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCascadeDistributionExponent(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicShadowCascades) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicShadowCascades(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicShadowDistanceStationaryLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicShadowDistanceStationaryLight(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDynamicShadowDistanceMovableLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDynamicShadowDistanceMovableLight(Z_Param_NewValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDirectionalLightComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectionalLightComponent(); \
	friend struct Z_Construct_UClass_UDirectionalLightComponent_Statics; \
public: \
	DECLARE_CLASS(UDirectionalLightComponent, ULightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDirectionalLightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDirectionalLightComponent(); \
	friend struct Z_Construct_UClass_UDirectionalLightComponent_Statics; \
public: \
	DECLARE_CLASS(UDirectionalLightComponent, ULightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDirectionalLightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDirectionalLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectionalLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectionalLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectionalLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDirectionalLightComponent(UDirectionalLightComponent&&); \
	NO_API UDirectionalLightComponent(const UDirectionalLightComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDirectionalLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDirectionalLightComponent(UDirectionalLightComponent&&); \
	NO_API UDirectionalLightComponent(const UDirectionalLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectionalLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectionalLightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectionalLightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DirectionalLightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDirectionalLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
