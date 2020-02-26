// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_CCDIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CCDIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CCDIK();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAnimNode_CCDIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CCDIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CCDIK, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CCDIK"), sizeof(FAnimNode_CCDIK), Get_Z_Construct_UScriptStruct_FAnimNode_CCDIK_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_CCDIK>()
{
	return FAnimNode_CCDIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CCDIK(FAnimNode_CCDIK::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_CCDIK"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CCDIK
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CCDIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_CCDIK")),new UScriptStruct::TCppStructOps<FAnimNode_CCDIK>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CCDIK;
	struct Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationLimitPerJoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RotationLimitPerJoints;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationLimitPerJoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationLimit_MetaData[];
#endif
		static void NewProp_bEnableRotationLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartFromTail_MetaData[];
#endif
		static void NewProp_bStartFromTail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartFromTail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorLocationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectorLocationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CCDIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "symmetry rotation limit per joint. Index 0 matches with root bone and last index matches with tip bone." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints = { "RotationLimitPerJoints", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CCDIK, RotationLimitPerJoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_Inner = { "RotationLimitPerJoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Tolerance for final tip location delta from EffectorLocation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_SetBit(void* Obj)
	{
		((FAnimNode_CCDIK*)Obj)->bEnableRotationLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit = { "bEnableRotationLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_CCDIK), &Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Toggle drawing of axes to debug joint rotation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_SetBit(void* Obj)
	{
		((FAnimNode_CCDIK*)Obj)->bStartFromTail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail = { "bStartFromTail", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_CCDIK), &Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Maximum number of iterations allowed, to control performance." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CCDIK, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Tolerance for final tip location delta from EffectorLocation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CCDIK, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Name of the root bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CCDIK, RootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Name of tip bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone = { "TipBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CCDIK, TipBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget_MetaData[] = {
		{ "Category", "Effector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "If EffectorTransformSpace is a bone, this is the bone to use. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget = { "EffectorTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CCDIK, EffectorTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Reference frame of Effector Transform." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace = { "EffectorLocationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CCDIK, EffectorLocationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation_MetaData[] = {
		{ "Category", "Effector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Coordinates for target location of tip bone - if EffectorLocationSpace is bone, this is the offset from Target Bone to use as target location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation = { "EffectorLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CCDIK, EffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_CCDIK",
		sizeof(FAnimNode_CCDIK),
		alignof(FAnimNode_CCDIK),
		Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CCDIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CCDIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CCDIK"), sizeof(FAnimNode_CCDIK), Get_Z_Construct_UScriptStruct_FAnimNode_CCDIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CCDIK_Hash() { return 2278328589U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
