// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionNoise_generated_h
#error "MaterialExpressionNoise.generated.h already included, missing '#pragma once' in MaterialExpressionNoise.h"
#endif
#define ENGINE_MaterialExpressionNoise_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNoise(); \
	friend struct Z_Construct_UClass_UMaterialExpressionNoise_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionNoise, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionNoise)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNoise(); \
	friend struct Z_Construct_UClass_UMaterialExpressionNoise_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionNoise, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionNoise)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNoise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionNoise(UMaterialExpressionNoise&&); \
	ENGINE_API UMaterialExpressionNoise(const UMaterialExpressionNoise&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionNoise(UMaterialExpressionNoise&&); \
	ENGINE_API UMaterialExpressionNoise(const UMaterialExpressionNoise&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNoise); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNoise)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_58_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionNoise."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionNoise>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h


#define FOREACH_ENUM_ENOISEFUNCTION(op) \
	op(NOISEFUNCTION_SimplexTex) \
	op(NOISEFUNCTION_GradientTex) \
	op(NOISEFUNCTION_GradientTex3D) \
	op(NOISEFUNCTION_GradientALU) \
	op(NOISEFUNCTION_ValueALU) \
	op(NOISEFUNCTION_VoronoiALU) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
