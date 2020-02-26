// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONCONTROLLER_IAutomationReport_generated_h
#error "IAutomationReport.generated.h already included, missing '#pragma once' in IAutomationReport.h"
#endif
#define AUTOMATIONCONTROLLER_IAutomationReport_generated_h

#define Engine_Source_Developer_AutomationController_Public_IAutomationReport_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomationArtifact_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<struct FAutomationArtifact>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Developer_AutomationController_Public_IAutomationReport_h


#define FOREACH_ENUM_EAUTOMATIONARTIFACTTYPE(op) \
	op(EAutomationArtifactType::None) \
	op(EAutomationArtifactType::Image) \
	op(EAutomationArtifactType::Comparison) 

enum class EAutomationArtifactType : uint8;
template<> AUTOMATIONCONTROLLER_API UEnum* StaticEnum<EAutomationArtifactType>();

#define FOREACH_ENUM_EAUTOMATIONSTATE(op) \
	op(EAutomationState::NotRun) \
	op(EAutomationState::InProcess) \
	op(EAutomationState::Fail) \
	op(EAutomationState::Success) \
	op(EAutomationState::NotEnoughParticipants) 

enum class EAutomationState : uint8;
template<> AUTOMATIONCONTROLLER_API UEnum* StaticEnum<EAutomationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
