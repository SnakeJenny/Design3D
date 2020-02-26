// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELightUnits : uint8;
#ifdef ENGINE_LocalLightComponent_generated_h
#error "LocalLightComponent.generated.h already included, missing '#pragma once' in LocalLightComponent.h"
#endif
#define ENGINE_LocalLightComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUnitsConversionFactor) \
	{ \
		P_GET_ENUM(ELightUnits,Z_Param_SrcUnits); \
		P_GET_ENUM(ELightUnits,Z_Param_TargetUnits); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CosHalfConeAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ULocalLightComponent::GetUnitsConversionFactor(ELightUnits(Z_Param_SrcUnits),ELightUnits(Z_Param_TargetUnits),Z_Param_CosHalfConeAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntensityUnits) \
	{ \
		P_GET_ENUM(ELightUnits,Z_Param_NewIntensityUnits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntensityUnits(ELightUnits(Z_Param_NewIntensityUnits)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttenuationRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttenuationRadius(Z_Param_NewRadius); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUnitsConversionFactor) \
	{ \
		P_GET_ENUM(ELightUnits,Z_Param_SrcUnits); \
		P_GET_ENUM(ELightUnits,Z_Param_TargetUnits); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CosHalfConeAngle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=ULocalLightComponent::GetUnitsConversionFactor(ELightUnits(Z_Param_SrcUnits),ELightUnits(Z_Param_TargetUnits),Z_Param_CosHalfConeAngle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntensityUnits) \
	{ \
		P_GET_ENUM(ELightUnits,Z_Param_NewIntensityUnits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIntensityUnits(ELightUnits(Z_Param_NewIntensityUnits)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttenuationRadius) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttenuationRadius(Z_Param_NewRadius); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULocalLightComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalLightComponent(); \
	friend struct Z_Construct_UClass_ULocalLightComponent_Statics; \
public: \
	DECLARE_CLASS(ULocalLightComponent, ULightComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalLightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULocalLightComponent(); \
	friend struct Z_Construct_UClass_ULocalLightComponent_Statics; \
public: \
	DECLARE_CLASS(ULocalLightComponent, ULightComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalLightComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalLightComponent(ULocalLightComponent&&); \
	NO_API ULocalLightComponent(const ULocalLightComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalLightComponent(ULocalLightComponent&&); \
	NO_API ULocalLightComponent(const ULocalLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalLightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalLightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_16_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LocalLightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULocalLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
