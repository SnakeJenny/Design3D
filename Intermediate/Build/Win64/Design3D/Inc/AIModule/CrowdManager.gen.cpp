// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/CrowdManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdManager() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceConfig();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdManager();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
// End Cross Module References
class UScriptStruct* FCrowdAvoidanceSamplingPattern::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern, Z_Construct_UPackage__Script_AIModule(), TEXT("CrowdAvoidanceSamplingPattern"), sizeof(FCrowdAvoidanceSamplingPattern), Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FCrowdAvoidanceSamplingPattern>()
{
	return FCrowdAvoidanceSamplingPattern::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdAvoidanceSamplingPattern(FCrowdAvoidanceSamplingPattern::StaticStruct, TEXT("/Script/AIModule"), TEXT("CrowdAvoidanceSamplingPattern"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceSamplingPattern
{
	FScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceSamplingPattern()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdAvoidanceSamplingPattern")),new UScriptStruct::TCppStructOps<FCrowdAvoidanceSamplingPattern>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceSamplingPattern;
	struct Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radii_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Radii;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radii_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Angles;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdAvoidanceSamplingPattern>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii = { "Radii", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceSamplingPattern, Radii), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii_Inner = { "Radii", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles = { "Angles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceSamplingPattern, Angles), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles_Inner = { "Angles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Radii_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::NewProp_Angles_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"CrowdAvoidanceSamplingPattern",
		sizeof(FCrowdAvoidanceSamplingPattern),
		alignof(FCrowdAvoidanceSamplingPattern),
		Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdAvoidanceSamplingPattern"), sizeof(FCrowdAvoidanceSamplingPattern), Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Hash() { return 4166640013U; }
class UScriptStruct* FCrowdAvoidanceConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig, Z_Construct_UPackage__Script_AIModule(), TEXT("CrowdAvoidanceConfig"), sizeof(FCrowdAvoidanceConfig), Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FCrowdAvoidanceConfig>()
{
	return FCrowdAvoidanceConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCrowdAvoidanceConfig(FCrowdAvoidanceConfig::StaticStruct, TEXT("/Script/AIModule"), TEXT("CrowdAvoidanceConfig"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceConfig
{
	FScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CrowdAvoidanceConfig")),new UScriptStruct::TCppStructOps<FCrowdAvoidanceConfig>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFCrowdAvoidanceConfig;
	struct Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveDepth_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdaptiveDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveRings_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdaptiveRings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptiveDivisions_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdaptiveDivisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPatternIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomPatternIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactTimeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactTimeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactTimeWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactTimeWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideBiasWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SideBiasWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocityWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentVelocityWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredVelocityWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredVelocityWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityBias;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "Crowd manager is responsible for handling crowds using Detour (Recast library)\n\nAgents will respect navmesh for all steering and avoidance updates,\nbut it's slower than AvoidanceManager solution (RVO, cares only about agents)\n\nAll agents will operate on the same navmesh data, which will be picked from\nnavigation system defaults (UNavigationSystemV1::SupportedAgents[0])\n\nTo use it, you have to add CrowdFollowingComponent to your agent\n(usually: replace class of PathFollowingComponent in AIController by adding\n those lines in controller's constructor\n\n ACrowdAIController::ACrowdAIController(const FObjectInitializer& ObjectInitializer)\n     : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT(\"PathFollowingComponent\")))\n\n or simply add both components and switch move requests between them)\n\nActors that should be avoided, but are not being simulated by crowd (like players)\nshould implement CrowdAgentInterface AND register/unregister themselves with crowd manager:\n\n UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this);\n if (CrowdManager)\n {\n    CrowdManager->RegisterAgent(this);\n }\n\n Check flags in CrowdDebugDrawing namespace (CrowdManager.cpp) for debugging options." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdAvoidanceConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDepth_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "adaptive sampling: number of iterations at best velocity" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDepth = { "AdaptiveDepth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, AdaptiveDepth), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDepth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveRings_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "adaptive sampling: number of rings" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveRings = { "AdaptiveRings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, AdaptiveRings), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveRings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveRings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDivisions_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "adaptive sampling: number of divisions per ring" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDivisions = { "AdaptiveDivisions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, AdaptiveDivisions), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDivisions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDivisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CustomPatternIdx_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "index in SamplingPatterns array or 0xff for adaptive sampling" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CustomPatternIdx = { "CustomPatternIdx", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, CustomPatternIdx), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CustomPatternIdx_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CustomPatternIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeRange_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeRange = { "ImpactTimeRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, ImpactTimeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeWeight_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeWeight = { "ImpactTimeWeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, ImpactTimeWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_SideBiasWeight_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_SideBiasWeight = { "SideBiasWeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, SideBiasWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_SideBiasWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_SideBiasWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CurrentVelocityWeight_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CurrentVelocityWeight = { "CurrentVelocityWeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, CurrentVelocityWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CurrentVelocityWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CurrentVelocityWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_DesiredVelocityWeight_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_DesiredVelocityWeight = { "DesiredVelocityWeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, DesiredVelocityWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_DesiredVelocityWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_DesiredVelocityWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_VelocityBias_MetaData[] = {
		{ "Category", "Crowd" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_VelocityBias = { "VelocityBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCrowdAvoidanceConfig, VelocityBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_VelocityBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_VelocityBias_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveRings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_AdaptiveDivisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CustomPatternIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_ImpactTimeWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_SideBiasWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_CurrentVelocityWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_DesiredVelocityWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::NewProp_VelocityBias,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"CrowdAvoidanceConfig",
		sizeof(FCrowdAvoidanceConfig),
		alignof(FCrowdAvoidanceConfig),
		Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdAvoidanceConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CrowdAvoidanceConfig"), sizeof(FCrowdAvoidanceConfig), Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Hash() { return 294310221U; }
	void UCrowdManager::StaticRegisterNativesUCrowdManager()
	{
	}
	UClass* Z_Construct_UClass_UCrowdManager_NoRegister()
	{
		return UCrowdManager::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResolveCollisions_MetaData[];
#endif
		static void NewProp_bResolveCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResolveCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOffsetRadiusMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathOffsetRadiusMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationDirClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationDirClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOptimizationInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathOptimizationInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavmeshCheckInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavmeshCheckInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAvoidedWalls_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAvoidedWalls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAvoidedAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAvoidedAgents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAgentRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAgentRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAgents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingPatterns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SamplingPatterns;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SamplingPatterns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvoidanceConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AvoidanceConfig_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyNavData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCrowdManagerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/CrowdManager.h" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "should crowd simulation resolve collisions between agents? if not, this will be handled by their movement components" },
	};
#endif
	void Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions_SetBit(void* Obj)
	{
		((UCrowdManager*)Obj)->bResolveCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions = { "bResolveCollisions", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCrowdManager), &Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOffsetRadiusMultiplier_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "agent radius multiplier for offsetting path around corners" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOffsetRadiusMultiplier = { "PathOffsetRadiusMultiplier", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, PathOffsetRadiusMultiplier), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOffsetRadiusMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOffsetRadiusMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_SeparationDirClamp_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "clamp separation force to left/right when neighbor is behind (dot between forward and dirToNei, -1 = disabled)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_SeparationDirClamp = { "SeparationDirClamp", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, SeparationDirClamp), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_SeparationDirClamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_SeparationDirClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOptimizationInterval_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "how often should agents try to optimize their paths?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOptimizationInterval = { "PathOptimizationInterval", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, PathOptimizationInterval), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOptimizationInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOptimizationInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_NavmeshCheckInterval_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "how often should agents check their position after moving off navmesh?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_NavmeshCheckInterval = { "NavmeshCheckInterval", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, NavmeshCheckInterval), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_NavmeshCheckInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_NavmeshCheckInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedWalls_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "max number of wall segments for velocity avoidance" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedWalls = { "MaxAvoidedWalls", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, MaxAvoidedWalls), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedWalls_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedWalls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedAgents_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "max number of neighbor agents for velocity avoidance" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedAgents = { "MaxAvoidedAgents", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, MaxAvoidedAgents), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedAgents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedAgents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgentRadius_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "max radius of agent that can be added to crowd" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgentRadius = { "MaxAgentRadius", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, MaxAgentRadius), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgentRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgentRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgents_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "max number of agents supported by crowd" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgents = { "MaxAgents", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, MaxAgents), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "obstacle avoidance params" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns = { "SamplingPatterns", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, SamplingPatterns), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns_Inner = { "SamplingPatterns", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
		{ "ToolTip", "obstacle avoidance params" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig = { "AvoidanceConfig", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, AvoidanceConfig), METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig_Inner = { "AvoidanceConfig", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCrowdAvoidanceConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdManager_Statics::NewProp_MyNavData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/CrowdManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrowdManager_Statics::NewProp_MyNavData = { "MyNavData", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowdManager, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MyNavData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::NewProp_MyNavData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrowdManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_bResolveCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOffsetRadiusMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_SeparationDirClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_PathOptimizationInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_NavmeshCheckInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedWalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAvoidedAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgentRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MaxAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_SamplingPatterns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_AvoidanceConfig_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowdManager_Statics::NewProp_MyNavData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrowdManager_Statics::ClassParams = {
		&UCrowdManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrowdManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::PropPointers),
		0,
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UCrowdManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCrowdManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrowdManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrowdManager, 551985114);
	template<> AIMODULE_API UClass* StaticClass<UCrowdManager>()
	{
		return UCrowdManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdManager(Z_Construct_UClass_UCrowdManager, &UCrowdManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UCrowdManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
