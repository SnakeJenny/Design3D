// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UCurveFloat;
struct FMaterialSpriteElement;
#ifdef ENGINE_MaterialBillboardComponent_generated_h
#error "MaterialBillboardComponent.generated.h already included, missing '#pragma once' in MaterialBillboardComponent.h"
#endif
#define ENGINE_MaterialBillboardComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialSpriteElement>();

#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddElement) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_OBJECT(UCurveFloat,Z_Param_DistanceToOpacityCurve); \
		P_GET_UBOOL(Z_Param_bSizeIsInScreenSpace); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseSizeX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseSizeY); \
		P_GET_OBJECT(UCurveFloat,Z_Param_DistanceToSizeCurve); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddElement(Z_Param_Material,Z_Param_DistanceToOpacityCurve,Z_Param_bSizeIsInScreenSpace,Z_Param_BaseSizeX,Z_Param_BaseSizeY,Z_Param_DistanceToSizeCurve); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetElements) \
	{ \
		P_GET_TARRAY_REF(FMaterialSpriteElement,Z_Param_Out_NewElements); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetElements(Z_Param_Out_NewElements); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddElement) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_GET_OBJECT(UCurveFloat,Z_Param_DistanceToOpacityCurve); \
		P_GET_UBOOL(Z_Param_bSizeIsInScreenSpace); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseSizeX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseSizeY); \
		P_GET_OBJECT(UCurveFloat,Z_Param_DistanceToSizeCurve); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddElement(Z_Param_Material,Z_Param_DistanceToOpacityCurve,Z_Param_bSizeIsInScreenSpace,Z_Param_BaseSizeX,Z_Param_BaseSizeY,Z_Param_DistanceToSizeCurve); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetElements) \
	{ \
		P_GET_TARRAY_REF(FMaterialSpriteElement,Z_Param_Out_NewElements); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetElements(Z_Param_Out_NewElements); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialBillboardComponent(); \
	friend struct Z_Construct_UClass_UMaterialBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UMaterialBillboardComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialBillboardComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialBillboardComponent(); \
	friend struct Z_Construct_UClass_UMaterialBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UMaterialBillboardComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialBillboardComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialBillboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialBillboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialBillboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialBillboardComponent(UMaterialBillboardComponent&&); \
	NO_API UMaterialBillboardComponent(const UMaterialBillboardComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialBillboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialBillboardComponent(UMaterialBillboardComponent&&); \
	NO_API UMaterialBillboardComponent(const UMaterialBillboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialBillboardComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialBillboardComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_60_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_63_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialBillboardComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialBillboardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
