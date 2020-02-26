// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_AtmosphericFogComponent_generated_h
#error "AtmosphericFogComponent.generated.h already included, missing '#pragma once' in AtmosphericFogComponent.h"
#endif
#define ENGINE_AtmosphericFogComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAtmospherePrecomputeInstanceData>();

#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAtmospherePrecomputeParameters>();

#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartPrecompute) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartPrecompute(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrecomputeParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DensityHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxScatteringOrder); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InscatterAltitudeSampleNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrecomputeParams(Z_Param_DensityHeight,Z_Param_MaxScatteringOrder,Z_Param_InscatterAltitudeSampleNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableGroundScattering) \
	{ \
		P_GET_UBOOL(Z_Param_NewGroundScattering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableGroundScattering(Z_Param_NewGroundScattering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableSunDisk) \
	{ \
		P_GET_UBOOL(Z_Param_NewSunDisk); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableSunDisk(Z_Param_NewSunDisk); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDistanceOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDistanceOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDistanceOffset(Z_Param_NewDistanceOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartDistance(Z_Param_NewStartDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAltitudeScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAltitudeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAltitudeScale(Z_Param_NewAltitudeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDistanceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDistanceScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDistanceScale(Z_Param_NewDistanceScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDensityOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDensityOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDensityOffset(Z_Param_NewDensityOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDensityMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDensityMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDensityMultiplier(Z_Param_NewDensityMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFogMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFogMultiplier(Z_Param_NewFogMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSunMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSunMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSunMultiplier(Z_Param_NewSunMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultLightColor(Z_Param_NewLightColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultBrightness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBrightness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultBrightness(Z_Param_NewBrightness); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartPrecompute) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartPrecompute(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrecomputeParams) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DensityHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxScatteringOrder); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InscatterAltitudeSampleNum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrecomputeParams(Z_Param_DensityHeight,Z_Param_MaxScatteringOrder,Z_Param_InscatterAltitudeSampleNum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableGroundScattering) \
	{ \
		P_GET_UBOOL(Z_Param_NewGroundScattering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableGroundScattering(Z_Param_NewGroundScattering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableSunDisk) \
	{ \
		P_GET_UBOOL(Z_Param_NewSunDisk); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableSunDisk(Z_Param_NewSunDisk); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDistanceOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDistanceOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDistanceOffset(Z_Param_NewDistanceOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartDistance(Z_Param_NewStartDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAltitudeScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewAltitudeScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAltitudeScale(Z_Param_NewAltitudeScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDistanceScale) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDistanceScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDistanceScale(Z_Param_NewDistanceScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDensityOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDensityOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDensityOffset(Z_Param_NewDensityOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDensityMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDensityMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDensityMultiplier(Z_Param_NewDensityMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFogMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFogMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFogMultiplier(Z_Param_NewFogMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSunMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSunMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSunMultiplier(Z_Param_NewSunMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultLightColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultLightColor(Z_Param_NewLightColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultBrightness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBrightness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultBrightness(Z_Param_NewBrightness); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtmosphericFogComponent, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtmosphericFogComponent(); \
	friend struct Z_Construct_UClass_UAtmosphericFogComponent_Statics; \
public: \
	DECLARE_CLASS(UAtmosphericFogComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAtmosphericFogComponent) \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUAtmosphericFogComponent(); \
	friend struct Z_Construct_UClass_UAtmosphericFogComponent_Statics; \
public: \
	DECLARE_CLASS(UAtmosphericFogComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAtmosphericFogComponent) \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtmosphericFogComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAtmosphericFogComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtmosphericFogComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAtmosphericFogComponent(UAtmosphericFogComponent&&); \
	ENGINE_API UAtmosphericFogComponent(const UAtmosphericFogComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAtmosphericFogComponent(UAtmosphericFogComponent&&); \
	ENGINE_API UAtmosphericFogComponent(const UAtmosphericFogComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAtmosphericFogComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtmosphericFogComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtmosphericFogComponent)


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PrecomputeParams() { return STRUCT_OFFSET(UAtmosphericFogComponent, PrecomputeParams); }


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_95_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_98_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AtmosphericFogComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAtmosphericFogComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
