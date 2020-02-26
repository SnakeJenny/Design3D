// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Channel_generated_h
#error "Channel.generated.h already included, missing '#pragma once' in Channel.h"
#endif
#define ENGINE_Channel_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChannel, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChannel(); \
	friend struct Z_Construct_UClass_UChannel_Statics; \
public: \
	DECLARE_CLASS(UChannel, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UChannel) \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUChannel(); \
	friend struct Z_Construct_UClass_UChannel_Statics; \
public: \
	DECLARE_CLASS(UChannel, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UChannel) \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannel(UChannel&&); \
	NO_API UChannel(const UChannel&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannel(UChannel&&); \
	NO_API UChannel(const UChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannel)


#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_52_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Channel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Channel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
