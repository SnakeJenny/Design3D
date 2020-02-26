// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTime_generated_h
#error "MaterialExpressionTime.generated.h already included, missing '#pragma once' in MaterialExpressionTime.h"
#endif
#define ENGINE_MaterialExpressionTime_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTime(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTime_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTime, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTime)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTime(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTime_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTime, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTime)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTime); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionTime(UMaterialExpressionTime&&); \
	ENGINE_API UMaterialExpressionTime(const UMaterialExpressionTime&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionTime(UMaterialExpressionTime&&); \
	ENGINE_API UMaterialExpressionTime(const UMaterialExpressionTime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTime); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTime)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionTime."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
