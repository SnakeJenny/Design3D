// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionCustom_generated_h
#error "MaterialExpressionCustom.generated.h already included, missing '#pragma once' in MaterialExpressionCustom.h"
#endif
#define ENGINE_MaterialExpressionCustom_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomInput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCustomInput>();

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionCustom, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCustom(); \
	friend struct Z_Construct_UClass_UMaterialExpressionCustom_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionCustom, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionCustom) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionCustom(); \
	friend struct Z_Construct_UClass_UMaterialExpressionCustom_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionCustom, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionCustom) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCustom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCustom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCustom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCustom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionCustom(UMaterialExpressionCustom&&); \
	ENGINE_API UMaterialExpressionCustom(const UMaterialExpressionCustom&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionCustom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionCustom(UMaterialExpressionCustom&&); \
	ENGINE_API UMaterialExpressionCustom(const UMaterialExpressionCustom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionCustom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionCustom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionCustom)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_37_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionCustom."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionCustom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCustom_h


#define FOREACH_ENUM_ECUSTOMMATERIALOUTPUTTYPE(op) \
	op(CMOT_Float1) \
	op(CMOT_Float2) \
	op(CMOT_Float3) \
	op(CMOT_Float4) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
