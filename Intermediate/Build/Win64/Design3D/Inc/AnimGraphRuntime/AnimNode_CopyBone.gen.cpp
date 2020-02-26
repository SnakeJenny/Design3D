// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_CopyBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBone();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_CopyBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBone, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CopyBone"), sizeof(FAnimNode_CopyBone), Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_CopyBone>()
{
	return FAnimNode_CopyBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CopyBone(FAnimNode_CopyBone::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_CopyBone"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBone
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_CopyBone")),new UScriptStruct::TCppStructOps<FAnimNode_CopyBone>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBone;
	struct Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControlSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyScale_MetaData[];
#endif
		static void NewProp_bCopyScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyRotation_MetaData[];
#endif
		static void NewProp_bCopyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyTranslation_MetaData[];
#endif
		static void NewProp_bCopyTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Simple controller to copy a bone's transform to another one." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Space to convert transforms into prior to copying components" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace = { "ControlSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CopyBone, ControlSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If Scale should be copied" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_SetBit(void* Obj)
	{
		((FAnimNode_CopyBone*)Obj)->bCopyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale = { "bCopyScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_CopyBone), &Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If Rotation should be copied" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_SetBit(void* Obj)
	{
		((FAnimNode_CopyBone*)Obj)->bCopyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation = { "bCopyRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_CopyBone), &Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "If Translation should be copied" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_SetBit(void* Obj)
	{
		((FAnimNode_CopyBone*)Obj)->bCopyTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation = { "bCopyTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_CopyBone), &Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CopyBone, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBone.h" },
		{ "ToolTip", "Source Bone Name to get transform from" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CopyBone, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_ControlSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_bCopyTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_TargetBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::NewProp_SourceBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_CopyBone",
		sizeof(FAnimNode_CopyBone),
		alignof(FAnimNode_CopyBone),
		Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CopyBone"), sizeof(FAnimNode_CopyBone), Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_CopyBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBone_Hash() { return 4005226537U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
