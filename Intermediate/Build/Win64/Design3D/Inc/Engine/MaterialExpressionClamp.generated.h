// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionClamp_generated_h
#error "MaterialExpressionClamp.generated.h already included, missing '#pragma once' in MaterialExpressionClamp.h"
#endif
#define ENGINE_MaterialExpressionClamp_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionClamp, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionClamp(); \
	friend struct Z_Construct_UClass_UMaterialExpressionClamp_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionClamp, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionClamp) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionClamp(); \
	friend struct Z_Construct_UClass_UMaterialExpressionClamp_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionClamp, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionClamp) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionClamp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionClamp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionClamp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionClamp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionClamp(UMaterialExpressionClamp&&); \
	ENGINE_API UMaterialExpressionClamp(const UMaterialExpressionClamp&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionClamp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionClamp(UMaterialExpressionClamp&&); \
	ENGINE_API UMaterialExpressionClamp(const UMaterialExpressionClamp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionClamp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionClamp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionClamp)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionClamp."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionClamp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h


#define FOREACH_ENUM_ECLAMPMODE(op) \
	op(CMODE_Clamp) \
	op(CMODE_ClampMin) \
	op(CMODE_ClampMax) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
