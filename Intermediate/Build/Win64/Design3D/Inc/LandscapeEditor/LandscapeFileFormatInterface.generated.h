// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPEEDITOR_LandscapeFileFormatInterface_generated_h
#error "LandscapeFileFormatInterface.generated.h already included, missing '#pragma once' in LandscapeFileFormatInterface.h"
#endif
#define LANDSCAPEEDITOR_LandscapeFileFormatInterface_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_LandscapeEditor_Public_LandscapeFileFormatInterface_h


#define FOREACH_ENUM_ELANDSCAPEIMPORTRESULT(op) \
	op(ELandscapeImportResult::Success) \
	op(ELandscapeImportResult::Warning) \
	op(ELandscapeImportResult::Error) 

enum class ELandscapeImportResult : uint8;
template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
