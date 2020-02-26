// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorChannel_generated_h
#error "ActorChannel.generated.h already included, missing '#pragma once' in ActorChannel.h"
#endif
#define ENGINE_ActorChannel_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UActorChannel, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorChannel(); \
	friend struct Z_Construct_UClass_UActorChannel_Statics; \
public: \
	DECLARE_CLASS(UActorChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorChannel) \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUActorChannel(); \
	friend struct Z_Construct_UClass_UActorChannel_Statics; \
public: \
	DECLARE_CLASS(UActorChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorChannel) \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorChannel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorChannel(UActorChannel&&); \
	NO_API UActorChannel(const UActorChannel&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorChannel(UActorChannel&&); \
	NO_API UActorChannel(const UActorChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorChannel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorChannel)


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_49_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_53_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ActorChannel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
