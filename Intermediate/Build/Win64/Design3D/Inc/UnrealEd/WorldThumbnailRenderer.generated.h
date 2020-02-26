// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_WorldThumbnailRenderer_generated_h
#error "WorldThumbnailRenderer.generated.h already included, missing '#pragma once' in WorldThumbnailRenderer.h"
#endif
#define UNREALED_WorldThumbnailRenderer_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldThumbnailRenderer(); \
	friend struct Z_Construct_UClass_UWorldThumbnailRenderer_Statics; \
public: \
	DECLARE_CLASS(UWorldThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UWorldThumbnailRenderer)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUWorldThumbnailRenderer(); \
	friend struct Z_Construct_UClass_UWorldThumbnailRenderer_Statics; \
public: \
	DECLARE_CLASS(UWorldThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UWorldThumbnailRenderer)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldThumbnailRenderer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldThumbnailRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldThumbnailRenderer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldThumbnailRenderer(UWorldThumbnailRenderer&&); \
	NO_API UWorldThumbnailRenderer(const UWorldThumbnailRenderer&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldThumbnailRenderer(UWorldThumbnailRenderer&&); \
	NO_API UWorldThumbnailRenderer(const UWorldThumbnailRenderer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldThumbnailRenderer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldThumbnailRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldThumbnailRenderer)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GlobalOrbitPitchOffset() { return STRUCT_OFFSET(UWorldThumbnailRenderer, GlobalOrbitPitchOffset); } \
	FORCEINLINE static uint32 __PPO__GlobalOrbitYawOffset() { return STRUCT_OFFSET(UWorldThumbnailRenderer, GlobalOrbitYawOffset); } \
	FORCEINLINE static uint32 __PPO__bUseUnlitScene() { return STRUCT_OFFSET(UWorldThumbnailRenderer, bUseUnlitScene); } \
	FORCEINLINE static uint32 __PPO__bAllowWorldThumbnails() { return STRUCT_OFFSET(UWorldThumbnailRenderer, bAllowWorldThumbnails); }


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_19_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldThumbnailRenderer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UWorldThumbnailRenderer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
