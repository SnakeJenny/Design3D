// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionChannelMaskParameter_generated_h
#error "MaterialExpressionChannelMaskParameter.generated.h already included, missing '#pragma once' in MaterialExpressionChannelMaskParameter.h"
#endif
#define ENGINE_MaterialExpressionChannelMaskParameter_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionChannelMaskParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionChannelMaskParameter, UMaterialExpressionVectorParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionChannelMaskParameter)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionChannelMaskParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionChannelMaskParameter, UMaterialExpressionVectorParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionChannelMaskParameter)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionChannelMaskParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionChannelMaskParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionChannelMaskParameter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionChannelMaskParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionChannelMaskParameter(UMaterialExpressionChannelMaskParameter&&); \
	ENGINE_API UMaterialExpressionChannelMaskParameter(const UMaterialExpressionChannelMaskParameter&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionChannelMaskParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionChannelMaskParameter(UMaterialExpressionChannelMaskParameter&&); \
	ENGINE_API UMaterialExpressionChannelMaskParameter(const UMaterialExpressionChannelMaskParameter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionChannelMaskParameter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionChannelMaskParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionChannelMaskParameter)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_22_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionChannelMaskParameter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionChannelMaskParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h


#define FOREACH_ENUM_ECHANNELMASKPARAMETERCOLOR(op) \
	op(EChannelMaskParameterColor::Red) \
	op(EChannelMaskParameterColor::Green) \
	op(EChannelMaskParameterColor::Blue) \
	op(EChannelMaskParameterColor::Alpha) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
