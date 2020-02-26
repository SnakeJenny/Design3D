// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISubsystem_generated_h
#error "AISubsystem.generated.h already included, missing '#pragma once' in AISubsystem.h"
#endif
#define AIMODULE_AISubsystem_generated_h

#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISubsystem(); \
	friend struct Z_Construct_UClass_UAISubsystem_Statics; \
public: \
	DECLARE_CLASS(UAISubsystem, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAISubsystem(); \
	friend struct Z_Construct_UClass_UAISubsystem_Statics; \
public: \
	DECLARE_CLASS(UAISubsystem, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISubsystem(UAISubsystem&&); \
	NO_API UAISubsystem(const UAISubsystem&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISubsystem(UAISubsystem&&); \
	NO_API UAISubsystem(const UAISubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISubsystem)


#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AISystem() { return STRUCT_OFFSET(UAISubsystem, AISystem); }


#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_14_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_AISubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_AISubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
