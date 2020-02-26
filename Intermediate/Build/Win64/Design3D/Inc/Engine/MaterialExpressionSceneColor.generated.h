// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSceneColor_generated_h
#error "MaterialExpressionSceneColor.generated.h already included, missing '#pragma once' in MaterialExpressionSceneColor.h"
#endif
#define ENGINE_MaterialExpressionSceneColor_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneColor(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSceneColor_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSceneColor, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneColor)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneColor(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSceneColor_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSceneColor, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneColor)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneColor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionSceneColor(UMaterialExpressionSceneColor&&); \
	NO_API UMaterialExpressionSceneColor(const UMaterialExpressionSceneColor&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSceneColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionSceneColor(UMaterialExpressionSceneColor&&); \
	NO_API UMaterialExpressionSceneColor(const UMaterialExpressionSceneColor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSceneColor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneColor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneColor)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_22_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionSceneColor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSceneColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneColor_h


#define FOREACH_ENUM_EMATERIALSCENEATTRIBUTEINPUTMODE(op) \
	op(EMaterialSceneAttributeInputMode::Coordinates) \
	op(EMaterialSceneAttributeInputMode::OffsetFraction) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
