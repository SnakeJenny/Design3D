// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UMaterialInterface;
struct FLinearColor;
#ifdef ENGINE_Light_generated_h
#error "Light.generated.h already included, missing '#pragma once' in Light.h"
#endif
#define ENGINE_Light_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execSetCastShadows) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastShadows(Z_Param_bNewValue); \
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
	DECLARE_FUNCTION(execGetLightColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLightColor(); \
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
	DECLARE_FUNCTION(execGetBrightness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBrightness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrightness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBrightness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrightness(Z_Param_NewBrightness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bSetEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_bSetEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_bEnabled(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execSetCastShadows) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastShadows(Z_Param_bNewValue); \
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
	DECLARE_FUNCTION(execGetLightColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLightColor(); \
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
	DECLARE_FUNCTION(execGetBrightness) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBrightness(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrightness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBrightness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrightness(Z_Param_NewBrightness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bSetEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_bSetEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_bEnabled(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALight(); \
	friend struct Z_Construct_UClass_ALight_Statics; \
public: \
	DECLARE_CLASS(ALight, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALight)


#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALight(); \
	friend struct Z_Construct_UClass_ALight_Statics; \
public: \
	DECLARE_CLASS(ALight, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALight)


#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALight(ALight&&); \
	NO_API ALight(const ALight&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALight(ALight&&); \
	NO_API ALight(const ALight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALight)


#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LightComponent() { return STRUCT_OFFSET(ALight, LightComponent); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Light."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Light_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
