// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LegIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChain();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink();
// End Cross Module References
class UScriptStruct* FAnimNode_LegIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LegIK, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LegIK"), sizeof(FAnimNode_LegIK), Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_LegIK>()
{
	return FAnimNode_LegIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LegIK(FAnimNode_LegIK::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_LegIK"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LegIK
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LegIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LegIK")),new UScriptStruct::TCppStructOps<FAnimNode_LegIK>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LegIK;
	struct Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegsDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LegsDefinition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LegsDefinition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachPrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachPrecision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LegIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition = { "LegsDefinition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LegIK, LegsDefinition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_Inner = { "LegsDefinition", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimLegIKDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Max Number of Iterations." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LegIK, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Tolerance for reaching IK Target, in unreal units." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision = { "ReachPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LegIK, ReachPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_LegIK",
		sizeof(FAnimNode_LegIK),
		alignof(FAnimNode_LegIK),
		Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LegIK"), sizeof(FAnimNode_LegIK), Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_Hash() { return 71076440U; }
class UScriptStruct* FAnimLegIKData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKData, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKData"), sizeof(FAnimLegIKData), Get_Z_Construct_UScriptStruct_FAnimLegIKData_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimLegIKData>()
{
	return FAnimLegIKData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimLegIKData(FAnimLegIKData::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimLegIKData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKData
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimLegIKData")),new UScriptStruct::TCppStructOps<FAnimLegIKData>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKData;
	struct Z_Construct_UScriptStruct_FAnimLegIKData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Runtime foot data after validation, we guarantee these bones to exist" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimLegIKData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLegIKData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimLegIKData",
		sizeof(FAnimLegIKData),
		alignof(FAnimLegIKData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimLegIKData"), sizeof(FAnimLegIKData), Get_Z_Construct_UScriptStruct_FAnimLegIKData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimLegIKData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKData_Hash() { return 3820822190U; }
class UScriptStruct* FAnimLegIKDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKDefinition, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKDefinition"), sizeof(FAnimLegIKDefinition), Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimLegIKDefinition>()
{
	return FAnimLegIKDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimLegIKDefinition(FAnimLegIKDefinition::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimLegIKDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKDefinition
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimLegIKDefinition")),new UScriptStruct::TCppStructOps<FAnimLegIKDefinition>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKDefinition;
	struct Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableKneeTwistCorrection_MetaData[];
#endif
		static void NewProp_bEnableKneeTwistCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableKneeTwistCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationLimit_MetaData[];
#endif
		static void NewProp_bEnableRotationLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HingeRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HingeRotationAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootBoneForwardAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootBoneForwardAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRotationAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRotationAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBonesInLimb_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBonesInLimb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FKFootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FKFootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKFootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKFootBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Per foot definitions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_SetBit(void* Obj)
	{
		((FAnimLegIKDefinition*)Obj)->bEnableKneeTwistCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection = { "bEnableKneeTwistCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimLegIKDefinition), &Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "If enabled, we prevent the leg from bending backwards and enforce a min compression angle" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_SetBit(void* Obj)
	{
		((FAnimLegIKDefinition*)Obj)->bEnableRotationLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit = { "bEnableRotationLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimLegIKDefinition), &Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis = { "HingeRotationAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimLegIKDefinition, HingeRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Forward Axis for Foot bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis = { "FootBoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimLegIKDefinition, FootBoneForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\nand forces at least this angle between Parent and Child bone." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle = { "MinRotationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimLegIKDefinition, MinRotationAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb = { "NumBonesInLimb", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimLegIKDefinition, NumBonesInLimb), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone = { "FKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimLegIKDefinition, FKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone = { "IKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimLegIKDefinition, IKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimLegIKDefinition",
		sizeof(FAnimLegIKDefinition),
		alignof(FAnimLegIKDefinition),
		Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimLegIKDefinition"), sizeof(FAnimLegIKDefinition), Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_Hash() { return 3738306795U; }
class UScriptStruct* FIKChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FIKChain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChain, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChain"), sizeof(FIKChain), Get_Z_Construct_UScriptStruct_FIKChain_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FIKChain>()
{
	return FIKChain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIKChain(FIKChain::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("IKChain"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChain
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChain()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IKChain")),new UScriptStruct::TCppStructOps<FIKChain>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChain;
	struct Z_Construct_UScriptStruct_FIKChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChain>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"IKChain",
		sizeof(FIKChain),
		alignof(FIKChain),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIKChain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IKChain"), sizeof(FIKChain), Get_Z_Construct_UScriptStruct_FIKChain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIKChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIKChain_Hash() { return 1429899045U; }
class UScriptStruct* FIKChainLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FIKChainLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChainLink, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChainLink"), sizeof(FIKChainLink), Get_Z_Construct_UScriptStruct_FIKChainLink_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FIKChainLink>()
{
	return FIKChainLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIKChainLink(FIKChainLink::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("IKChainLink"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChainLink
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChainLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IKChainLink")),new UScriptStruct::TCppStructOps<FIKChainLink>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChainLink;
	struct Z_Construct_UScriptStruct_FIKChainLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKChainLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChainLink>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKChainLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"IKChainLink",
		sizeof(FIKChainLink),
		alignof(FIKChainLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIKChainLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IKChainLink"), sizeof(FIKChainLink), Get_Z_Construct_UScriptStruct_FIKChainLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIKChainLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIKChainLink_Hash() { return 1663815762U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
