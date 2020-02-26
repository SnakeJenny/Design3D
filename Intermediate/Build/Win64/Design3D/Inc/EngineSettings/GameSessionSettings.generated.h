// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINESETTINGS_GameSessionSettings_generated_h
#error "GameSessionSettings.generated.h already included, missing '#pragma once' in GameSessionSettings.h"
#endif
#define ENGINESETTINGS_GameSessionSettings_generated_h

#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_RPC_WRAPPERS
#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSessionSettings(); \
	friend struct Z_Construct_UClass_UGameSessionSettings_Statics; \
public: \
	DECLARE_CLASS(UGameSessionSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSessionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameSessionSettings(); \
	friend struct Z_Construct_UClass_UGameSessionSettings_Statics; \
public: \
	DECLARE_CLASS(UGameSessionSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameSessionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSessionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSessionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSessionSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSessionSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSessionSettings(UGameSessionSettings&&); \
	NO_API UGameSessionSettings(const UGameSessionSettings&); \
public:


#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSessionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSessionSettings(UGameSessionSettings&&); \
	NO_API UGameSessionSettings(const UGameSessionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSessionSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSessionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSessionSettings)


#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_11_PROLOG
#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_INCLASS \
	Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameSessionSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINESETTINGS_API UClass* StaticClass<class UGameSessionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_EngineSettings_Classes_GameSessionSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
