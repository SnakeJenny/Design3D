// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CapsuleComponent_generated_h
#error "CapsuleComponent.generated.h already included, missing '#pragma once' in CapsuleComponent.h"
#endif
#define ENGINE_CapsuleComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetShapeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetShapeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleSize_WithoutHemisphere) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutRadius); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHalfHeightWithoutHemisphere); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUnscaledCapsuleSize_WithoutHemisphere(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeightWithoutHemisphere); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleSize) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutRadius); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHalfHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUnscaledCapsuleSize(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleHalfHeight_WithoutHemisphere) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetUnscaledCapsuleHalfHeight_WithoutHemisphere(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleHalfHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetUnscaledCapsuleHalfHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetUnscaledCapsuleRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleSize_WithoutHemisphere) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutRadius); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHalfHeightWithoutHemisphere); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetScaledCapsuleSize_WithoutHemisphere(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeightWithoutHemisphere); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleSize) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutRadius); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHalfHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetScaledCapsuleSize(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleHalfHeight_WithoutHemisphere) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaledCapsuleHalfHeight_WithoutHemisphere(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleHalfHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaledCapsuleHalfHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaledCapsuleRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleHalfHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCapsuleHalfHeight(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCapsuleRadius(Z_Param_Radius,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCapsuleSize(Z_Param_InRadius,Z_Param_InHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShapeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetShapeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleSize_WithoutHemisphere) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutRadius); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHalfHeightWithoutHemisphere); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUnscaledCapsuleSize_WithoutHemisphere(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeightWithoutHemisphere); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleSize) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutRadius); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHalfHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUnscaledCapsuleSize(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleHalfHeight_WithoutHemisphere) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetUnscaledCapsuleHalfHeight_WithoutHemisphere(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleHalfHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetUnscaledCapsuleHalfHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledCapsuleRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetUnscaledCapsuleRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleSize_WithoutHemisphere) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutRadius); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHalfHeightWithoutHemisphere); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetScaledCapsuleSize_WithoutHemisphere(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeightWithoutHemisphere); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleSize) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutRadius); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutHalfHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetScaledCapsuleSize(Z_Param_Out_OutRadius,Z_Param_Out_OutHalfHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleHalfHeight_WithoutHemisphere) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaledCapsuleHalfHeight_WithoutHemisphere(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleHalfHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaledCapsuleHalfHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScaledCapsuleRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScaledCapsuleRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleHalfHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCapsuleHalfHeight(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCapsuleRadius(Z_Param_Radius,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapsuleSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCapsuleSize(Z_Param_InRadius,Z_Param_InHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#if WITH_EDITORONLY_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCapsuleComponent, NO_API)


#else
#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_ARCHIVESERIALIZER
#endif
#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCapsuleComponent(); \
	friend struct Z_Construct_UClass_UCapsuleComponent_Statics; \
public: \
	DECLARE_CLASS(UCapsuleComponent, UShapeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCapsuleComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCapsuleComponent(); \
	friend struct Z_Construct_UClass_UCapsuleComponent_Statics; \
public: \
	DECLARE_CLASS(UCapsuleComponent, UShapeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCapsuleComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCapsuleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCapsuleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCapsuleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCapsuleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCapsuleComponent(UCapsuleComponent&&); \
	NO_API UCapsuleComponent(const UCapsuleComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCapsuleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCapsuleComponent(UCapsuleComponent&&); \
	NO_API UCapsuleComponent(const UCapsuleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCapsuleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCapsuleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCapsuleComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleHalfHeight() { return STRUCT_OFFSET(UCapsuleComponent, CapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO__CapsuleRadius() { return STRUCT_OFFSET(UCapsuleComponent, CapsuleRadius); }


#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CapsuleComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCapsuleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_CapsuleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
