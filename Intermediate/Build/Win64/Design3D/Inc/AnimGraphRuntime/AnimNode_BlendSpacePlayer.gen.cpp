// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpacePlayer() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendSpacePlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpacePlayer"), sizeof(FAnimNode_BlendSpacePlayer), Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpacePlayer>()
{
	return FAnimNode_BlendSpacePlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendSpacePlayer(FAnimNode_BlendSpacePlayer::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendSpacePlayer"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendSpacePlayer
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendSpacePlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendSpacePlayer")),new UScriptStruct::TCppStructOps<FAnimNode_BlendSpacePlayer>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendSpacePlayer;
	struct Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousBlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousBlendSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData[];
#endif
		static void NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetPlayTimeWhenBlendSpaceChanges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "ToolTip", "@TODO: Comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpacePlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PreviousBlendSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PreviousBlendSpace = { "PreviousBlendSpace", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, PreviousBlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PreviousBlendSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PreviousBlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The blendspace asset to play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, BlendSpace), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "DefaultValue", "0.f" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start up position in [0, 1], it only applies when reinitialized\nif you loop, it will still start from 0.f after finishing the round" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Whether we should reset the current play time when the blend space changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit(void* Obj)
	{
		((FAnimNode_BlendSpacePlayer*)Obj)->bResetPlayTimeWhenBlendSpaceChanges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges = { "bResetPlayTimeWhenBlendSpaceChanges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_BlendSpacePlayer), &Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "DefaultValue", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the animation continue looping when it reaches the end?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FAnimNode_BlendSpacePlayer*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_BlendSpacePlayer), &Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "DefaultValue", "1.0" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The Z coordinate to sample in the blendspace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Z_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The Y coordinate to sample in the blendspace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Coordinates" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpacePlayer.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The X coordinate to sample in the blendspace" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_BlendSpacePlayer, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PreviousBlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_BlendSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bResetPlayTimeWhenBlendSpaceChanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::NewProp_X,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_BlendSpacePlayer",
		sizeof(FAnimNode_BlendSpacePlayer),
		alignof(FAnimNode_BlendSpacePlayer),
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendSpacePlayer"), sizeof(FAnimNode_BlendSpacePlayer), Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer_Hash() { return 3696347867U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
