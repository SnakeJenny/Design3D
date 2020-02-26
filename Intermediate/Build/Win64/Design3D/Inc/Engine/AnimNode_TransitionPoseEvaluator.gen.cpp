// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_TransitionPoseEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TransitionPoseEvaluator() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEvaluatorMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEvaluatorDataSource();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
// End Cross Module References
	static UEnum* EEvaluatorMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEvaluatorMode, Z_Construct_UPackage__Script_Engine(), TEXT("EEvaluatorMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEvaluatorMode::Mode>()
	{
		return EEvaluatorMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEvaluatorMode(EEvaluatorMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EEvaluatorMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEvaluatorMode_Hash() { return 1956431377U; }
	UEnum* Z_Construct_UEnum_Engine_EEvaluatorMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEvaluatorMode"), 0, Get_Z_Construct_UEnum_Engine_EEvaluatorMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEvaluatorMode::EM_Standard", (int64)EEvaluatorMode::EM_Standard },
				{ "EEvaluatorMode::EM_Freeze", (int64)EEvaluatorMode::EM_Freeze },
				{ "EEvaluatorMode::EM_DelayedFreeze", (int64)EEvaluatorMode::EM_DelayedFreeze },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EM_DelayedFreeze.DisplayName", "Delayed Freeze" },
				{ "EM_DelayedFreeze.ToolTip", "DataSource is ticked and evaluated for a given number of frames, then freezes after and uses the cached pose for future frames." },
				{ "EM_Freeze.DisplayName", "Freeze" },
				{ "EM_Freeze.ToolTip", "DataSource is never ticked and only evaluated on the first frame. Every frame after uses the cached pose from the first frame." },
				{ "EM_Standard.DisplayName", "Standard" },
				{ "EM_Standard.ToolTip", "DataSource is ticked and evaluated every frame." },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
				{ "ToolTip", "Determines the behavior this node will use when updating and evaluating." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EEvaluatorMode",
				"EEvaluatorMode::Mode",
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
	static UEnum* EEvaluatorDataSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEvaluatorDataSource, Z_Construct_UPackage__Script_Engine(), TEXT("EEvaluatorDataSource"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEvaluatorDataSource::Type>()
	{
		return EEvaluatorDataSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEvaluatorDataSource(EEvaluatorDataSource_StaticEnum, TEXT("/Script/Engine"), TEXT("EEvaluatorDataSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEvaluatorDataSource_Hash() { return 4001253113U; }
	UEnum* Z_Construct_UEnum_Engine_EEvaluatorDataSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEvaluatorDataSource"), 0, Get_Z_Construct_UEnum_Engine_EEvaluatorDataSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEvaluatorDataSource::EDS_SourcePose", (int64)EEvaluatorDataSource::EDS_SourcePose },
				{ "EEvaluatorDataSource::EDS_DestinationPose", (int64)EEvaluatorDataSource::EDS_DestinationPose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EDS_DestinationPose.DisplayName", "Destination Pose" },
				{ "EDS_SourcePose.DisplayName", "Source Pose" },
				{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
				{ "ToolTip", "Indicates which state is being evaluated by this node (source or destination)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EEvaluatorDataSource",
				"EEvaluatorDataSource::Type",
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
class UScriptStruct* FAnimNode_TransitionPoseEvaluator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_TransitionPoseEvaluator"), sizeof(FAnimNode_TransitionPoseEvaluator), Get_Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_TransitionPoseEvaluator>()
{
	return FAnimNode_TransitionPoseEvaluator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TransitionPoseEvaluator(FAnimNode_TransitionPoseEvaluator::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_TransitionPoseEvaluator"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_TransitionPoseEvaluator
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_TransitionPoseEvaluator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TransitionPoseEvaluator")),new UScriptStruct::TCppStructOps<FAnimNode_TransitionPoseEvaluator>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_TransitionPoseEvaluator;
	struct Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluatorMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EvaluatorMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesToCachePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FramesToCachePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "ToolTip", "Animation data node for state machine transitions.\nCan be set to supply either the animation data from the transition source (From State) or the transition destination (To State)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TransitionPoseEvaluator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode = { "EvaluatorMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TransitionPoseEvaluator, EvaluatorMode), Z_Construct_UEnum_Engine_EEvaluatorMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource_MetaData[] = {
		{ "Category", "Pose" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TransitionPoseEvaluator, DataSource), Z_Construct_UEnum_Engine_EEvaluatorDataSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose_MetaData[] = {
		{ "Category", "Pose" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionPoseEvaluator.h" },
		{ "NeverAsPin", "" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose = { "FramesToCachePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TransitionPoseEvaluator, FramesToCachePose), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_EvaluatorMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_DataSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::NewProp_FramesToCachePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_TransitionPoseEvaluator",
		sizeof(FAnimNode_TransitionPoseEvaluator),
		alignof(FAnimNode_TransitionPoseEvaluator),
		Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TransitionPoseEvaluator"), sizeof(FAnimNode_TransitionPoseEvaluator), Get_Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator_Hash() { return 2035197413U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
