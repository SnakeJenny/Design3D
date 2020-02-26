// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_SaveCachedPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SaveCachedPose() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_SaveCachedPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SaveCachedPose"), sizeof(FAnimNode_SaveCachedPose), Get_Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SaveCachedPose>()
{
	return FAnimNode_SaveCachedPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SaveCachedPose(FAnimNode_SaveCachedPose::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_SaveCachedPose"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SaveCachedPose
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SaveCachedPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SaveCachedPose")),new UScriptStruct::TCppStructOps<FAnimNode_SaveCachedPose>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SaveCachedPose;
	struct Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachePoseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CachePoseName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SaveCachedPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SaveCachedPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_CachePoseName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SaveCachedPose.h" },
		{ "ToolTip", "Intentionally not exposed, set by AnimBlueprintCompiler" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_CachePoseName = { "CachePoseName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SaveCachedPose, CachePoseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_CachePoseName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_CachePoseName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SaveCachedPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SaveCachedPose, Pose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_Pose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_Pose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_CachePoseName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::NewProp_Pose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SaveCachedPose",
		sizeof(FAnimNode_SaveCachedPose),
		alignof(FAnimNode_SaveCachedPose),
		Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SaveCachedPose"), sizeof(FAnimNode_SaveCachedPose), Get_Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose_Hash() { return 2119734667U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
