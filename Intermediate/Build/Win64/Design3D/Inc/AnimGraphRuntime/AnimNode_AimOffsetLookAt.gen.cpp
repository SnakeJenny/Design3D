// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_AimOffsetLookAt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AimOffsetLookAt() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_AimOffsetLookAt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_AimOffsetLookAt"), sizeof(FAnimNode_AimOffsetLookAt), Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_AimOffsetLookAt>()
{
	return FAnimNode_AimOffsetLookAt::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AimOffsetLookAt(FAnimNode_AimOffsetLookAt::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_AimOffsetLookAt"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_AimOffsetLookAt
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_AimOffsetLookAt()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AimOffsetLookAt")),new UScriptStruct::TCppStructOps<FAnimNode_AimOffsetLookAt>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_AimOffsetLookAt;
	struct Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PivotSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "ToolTip", "This node uses a source transform of a socket on the skeletal mesh to automatically calculate\nYaw and Pitch directions for a referenced aim offset given a point in the world to look at." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AimOffsetLookAt>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Amount of this node to blend into the output pose" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Axis in the socket transform to consider the 'forward' or look at axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis = { "SocketAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, SocketAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Location, in world space to look at" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Socket to treat as the look at pivot (optional). This will overwrite the translation of the source socket transform to better match the lookat direction" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName = { "PivotSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, PivotSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Socket to treat as the look at source" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName = { "SourceSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, SourceSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,
		&NewStructOps,
		"AnimNode_AimOffsetLookAt",
		sizeof(FAnimNode_AimOffsetLookAt),
		alignof(FAnimNode_AimOffsetLookAt),
		Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AimOffsetLookAt"), sizeof(FAnimNode_AimOffsetLookAt), Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Hash() { return 2503706010U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
