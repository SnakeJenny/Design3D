// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureLightProfile;
struct FColor;
struct FVector;
class UMaterialInterface;
struct FLinearColor;
#ifdef ENGINE_LightComponent_generated_h
#error "LightComponent.generated.h already included, missing '#pragma once' in LightComponent.h"
#endif
#define ENGINE_LightComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_433_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrecomputedLightInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForceCachedShadowsForMovablePrimitives) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceCachedShadowsForMovablePrimitives(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpecularScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpecularScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowBias) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowBias(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIESBrightnessScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIESBrightnessScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseIESBrightness) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseIESBrightness(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIESTexture) \
	{ \
		P_GET_OBJECT(UTextureLightProfile,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIESTexture(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomTint) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBloomTint(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBloomThreshold(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBloomScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableLightShaftBloom) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableLightShaftBloom(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTransmission) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTransmission(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAffectTranslucentLighting(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectDynamicIndirectLighting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAffectDynamicIndirectLighting(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionDisabledBrightness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFunctionDisabledBrightness(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLightFunctionFadeDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFunctionFadeDistance(Z_Param_NewLightFunctionFadeDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionScale) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLightFunctionScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFunctionScale(Z_Param_NewLightFunctionScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewLightFunctionMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFunctionMaterial(Z_Param_NewLightFunctionMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTemperature) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTemperature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTemperature(Z_Param_NewTemperature); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor); \
		P_GET_UBOOL(Z_Param_bSRGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightColor(Z_Param_NewLightColor,Z_Param_bSRGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricScatteringIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVolumetricScatteringIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndirectLightingIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIndirectLightingIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForceCachedShadowsForMovablePrimitives) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForceCachedShadowsForMovablePrimitives(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpecularScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpecularScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowBias) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowBias(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIESBrightnessScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIESBrightnessScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseIESBrightness) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseIESBrightness(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIESTexture) \
	{ \
		P_GET_OBJECT(UTextureLightProfile,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIESTexture(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomTint) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBloomTint(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomThreshold) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBloomThreshold(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloomScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBloomScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableLightShaftBloom) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnableLightShaftBloom(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTransmission) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTransmission(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAffectTranslucentLighting(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectDynamicIndirectLighting) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAffectDynamicIndirectLighting(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionDisabledBrightness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFunctionDisabledBrightness(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLightFunctionFadeDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFunctionFadeDistance(Z_Param_NewLightFunctionFadeDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionScale) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLightFunctionScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFunctionScale(Z_Param_NewLightFunctionScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightFunctionMaterial) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewLightFunctionMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightFunctionMaterial(Z_Param_NewLightFunctionMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTemperature) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTemperature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTemperature(Z_Param_NewTemperature); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor); \
		P_GET_UBOOL(Z_Param_bSRGB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightColor(Z_Param_NewLightColor,Z_Param_bSRGB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumetricScatteringIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVolumetricScatteringIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndirectLightingIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIndirectLightingIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntensity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewIntensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntensity(Z_Param_NewIntensity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightComponent(); \
	friend struct Z_Construct_UClass_ULightComponent_Statics; \
public: \
	DECLARE_CLASS(ULightComponent, ULightComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS \
private: \
	static void StaticRegisterNativesULightComponent(); \
	friend struct Z_Construct_UClass_ULightComponent_Statics; \
public: \
	DECLARE_CLASS(ULightComponent, ULightComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightComponent(ULightComponent&&); \
	NO_API ULightComponent(const ULightComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightComponent(ULightComponent&&); \
	NO_API ULightComponent(const ULightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_39_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
