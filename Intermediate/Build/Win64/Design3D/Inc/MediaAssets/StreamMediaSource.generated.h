// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_StreamMediaSource_generated_h
#error "StreamMediaSource.generated.h already included, missing '#pragma once' in StreamMediaSource.h"
#endif
#define MEDIAASSETS_StreamMediaSource_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_RPC_WRAPPERS
#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamMediaSource(); \
	friend struct Z_Construct_UClass_UStreamMediaSource_Statics; \
public: \
	DECLARE_CLASS(UStreamMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UStreamMediaSource)


#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStreamMediaSource(); \
	friend struct Z_Construct_UClass_UStreamMediaSource_Statics; \
public: \
	DECLARE_CLASS(UStreamMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UStreamMediaSource)


#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamMediaSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamMediaSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreamMediaSource(UStreamMediaSource&&); \
	NO_API UStreamMediaSource(const UStreamMediaSource&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreamMediaSource(UStreamMediaSource&&); \
	NO_API UStreamMediaSource(const UStreamMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamMediaSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamMediaSource)


#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_12_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UStreamMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
