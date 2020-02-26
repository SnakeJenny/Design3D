// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_Fabrik.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Fabrik() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Fabrik();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneRotationSource();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FAnimNode_Fabrik::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Fabrik_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Fabrik, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Fabrik"), sizeof(FAnimNode_Fabrik), Get_Z_Construct_UScriptStruct_FAnimNode_Fabrik_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Fabrik>()
{
	return FAnimNode_Fabrik::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Fabrik(FAnimNode_Fabrik::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_Fabrik"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Fabrik
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Fabrik()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Fabrik")),new UScriptStruct::TCppStructOps<FAnimNode_Fabrik>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_Fabrik;
	struct Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorTransformBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorTransformBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[];
#endif
		static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorRotationSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectorRotationSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorTransformSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectorTransformSpace;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Controller which implements the FABRIK IK approximation algorithm -  see http://www.academia.edu/9165835/FABRIK_A_fast_iterative_solver_for_the_Inverse_Kinematics_problem for details" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Fabrik>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "If EffectorTransformSpace is a bone, this is the bone to use. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformBone = { "EffectorTransformBone", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorTransformBone_DEPRECATED), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Toggle drawing of axes to debug joint rotation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
	{
		((FAnimNode_Fabrik*)Obj)->bEnableDebugDraw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_Fabrik), &Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorRotationSource_MetaData[] = {
		{ "Category", "EndEffector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorRotationSource = { "EffectorRotationSource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorRotationSource), Z_Construct_UEnum_Engine_EBoneRotationSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorRotationSource_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorRotationSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformSpace_MetaData[] = {
		{ "Category", "EndEffector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Reference frame of Effector Transform." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformSpace = { "EffectorTransformSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorTransformSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Maximum number of iterations allowed, to control performance." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Fabrik, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_MaxIterations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Tolerance for final tip location delta from EffectorLocation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Fabrik, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_Precision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_RootBone_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Name of the root bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Fabrik, RootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_RootBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_RootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_TipBone_MetaData[] = {
		{ "Category", "Solver" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "Name of tip bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_TipBone = { "TipBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Fabrik, TipBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_TipBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_TipBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTarget_MetaData[] = {
		{ "Category", "EndEffector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "ToolTip", "If EffectorTransformSpace is a bone, this is the bone to use. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTarget = { "EffectorTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "EndEffector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Fabrik.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Coordinates for target location of tip bone - if EffectorLocationSpace is bone, this is the offset from Target Bone to use as target location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Fabrik, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_bEnableDebugDraw,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorRotationSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransformSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_MaxIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_Precision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_RootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_TipBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewProp_EffectorTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_Fabrik",
		sizeof(FAnimNode_Fabrik),
		alignof(FAnimNode_Fabrik),
		Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Fabrik()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Fabrik_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Fabrik"), sizeof(FAnimNode_Fabrik), Get_Z_Construct_UScriptStruct_FAnimNode_Fabrik_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Fabrik_Hash() { return 3550767380U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
