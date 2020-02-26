// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h
#error "GameplayDebuggerConfig.generated.h already included, missing '#pragma once' in GameplayDebuggerConfig.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h

#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerExtensionConfig>();

#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerCategoryConfig>();

#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerInputConfig>();

#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_RPC_WRAPPERS
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGameplayDebuggerConfig, NO_API)


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerConfig(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerConfig_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerConfig) \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerConfig(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerConfig_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerConfig) \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerConfig(UGameplayDebuggerConfig&&); \
	NO_API UGameplayDebuggerConfig(const UGameplayDebuggerConfig&); \
public:


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerConfig(UGameplayDebuggerConfig&&); \
	NO_API UGameplayDebuggerConfig(const UGameplayDebuggerConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerConfig)


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_97_PROLOG
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_RPC_WRAPPERS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_INCLASS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h_100_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayDebuggerConfig."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class UGameplayDebuggerConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerConfig_h


#define FOREACH_ENUM_EGAMEPLAYDEBUGGEROVERRIDEMODE(op) \
	op(EGameplayDebuggerOverrideMode::Enable) \
	op(EGameplayDebuggerOverrideMode::Disable) \
	op(EGameplayDebuggerOverrideMode::UseDefault) 

enum class EGameplayDebuggerOverrideMode : uint8;
template<> GAMEPLAYDEBUGGER_API UEnum* StaticEnum<EGameplayDebuggerOverrideMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
