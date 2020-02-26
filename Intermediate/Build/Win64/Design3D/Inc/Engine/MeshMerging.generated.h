// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MeshMerging_generated_h
#error "MeshMerging.generated.h already included, missing '#pragma once' in MeshMerging.h"
#endif
#define ENGINE_MeshMerging_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_613_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshInstancingSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_426_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshMergingSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshMergingSettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshProxySettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshProxySettings>();

#define Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshReductionSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMeshReductionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_MeshMerging_h


#define FOREACH_ENUM_EMESHINSTANCINGREPLACEMENTMETHOD(op) \
	op(EMeshInstancingReplacementMethod::RemoveOriginalActors) \
	op(EMeshInstancingReplacementMethod::KeepOriginalActorsAsEditorOnly) 

enum class EMeshInstancingReplacementMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EMeshInstancingReplacementMethod>();

#define FOREACH_ENUM_EUVOUTPUT(op) \
	op(EUVOutput::DoNotOutputChannel) \
	op(EUVOutput::OutputChannel) 

enum class EUVOutput : uint8;
template<> ENGINE_API UEnum* StaticEnum<EUVOutput>();

#define FOREACH_ENUM_EMESHMERGETYPE(op) \
	op(EMeshMergeType::MeshMergeType_Default) \
	op(EMeshMergeType::MeshMergeType_MergeActor) 

enum class EMeshMergeType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EMeshMergeType>();

#define FOREACH_ENUM_EMESHLODSELECTIONTYPE(op) \
	op(EMeshLODSelectionType::AllLODs) \
	op(EMeshLODSelectionType::SpecificLOD) \
	op(EMeshLODSelectionType::CalculateLOD) \
	op(EMeshLODSelectionType::LowestDetailLOD) 

enum class EMeshLODSelectionType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EMeshLODSelectionType>();

#define FOREACH_ENUM_EPROXYNORMALCOMPUTATIONMETHOD(op) \
	op(EProxyNormalComputationMethod::AngleWeighted) \
	op(EProxyNormalComputationMethod::AreaWeighted) \
	op(EProxyNormalComputationMethod::EqualWeighted) 
#define FOREACH_ENUM_ELANDSCAPECULLINGPRECISION(op) \
	op(ELandscapeCullingPrecision::High) \
	op(ELandscapeCullingPrecision::Medium) \
	op(ELandscapeCullingPrecision::Low) 
#define FOREACH_ENUM_ESTATICMESHREDUCTIONTERIMATIONCRITERION(op) \
	op(EStaticMeshReductionTerimationCriterion::Triangles) \
	op(EStaticMeshReductionTerimationCriterion::Vertices) \
	op(EStaticMeshReductionTerimationCriterion::Any) 

enum class EStaticMeshReductionTerimationCriterion : uint8;
template<> ENGINE_API UEnum* StaticEnum<EStaticMeshReductionTerimationCriterion>();

#define FOREACH_ENUM_EMESHFEATUREIMPORTANCE(op) \
	op(EMeshFeatureImportance::Off) \
	op(EMeshFeatureImportance::Lowest) \
	op(EMeshFeatureImportance::Low) \
	op(EMeshFeatureImportance::Normal) \
	op(EMeshFeatureImportance::High) \
	op(EMeshFeatureImportance::Highest) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
