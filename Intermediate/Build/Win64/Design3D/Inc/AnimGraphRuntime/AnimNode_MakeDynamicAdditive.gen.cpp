// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_MakeDynamicAdditive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MakeDynamicAdditive() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_MakeDynamicAdditive::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MakeDynamicAdditive"), sizeof(FAnimNode_MakeDynamicAdditive), Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_MakeDynamicAdditive>()
{
	return FAnimNode_MakeDynamicAdditive::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_MakeDynamicAdditive(FAnimNode_MakeDynamicAdditive::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_MakeDynamicAdditive"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MakeDynamicAdditive
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MakeDynamicAdditive()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_MakeDynamicAdditive")),new UScriptStruct::TCppStructOps<FAnimNode_MakeDynamicAdditive>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MakeDynamicAdditive;
	struct Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceAdditive_MetaData[];
#endif
		static void NewProp_bMeshSpaceAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Additive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Additive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Base;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MakeDynamicAdditive>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
		{ "ToolTip", "Do additive delta calculation in mesh space" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive_SetBit(void* Obj)
	{
		((FAnimNode_MakeDynamicAdditive*)Obj)->bMeshSpaceAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive = { "bMeshSpaceAdditive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_MakeDynamicAdditive), &Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Additive_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
		{ "ToolTip", "Pose to make additive" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Additive = { "Additive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MakeDynamicAdditive, Additive), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Additive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Additive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MakeDynamicAdditive.h" },
		{ "ToolTip", "Reference pose for additive delta calculation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MakeDynamicAdditive, Base), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Base_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Base_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_bMeshSpaceAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Additive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::NewProp_Base,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_MakeDynamicAdditive",
		sizeof(FAnimNode_MakeDynamicAdditive),
		alignof(FAnimNode_MakeDynamicAdditive),
		Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_MakeDynamicAdditive"), sizeof(FAnimNode_MakeDynamicAdditive), Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MakeDynamicAdditive_Hash() { return 1141900997U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
