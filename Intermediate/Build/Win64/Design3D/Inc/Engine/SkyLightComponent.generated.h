// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FLinearColor;
class UTextureCube;
#ifdef ENGINE_SkyLightComponent_generated_h
#error "SkyLightComponent.generated.h already included, missing '#pragma once' in SkyLightComponent.h"
#endif
#define ENGINE_SkyLightComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_318_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrecomputedSkyLightInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecaptureSky) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecaptureSky(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinOcclusion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinOcclusion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinOcclusion(Z_Param_InMinOcclusion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOcclusionExponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOcclusionExponent(Z_Param_InOcclusionExponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionContrast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOcclusionContrast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOcclusionContrast(Z_Param_InOcclusionContrast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionTint) \
	{ \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_InTint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOcclusionTint(Z_Param_Out_InTint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowerHemisphereColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InLowerHemisphereColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLowerHemisphereColor(Z_Param_Out_InLowerHemisphereColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCubemapBlend) \
	{ \
		P_GET_OBJECT(UTextureCube,Z_Param_SourceCubemap); \
		P_GET_OBJECT(UTextureCube,Z_Param_DestinationCubemap); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendFraction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCubemapBlend(Z_Param_SourceCubemap,Z_Param_DestinationCubemap,Z_Param_InBlendFraction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCubemap) \
	{ \
		P_GET_OBJECT(UTextureCube,Z_Param_NewCubemap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCubemap(Z_Param_NewCubemap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightColor(Z_Param_NewLightColor); \
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


#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecaptureSky) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecaptureSky(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinOcclusion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinOcclusion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinOcclusion(Z_Param_InMinOcclusion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionExponent) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOcclusionExponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOcclusionExponent(Z_Param_InOcclusionExponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionContrast) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOcclusionContrast); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOcclusionContrast(Z_Param_InOcclusionContrast); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOcclusionTint) \
	{ \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_InTint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOcclusionTint(Z_Param_Out_InTint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowerHemisphereColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InLowerHemisphereColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLowerHemisphereColor(Z_Param_Out_InLowerHemisphereColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCubemapBlend) \
	{ \
		P_GET_OBJECT(UTextureCube,Z_Param_SourceCubemap); \
		P_GET_OBJECT(UTextureCube,Z_Param_DestinationCubemap); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBlendFraction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCubemapBlend(Z_Param_SourceCubemap,Z_Param_DestinationCubemap,Z_Param_InBlendFraction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCubemap) \
	{ \
		P_GET_OBJECT(UTextureCube,Z_Param_NewCubemap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCubemap(Z_Param_NewCubemap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightColor(Z_Param_NewLightColor); \
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


#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkyLightComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyLightComponent(); \
	friend struct Z_Construct_UClass_USkyLightComponent_Statics; \
public: \
	DECLARE_CLASS(USkyLightComponent, ULightComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkyLightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUSkyLightComponent(); \
	friend struct Z_Construct_UClass_USkyLightComponent_Statics; \
public: \
	DECLARE_CLASS(USkyLightComponent, ULightComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USkyLightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyLightComponent(USkyLightComponent&&); \
	NO_API USkyLightComponent(const USkyLightComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyLightComponent(USkyLightComponent&&); \
	NO_API USkyLightComponent(const USkyLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyLightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyLightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlendDestinationCubemap() { return STRUCT_OFFSET(USkyLightComponent, BlendDestinationCubemap); }


#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_95_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_98_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkyLightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkyLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h


#define FOREACH_ENUM_ESKYLIGHTSOURCETYPE(op) \
	op(SLS_CapturedScene) \
	op(SLS_SpecifiedCubemap) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
