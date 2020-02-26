// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_LightComponentBase_generated_h
#error "LightComponentBase.generated.h already included, missing '#pragma once' in LightComponentBase.h"
#endif
#define ENGINE_LightComponentBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSamplesPerPixel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSamplesPerPixel(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastRaytracedShadow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastRaytracedShadow(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectReflection) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAffectReflection(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastVolumetricShadow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastVolumetricShadow(Z_Param_bNewValue); \
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
	DECLARE_FUNCTION(execSetCastShadows) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastShadows(Z_Param_bNewValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSamplesPerPixel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSamplesPerPixel(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastRaytracedShadow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastRaytracedShadow(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAffectReflection) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAffectReflection(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCastVolumetricShadow) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastVolumetricShadow(Z_Param_bNewValue); \
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
	DECLARE_FUNCTION(execSetCastShadows) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCastShadows(Z_Param_bNewValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponentBase, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightComponentBase(); \
	friend struct Z_Construct_UClass_ULightComponentBase_Statics; \
public: \
	DECLARE_CLASS(ULightComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULightComponentBase) \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULightComponentBase(); \
	friend struct Z_Construct_UClass_ULightComponentBase_Statics; \
public: \
	DECLARE_CLASS(ULightComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULightComponentBase) \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightComponentBase(ULightComponentBase&&); \
	NO_API ULightComponentBase(const ULightComponentBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULightComponentBase(ULightComponentBase&&); \
	NO_API ULightComponentBase(const ULightComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponentBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponentBase)


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightComponentBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
