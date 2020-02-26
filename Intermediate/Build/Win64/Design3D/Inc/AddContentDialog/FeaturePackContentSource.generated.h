// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADDCONTENTDIALOG_FeaturePackContentSource_generated_h
#error "FeaturePackContentSource.generated.h already included, missing '#pragma once' in FeaturePackContentSource.h"
#endif
#define ADDCONTENTDIALOG_FeaturePackContentSource_generated_h

#define Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics; \
	ADDCONTENTDIALOG_API static class UScriptStruct* StaticStruct();


template<> ADDCONTENTDIALOG_API UScriptStruct* StaticStruct<struct FFeatureAdditionalFiles>();

#define Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics; \
	ADDCONTENTDIALOG_API static class UScriptStruct* StaticStruct();


template<> ADDCONTENTDIALOG_API UScriptStruct* StaticStruct<struct FFeaturePackLevelSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h


#define FOREACH_ENUM_EFEATUREPACKDETAILLEVEL(op) \
	op(EFeaturePackDetailLevel::Standard) \
	op(EFeaturePackDetailLevel::High) 

enum class EFeaturePackDetailLevel : uint8;
template<> ADDCONTENTDIALOG_API UEnum* StaticEnum<EFeaturePackDetailLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
