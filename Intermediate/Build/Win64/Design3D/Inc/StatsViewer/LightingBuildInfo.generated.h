// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSVIEWER_LightingBuildInfo_generated_h
#error "LightingBuildInfo.generated.h already included, missing '#pragma once' in LightingBuildInfo.h"
#endif
#define STATSVIEWER_LightingBuildInfo_generated_h

#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_RPC_WRAPPERS
#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightingBuildInfo(); \
	friend struct Z_Construct_UClass_ULightingBuildInfo_Statics; \
public: \
	DECLARE_CLASS(ULightingBuildInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(ULightingBuildInfo)


#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULightingBuildInfo(); \
	friend struct Z_Construct_UClass_ULightingBuildInfo_Statics; \
public: \
	DECLARE_CLASS(ULightingBuildInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(ULightingBuildInfo)


#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API ULightingBuildInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightingBuildInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, ULightingBuildInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightingBuildInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API ULightingBuildInfo(ULightingBuildInfo&&); \
	STATSVIEWER_API ULightingBuildInfo(const ULightingBuildInfo&); \
public:


#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API ULightingBuildInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API ULightingBuildInfo(ULightingBuildInfo&&); \
	STATSVIEWER_API ULightingBuildInfo(const ULightingBuildInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, ULightingBuildInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightingBuildInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightingBuildInfo)


#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_19_PROLOG
#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_RPC_WRAPPERS \
	Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_INCLASS \
	Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LightingBuildInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSVIEWER_API UClass* StaticClass<class ULightingBuildInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_StatsViewer_Classes_LightingBuildInfo_h


#define FOREACH_ENUM_ELIGHTINGBUILDINFOOBJECTSETS(op) \
	op(LightingBuildInfoObjectSets_Default) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS