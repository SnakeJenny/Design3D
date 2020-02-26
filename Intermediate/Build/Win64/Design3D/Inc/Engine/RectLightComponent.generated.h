// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
#ifdef ENGINE_RectLightComponent_generated_h
#error "RectLightComponent.generated.h already included, missing '#pragma once' in RectLightComponent.h"
#endif
#define ENGINE_RectLightComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBarnDoorLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarnDoorLength(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBarnDoorAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarnDoorAngle(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSourceHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSourceHeight(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSourceWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSourceWidth(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSourceTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSourceTexture(Z_Param_bNewValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBarnDoorLength) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarnDoorLength(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBarnDoorAngle) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarnDoorAngle(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSourceHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSourceHeight(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSourceWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSourceWidth(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSourceTexture) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSourceTexture(Z_Param_bNewValue); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURectLightComponent(); \
	friend struct Z_Construct_UClass_URectLightComponent_Statics; \
public: \
	DECLARE_CLASS(URectLightComponent, ULocalLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URectLightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURectLightComponent(); \
	friend struct Z_Construct_UClass_URectLightComponent_Statics; \
public: \
	DECLARE_CLASS(URectLightComponent, ULocalLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URectLightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URectLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URectLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URectLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URectLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URectLightComponent(URectLightComponent&&); \
	NO_API URectLightComponent(const URectLightComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URectLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URectLightComponent(URectLightComponent&&); \
	NO_API URectLightComponent(const URectLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URectLightComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URectLightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URectLightComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_19_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RectLightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URectLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
