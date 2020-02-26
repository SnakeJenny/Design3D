// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_BaseMediaSource_generated_h
#error "BaseMediaSource.generated.h already included, missing '#pragma once' in BaseMediaSource.h"
#endif
#define MEDIAASSETS_BaseMediaSource_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_RPC_WRAPPERS
#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBaseMediaSource, NO_API)


#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseMediaSource(); \
	friend struct Z_Construct_UClass_UBaseMediaSource_Statics; \
public: \
	DECLARE_CLASS(UBaseMediaSource, UMediaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UBaseMediaSource) \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUBaseMediaSource(); \
	friend struct Z_Construct_UClass_UBaseMediaSource_Statics; \
public: \
	DECLARE_CLASS(UBaseMediaSource, UMediaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UBaseMediaSource) \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMediaSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMediaSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseMediaSource(UBaseMediaSource&&); \
	NO_API UBaseMediaSource(const UBaseMediaSource&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseMediaSource(UBaseMediaSource&&); \
	NO_API UBaseMediaSource(const UBaseMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMediaSource)


#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerName() { return STRUCT_OFFSET(UBaseMediaSource, PlayerName); }


#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_18_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UBaseMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
