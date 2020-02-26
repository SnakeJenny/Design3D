// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSVIEWER_TextureStats_generated_h
#error "TextureStats.generated.h already included, missing '#pragma once' in TextureStats.h"
#endif
#define STATSVIEWER_TextureStats_generated_h

#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_RPC_WRAPPERS
#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureStats(); \
	friend struct Z_Construct_UClass_UTextureStats_Statics; \
public: \
	DECLARE_CLASS(UTextureStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UTextureStats)


#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUTextureStats(); \
	friend struct Z_Construct_UClass_UTextureStats_Statics; \
public: \
	DECLARE_CLASS(UTextureStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UTextureStats)


#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UTextureStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UTextureStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UTextureStats(UTextureStats&&); \
	STATSVIEWER_API UTextureStats(const UTextureStats&); \
public:


#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UTextureStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UTextureStats(UTextureStats&&); \
	STATSVIEWER_API UTextureStats(const UTextureStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UTextureStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureStats)


#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_33_PROLOG
#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_RPC_WRAPPERS \
	Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_INCLASS \
	Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_StatsViewer_Classes_TextureStats_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureStats."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSVIEWER_API UClass* StaticClass<class UTextureStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_StatsViewer_Classes_TextureStats_h


#define FOREACH_ENUM_ETEXTUREOBJECTSETS(op) \
	op(TextureObjectSet_CurrentStreamingLevel) \
	op(TextureObjectSet_AllStreamingLevels) \
	op(TextureObjectSet_SelectedActors) \
	op(TextureObjectSet_SelectedMaterials) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
