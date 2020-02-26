// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_LayeredBoneBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LayeredBoneBlend() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_LayeredBoneBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LayeredBoneBlend"), sizeof(FAnimNode_LayeredBoneBlend), Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_LayeredBoneBlend>()
{
	return FAnimNode_LayeredBoneBlend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LayeredBoneBlend(FAnimNode_LayeredBoneBlend::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_LayeredBoneBlend"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LayeredBoneBlend
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LayeredBoneBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LayeredBoneBlend")),new UScriptStruct::TCppStructOps<FAnimNode_LayeredBoneBlend>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LayeredBoneBlend;
	struct Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletonGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlendWeights;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendRootMotionBasedOnRootBone_MetaData[];
#endif
		static void NewProp_bBlendRootMotionBasedOnRootBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendRootMotionBasedOnRootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveBlendOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurveBlendOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceRotationBlend_MetaData[];
#endif
		static void NewProp_bMeshSpaceRotationBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceRotationBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendWeights;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerSetup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerSetup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendPoses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendPoses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendPoses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Layered blend (per bone); has dynamic number of blendposes that can blend per different bone sets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LayeredBoneBlend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_VirtualBoneGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_VirtualBoneGuid = { "VirtualBoneGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_VirtualBoneGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_VirtualBoneGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_SkeletonGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_SkeletonGuid = { "SkeletonGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, SkeletonGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_SkeletonGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_SkeletonGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "This is buffer to serialize blend weight data for each joints\nThis has to save with the corresponding SkeletopnGuid\nIf not, it will rebuild in run-time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, PerBoneBlendWeights), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights_Inner = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LODThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Whether to incorporate the per-bone blend weight of the root bone when lending root motion" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_SetBit(void* Obj)
	{
		((FAnimNode_LayeredBoneBlend*)Obj)->bBlendRootMotionBasedOnRootBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone = { "bBlendRootMotionBasedOnRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LayeredBoneBlend), &Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_CurveBlendOption_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "How to blend the layers together" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_CurveBlendOption = { "CurveBlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, CurveBlendOption), Z_Construct_UEnum_Engine_ECurveBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_CurveBlendOption_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_CurveBlendOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Whether to blend bone rotations in mesh space or in local space" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend_SetBit(void* Obj)
	{
		((FAnimNode_LayeredBoneBlend*)Obj)->bMeshSpaceRotationBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend = { "bMeshSpaceRotationBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LayeredBoneBlend), &Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The weights of each layer" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights = { "BlendWeights", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BlendWeights), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights_Inner = { "BlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Configuration for the parts of the skeleton to blend for each layer. Allows\ncertain parts of the tree to be blended out or omitted from the pose." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup = { "LayerSetup", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, LayerSetup), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup_Inner = { "LayerSetup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "Each layer's blended pose" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses = { "BlendPoses", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BlendPoses), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses_Inner = { "BlendPoses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LayeredBoneBlend.h" },
		{ "ToolTip", "The source pose" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LayeredBoneBlend, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BasePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BasePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_VirtualBoneGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_SkeletonGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_PerBoneBlendWeights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_CurveBlendOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_bMeshSpaceRotationBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendWeights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_LayerSetup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BlendPoses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::NewProp_BasePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_LayeredBoneBlend",
		sizeof(FAnimNode_LayeredBoneBlend),
		alignof(FAnimNode_LayeredBoneBlend),
		Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LayeredBoneBlend"), sizeof(FAnimNode_LayeredBoneBlend), Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend_Hash() { return 29537378U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
