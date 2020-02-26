// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationSystemConfig_generated_h
#error "NavigationSystemConfig.generated.h already included, missing '#pragma once' in NavigationSystemConfig.h"
#endif
#define ENGINE_NavigationSystemConfig_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemConfig(UNavigationSystemConfig&&); \
	NO_API UNavigationSystemConfig(const UNavigationSystemConfig&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemConfig(UNavigationSystemConfig&&); \
	NO_API UNavigationSystemConfig(const UNavigationSystemConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemConfig)


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_14_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavigationSystemConfig>();

#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNullNavSysConfig(); \
	friend struct Z_Construct_UClass_UNullNavSysConfig_Statics; \
public: \
	DECLARE_CLASS(UNullNavSysConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNullNavSysConfig)


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUNullNavSysConfig(); \
	friend struct Z_Construct_UClass_UNullNavSysConfig_Statics; \
public: \
	DECLARE_CLASS(UNullNavSysConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNullNavSysConfig)


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNullNavSysConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNullNavSysConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNullNavSysConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNullNavSysConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNullNavSysConfig(UNullNavSysConfig&&); \
	ENGINE_API UNullNavSysConfig(const UNullNavSysConfig&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNullNavSysConfig(UNullNavSysConfig&&); \
	ENGINE_API UNullNavSysConfig(const UNullNavSysConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNullNavSysConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNullNavSysConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNullNavSysConfig)


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_42_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNullNavSysConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
