// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionAntialiasedTextureMask_generated_h
#error "MaterialExpressionAntialiasedTextureMask.generated.h already included, missing '#pragma once' in MaterialExpressionAntialiasedTextureMask.h"
#endif
#define ENGINE_MaterialExpressionAntialiasedTextureMask_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask(); \
	friend struct Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionAntialiasedTextureMask, UMaterialExpressionTextureSampleParameter2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionAntialiasedTextureMask)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask(); \
	friend struct Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionAntialiasedTextureMask, UMaterialExpressionTextureSampleParameter2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionAntialiasedTextureMask)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionAntialiasedTextureMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAntialiasedTextureMask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionAntialiasedTextureMask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAntialiasedTextureMask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionAntialiasedTextureMask(UMaterialExpressionAntialiasedTextureMask&&); \
	ENGINE_API UMaterialExpressionAntialiasedTextureMask(const UMaterialExpressionAntialiasedTextureMask&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionAntialiasedTextureMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionAntialiasedTextureMask(UMaterialExpressionAntialiasedTextureMask&&); \
	ENGINE_API UMaterialExpressionAntialiasedTextureMask(const UMaterialExpressionAntialiasedTextureMask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionAntialiasedTextureMask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAntialiasedTextureMask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAntialiasedTextureMask)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_23_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionAntialiasedTextureMask."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionAntialiasedTextureMask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h


#define FOREACH_ENUM_ETEXTURECOLORCHANNEL(op) \
	op(TCC_Red) \
	op(TCC_Green) \
	op(TCC_Blue) \
	op(TCC_Alpha) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
