// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureProperty_generated_h
#error "MaterialExpressionTextureProperty.generated.h already included, missing '#pragma once' in MaterialExpressionTextureProperty.h"
#endif
#define ENGINE_MaterialExpressionTextureProperty_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureProperty(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureProperty, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureProperty)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureProperty(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureProperty, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureProperty)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionTextureProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionTextureProperty); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionTextureProperty(UMaterialExpressionTextureProperty&&); \
	NO_API UMaterialExpressionTextureProperty(const UMaterialExpressionTextureProperty&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionTextureProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionTextureProperty(UMaterialExpressionTextureProperty&&); \
	NO_API UMaterialExpressionTextureProperty(const UMaterialExpressionTextureProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionTextureProperty); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureProperty)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_27_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionTextureProperty."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h


#define FOREACH_ENUM_EMATERIALEXPOSEDTEXTUREPROPERTY(op) \
	op(TMTM_TextureSize) \
	op(TMTM_TexelSize) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
