// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeInfoMap_generated_h
#error "LandscapeInfoMap.generated.h already included, missing '#pragma once' in LandscapeInfoMap.h"
#endif
#define LANDSCAPE_LandscapeInfoMap_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeInfoMap, NO_API)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeInfoMap(); \
	friend struct Z_Construct_UClass_ULandscapeInfoMap_Statics; \
public: \
	DECLARE_CLASS(ULandscapeInfoMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfoMap) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeInfoMap(); \
	friend struct Z_Construct_UClass_ULandscapeInfoMap_Statics; \
public: \
	DECLARE_CLASS(ULandscapeInfoMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfoMap) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfoMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfoMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfoMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfoMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeInfoMap(ULandscapeInfoMap&&); \
	NO_API ULandscapeInfoMap(const ULandscapeInfoMap&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfoMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeInfoMap(ULandscapeInfoMap&&); \
	NO_API ULandscapeInfoMap(const ULandscapeInfoMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfoMap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfoMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfoMap)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_14_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeInfoMap."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeInfoMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
