// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameState_generated_h
#error "GameState.generated.h already included, missing '#pragma once' in GameState.h"
#endif
#define ENGINE_GameState_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ElapsedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ElapsedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MatchState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MatchState(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ElapsedTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ElapsedTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_MatchState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_MatchState(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameState(); \
	friend struct Z_Construct_UClass_AGameState_Statics; \
public: \
	DECLARE_CLASS(AGameState, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAGameState(); \
	friend struct Z_Construct_UClass_AGameState_Statics; \
public: \
	DECLARE_CLASS(AGameState, AGameStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameState(AGameState&&); \
	NO_API AGameState(const AGameState&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameState(AGameState&&); \
	NO_API AGameState(const AGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameState)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MatchState() { return STRUCT_OFFSET(AGameState, MatchState); } \
	FORCEINLINE static uint32 __PPO__PreviousMatchState() { return STRUCT_OFFSET(AGameState, PreviousMatchState); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_15_PROLOG
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
