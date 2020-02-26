// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETOOLS_FloatChannelKeyProxy_generated_h
#error "FloatChannelKeyProxy.generated.h already included, missing '#pragma once' in FloatChannelKeyProxy.h"
#endif
#define MOVIESCENETOOLS_FloatChannelKeyProxy_generated_h

#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_RPC_WRAPPERS
#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFloatChannelKeyProxy(); \
	friend struct Z_Construct_UClass_UFloatChannelKeyProxy_Statics; \
public: \
	DECLARE_CLASS(UFloatChannelKeyProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), NO_API) \
	DECLARE_SERIALIZER(UFloatChannelKeyProxy) \
	virtual UObject* _getUObject() const override { return const_cast<UFloatChannelKeyProxy*>(this); }


#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFloatChannelKeyProxy(); \
	friend struct Z_Construct_UClass_UFloatChannelKeyProxy_Statics; \
public: \
	DECLARE_CLASS(UFloatChannelKeyProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTools"), NO_API) \
	DECLARE_SERIALIZER(UFloatChannelKeyProxy) \
	virtual UObject* _getUObject() const override { return const_cast<UFloatChannelKeyProxy*>(this); }


#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloatChannelKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatChannelKeyProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatChannelKeyProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatChannelKeyProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloatChannelKeyProxy(UFloatChannelKeyProxy&&); \
	NO_API UFloatChannelKeyProxy(const UFloatChannelKeyProxy&); \
public:


#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFloatChannelKeyProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFloatChannelKeyProxy(UFloatChannelKeyProxy&&); \
	NO_API UFloatChannelKeyProxy(const UFloatChannelKeyProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFloatChannelKeyProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFloatChannelKeyProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFloatChannelKeyProxy)


#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Time() { return STRUCT_OFFSET(UFloatChannelKeyProxy, Time); } \
	FORCEINLINE static uint32 __PPO__Value() { return STRUCT_OFFSET(UFloatChannelKeyProxy, Value); }


#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_17_PROLOG
#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_RPC_WRAPPERS \
	Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_INCLASS \
	Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETOOLS_API UClass* StaticClass<class UFloatChannelKeyProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
