// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_MaterialGraph_generated_h
#error "MaterialGraph.generated.h already included, missing '#pragma once' in MaterialGraph.h"
#endif
#define UNREALED_MaterialGraph_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialGraph(); \
	friend struct Z_Construct_UClass_UMaterialGraph_Statics; \
public: \
	DECLARE_CLASS(UMaterialGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UMaterialGraph)


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialGraph(); \
	friend struct Z_Construct_UClass_UMaterialGraph_Statics; \
public: \
	DECLARE_CLASS(UMaterialGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UMaterialGraph)


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialGraph(UMaterialGraph&&); \
	NO_API UMaterialGraph(const UMaterialGraph&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialGraph(UMaterialGraph&&); \
	NO_API UMaterialGraph(const UMaterialGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialGraph); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialGraph)


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_100_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h_103_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
