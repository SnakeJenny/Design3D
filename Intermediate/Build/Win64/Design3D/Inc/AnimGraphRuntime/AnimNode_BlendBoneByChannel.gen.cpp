// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendBoneByChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendBoneByChannel() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendBoneByChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendBoneByChannel"), sizeof(FAnimNode_BlendBoneByChannel), Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendBoneByChannel>()
{
	return FAnimNode_BlendBoneByChannel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendBoneByChannel(FAnimNode_BlendBoneByChannel::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendBoneByChannel"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendBoneByChannel
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendBoneByChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendBoneByChannel")),new UScriptStruct::TCppStructOps<FAnimNode_BlendBoneByChannel>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendBoneByChannel;
	struct Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformsSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformsSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneDefinitions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneDefinitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendBoneByChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace_MetaData[] = {
		{ "Category", "Blend" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Space to convert transforms into prior to copying channels" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace = { "TransformsSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, TransformsSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayAfter", "B" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_MetaData[] = {
		{ "Category", "Blend" },
		{ "DisplayAfter", "AlphaScaleBias" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions = { "BoneDefinitions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, BoneDefinitions), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_Inner = { "BoneDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, B), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendBoneByChannel, A), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_TransformsSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_AlphaScaleBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_BoneDefinitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::NewProp_A,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_BlendBoneByChannel",
		sizeof(FAnimNode_BlendBoneByChannel),
		alignof(FAnimNode_BlendBoneByChannel),
		Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendBoneByChannel"), sizeof(FAnimNode_BlendBoneByChannel), Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendBoneByChannel_Hash() { return 1114864811U; }
class UScriptStruct* FBlendBoneByChannelEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("BlendBoneByChannelEntry"), sizeof(FBlendBoneByChannelEntry), Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FBlendBoneByChannelEntry>()
{
	return FBlendBoneByChannelEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendBoneByChannelEntry(FBlendBoneByChannelEntry::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("BlendBoneByChannelEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFBlendBoneByChannelEntry
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFBlendBoneByChannelEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendBoneByChannelEntry")),new UScriptStruct::TCppStructOps<FBlendBoneByChannelEntry>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFBlendBoneByChannelEntry;
	struct Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendScale_MetaData[];
#endif
		static void NewProp_bBlendScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendRotation_MetaData[];
#endif
		static void NewProp_bBlendRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendTranslation_MetaData[];
#endif
		static void NewProp_bBlendTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendTranslation;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendBoneByChannelEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_MetaData[] = {
		{ "Category", "Blend" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Copy Scale from Source to Target" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_SetBit(void* Obj)
	{
		((FBlendBoneByChannelEntry*)Obj)->bBlendScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale = { "bBlendScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBlendBoneByChannelEntry), &Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_MetaData[] = {
		{ "Category", "Blend" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Copy Rotation from Source to Target" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_SetBit(void* Obj)
	{
		((FBlendBoneByChannelEntry*)Obj)->bBlendRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation = { "bBlendRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBlendBoneByChannelEntry), &Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_MetaData[] = {
		{ "Category", "Blend" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Copy Translation from Source to Target" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_SetBit(void* Obj)
	{
		((FBlendBoneByChannelEntry*)Obj)->bBlendTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation = { "bBlendTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBlendBoneByChannelEntry), &Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Blend" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Bone to apply Transform to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendBoneByChannelEntry, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Blend" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendBoneByChannel.h" },
		{ "ToolTip", "Bone to take Transform from" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlendBoneByChannelEntry, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_bBlendTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_TargetBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::NewProp_SourceBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"BlendBoneByChannelEntry",
		sizeof(FBlendBoneByChannelEntry),
		alignof(FBlendBoneByChannelEntry),
		Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendBoneByChannelEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendBoneByChannelEntry"), sizeof(FBlendBoneByChannelEntry), Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendBoneByChannelEntry_Hash() { return 2047890328U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
