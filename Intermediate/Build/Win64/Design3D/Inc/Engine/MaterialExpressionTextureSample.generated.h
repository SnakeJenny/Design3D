// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureSample_generated_h
#error "MaterialExpressionTextureSample.generated.h already included, missing '#pragma once' in MaterialExpressionTextureSample.h"
#endif
#define ENGINE_MaterialExpressionTextureSample_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureSample(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureSample_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureSample, UMaterialExpressionTextureBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureSample)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureSample(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureSample_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureSample, UMaterialExpressionTextureBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureSample)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionTextureSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionTextureSample); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureSample); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionTextureSample(UMaterialExpressionTextureSample&&); \
	NO_API UMaterialExpressionTextureSample(const UMaterialExpressionTextureSample&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionTextureSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionTextureSample(UMaterialExpressionTextureSample&&); \
	NO_API UMaterialExpressionTextureSample(const UMaterialExpressionTextureSample&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionTextureSample); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureSample); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureSample)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_33_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionTextureSample."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureSample>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h


#define FOREACH_ENUM_ETEXTUREMIPVALUEMODE(op) \
	op(TMVM_None) \
	op(TMVM_MipLevel) \
	op(TMVM_MipBias) \
	op(TMVM_Derivative) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
