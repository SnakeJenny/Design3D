// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCER_ISequencer_generated_h
#error "ISequencer.generated.h already included, missing '#pragma once' in ISequencer.h"
#endif
#define SEQUENCER_ISequencer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_Sequencer_Public_ISequencer_h


#define FOREACH_ENUM_EKEYGROUPMODE(op) \
	op(EKeyGroupMode::KeyChanged) \
	op(EKeyGroupMode::KeyGroup) \
	op(EKeyGroupMode::KeyAll) 

enum class EKeyGroupMode : uint8;
template<> SEQUENCER_API UEnum* StaticEnum<EKeyGroupMode>();

#define FOREACH_ENUM_EALLOWEDITSMODE(op) \
	op(EAllowEditsMode::AllEdits) \
	op(EAllowEditsMode::AllowSequencerEditsOnly) \
	op(EAllowEditsMode::AllowLevelEditsOnly) 

enum class EAllowEditsMode : uint8;
template<> SEQUENCER_API UEnum* StaticEnum<EAllowEditsMode>();

#define FOREACH_ENUM_EAUTOCHANGEMODE(op) \
	op(EAutoChangeMode::AutoKey) \
	op(EAutoChangeMode::AutoTrack) \
	op(EAutoChangeMode::All) \
	op(EAutoChangeMode::None) 

enum class EAutoChangeMode : uint8;
template<> SEQUENCER_API UEnum* StaticEnum<EAutoChangeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
