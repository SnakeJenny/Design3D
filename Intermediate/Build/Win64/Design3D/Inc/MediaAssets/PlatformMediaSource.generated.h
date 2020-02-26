// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_PlatformMediaSource_generated_h
#error "PlatformMediaSource.generated.h already included, missing '#pragma once' in PlatformMediaSource.h"
#endif
#define MEDIAASSETS_PlatformMediaSource_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPlatformMediaSource, NO_API)


#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformMediaSource(); \
	friend struct Z_Construct_UClass_UPlatformMediaSource_Statics; \
public: \
	DECLARE_CLASS(UPlatformMediaSource, UMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UPlatformMediaSource) \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformMediaSource(); \
	friend struct Z_Construct_UClass_UPlatformMediaSource_Statics; \
public: \
	DECLARE_CLASS(UPlatformMediaSource, UMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UPlatformMediaSource) \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_ARCHIVESERIALIZER


#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformMediaSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformMediaSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformMediaSource(UPlatformMediaSource&&); \
	NO_API UPlatformMediaSource(const UPlatformMediaSource&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformMediaSource(UPlatformMediaSource&&); \
	NO_API UPlatformMediaSource(const UPlatformMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformMediaSource)


#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MediaSource() { return STRUCT_OFFSET(UPlatformMediaSource, MediaSource); }


#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_19_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UPlatformMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
