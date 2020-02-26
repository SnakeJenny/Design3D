// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EngineMessage_generated_h
#error "EngineMessage.generated.h already included, missing '#pragma once' in EngineMessage.h"
#endif
#define ENGINE_EngineMessage_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineMessage(); \
	friend struct Z_Construct_UClass_UEngineMessage_Statics; \
public: \
	DECLARE_CLASS(UEngineMessage, ULocalMessage, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEngineMessage)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEngineMessage(); \
	friend struct Z_Construct_UClass_UEngineMessage_Statics; \
public: \
	DECLARE_CLASS(UEngineMessage, ULocalMessage, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEngineMessage)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEngineMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngineMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEngineMessage(UEngineMessage&&); \
	ENGINE_API UEngineMessage(const UEngineMessage&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEngineMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UEngineMessage(UEngineMessage&&); \
	ENGINE_API UEngineMessage(const UEngineMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngineMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineMessage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineMessage)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_10_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EngineMessage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngineMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_EngineMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
