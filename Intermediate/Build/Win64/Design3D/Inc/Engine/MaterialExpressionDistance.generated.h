// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionDistance_generated_h
#error "MaterialExpressionDistance.generated.h already included, missing '#pragma once' in MaterialExpressionDistance.h"
#endif
#define ENGINE_MaterialExpressionDistance_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDistance(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDistance_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDistance, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDistance)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDistance(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDistance_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDistance, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDistance)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionDistance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDistance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionDistance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDistance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionDistance(UMaterialExpressionDistance&&); \
	ENGINE_API UMaterialExpressionDistance(const UMaterialExpressionDistance&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionDistance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionDistance(UMaterialExpressionDistance&&); \
	ENGINE_API UMaterialExpressionDistance(const UMaterialExpressionDistance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionDistance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDistance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDistance)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionDistance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionDistance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
