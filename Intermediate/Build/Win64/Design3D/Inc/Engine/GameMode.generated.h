// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameMode_generated_h
#error "GameMode.generated.h already included, missing '#pragma once' in GameMode.h"
#endif
#define ENGINE_GameMode_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_RPC_WRAPPERS \
	virtual bool ReadyToEndMatch_Implementation(); \
	virtual bool ReadyToStartMatch_Implementation(); \
 \
	DECLARE_FUNCTION(execSetBandwidthLimit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AsyncIOBandwidthLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBandwidthLimit(Z_Param_AsyncIOBandwidthLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Say(Z_Param_Msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadyToEndMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadyToEndMatch_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadyToStartMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadyToStartMatch_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortMatch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndMatch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartMatch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMatchEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMatchEnded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMatchInProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMatchInProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetMatchState(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ReadyToEndMatch_Implementation(); \
	virtual bool ReadyToStartMatch_Implementation(); \
 \
	DECLARE_FUNCTION(execSetBandwidthLimit) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AsyncIOBandwidthLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBandwidthLimit(Z_Param_AsyncIOBandwidthLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Msg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Say(Z_Param_Msg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadyToEndMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadyToEndMatch_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadyToStartMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadyToStartMatch_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAbortMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AbortMatch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RestartGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndMatch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartMatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartMatch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMatchEnded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMatchEnded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMatchInProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMatchInProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetMatchState(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_EVENT_PARMS \
	struct GameMode_eventK2_OnSetMatchState_Parms \
	{ \
		FName NewState; \
	}; \
	struct GameMode_eventReadyToEndMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameMode_eventReadyToEndMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameMode_eventReadyToStartMatch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameMode_eventReadyToStartMatch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameMode(); \
	friend struct Z_Construct_UClass_AGameMode_Statics; \
public: \
	DECLARE_CLASS(AGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameMode)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAGameMode(); \
	friend struct Z_Construct_UClass_AGameMode_Statics; \
public: \
	DECLARE_CLASS(AGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameMode)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameMode(AGameMode&&); \
	NO_API AGameMode(const AGameMode&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameMode(AGameMode&&); \
	NO_API AGameMode(const AGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameMode)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MatchState() { return STRUCT_OFFSET(AGameMode, MatchState); } \
	FORCEINLINE static uint32 __PPO__InactivePlayerStateLifeSpan() { return STRUCT_OFFSET(AGameMode, InactivePlayerStateLifeSpan); } \
	FORCEINLINE static uint32 __PPO__MaxInactivePlayers() { return STRUCT_OFFSET(AGameMode, MaxInactivePlayers); } \
	FORCEINLINE static uint32 __PPO__bHandleDedicatedServerReplays() { return STRUCT_OFFSET(AGameMode, bHandleDedicatedServerReplays); }


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_34_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameMode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
