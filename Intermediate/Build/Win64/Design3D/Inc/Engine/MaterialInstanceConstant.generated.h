// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UTexture;
#ifdef ENGINE_MaterialInstanceConstant_generated_h
#error "MaterialInstanceConstant.generated.h already included, missing '#pragma once' in MaterialInstanceConstant.h"
#endif
#define ENGINE_MaterialInstanceConstant_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_RPC_WRAPPERS \
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
	DECLARE_FUNCTION(execK2_GetTextureParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValue(Z_Param_ParameterName); \
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
	}


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
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
	DECLARE_FUNCTION(execK2_GetTextureParameterValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParameterName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValue(Z_Param_ParameterName); \
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
	}


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialInstanceConstant(); \
	friend struct Z_Construct_UClass_UMaterialInstanceConstant_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceConstant, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstanceConstant)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialInstanceConstant(); \
	friend struct Z_Construct_UClass_UMaterialInstanceConstant_Statics; \
public: \
	DECLARE_CLASS(UMaterialInstanceConstant, UMaterialInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialInstanceConstant)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceConstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceConstant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstanceConstant(UMaterialInstanceConstant&&); \
	ENGINE_API UMaterialInstanceConstant(const UMaterialInstanceConstant&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialInstanceConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialInstanceConstant(UMaterialInstanceConstant&&); \
	ENGINE_API UMaterialInstanceConstant(const UMaterialInstanceConstant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialInstanceConstant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialInstanceConstant); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialInstanceConstant)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_17_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialInstanceConstant."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialInstanceConstant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceConstant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
