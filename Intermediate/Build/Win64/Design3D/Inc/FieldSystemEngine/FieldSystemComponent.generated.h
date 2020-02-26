// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FIELDSYSTEMENGINE_FieldSystemComponent_generated_h
#error "FieldSystemComponent.generated.h already included, missing '#pragma once' in FieldSystemComponent.h"
#endif
#define FIELDSYSTEMENGINE_FieldSystemComponent_generated_h

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyUniformVectorFalloffForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyUniformVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialVectorFalloffForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRadialVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyStayDynamicField) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxLevelPerCommand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyStayDynamicField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_MaxLevelPerCommand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRadialForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyLinearForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyLinearForce(Z_Param_Enabled,Z_Param_Direction,Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyUniformVectorFalloffForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyUniformVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialVectorFalloffForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRadialVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyStayDynamicField) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxLevelPerCommand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyStayDynamicField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_MaxLevelPerCommand); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRadialForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyLinearForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyLinearForce(Z_Param_Enabled,Z_Param_Direction,Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldSystemComponent(); \
	friend struct Z_Construct_UClass_UFieldSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemComponent)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFieldSystemComponent(); \
	friend struct Z_Construct_UClass_UFieldSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemComponent)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemComponent(UFieldSystemComponent&&); \
	NO_API UFieldSystemComponent(const UFieldSystemComponent&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemComponent(UFieldSystemComponent&&); \
	NO_API UFieldSystemComponent(const UFieldSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemComponent)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_17_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FieldSystemComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
