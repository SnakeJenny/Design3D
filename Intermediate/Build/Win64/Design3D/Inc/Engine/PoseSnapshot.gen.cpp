// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/PoseSnapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSnapshot() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FPoseSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseSnapshot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSnapshot, Z_Construct_UPackage__Script_Engine(), TEXT("PoseSnapshot"), sizeof(FPoseSnapshot), Get_Z_Construct_UScriptStruct_FPoseSnapshot_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseSnapshot>()
{
	return FPoseSnapshot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseSnapshot(FPoseSnapshot::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseSnapshot
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseSnapshot")),new UScriptStruct::TCppStructOps<FPoseSnapshot>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseSnapshot;
	struct Z_Construct_UScriptStruct_FPoseSnapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalTransforms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "A pose for a skeletal mesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSnapshot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "Whether the pose is valid" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FPoseSnapshot*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPoseSnapshot), &Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "The name for this snapshot" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseSnapshot, SnapshotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "The name of the skeletal mesh that was used to take this snapshot" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName = { "SkeletalMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseSnapshot, SkeletalMeshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "Array of bone names (corresponding to LocalTransforms)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseSnapshot, BoneNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "Array of transforms per-bone" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms = { "LocalTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPoseSnapshot, LocalTransforms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_Inner = { "LocalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseSnapshot",
		sizeof(FPoseSnapshot),
		alignof(FPoseSnapshot),
		Z_Construct_UScriptStruct_FPoseSnapshot_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseSnapshot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseSnapshot"), sizeof(FPoseSnapshot), Get_Z_Construct_UScriptStruct_FPoseSnapshot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPoseSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseSnapshot_Hash() { return 886142330U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
