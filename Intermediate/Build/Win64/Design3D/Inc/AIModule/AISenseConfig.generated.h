// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseConfig_generated_h
#error "AISenseConfig.generated.h already included, missing '#pragma once' in AISenseConfig.h"
#endif
#define AIMODULE_AISenseConfig_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseConfig(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISenseConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseConfig(); \
	friend struct Z_Construct_UClass_UAISenseConfig_Statics; \
public: \
	DECLARE_CLASS(UAISenseConfig, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISenseConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISenseConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISenseConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISenseConfig(UAISenseConfig&&); \
	NO_API UAISenseConfig(const UAISenseConfig&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISenseConfig(UAISenseConfig&&); \
	NO_API UAISenseConfig(const UAISenseConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISenseConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseConfig)


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DebugColor() { return STRUCT_OFFSET(UAISenseConfig, DebugColor); } \
	FORCEINLINE static uint32 __PPO__MaxAge() { return STRUCT_OFFSET(UAISenseConfig, MaxAge); }


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_17_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
