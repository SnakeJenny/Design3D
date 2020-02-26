// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTransformPosition_generated_h
#error "MaterialExpressionTransformPosition.generated.h already included, missing '#pragma once' in MaterialExpressionTransformPosition.h"
#endif
#define ENGINE_MaterialExpressionTransformPosition_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTransformPosition(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTransformPosition, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTransformPosition)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTransformPosition(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTransformPosition_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTransformPosition, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTransformPosition)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTransformPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTransformPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTransformPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTransformPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionTransformPosition(UMaterialExpressionTransformPosition&&); \
	ENGINE_API UMaterialExpressionTransformPosition(const UMaterialExpressionTransformPosition&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTransformPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionTransformPosition(UMaterialExpressionTransformPosition&&); \
	ENGINE_API UMaterialExpressionTransformPosition(const UMaterialExpressionTransformPosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTransformPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTransformPosition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTransformPosition)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_36_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionTransformPosition."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTransformPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTransformPosition_h


#define FOREACH_ENUM_EMATERIALPOSITIONTRANSFORMSOURCE(op) \
	op(TRANSFORMPOSSOURCE_Local) \
	op(TRANSFORMPOSSOURCE_World) \
	op(TRANSFORMPOSSOURCE_TranslatedWorld) \
	op(TRANSFORMPOSSOURCE_View) \
	op(TRANSFORMPOSSOURCE_Camera) \
	op(TRANSFORMPOSSOURCE_Particle) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
