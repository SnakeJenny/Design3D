// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_MaterialExpressionLandscapeLayerCoords_generated_h
#error "MaterialExpressionLandscapeLayerCoords.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapeLayerCoords.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapeLayerCoords_generated_h

#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLandscapeLayerCoords, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeLayerCoords)


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLandscapeLayerCoords, UMaterialExpression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeLayerCoords)


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionLandscapeLayerCoords(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeLayerCoords) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionLandscapeLayerCoords); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeLayerCoords); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionLandscapeLayerCoords(UMaterialExpressionLandscapeLayerCoords&&); \
	NO_API UMaterialExpressionLandscapeLayerCoords(const UMaterialExpressionLandscapeLayerCoords&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionLandscapeLayerCoords(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialExpressionLandscapeLayerCoords(UMaterialExpressionLandscapeLayerCoords&&); \
	NO_API UMaterialExpressionLandscapeLayerCoords(const UMaterialExpressionLandscapeLayerCoords&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionLandscapeLayerCoords); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeLayerCoords); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeLayerCoords)


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_34_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialExpressionLandscapeLayerCoords."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class UMaterialExpressionLandscapeLayerCoords>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h


#define FOREACH_ENUM_ELANDSCAPECUSTOMIZEDCOORDTYPE(op) \
	op(LCCT_None) \
	op(LCCT_CustomUV0) \
	op(LCCT_CustomUV1) \
	op(LCCT_CustomUV2) \
	op(LCCT_WeightMapUV) 
#define FOREACH_ENUM_ETERRAINCOORDMAPPINGTYPE(op) \
	op(TCMT_Auto) \
	op(TCMT_XY) \
	op(TCMT_XZ) \
	op(TCMT_YZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
