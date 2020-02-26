// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LocalPlayerSubsystem_generated_h
#error "LocalPlayerSubsystem.generated.h already included, missing '#pragma once' in LocalPlayerSubsystem.h"
#endif
#define ENGINE_LocalPlayerSubsystem_generated_h

#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalPlayerSubsystem(); \
	friend struct Z_Construct_UClass_ULocalPlayerSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULocalPlayerSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalPlayerSubsystem) \
	DECLARE_WITHIN(ULocalPlayer)


#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULocalPlayerSubsystem(); \
	friend struct Z_Construct_UClass_ULocalPlayerSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULocalPlayerSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULocalPlayerSubsystem) \
	DECLARE_WITHIN(ULocalPlayer)


#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalPlayerSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalPlayerSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalPlayerSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayerSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalPlayerSubsystem(ULocalPlayerSubsystem&&); \
	NO_API ULocalPlayerSubsystem(const ULocalPlayerSubsystem&); \
public:


#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocalPlayerSubsystem(ULocalPlayerSubsystem&&); \
	NO_API ULocalPlayerSubsystem(const ULocalPlayerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalPlayerSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULocalPlayerSubsystem)


#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULocalPlayerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
