// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
#ifdef MEDIAASSETS_MediaTexture_generated_h
#error "MediaTexture.generated.h already included, missing '#pragma once' in MediaTexture.h"
#endif
#define MEDIAASSETS_MediaTexture_generated_h

#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetWidth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAspectRatio) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAspectRatio(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMediaPlayer) \
	{ \
		P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetWidth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMediaPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAspectRatio) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAspectRatio(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaTexture(); \
	friend struct Z_Construct_UClass_UMediaTexture_Statics; \
public: \
	DECLARE_CLASS(UMediaTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaTexture)


#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMediaTexture(); \
	friend struct Z_Construct_UClass_UMediaTexture_Statics; \
public: \
	DECLARE_CLASS(UMediaTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaTexture)


#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaTexture(UMediaTexture&&); \
	NO_API UMediaTexture(const UMediaTexture&); \
public:


#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaTexture(UMediaTexture&&); \
	NO_API UMediaTexture(const UMediaTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaTexture)


#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MediaPlayer() { return STRUCT_OFFSET(UMediaTexture, MediaPlayer); }


#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_27_PROLOG
#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_INCLASS \
	Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaTexture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
