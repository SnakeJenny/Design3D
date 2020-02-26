// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionParameter_generated_h
#error "MaterialExpressionParameter.generated.h already included, missing '#pragma once' in MaterialExpressionParameter.h"
#endif
#define ENGINE_MaterialExpressionParameter_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionParameter, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionParameter)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionParameter, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionParameter)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionParameter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionParameter(UMaterialExpressionParameter&&); \
	ENGINE_API UMaterialExpressionParameter(const UMaterialExpressionParameter&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionParameter(UMaterialExpressionParameter&&); \
	ENGINE_API UMaterialExpressionParameter(const UMaterialExpressionParameter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionParameter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParameter)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionParameter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
