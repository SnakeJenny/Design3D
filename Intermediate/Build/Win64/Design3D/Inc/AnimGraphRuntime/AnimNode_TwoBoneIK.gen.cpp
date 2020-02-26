// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_TwoBoneIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TwoBoneIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_TwoBoneIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_TwoBoneIK"), sizeof(FAnimNode_TwoBoneIK), Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_TwoBoneIK>()
{
	return FAnimNode_TwoBoneIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TwoBoneIK(FAnimNode_TwoBoneIK::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_TwoBoneIK"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwoBoneIK
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwoBoneIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TwoBoneIK")),new UScriptStruct::TCppStructOps<FAnimNode_TwoBoneIK>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_TwoBoneIK;
	struct Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTwist_MetaData[];
#endif
		static void NewProp_bAllowTwist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaintainEffectorRelRot_MetaData[];
#endif
		static void NewProp_bMaintainEffectorRelRot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaintainEffectorRelRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTakeRotationFromEffectorSpace_MetaData[];
#endif
		static void NewProp_bTakeRotationFromEffectorSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTakeRotationFromEffectorSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStretching_MetaData[];
#endif
		static void NewProp_bAllowStretching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStretching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetLocationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTargetLocationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorLocationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EffectorLocationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorLocation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorSpaceBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectorSpaceBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetSpaceBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_JointTargetSpaceBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoTwist_MetaData[];
#endif
		static void NewProp_bNoTwist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StretchLimits;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStretchScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStretchScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartStretchRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartStretchRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Simple 2 Bone IK Controller." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TwoBoneIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Whether or not to apply twist on the chain of joints. This clears the twist value along the TwistAxis" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist_SetBit(void* Obj)
	{
		((FAnimNode_TwoBoneIK*)Obj)->bAllowTwist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist = { "bAllowTwist", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Keep local rotation of end bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot_SetBit(void* Obj)
	{
		((FAnimNode_TwoBoneIK*)Obj)->bMaintainEffectorRelRot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot = { "bMaintainEffectorRelRot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Set end bone to use End Effector rotation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace_SetBit(void* Obj)
	{
		((FAnimNode_TwoBoneIK*)Obj)->bTakeRotationFromEffectorSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace = { "bTakeRotationFromEffectorSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Should stretching be allowed, to be prevent over extension" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit(void* Obj)
	{
		((FAnimNode_TwoBoneIK*)Obj)->bAllowStretching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching = { "bAllowStretching", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocationSpace_MetaData[] = {
		{ "Category", "JointTarget" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Reference frame of Joint Target Location." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocationSpace = { "JointTargetLocationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTargetLocationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocationSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocationSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Reference frame of Effector Location." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocationSpace = { "EffectorLocationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorLocationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocationSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "IK" },
		{ "editcondition", "!bAllowTwist" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Specify which axis it's aligned. Used when removing twist" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, TwistAxis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_TwistAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTarget_MetaData[] = {
		{ "Category", "JointTarget" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTarget = { "JointTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocation_MetaData[] = {
		{ "Category", "JointTarget" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Joint Target Location. Location used to orient Joint bone. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocation = { "JointTargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorTarget_MetaData[] = {
		{ "Category", "Effector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorTarget = { "EffectorTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocation_MetaData[] = {
		{ "Category", "Effector" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Effector Location. Target Location to reach." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocation = { "EffectorLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorSpaceBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "If EffectorLocationSpace is a bone, this is the bone to use. *" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorSpaceBoneName = { "EffectorSpaceBoneName", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, EffectorSpaceBoneName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorSpaceBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorSpaceBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetSpaceBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "If JointTargetSpaceBoneName is a bone, this is the bone to use. *" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetSpaceBoneName = { "JointTargetSpaceBoneName", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, JointTargetSpaceBoneName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetSpaceBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetSpaceBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Whether or not to apply twist on the chain of joints. This clears the twist value along the TwistAxis" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist_SetBit(void* Obj)
	{
		((FAnimNode_TwoBoneIK*)Obj)->bNoTwist_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist = { "bNoTwist", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_TwoBoneIK), &Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StretchLimits_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Limits to use if stretching is allowed - old property DEPRECATED" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StretchLimits = { "StretchLimits", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, StretchLimits_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StretchLimits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StretchLimits_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_MaxStretchScale_MetaData[] = {
		{ "Category", "IK" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bAllowStretching" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Limits to use if stretching is allowed. This value determins what is the max stretch scale. For example, 1.5 means it will stretch until 150 % of the whole length of the limb." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_MaxStretchScale = { "MaxStretchScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, MaxStretchScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_MaxStretchScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_MaxStretchScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StartStretchRatio_MetaData[] = {
		{ "Category", "IK" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bAllowStretching" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Limits to use if stretching is allowed. This value determines when to start stretch. For example, 0.9 means once it reaches 90% of the whole length of the limb, it will start apply." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StartStretchRatio = { "StartStretchRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, StartStretchRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StartStretchRatio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StartStretchRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_IKBone_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_TwoBoneIK.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_IKBone = { "IKBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TwoBoneIK, IKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_IKBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_IKBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bMaintainEffectorRelRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bTakeRotationFromEffectorSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bAllowStretching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_TwistAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorLocation,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_EffectorSpaceBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_JointTargetSpaceBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_bNoTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StretchLimits,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_MaxStretchScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_StartStretchRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::NewProp_IKBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_TwoBoneIK",
		sizeof(FAnimNode_TwoBoneIK),
		alignof(FAnimNode_TwoBoneIK),
		Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TwoBoneIK"), sizeof(FAnimNode_TwoBoneIK), Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK_Hash() { return 2494786321U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
