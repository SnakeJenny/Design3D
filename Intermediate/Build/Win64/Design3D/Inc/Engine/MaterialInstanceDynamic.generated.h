// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstance;
class UMaterialInterface;
struct FLinearColor;
class UTexture;
#ifdef ENGINE_MaterialInstanceDynamic_generated_h
#error "MaterialInstanceDynamic.generated.h already included, missing '#pragma once' in MaterialInstanceDynamic.h"
#endif
#define ENGINE_MaterialInstanceDynamic_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyParameterOverrides) \
	{ \
		P_GET_OBJECT(UMaterialInstance,Z_Param_MaterialInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CopyParameterOverrides(Z_Param_MaterialInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyInterpParameters) \
	{ \
		P_GET_OBJECT(UMaterialInstance,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CopyInterpParameters(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_CopyMaterialInstanceParameters) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Source); \
		P_GET_UBOOL(Z_Param_bQuickParametersOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_CopyMaterialInstanceParameters(Z_Param_Source,Z_Param_bQuickParametersOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_InterpolateMaterialInstanceParams) \
	{ \
		P_GET_OBJECT(UMaterialInstance,Z_Param_SourceA); \
		P_GET_OBJECT(UMaterialInstance,Z_Param_SourceB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_InterpolateMaterialInstanceParams(Z_Param_SourceA,Z_Param_SourceB,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValue(Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVectorParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValue(Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextureParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextureParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValue(Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalarParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScalarParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyParameterOverrides) \
	{ \
		P_GET_OBJECT(UMaterialInstance,Z_Param_MaterialInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CopyParameterOverrides(Z_Param_MaterialInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyInterpParameters) \
	{ \
		P_GET_OBJECT(UMaterialInstance,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CopyInterpParameters(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_CopyMaterialInstanceParameters) \
	{ \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Source); \
		P_GET_UBOOL(Z_Param_bQuickParametersOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_CopyMaterialInstanceParameters(Z_Param_Source,Z_Param_bQuickParametersOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_InterpolateMaterialInstanceParams) \
	{ \
		P_GET_OBJECT(UMaterialInstance,Z_Param_SourceA); \
		P_GET_OBJECT(UMaterialInstance,Z_Param_SourceB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->K2_InterpolateMaterialInstanceParams(Z_Param_SourceA,Z_Param_SourceB,Z_Param_Alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetVectorParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValue(Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVectorParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_STRUCT(FLinearColor,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVectorParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetTextureParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValue(Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextureParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_OBJECT(UTexture,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextureParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execK2_GetScalarParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValue(Z_Param_ParameterName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScalarParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScalarParameterValue(Z_Param_ParameterName,Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstanceDynamic(); \
	friend struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceDynamic, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialInstanceDynamic)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceDynamic(); \
	friend struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceDynamic, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialInstanceDynamic)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialInstanceDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceDynamic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialInstanceDynamic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceDynamic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialInstanceDynamic(UMaterialInstanceDynamic&&); \
	NO_API UMaterialInstanceDynamic(const UMaterialInstanceDynamic&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialInstanceDynamic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialInstanceDynamic(UMaterialInstanceDynamic&&); \
	NO_API UMaterialInstanceDynamic(const UMaterialInstanceDynamic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialInstanceDynamic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceDynamic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceDynamic)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInstanceDynamic."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstanceDynamic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
