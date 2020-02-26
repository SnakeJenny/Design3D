// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerLocalController_generated_h
#error "GameplayDebuggerLocalController.generated.h already included, missing '#pragma once' in GameplayDebuggerLocalController.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerLocalController_generated_h

#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_RPC_WRAPPERS
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerLocalController(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerLocalController_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerLocalController, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerLocalController)


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerLocalController(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerLocalController_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerLocalController, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerLocalController)


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerLocalController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerLocalController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerLocalController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerLocalController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerLocalController(UGameplayDebuggerLocalController&&); \
	NO_API UGameplayDebuggerLocalController(const UGameplayDebuggerLocalController&); \
public:


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayDebuggerLocalController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayDebuggerLocalController(UGameplayDebuggerLocalController&&); \
	NO_API UGameplayDebuggerLocalController(const UGameplayDebuggerLocalController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayDebuggerLocalController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerLocalController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerLocalController)


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CachedReplicator() { return STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedReplicator); } \
	FORCEINLINE static uint32 __PPO__CachedPlayerManager() { return STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedPlayerManager); } \
	FORCEINLINE static uint32 __PPO__DebugActorCandidate() { return STRUCT_OFFSET(UGameplayDebuggerLocalController, DebugActorCandidate); }


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_19_PROLOG
#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_RPC_WRAPPERS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_INCLASS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayDebuggerLocalController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class UGameplayDebuggerLocalController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_GameplayDebugger_Public_GameplayDebuggerLocalController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
