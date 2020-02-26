// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSpeedTree_generated_h
#error "MaterialExpressionSpeedTree.generated.h already included, missing '#pragma once' in MaterialExpressionSpeedTree.h"
#endif
#define ENGINE_MaterialExpressionSpeedTree_generated_h

#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionSpeedTree, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSpeedTree(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSpeedTree, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSpeedTree) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSpeedTree(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSpeedTree, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSpeedTree) \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSpeedTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSpeedTree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSpeedTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSpeedTree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionSpeedTree(UMaterialExpressionSpeedTree&&); \
	ENGINE_API UMaterialExpressionSpeedTree(const UMaterialExpressionSpeedTree&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSpeedTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialExpressionSpeedTree(UMaterialExpressionSpeedTree&&); \
	ENGINE_API UMaterialExpressionSpeedTree(const UMaterialExpressionSpeedTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSpeedTree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSpeedTree); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSpeedTree)


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_40_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionSpeedTree."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSpeedTree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h


#define FOREACH_ENUM_ESPEEDTREELODTYPE(op) \
	op(STLOD_Pop) \
	op(STLOD_Smooth) 
#define FOREACH_ENUM_ESPEEDTREEWINDTYPE(op) \
	op(STW_None) \
	op(STW_Fastest) \
	op(STW_Fast) \
	op(STW_Better) \
	op(STW_Best) \
	op(STW_Palm) \
	op(STW_BestPlus) 
#define FOREACH_ENUM_ESPEEDTREEGEOMETRYTYPE(op) \
	op(STG_Branch) \
	op(STG_Frond) \
	op(STG_Leaf) \
	op(STG_FacingLeaf) \
	op(STG_Billboard) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
