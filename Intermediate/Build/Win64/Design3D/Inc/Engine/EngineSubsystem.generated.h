// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EngineSubsystem_generated_h
#error "EngineSubsystem.generated.h already included, missing '#pragma once' in EngineSubsystem.h"
#endif
#define ENGINE_EngineSubsystem_generated_h

#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineSubsystem(); \
	friend struct Z_Construct_UClass_UEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEngineSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngineSubsystem)


#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUEngineSubsystem(); \
	friend struct Z_Construct_UClass_UEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEngineSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEngineSubsystem)


#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEngineSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngineSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngineSubsystem(UEngineSubsystem&&); \
	NO_API UEngineSubsystem(const UEngineSubsystem&); \
public:


#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEngineSubsystem(UEngineSubsystem&&); \
	NO_API UEngineSubsystem(const UEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEngineSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEngineSubsystem)


#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_20_PROLOG
#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_INCLASS \
	Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
