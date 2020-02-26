// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByBool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByBool() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendListByBool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByBool"), sizeof(FAnimNode_BlendListByBool), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendListByBool>()
{
	return FAnimNode_BlendListByBool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendListByBool(FAnimNode_BlendListByBool::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendListByBool"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByBool
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByBool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendListByBool")),new UScriptStruct::TCppStructOps<FAnimNode_BlendListByBool>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListByBool;
	struct Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActiveValue_MetaData[];
#endif
		static void NewProp_bActiveValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActiveValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByBool.h" },
		{ "ToolTip", "This node is effectively a 'branch', picking one of two input poses based on an input Boolean value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByBool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByBool.h" },
		{ "ToolTip", "Which input should be connected to the output?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_SetBit(void* Obj)
	{
		((FAnimNode_BlendListByBool*)Obj)->bActiveValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue = { "bActiveValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_BlendListByBool), &Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
		&NewStructOps,
		"AnimNode_BlendListByBool",
		sizeof(FAnimNode_BlendListByBool),
		alignof(FAnimNode_BlendListByBool),
		Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendListByBool"), sizeof(FAnimNode_BlendListByBool), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Hash() { return 3411762556U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
