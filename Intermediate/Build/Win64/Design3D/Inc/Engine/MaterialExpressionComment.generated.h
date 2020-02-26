// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionComment_generated_h
#error "MaterialExpressionComment.generated.h already included, missing '#pragma once' in MaterialExpressionComment.h"
#endif
#define ENGINE_MaterialExpressionComment_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionComment(); \
	friend struct Z_Construct_UClass_UMaterialExpressionComment_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionComment, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionComment)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionComment(); \
	friend struct Z_Construct_UClass_UMaterialExpressionComment_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionComment, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionComment)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionComment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionComment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionComment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionComment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionComment(UMaterialExpressionComment&&); \
	ENGINE_API UMaterialExpressionComment(const UMaterialExpressionComment&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionComment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionComment(UMaterialExpressionComment&&); \
	ENGINE_API UMaterialExpressionComment(const UMaterialExpressionComment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionComment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionComment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionComment)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionComment."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionComment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
