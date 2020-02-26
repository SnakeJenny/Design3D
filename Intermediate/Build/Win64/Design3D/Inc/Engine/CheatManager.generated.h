// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AActor;
class APawn;
#ifdef ENGINE_CheatManager_generated_h
#error "CheatManager.generated.h already included, missing '#pragma once' in CheatManager.h"
#endif
#define ENGINE_CheatManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSafeArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSafeArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleServerStatReplicatorUpdateStatNet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleServerStatReplicatorUpdateStatNet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleServerStatReplicatorClientOverwrite) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleServerStatReplicatorClientOverwrite(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyServerStatReplicator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyServerStatReplicator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnServerStatReplicator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnServerStatReplicator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheatScript) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScriptName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheatScript(Z_Param_ScriptName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertMouse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvertMouse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivityToDefault) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSensitivityToDefault(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldOrigin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorldOrigin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogLoc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LogLoc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushLog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushLog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItStringCreator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ViewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_ViewRotation); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GoString); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_LocString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BugItStringCreator(Z_Param_ViewLocation,Z_Param_ViewRotation,Z_Param_Out_GoString,Z_Param_Out_LocString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugIt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScreenShotDescription); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BugIt(Z_Param_ScreenShotDescription); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItGo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BugItGo(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpVoiceMutingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpVoiceMutingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpChatState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpChatState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpPartyState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpPartyState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpOnlineSessionState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpOnlineSessionState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestCollisionDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestCollisionDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepClear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepComplex) \
	{ \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepComplex(Z_Param_bTraceComplex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepChannel(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepSize(Z_Param_HalfHeight,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweep) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweep(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerToggleAILogging_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate")); \
			return; \
		} \
		P_THIS->ServerToggleAILogging_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAILogging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelOut) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StreamLevelOut(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnlyLoadLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnlyLoadLevel(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelIn) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StreamLevelIn(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DesiredClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ViewClass(Z_Param_DesiredClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewActor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActorName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ViewActor(Z_Param_ActorName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewPlayer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ViewPlayer(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewSelf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ViewSelf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayersOnly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayersOnly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSummon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Summon(Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPawns) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyPawns(Z_Param_aClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAllPawnsExceptTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyAllPawnsExceptTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAll) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyAll(Z_Param_aClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTarget(Z_Param_DamageAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTimeDilation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Slomo(Z_Param_NewTimeDilation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->God(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGhost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Ghost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Walk(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_F); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeSize(Z_Param_F); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Teleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreezeFrame) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FreezeFrame(Z_Param_Delay); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSafeArea) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSafeArea(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleServerStatReplicatorUpdateStatNet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleServerStatReplicatorUpdateStatNet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleServerStatReplicatorClientOverwrite) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleServerStatReplicatorClientOverwrite(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyServerStatReplicator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyServerStatReplicator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnServerStatReplicator) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnServerStatReplicator(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheatScript) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScriptName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheatScript(Z_Param_ScriptName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvertMouse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InvertMouse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSensitivityToDefault) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSensitivityToDefault(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWorldOrigin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWorldOrigin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogLoc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LogLoc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushLog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushLog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItStringCreator) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ViewLocation); \
		P_GET_STRUCT(FRotator,Z_Param_ViewRotation); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_GoString); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_LocString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BugItStringCreator(Z_Param_ViewLocation,Z_Param_ViewRotation,Z_Param_Out_GoString,Z_Param_Out_LocString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugIt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScreenShotDescription); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BugIt(Z_Param_ScreenShotDescription); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBugItGo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Y); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Z); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Roll); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BugItGo(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Pitch,Z_Param_Yaw,Z_Param_Roll); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpVoiceMutingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpVoiceMutingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpChatState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpChatState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpPartyState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpPartyState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDumpOnlineSessionState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DumpOnlineSessionState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestCollisionDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestCollisionDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepClear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepClear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepPawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepPawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepComplex) \
	{ \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepComplex(Z_Param_bTraceComplex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepChannel) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepChannel(ECollisionChannel(Z_Param_Channel)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweepSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweepSize(Z_Param_HalfHeight,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDebugCapsuleSweep) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DebugCapsuleSweep(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerToggleAILogging_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate")); \
			return; \
		} \
		P_THIS->ServerToggleAILogging_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleAILogging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleAILogging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDebugCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDebugCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelOut) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StreamLevelOut(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnlyLoadLevel) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnlyLoadLevel(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStreamLevelIn) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StreamLevelIn(Z_Param_PackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DesiredClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ViewClass(Z_Param_DesiredClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewActor) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ActorName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ViewActor(Z_Param_ActorName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewPlayer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_S); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ViewPlayer(Z_Param_S); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execViewSelf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ViewSelf(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayersOnly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayersOnly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSummon) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Summon(Z_Param_ClassName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPawns) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyPawns(Z_Param_aClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAllPawnsExceptTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyAllPawnsExceptTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyAll) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_aClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyAll(Z_Param_aClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTarget) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTarget(Z_Param_DamageAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTimeDilation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Slomo(Z_Param_NewTimeDilation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->God(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGhost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Ghost(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWalk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Walk(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFly) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fly(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeSize) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_F); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeSize(Z_Param_F); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Teleport(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFreezeFrame) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FreezeFrame(Z_Param_Delay); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_EVENT_PARMS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheatManager(); \
	friend struct Z_Construct_UClass_UCheatManager_Statics; \
public: \
	DECLARE_CLASS(UCheatManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCheatManager) \
	DECLARE_WITHIN(APlayerController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUCheatManager(); \
	friend struct Z_Construct_UClass_UCheatManager_Statics; \
public: \
	DECLARE_CLASS(UCheatManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCheatManager) \
	DECLARE_WITHIN(APlayerController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheatManager(UCheatManager&&); \
	NO_API UCheatManager(const UCheatManager&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheatManager(UCheatManager&&); \
	NO_API UCheatManager(const UCheatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheatManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheatManager)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_68_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CheatManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCheatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
