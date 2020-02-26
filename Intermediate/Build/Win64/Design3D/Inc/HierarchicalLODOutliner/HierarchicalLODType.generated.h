// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HIERARCHICALLODOUTLINER_HierarchicalLODType_generated_h
#error "HierarchicalLODType.generated.h already included, missing '#pragma once' in HierarchicalLODType.h"
#endif
#define HIERARCHICALLODOUTLINER_HierarchicalLODType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Editor_HierarchicalLODOutliner_Private_HierarchicalLODType_h


#define FOREACH_ENUM_EHIERARCHICALLODACTIONTYPE(op) \
	op(EHierarchicalLODActionType::InvalidAction) \
	op(EHierarchicalLODActionType::CreateCluster) \
	op(EHierarchicalLODActionType::AddActorToCluster) \
	op(EHierarchicalLODActionType::MoveActorToCluster) \
	op(EHierarchicalLODActionType::RemoveActorFromCluster) \
	op(EHierarchicalLODActionType::MergeClusters) \
	op(EHierarchicalLODActionType::ChildCluster) 

enum class EHierarchicalLODActionType : uint8;
template<> HIERARCHICALLODOUTLINER_API UEnum* StaticEnum<EHierarchicalLODActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
