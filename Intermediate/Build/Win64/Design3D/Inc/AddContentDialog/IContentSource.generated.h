// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADDCONTENTDIALOG_IContentSource_generated_h
#error "IContentSource.generated.h already included, missing '#pragma once' in IContentSource.h"
#endif
#define ADDCONTENTDIALOG_IContentSource_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_AddContentDialog_Private_IContentSource_h


#define FOREACH_ENUM_ECONTENTSOURCECATEGORY(op) \
	op(EContentSourceCategory::BlueprintFeature) \
	op(EContentSourceCategory::CodeFeature) \
	op(EContentSourceCategory::EnterpriseFeature) \
	op(EContentSourceCategory::Content) \
	op(EContentSourceCategory::EnterpriseContent) \
	op(EContentSourceCategory::SharedPack) \
	op(EContentSourceCategory::Unknown) 

enum class EContentSourceCategory : uint8;
template<> ADDCONTENTDIALOG_API UEnum* StaticEnum<EContentSourceCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
