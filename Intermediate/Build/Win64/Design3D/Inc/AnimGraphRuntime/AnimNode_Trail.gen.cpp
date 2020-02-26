// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_Trail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Trail() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Trail();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRotationLimit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
// End Cross Module References
class UScriptStruct* FAnimNode_Trail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Trail_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Trail, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Trail"), sizeof(FAnimNode_Trail), Get_Z_Construct_UScriptStruct_FAnimNode_Trail_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Trail>()
{
	return FAnimNode_Trail::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Trail(FAnimNode_Trail::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_Trail"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Trail
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Trail()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Trail")),new UScriptStruct::TCppStructOps<FAnimNode_Trail>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Trail;
	struct Z_Construct_UScriptStruct_FAnimNode_Trail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBoneRotationAnimAlphaBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastBoneRotationAnimAlphaBlend;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailBoneRotationBlendAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailBoneRotationBlendAlpha;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseJoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseJoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FakeVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FakeVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StretchLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotationOffsets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffsets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelaxationSpeedScaleInputProcessor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelaxationSpeedScaleInputProcessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailRelaxationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailRelaxationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelaxationSpeedScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RelaxationSpeedScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnwindingSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UnwindingSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailRelaxation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailRelaxation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowLimit_MetaData[];
#endif
		static void NewProp_bShowLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowTrailLocation_MetaData[];
#endif
		static void NewProp_bShowTrailLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowTrailLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowBaseMotion_MetaData[];
#endif
		static void NewProp_bShowBaseMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBaseMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[];
#endif
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReorientParentToChild_MetaData[];
#endif
		static void NewProp_bReorientParentToChild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReorientParentToChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActorSpaceFakeVel_MetaData[];
#endif
		static void NewProp_bActorSpaceFakeVel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActorSpaceFakeVel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarLimit_MetaData[];
#endif
		static void NewProp_bUsePlanarLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitRotation_MetaData[];
#endif
		static void NewProp_bLimitRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitStretch_MetaData[];
#endif
		static void NewProp_bLimitStretch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitStretch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertChainBoneAxis_MetaData[];
#endif
		static void NewProp_bInvertChainBoneAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertChainBoneAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainBoneAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainBoneAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChainLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrailBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Trail Controller" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Trail>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend_MetaData[] = {
		{ "Category", "Rotation" },
		{ "EditCondition", "bReorientParentToChild" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "How to set last bone rotation. It copies from previous joint if alpha is 0.f, or 1.f will use animated pose\n       * This alpha dictates the blend between parent joint and animated pose, and how much you'd like to use animated pose for" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend = { "LastBoneRotationAnimAlphaBlend", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, LastBoneRotationAnimAlphaBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha = { "TrailBoneRotationBlendAlpha", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, TrailBoneRotationBlendAlpha_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Base Joint to calculate velocity from. If none, it will use Component's World Transform. ." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint = { "BaseJoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, BaseJoint), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "'Fake' velocity applied to bones." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity = { "FakeVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, FakeVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit_MetaData[] = {
		{ "Category", "Limit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "If bLimitStretch is true, this indicates how long a bone can stretch beyond its length in the ref-pose." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, StretchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "Limit" },
		{ "EditCondition", "bUsePlanarLimit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "List of available planar limits for this node" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, PlanarLimits), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_MetaData[] = {
		{ "Category", "Limit" },
		{ "EditCondition", "bLimitRotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets = { "RotationOffsets", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, RotationOffsets), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_Inner = { "RotationOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Limit" },
		{ "EditCondition", "bLimitRotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, RotationLimits), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotationLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor = { "RelaxationSpeedScaleInputProcessor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, RelaxationSpeedScaleInputProcessor), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed_MetaData[] = {
		{ "Category", "Trail" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "How quickly we 'relax' the bones to their animated positions. Time 0 will map to top root joint, time 1 will map to the bottom joint." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed = { "TrailRelaxationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, TrailRelaxationSpeed), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale = { "RelaxationSpeedScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, RelaxationSpeedScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_UnwindingSize_MetaData[] = {
		{ "Category", "Trail" },
		{ "ClampMin", "3" },
		{ "EditCondition", "!bAllowLoop" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "If you want to avoid loop, how many you want to unwind at once.\nBigger value can cause jitter as it becomes more unstable in the ordering\nDefaulted to 3. It will use this length to unwind at once" },
		{ "UIMin", "3" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_UnwindingSize = { "UnwindingSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, UnwindingSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_UnwindingSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_UnwindingSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime_MetaData[] = {
		{ "Category", "Limit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "To avoid hitches causing stretch of trail, you can use MaxDeltaTime to clamp the long delta time. If you want 30 fps to set it to 0.03333f ( = 1/30 )." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, MaxDeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "How quickly we 'relax' the bones to their animated positions. Deprecated. Replaced to TrailRelaxationCurve" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation = { "TrailRelaxation", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, TrailRelaxation_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Debug Life Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime = { "DebugLifeTime", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, DebugLifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Show Planar Limits *" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bShowLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit = { "bShowLimit", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Show Trail Location *" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bShowTrailLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation = { "bShowTrailLocation", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Show Base Motion" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bShowBaseMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion = { "bShowBaseMotion", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Enable Debug in the PIE. This doesn't work in game" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bEnableDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Fix up rotation to face child for the parent" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bReorientParentToChild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild = { "bReorientParentToChild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Whether 'fake' velocity should be applied in actor or world space." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bActorSpaceFakeVel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel = { "bActorSpaceFakeVel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_MetaData[] = {
		{ "Category", "Limit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Whether to evaluate planar limits" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bUsePlanarLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit = { "bUsePlanarLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_MetaData[] = {
		{ "Category", "Limit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bLimitRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation = { "bLimitRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_MetaData[] = {
		{ "Category", "Limit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bLimitStretch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch = { "bLimitStretch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Invert the direction specified in ChainBoneAxis." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bInvertChainBoneAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis = { "bInvertChainBoneAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Axis of the bones to point along trail." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis = { "ChainBoneAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, ChainBoneAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength_MetaData[] = {
		{ "Category", "Trail" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Number of bones above the active one in the hierarchy to modify. ChainLength should be at least 2." },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength = { "ChainLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, ChainLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Reference to the active bone in the hierarchy to modify." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone = { "TrailBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Trail, TrailBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_UnwindingSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_Trail",
		sizeof(FAnimNode_Trail),
		alignof(FAnimNode_Trail),
		Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Trail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Trail_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Trail"), sizeof(FAnimNode_Trail), Get_Z_Construct_UScriptStruct_FAnimNode_Trail_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Trail_Hash() { return 3368505695U; }
class UScriptStruct* FRotationLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRotationLimit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationLimit, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RotationLimit"), sizeof(FRotationLimit), Get_Z_Construct_UScriptStruct_FRotationLimit_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRotationLimit>()
{
	return FRotationLimit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRotationLimit(FRotationLimit::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RotationLimit"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRotationLimit
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRotationLimit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RotationLimit")),new UScriptStruct::TCppStructOps<FRotationLimit>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRotationLimit;
	struct Z_Construct_UScriptStruct_FRotationLimit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimitMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimitMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotationLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationLimit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax = { "LimitMax", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationLimit, LimitMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin = { "LimitMin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRotationLimit, LimitMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RotationLimit",
		sizeof(FRotationLimit),
		alignof(FRotationLimit),
		Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationLimit_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotationLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRotationLimit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RotationLimit"), sizeof(FRotationLimit), Get_Z_Construct_UScriptStruct_FRotationLimit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRotationLimit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRotationLimit_Hash() { return 2542804278U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
