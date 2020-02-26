// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AssetPlayerBase() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
// End Cross Module References
class UScriptStruct* FAnimNode_AssetPlayerBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_AssetPlayerBase"), sizeof(FAnimNode_AssetPlayerBase), Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_AssetPlayerBase>()
{
	return FAnimNode_AssetPlayerBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AssetPlayerBase(FAnimNode_AssetPlayerBase::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_AssetPlayerBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_AssetPlayerBase
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_AssetPlayerBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AssetPlayerBase")),new UScriptStruct::TCppStructOps<FAnimNode_AssetPlayerBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_AssetPlayerBase;
	struct Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalTimeAccumulator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InternalTimeAccumulator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[];
#endif
		static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GroupRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "Base class for any asset playing anim node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AssetPlayerBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator_MetaData[] = {
		{ "Category", "DoNotEdit" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "Accumulated time used to reference the asset in this node" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator = { "InternalTimeAccumulator", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, InternalTimeAccumulator), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "DoNotEdit" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "Last encountered blendweight for this node" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore\nthis node" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_AssetPlayerBase*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_AssetPlayerBase), &Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_bIgnoreForRelevancyTest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_bIgnoreForRelevancyTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupRole_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "The role this player can assume within the group (ignored if GroupIndex is INDEX_NONE)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupRole_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "The group index, assigned at compile time based on the editoronly GroupName (or INDEX_NONE if it is not part of any group)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, GroupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_bIgnoreForRelevancyTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_AssetPlayerBase",
		sizeof(FAnimNode_AssetPlayerBase),
		alignof(FAnimNode_AssetPlayerBase),
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AssetPlayerBase"), sizeof(FAnimNode_AssetPlayerBase), Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Hash() { return 4245335281U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
