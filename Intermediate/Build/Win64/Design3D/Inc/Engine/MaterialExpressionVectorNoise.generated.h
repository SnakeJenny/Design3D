// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionVectorNoise_generated_h
#error "MaterialExpressionVectorNoise.generated.h already included, missing '#pragma once' in MaterialExpressionVectorNoise.h"
#endif
#define ENGINE_MaterialExpressionVectorNoise_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionVectorNoise(); \
	friend struct Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionVectorNoise, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionVectorNoise)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionVectorNoise(); \
	friend struct Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionVectorNoise, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionVectorNoise)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionVectorNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionVectorNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionVectorNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionVectorNoise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionVectorNoise(UMaterialExpressionVectorNoise&&); \
	ENGINE_API UMaterialExpressionVectorNoise(const UMaterialExpressionVectorNoise&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionVectorNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionVectorNoise(UMaterialExpressionVectorNoise&&); \
	ENGINE_API UMaterialExpressionVectorNoise(const UMaterialExpressionVectorNoise&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionVectorNoise); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionVectorNoise); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionVectorNoise)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_51_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_54_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionVectorNoise."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionVectorNoise>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h


#define FOREACH_ENUM_EVECTORNOISEFUNCTION(op) \
	op(VNF_CellnoiseALU) \
	op(VNF_VectorALU) \
	op(VNF_GradientALU) \
	op(VNF_CurlALU) \
	op(VNF_VoronoiALU) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
