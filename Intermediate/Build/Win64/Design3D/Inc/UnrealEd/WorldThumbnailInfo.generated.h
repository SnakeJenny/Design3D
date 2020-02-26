// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_WorldThumbnailInfo_generated_h
#error "WorldThumbnailInfo.generated.h already included, missing '#pragma once' in WorldThumbnailInfo.h"
#endif
#define UNREALED_WorldThumbnailInfo_generated_h

#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_RPC_WRAPPERS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldThumbnailInfo(); \
	friend struct Z_Construct_UClass_UWorldThumbnailInfo_Statics; \
public: \
	DECLARE_CLASS(UWorldThumbnailInfo, USceneThumbnailInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UWorldThumbnailInfo)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUWorldThumbnailInfo(); \
	friend struct Z_Construct_UClass_UWorldThumbnailInfo_Statics; \
public: \
	DECLARE_CLASS(UWorldThumbnailInfo, USceneThumbnailInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UWorldThumbnailInfo)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldThumbnailInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldThumbnailInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldThumbnailInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldThumbnailInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UWorldThumbnailInfo(UWorldThumbnailInfo&&); \
	UNREALED_API UWorldThumbnailInfo(const UWorldThumbnailInfo&); \
public:


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldThumbnailInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UWorldThumbnailInfo(UWorldThumbnailInfo&&); \
	UNREALED_API UWorldThumbnailInfo(const UWorldThumbnailInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldThumbnailInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldThumbnailInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldThumbnailInfo)


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_29_PROLOG
#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_RPC_WRAPPERS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_INCLASS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldThumbnailInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UWorldThumbnailInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h


#define FOREACH_ENUM_EORTHOTHUMBNAILDIRECTION(op) \
	op(EOrthoThumbnailDirection::Top) \
	op(EOrthoThumbnailDirection::Bottom) \
	op(EOrthoThumbnailDirection::Left) \
	op(EOrthoThumbnailDirection::Right) \
	op(EOrthoThumbnailDirection::Front) \
	op(EOrthoThumbnailDirection::Back) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
