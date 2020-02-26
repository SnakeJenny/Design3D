// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/MeshMerging.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshMerging() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshInstancingReplacementMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EUVOutput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshMergeType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshLODSelectionType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EProxyNormalComputationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELandscapeCullingPrecision();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshFeatureImportance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInstancingSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
// End Cross Module References
	static UEnum* EMeshInstancingReplacementMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshInstancingReplacementMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshInstancingReplacementMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshInstancingReplacementMethod>()
	{
		return EMeshInstancingReplacementMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshInstancingReplacementMethod(EMeshInstancingReplacementMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshInstancingReplacementMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshInstancingReplacementMethod_Hash() { return 2460588992U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshInstancingReplacementMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshInstancingReplacementMethod"), 0, Get_Z_Construct_UEnum_Engine_EMeshInstancingReplacementMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshInstancingReplacementMethod::RemoveOriginalActors", (int64)EMeshInstancingReplacementMethod::RemoveOriginalActors },
				{ "EMeshInstancingReplacementMethod::KeepOriginalActorsAsEditorOnly", (int64)EMeshInstancingReplacementMethod::KeepOriginalActorsAsEditorOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "KeepOriginalActorsAsEditorOnly.ToolTip", "Non-destructive workflow: keep the original actors but hide them and set them to be editor-only" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "RemoveOriginalActors.ToolTip", "Destructive workflow: remove the original actors when replacing with instanced static meshes" },
				{ "ToolTip", "How to replace instanced" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMeshInstancingReplacementMethod",
				"EMeshInstancingReplacementMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUVOutput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EUVOutput, Z_Construct_UPackage__Script_Engine(), TEXT("EUVOutput"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EUVOutput>()
	{
		return EUVOutput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUVOutput(EUVOutput_StaticEnum, TEXT("/Script/Engine"), TEXT("EUVOutput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EUVOutput_Hash() { return 599073103U; }
	UEnum* Z_Construct_UEnum_Engine_EUVOutput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUVOutput"), 0, Get_Z_Construct_UEnum_Engine_EUVOutput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUVOutput::DoNotOutputChannel", (int64)EUVOutput::DoNotOutputChannel },
				{ "EUVOutput::OutputChannel", (int64)EUVOutput::OutputChannel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "As UHT doesnt allow arrays of bools, we need this binary enum :(" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EUVOutput",
				"EUVOutput",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMeshMergeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshMergeType, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshMergeType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshMergeType>()
	{
		return EMeshMergeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshMergeType(EMeshMergeType_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshMergeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshMergeType_Hash() { return 751463165U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshMergeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshMergeType"), 0, Get_Z_Construct_UEnum_Engine_EMeshMergeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshMergeType::MeshMergeType_Default", (int64)EMeshMergeType::MeshMergeType_Default },
				{ "EMeshMergeType::MeshMergeType_MergeActor", (int64)EMeshMergeType::MeshMergeType_MergeActor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMeshMergeType",
				"EMeshMergeType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMeshLODSelectionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshLODSelectionType, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshLODSelectionType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshLODSelectionType>()
	{
		return EMeshLODSelectionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshLODSelectionType(EMeshLODSelectionType_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshLODSelectionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshLODSelectionType_Hash() { return 670972701U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshLODSelectionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshLODSelectionType"), 0, Get_Z_Construct_UEnum_Engine_EMeshLODSelectionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshLODSelectionType::AllLODs", (int64)EMeshLODSelectionType::AllLODs },
				{ "EMeshLODSelectionType::SpecificLOD", (int64)EMeshLODSelectionType::SpecificLOD },
				{ "EMeshLODSelectionType::CalculateLOD", (int64)EMeshLODSelectionType::CalculateLOD },
				{ "EMeshLODSelectionType::LowestDetailLOD", (int64)EMeshLODSelectionType::LowestDetailLOD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllLODs.DisplayName", "Use all LOD levels" },
				{ "AllLODs.ToolTip", "Whether or not to export all of the LODs found in the source meshes" },
				{ "CalculateLOD.DisplayName", "Calculate correct LOD level" },
				{ "CalculateLOD.ToolTip", "Whether or not to calculate the appropriate LOD model for the given screen size" },
				{ "LowestDetailLOD.DisplayName", "Always use the lowest-detail LOD (i.e. the highest LOD index)" },
				{ "LowestDetailLOD.ToolTip", "Whether or not to use the lowest-detail LOD" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "SpecificLOD.DisplayName", "Use specific LOD level" },
				{ "SpecificLOD.ToolTip", "Whether or not to export all of the LODs found in the source meshes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMeshLODSelectionType",
				"EMeshLODSelectionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EProxyNormalComputationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EProxyNormalComputationMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EProxyNormalComputationMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EProxyNormalComputationMethod::Type>()
	{
		return EProxyNormalComputationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProxyNormalComputationMethod(EProxyNormalComputationMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EProxyNormalComputationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Hash() { return 1868784844U; }
	UEnum* Z_Construct_UEnum_Engine_EProxyNormalComputationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProxyNormalComputationMethod"), 0, Get_Z_Construct_UEnum_Engine_EProxyNormalComputationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProxyNormalComputationMethod::AngleWeighted", (int64)EProxyNormalComputationMethod::AngleWeighted },
				{ "EProxyNormalComputationMethod::AreaWeighted", (int64)EProxyNormalComputationMethod::AreaWeighted },
				{ "EProxyNormalComputationMethod::EqualWeighted", (int64)EProxyNormalComputationMethod::EqualWeighted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AngleWeighted.DisplayName", "Angle Weighted" },
				{ "AreaWeighted.DisplayName", "Area  Weighted" },
				{ "EqualWeighted.DisplayName", "Equal Weighted" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EProxyNormalComputationMethod",
				"EProxyNormalComputationMethod::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeCullingPrecision_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELandscapeCullingPrecision, Z_Construct_UPackage__Script_Engine(), TEXT("ELandscapeCullingPrecision"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELandscapeCullingPrecision::Type>()
	{
		return ELandscapeCullingPrecision_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeCullingPrecision(ELandscapeCullingPrecision_StaticEnum, TEXT("/Script/Engine"), TEXT("ELandscapeCullingPrecision"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Hash() { return 160515275U; }
	UEnum* Z_Construct_UEnum_Engine_ELandscapeCullingPrecision()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeCullingPrecision"), 0, Get_Z_Construct_UEnum_Engine_ELandscapeCullingPrecision_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeCullingPrecision::High", (int64)ELandscapeCullingPrecision::High },
				{ "ELandscapeCullingPrecision::Medium", (int64)ELandscapeCullingPrecision::Medium },
				{ "ELandscapeCullingPrecision::Low", (int64)ELandscapeCullingPrecision::Low },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "High.DisplayName", "High memory intensity and computation time" },
				{ "Low.DisplayName", "Low memory intensity and computation time" },
				{ "Medium.DisplayName", "Medium memory intensity and computation time" },
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ELandscapeCullingPrecision",
				"ELandscapeCullingPrecision::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStaticMeshReductionTerimationCriterion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion, Z_Construct_UPackage__Script_Engine(), TEXT("EStaticMeshReductionTerimationCriterion"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EStaticMeshReductionTerimationCriterion>()
	{
		return EStaticMeshReductionTerimationCriterion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStaticMeshReductionTerimationCriterion(EStaticMeshReductionTerimationCriterion_StaticEnum, TEXT("/Script/Engine"), TEXT("EStaticMeshReductionTerimationCriterion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Hash() { return 4229278931U; }
	UEnum* Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStaticMeshReductionTerimationCriterion"), 0, Get_Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStaticMeshReductionTerimationCriterion::Triangles", (int64)EStaticMeshReductionTerimationCriterion::Triangles },
				{ "EStaticMeshReductionTerimationCriterion::Vertices", (int64)EStaticMeshReductionTerimationCriterion::Vertices },
				{ "EStaticMeshReductionTerimationCriterion::Any", (int64)EStaticMeshReductionTerimationCriterion::Any },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "Enum specifying the reduction type to use when simplifying static meshes with the engines internal tool" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EStaticMeshReductionTerimationCriterion",
				"EStaticMeshReductionTerimationCriterion",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMeshFeatureImportance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshFeatureImportance, Z_Construct_UPackage__Script_Engine(), TEXT("EMeshFeatureImportance"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshFeatureImportance::Type>()
	{
		return EMeshFeatureImportance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshFeatureImportance(EMeshFeatureImportance_StaticEnum, TEXT("/Script/Engine"), TEXT("EMeshFeatureImportance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMeshFeatureImportance_Hash() { return 1259906822U; }
	UEnum* Z_Construct_UEnum_Engine_EMeshFeatureImportance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshFeatureImportance"), 0, Get_Z_Construct_UEnum_Engine_EMeshFeatureImportance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshFeatureImportance::Off", (int64)EMeshFeatureImportance::Off },
				{ "EMeshFeatureImportance::Lowest", (int64)EMeshFeatureImportance::Lowest },
				{ "EMeshFeatureImportance::Low", (int64)EMeshFeatureImportance::Low },
				{ "EMeshFeatureImportance::Normal", (int64)EMeshFeatureImportance::Normal },
				{ "EMeshFeatureImportance::High", (int64)EMeshFeatureImportance::High },
				{ "EMeshFeatureImportance::Highest", (int64)EMeshFeatureImportance::Highest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
				{ "ToolTip", "The importance of a mesh feature when automatically generating mesh LODs." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMeshFeatureImportance",
				"EMeshFeatureImportance::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMeshInstancingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshInstancingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInstancingSettings, Z_Construct_UPackage__Script_Engine(), TEXT("MeshInstancingSettings"), sizeof(FMeshInstancingSettings), Get_Z_Construct_UScriptStruct_FMeshInstancingSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshInstancingSettings>()
{
	return FMeshInstancingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshInstancingSettings(FMeshInstancingSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshInstancingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshInstancingSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshInstancingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshInstancingSettings")),new UScriptStruct::TCppStructOps<FMeshInstancingSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshInstancingSettings;
	struct Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHLODVolumes_MetaData[];
#endif
		static void NewProp_bUseHLODVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHLODVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipMeshesWithVertexColors_MetaData[];
#endif
		static void NewProp_bSkipMeshesWithVertexColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipMeshesWithVertexColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshReplacementMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshReplacementMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshReplacementMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceReplacementThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceReplacementThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClassToUse_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClassToUse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Mesh instance-replacement settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInstancingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_MetaData[] = {
		{ "Category", "Instancing" },
		{ "DisplayName", "Use HLOD Volumes" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether split up instanced static mesh components based on their intersection with HLOD volumes" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_SetBit(void* Obj)
	{
		((FMeshInstancingSettings*)Obj)->bUseHLODVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes = { "bUseHLODVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshInstancingSettings), &Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_MetaData[] = {
		{ "Category", "Instancing" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to skip the conversion to an instanced static mesh for meshes with vertex colors.\nInstanced static meshes do not support vertex colors per-instance, so conversion will lose\nthis data." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_SetBit(void* Obj)
	{
		((FMeshInstancingSettings*)Obj)->bSkipMeshesWithVertexColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors = { "bSkipMeshesWithVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshInstancingSettings), &Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_MeshReplacementMethod_MetaData[] = {
		{ "Category", "Instancing" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "How to replace the original actors when instancing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_MeshReplacementMethod = { "MeshReplacementMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInstancingSettings, MeshReplacementMethod), Z_Construct_UEnum_Engine_EMeshInstancingReplacementMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_MeshReplacementMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_MeshReplacementMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_MeshReplacementMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold_MetaData[] = {
		{ "Category", "Instancing" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The number of static mesh instances needed before a mesh is replaced with an instanced version" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold = { "InstanceReplacementThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInstancingSettings, InstanceReplacementThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse_MetaData[] = {
		{ "Category", "Instancing" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The actor class to attach new instance static mesh components to" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse = { "ActorClassToUse", nullptr, (EPropertyFlags)0x0014000002000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshInstancingSettings, ActorClassToUse), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bUseHLODVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_bSkipMeshesWithVertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_MeshReplacementMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_MeshReplacementMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_InstanceReplacementThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::NewProp_ActorClassToUse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshInstancingSettings",
		sizeof(FMeshInstancingSettings),
		alignof(FMeshInstancingSettings),
		Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshInstancingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshInstancingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshInstancingSettings"), sizeof(FMeshInstancingSettings), Get_Z_Construct_UScriptStruct_FMeshInstancingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshInstancingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshInstancingSettings_Hash() { return 1889916104U; }
class UScriptStruct* FMeshMergingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshMergingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshMergingSettings, Z_Construct_UPackage__Script_Engine(), TEXT("MeshMergingSettings"), sizeof(FMeshMergingSettings), Get_Z_Construct_UScriptStruct_FMeshMergingSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshMergingSettings>()
{
	return FMeshMergingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshMergingSettings(FMeshMergingSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshMergingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshMergingSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshMergingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshMergingSettings")),new UScriptStruct::TCppStructOps<FMeshMergingSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshMergingSettings;
	struct Z_Construct_UScriptStruct_FMeshMergingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportSpecificLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExportSpecificLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergedMaterialAtlasResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MergedMaterialAtlasResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportSpecularMap_MetaData[];
#endif
		static void NewProp_bExportSpecularMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportSpecularMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportRoughnessMap_MetaData[];
#endif
		static void NewProp_bExportRoughnessMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportRoughnessMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportMetallicMap_MetaData[];
#endif
		static void NewProp_bExportMetallicMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportMetallicMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportNormalMap_MetaData[];
#endif
		static void NewProp_bExportNormalMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportNormalMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCalculateCorrectLODModel_MetaData[];
#endif
		static void NewProp_bCalculateCorrectLODModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculateCorrectLODModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportVertexColors_MetaData[];
#endif
		static void NewProp_bImportVertexColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportVertexColors;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDistanceField_MetaData[];
#endif
		static void NewProp_bAllowDistanceField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDistanceField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeImposters_MetaData[];
#endif
		static void NewProp_bIncludeImposters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeImposters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeCulling_MetaData[];
#endif
		static void NewProp_bUseLandscapeCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeEquivalentMaterials_MetaData[];
#endif
		static void NewProp_bMergeEquivalentMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeEquivalentMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReuseMeshLightmapUVs_MetaData[];
#endif
		static void NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReuseMeshLightmapUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTextureBinning_MetaData[];
#endif
		static void NewProp_bUseTextureBinning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTextureBinning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVertexDataForBakingMaterial_MetaData[];
#endif
		static void NewProp_bUseVertexDataForBakingMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVertexDataForBakingMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeVertexDataToMesh_MetaData[];
#endif
		static void NewProp_bBakeVertexDataToMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeVertexDataToMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeMaterials_MetaData[];
#endif
		static void NewProp_bMergeMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergePhysicsData_MetaData[];
#endif
		static void NewProp_bMergePhysicsData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergePhysicsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPivotPointAtZero_MetaData[];
#endif
		static void NewProp_bPivotPointAtZero_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPivotPointAtZero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputedLightMapResolution_MetaData[];
#endif
		static void NewProp_bComputedLightMapResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputedLightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightMapUV_MetaData[];
#endif
		static void NewProp_bGenerateLightMapUV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightMapUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODSelectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LODSelectionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODSelectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecificLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GutterSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GutterSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputUVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputUVs;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputUVs_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLightMapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetLightMapResolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Mesh merging settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshMergingSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD = { "ExportSpecificLOD", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshMergingSettings, ExportSpecificLOD_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Merged material texture atlas resolution" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution = { "MergedMaterialAtlasResolution", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshMergingSettings, MergedMaterialAtlasResolution_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to export specular maps for material merging" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bExportSpecularMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap = { "bExportSpecularMap", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to export roughness maps for material merging" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bExportRoughnessMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap = { "bExportRoughnessMap", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to export metallic maps for material merging" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bExportMetallicMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap = { "bExportMetallicMap", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to export normal maps for material merging" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bExportNormalMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap = { "bExportNormalMap", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bCalculateCorrectLODModel_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel = { "bCalculateCorrectLODModel", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether we should import vertex colors into merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bImportVertexColors_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors = { "bImportVertexColors", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bAllowDistanceField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField = { "bAllowDistanceField", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bIncludeImposters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters = { "bIncludeImposters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_MetaData[] = {
		{ "Category", "LandscapeCulling" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not to use available landscape geometry to cull away invisible triangles" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bUseLandscapeCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling = { "bUseLandscapeCulling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to attempt to merge materials that are deemed equivalent. This can cause artifacts in the merged mesh if world position/actor position etc. is used to determine output color." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bMergeEquivalentMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials = { "bMergeEquivalentMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bReuseMeshLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs = { "bReuseMeshLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "EditCondition", "bMergeMaterials" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not to calculate varying output texture sizes according to their importance in the final atlas texture" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bUseTextureBinning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning = { "bUseTextureBinning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "EditCondition", "bMergeMaterials" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not vertex data such as vertex colours should be used when baking out materials" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bUseVertexDataForBakingMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial = { "bUseVertexDataForBakingMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not vertex data such as vertex colours should be baked into the resulting mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bBakeVertexDataToMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh = { "bBakeVertexDataToMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to merge source materials into one flat material, ONLY available when merging a single LOD level, see LODSelectionType" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bMergeMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials = { "bMergeMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to merge physics data (collision primitives)" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bMergePhysicsData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData = { "bMergePhysicsData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether merged mesh should have pivot at world origin, or at first merged component otherwise" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bPivotPointAtZero = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero = { "bPivotPointAtZero", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not the lightmap resolution should be computed by summing the lightmap resolutions for the input Mesh Components" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bComputedLightMapResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution = { "bComputedLightMapResolution", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to generate lightmap UVs for a merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_SetBit(void* Obj)
	{
		((FMeshMergingSettings*)Obj)->bGenerateLightMapUV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV = { "bGenerateLightMapUV", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshMergingSettings), &Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "DisplayAfter", "bBakeVertexDataToMesh" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType = { "LODSelectionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshMergingSettings, LODSelectionType), Z_Construct_UEnum_Engine_EMeshLODSelectionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "DisplayAfter", "LODSelectionType" },
		{ "EnumCondition", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "A given LOD level to export from the source meshes" },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD = { "SpecificLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshMergingSettings, SpecificLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "DisplayAfter", "MaterialSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The gutter (in texels) to add to each sub-chart for our baked-out material for the top mip level" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize = { "GutterSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshMergingSettings, GutterSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "MaterialSettings" },
		{ "DisplayAfter", "bMergeMaterials" },
		{ "EditCondition", "bMergeMaterials" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Material simplification" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshMergingSettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "DisplayAfter", "bBakeVertexDataToMesh" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to output the specified UV channels into the merged mesh (only if the source meshes contain valid UVs for the specified channel)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs = { "OutputUVs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(OutputUVs, FMeshMergingSettings), STRUCT_OFFSET(FMeshMergingSettings, OutputUVs), Z_Construct_UEnum_Engine_EUVOutput, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "ClampMax", "4096" },
		{ "DisplayAfter", "bGenerateLightMapUV" },
		{ "EditCondition", "!bComputedLightMapResolution" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Target lightmap resolution" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution = { "TargetLightMapResolution", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshMergingSettings, TargetLightMapResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_ExportSpecificLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MergedMaterialAtlasResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportSpecularMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportRoughnessMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportMetallicMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bExportNormalMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bCalculateCorrectLODModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bImportVertexColors,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bAllowDistanceField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bIncludeImposters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseLandscapeCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeEquivalentMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bReuseMeshLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseTextureBinning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bUseVertexDataForBakingMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bBakeVertexDataToMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergeMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bMergePhysicsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bPivotPointAtZero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bComputedLightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_bGenerateLightMapUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_LODSelectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_SpecificLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_GutterSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_MaterialSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_OutputUVs_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::NewProp_TargetLightMapResolution,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshMergingSettings",
		sizeof(FMeshMergingSettings),
		alignof(FMeshMergingSettings),
		Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshMergingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshMergingSettings"), sizeof(FMeshMergingSettings), Get_Z_Construct_UScriptStruct_FMeshMergingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshMergingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshMergingSettings_Hash() { return 603179118U; }
class UScriptStruct* FMeshProxySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshProxySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshProxySettings, Z_Construct_UPackage__Script_Engine(), TEXT("MeshProxySettings"), sizeof(FMeshProxySettings), Get_Z_Construct_UScriptStruct_FMeshProxySettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshProxySettings>()
{
	return FMeshProxySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshProxySettings(FMeshProxySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshProxySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshProxySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshProxySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshProxySettings")),new UScriptStruct::TCppStructOps<FMeshProxySettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshProxySettings;
	struct Z_Construct_UScriptStruct_FMeshProxySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowVertexColors_MetaData[];
#endif
		static void NewProp_bAllowVertexColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowVertexColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateCollision_MetaData[];
#endif
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReuseMeshLightmapUVs_MetaData[];
#endif
		static void NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReuseMeshLightmapUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDistanceField_MetaData[];
#endif
		static void NewProp_bAllowDistanceField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDistanceField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowAdjacency_MetaData[];
#endif
		static void NewProp_bAllowAdjacency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowAdjacency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeCulling_MetaData[];
#endif
		static void NewProp_bUseLandscapeCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalculateNormals_MetaData[];
#endif
		static void NewProp_bRecalculateNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalculateNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeLightMapResolution_MetaData[];
#endif
		static void NewProp_bComputeLightMapResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeLightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHardAngleThreshold_MetaData[];
#endif
		static void NewProp_bUseHardAngleThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHardAngleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideTransferDistance_MetaData[];
#endif
		static void NewProp_bOverrideTransferDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideTransferDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideVoxelSize_MetaData[];
#endif
		static void NewProp_bOverrideVoxelSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideVoxelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCalculateCorrectLODModel_MetaData[];
#endif
		static void NewProp_bCalculateCorrectLODModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculateCorrectLODModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeCullingPrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LandscapeCullingPrecision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalCalculationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NormalCalculationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardAngleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HardAngleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRayCastDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRayCastDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnresolvedGeometryColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnresolvedGeometryColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MergeDistance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeVertexData_MetaData[];
#endif
		static void NewProp_bBakeVertexData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeVertexData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportSpecularMap_MetaData[];
#endif
		static void NewProp_bExportSpecularMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportSpecularMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportRoughnessMap_MetaData[];
#endif
		static void NewProp_bExportRoughnessMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportRoughnessMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportMetallicMap_MetaData[];
#endif
		static void NewProp_bExportMetallicMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportMetallicMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportNormalMap_MetaData[];
#endif
		static void NewProp_bExportNormalMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportNormalMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureWidth;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshProxySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to generate lightmap uvs for the merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to allow vertex colors saved in the merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bAllowVertexColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors = { "bAllowVertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to generate collision for the merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bCreateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bReuseMeshLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs = { "bReuseMeshLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bAllowDistanceField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField = { "bAllowDistanceField", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowAdjacency_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether to allow adjacency buffers for tessellation in the merged mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowAdjacency_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bAllowAdjacency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowAdjacency = { "bAllowAdjacency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowAdjacency_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowAdjacency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowAdjacency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_MetaData[] = {
		{ "Category", "LandscapeCulling" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether or not to use available landscape geometry to cull away invisible triangles" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bUseLandscapeCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling = { "bUseLandscapeCulling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Whether Simplygon should recalculate normals, otherwise the normals channel will be sampled from the original mesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bRecalculateNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals = { "bRecalculateNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If ticked will compute the lightmap resolution by summing the dimensions for each mesh included for merging" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bComputeLightMapResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution = { "bComputeLightMapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_MetaData[] = {
		{ "Category", "HardAngleThreshold" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Enable the use of hard angle based vertex splitting" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bUseHardAngleThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold = { "bUseHardAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_MetaData[] = {
		{ "Category", "MaxRayCastDist" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Enable an override for material transfer distance" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bOverrideTransferDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance = { "bOverrideTransferDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "If true, Spatial Sampling Distance will not be automatically computed based on geometry and you must set it directly" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bOverrideVoxelSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize = { "bOverrideVoxelSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "DisplayAfter", "ScreenSize" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Determines whether or not the correct LOD models should be calculated given the source meshes and transition size" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bCalculateCorrectLODModel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel = { "bCalculateCorrectLODModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision_MetaData[] = {
		{ "Category", "LandscapeCulling" },
		{ "DisplayAfter", "bUseLandscapeCulling" },
		{ "EditCondition", "bUseLandscapeCulling" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Level of detail of the landscape that should be used for the culling" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision = { "LandscapeCullingPrecision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, LandscapeCullingPrecision), Z_Construct_UEnum_Engine_ELandscapeCullingPrecision, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "DisplayName", "Normal Calculation Method" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Controls the method used to calculate the normal for the simplified geometry" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod = { "NormalCalculationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, NormalCalculationMethod), Z_Construct_UEnum_Engine_EProxyNormalComputationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "32" },
		{ "DisplayAfter", "NormalCalculationMethod" },
		{ "EditCondition", "!bComputeLightMapResolution" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Lightmap resolution" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, LightMapResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Hard Edge Angle" },
		{ "EditCondition", "bUseHardAngleThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Angle at which a hard edge is introduced between faces" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold = { "HardAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, HardAngleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Transfer Distance Override" },
		{ "EditCondition", "bOverrideTransferDistance" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Override search distance used when discovering texture values for simplified geometry. Useful when non-zero Merge Distance setting generates new geometry in concave corners." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist = { "MaxRayCastDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, MaxRayCastDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "DisplayName", "Unresolved Geometry Color" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Base color assigned to LOD geometry that can't be associated with the source geometry: e.g. doors and windows that have been closed by the Merge Distance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor = { "UnresolvedGeometryColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, UnresolvedGeometryColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Distance at which meshes should be merged together, this can close gaps like doors and windows in distant geometry" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance = { "MergeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, MergeDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bBakeVertexData_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData = { "bBakeVertexData", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bExportSpecularMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap = { "bExportSpecularMap", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bExportRoughnessMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap = { "bExportRoughnessMap", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bExportMetallicMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap = { "bExportMetallicMap", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_SetBit(void* Obj)
	{
		((FMeshProxySettings*)Obj)->bExportNormalMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap = { "bExportNormalMap", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshProxySettings), &Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, TextureHeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth = { "TextureWidth", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, TextureWidth_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Material simplification" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Overide Spatial Sampling Distance" },
		{ "EditCondition", "bOverrideVoxelSize" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Override when converting multiple meshes for proxy LOD merging. Warning, large geometry with small sampling has very high memory costs" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, VoxelSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ClampMax", "1200" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Screen size of the resulting proxy mesh in pixels" },
		{ "UIMax", "1200" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshProxySettings, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bGenerateLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowVertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCreateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bReuseMeshLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowDistanceField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bAllowAdjacency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseLandscapeCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bRecalculateNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bComputeLightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bUseHardAngleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideTransferDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bOverrideVoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bCalculateCorrectLODModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LandscapeCullingPrecision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_NormalCalculationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_LightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_HardAngleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaxRayCastDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_UnresolvedGeometryColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MergeDistance,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bBakeVertexData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportSpecularMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportRoughnessMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportMetallicMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_bExportNormalMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_TextureWidth,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_MaterialSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_VoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshProxySettings_Statics::NewProp_ScreenSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshProxySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshProxySettings",
		sizeof(FMeshProxySettings),
		alignof(FMeshProxySettings),
		Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshProxySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshProxySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshProxySettings"), sizeof(FMeshProxySettings), Get_Z_Construct_UScriptStruct_FMeshProxySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshProxySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshProxySettings_Hash() { return 3487298855U; }
class UScriptStruct* FMeshReductionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshReductionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshReductionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("MeshReductionSettings"), sizeof(FMeshReductionSettings), Get_Z_Construct_UScriptStruct_FMeshReductionSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshReductionSettings>()
{
	return FMeshReductionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshReductionSettings(FMeshReductionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshReductionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshReductionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshReductionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshReductionSettings")),new UScriptStruct::TCppStructOps<FMeshReductionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshReductionSettings;
	struct Z_Construct_UScriptStruct_FMeshReductionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertexColorImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityAggressiveness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibilityAggressiveness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminationCriterion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TerminationCriterion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TerminationCriterion_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCullOccluded_MetaData[];
#endif
		static void NewProp_bCullOccluded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCullOccluded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibilityAided_MetaData[];
#endif
		static void NewProp_bVisibilityAided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibilityAided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepSymmetry_MetaData[];
#endif
		static void NewProp_bKeepSymmetry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepSymmetry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateUniqueLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateUniqueLightmapUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateUniqueLightmapUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalculateNormals_MetaData[];
#endif
		static void NewProp_bRecalculateNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalculateNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLODModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseLODModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardAngleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HardAngleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentVertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentVertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentTriangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentTriangles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Settings used to reduce a mesh." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshReductionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values minimize change to vertex color data." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance = { "VertexColorImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, VertexColorImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values generates fewer samples" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness = { "VisibilityAggressiveness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, VisibilityAggressiveness), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The method to use when optimizing static mesh LODs" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion = { "TerminationCriterion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, TerminationCriterion), Z_Construct_UEnum_Engine_EStaticMeshReductionTerimationCriterion, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bCullOccluded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded = { "bCullOccluded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bVisibilityAided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided = { "bVisibilityAided", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bKeepSymmetry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry = { "bKeepSymmetry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bGenerateUniqueLightmapUVs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs = { "bGenerateUniqueLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_SetBit(void* Obj)
	{
		((FMeshReductionSettings*)Obj)->bRecalculateNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals = { "bRecalculateNormals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMeshReductionSettings), &Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values try to preserve normals better." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance = { "ShadingImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, ShadingImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values reduce texture stretching." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance = { "TextureImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, TextureImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Higher values minimize change to border edges." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance = { "SilhouetteImportance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, SilhouetteImportance), Z_Construct_UEnum_Engine_EMeshFeatureImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel = { "BaseLODModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, BaseLODModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Angle at which a hard edge is introduced between faces." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold = { "HardAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, HardAngleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Threshold in object space at which vertices are welded together." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, WeldingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The amount of error in pixels allowed for this LOD." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError = { "PixelError", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, PixelError), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "The maximum distance in object space by which the reduced mesh may deviate from the original mesh." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation = { "MaxDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, MaxDeviation), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Percentage of vertices to keep. 1.0 = no reduction, 0.0 = no vertices." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices = { "PercentVertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, PercentVertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/MeshMerging.h" },
		{ "ToolTip", "Percentage of triangles to keep. 1.0 = no reduction, 0.0 = no triangles." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles = { "PercentTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshReductionSettings, PercentTriangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VertexColorImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_VisibilityAggressiveness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TerminationCriterion_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bCullOccluded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bVisibilityAided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bKeepSymmetry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bGenerateUniqueLightmapUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_bRecalculateNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_ShadingImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_TextureImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_SilhouetteImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_BaseLODModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_HardAngleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_WeldingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PixelError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_MaxDeviation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::NewProp_PercentTriangles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshReductionSettings",
		sizeof(FMeshReductionSettings),
		alignof(FMeshReductionSettings),
		Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshReductionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshReductionSettings"), sizeof(FMeshReductionSettings), Get_Z_Construct_UScriptStruct_FMeshReductionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshReductionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshReductionSettings_Hash() { return 298090203U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
