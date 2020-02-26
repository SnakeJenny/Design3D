// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONCONTROLLER_AutomationControllerManager_generated_h
#error "AutomationControllerManager.generated.h already included, missing '#pragma once' in AutomationControllerManager.h"
#endif
#define AUTOMATIONCONTROLLER_AutomationControllerManager_generated_h

#define Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomatedTestPassResults_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<struct FAutomatedTestPassResults>();

#define Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomatedTestResult_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Entries() { return STRUCT_OFFSET(FAutomatedTestResult, Entries); } \
	FORCEINLINE static uint32 __PPO__Warnings() { return STRUCT_OFFSET(FAutomatedTestResult, Warnings); } \
	FORCEINLINE static uint32 __PPO__Errors() { return STRUCT_OFFSET(FAutomatedTestResult, Errors); } \
	FORCEINLINE static uint32 __PPO__Artifacts() { return STRUCT_OFFSET(FAutomatedTestResult, Artifacts); }


template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<struct FAutomatedTestResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_AutomationController_Private_AutomationControllerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
