// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameInstanceSubsystem_generated_h
#error "GameInstanceSubsystem.generated.h already included, missing '#pragma once' in GameInstanceSubsystem.h"
#endif
#define ENGINE_GameInstanceSubsystem_generated_h

#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameInstanceSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameInstanceSubsystem) \
	DECLARE_WITHIN(UGameInstance)


#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameInstanceSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameInstanceSubsystem) \
	DECLARE_WITHIN(UGameInstance)


#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInstanceSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstanceSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstanceSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstanceSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInstanceSubsystem(UGameInstanceSubsystem&&); \
	NO_API UGameInstanceSubsystem(const UGameInstanceSubsystem&); \
public:


#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInstanceSubsystem(UGameInstanceSubsystem&&); \
	NO_API UGameInstanceSubsystem(const UGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInstanceSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameInstanceSubsystem)


#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
