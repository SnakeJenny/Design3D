// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SequencePlayer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_SequencePlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SequencePlayer"), sizeof(FAnimNode_SequencePlayer), Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SequencePlayer>()
{
	return FAnimNode_SequencePlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SequencePlayer(FAnimNode_SequencePlayer::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_SequencePlayer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SequencePlayer
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SequencePlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SequencePlayer")),new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SequencePlayer;
	struct Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopAnimation_MetaData[];
#endif
		static void NewProp_bLoopAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRateScaleBiasClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayRateScaleBiasClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRateBasis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRateBasis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Sequence player node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SequencePlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the animation continue looping when it reaches the end?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_SetBit(void* Obj)
	{
		((FAnimNode_SequencePlayer*)Obj)->bLoopAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation = { "bLoopAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_SequencePlayer), &Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The start up position, it only applies when reinitialized\nif you loop, it will still start from 0.f after finishing the round" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "ToolTip", "Additional scaling, offsetting and clamping of PlayRate input.\nPerformed after PlayRateBasis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp = { "PlayRateScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRateScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The play rate multiplier. Can be negative, which will cause the animation to play in reverse." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The Basis in which the PlayRate is expressed in. This is used to rescale PlayRate inputs.\nFor example a Basis of 100 means that the PlayRate input will be divided by 100." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis = { "PlayRateBasis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, PlayRateBasis), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SequencePlayer.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SequencePlayer, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_bLoopAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateScaleBiasClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_PlayRateBasis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::NewProp_Sequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_SequencePlayer",
		sizeof(FAnimNode_SequencePlayer),
		alignof(FAnimNode_SequencePlayer),
		Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SequencePlayer"), sizeof(FAnimNode_SequencePlayer), Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SequencePlayer_Hash() { return 2254113194U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
