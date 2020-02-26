// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/SingleAnimationPlayData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleAnimationPlayData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FSingleAnimationPlayData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleAnimationPlayData, Z_Construct_UPackage__Script_Engine(), TEXT("SingleAnimationPlayData"), sizeof(FSingleAnimationPlayData), Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSingleAnimationPlayData>()
{
	return FSingleAnimationPlayData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSingleAnimationPlayData(FSingleAnimationPlayData::StaticStruct, TEXT("/Script/Engine"), TEXT("SingleAnimationPlayData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSingleAnimationPlayData
{
	FScriptStruct_Engine_StaticRegisterNativesFSingleAnimationPlayData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SingleAnimationPlayData")),new UScriptStruct::TCppStructOps<FSingleAnimationPlayData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSingleAnimationPlayData;
	struct Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SavedPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SavedPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavedPlaying_MetaData[];
#endif
		static void NewProp_bSavedPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavedPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSavedLooping_MetaData[];
#endif
		static void NewProp_bSavedLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSavedLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleAnimationPlayData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "PlayRate" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for play rate of SequenceToPlay to play." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate = { "SavedPlayRate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleAnimationPlayData, SavedPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "Initial Position" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for position of SequenceToPlay to play." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition = { "SavedPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleAnimationPlayData, SavedPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "Playing" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for playing for SequenceToPlay. This is not current state of playing." },
	};
#endif
	void Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_SetBit(void* Obj)
	{
		((FSingleAnimationPlayData*)Obj)->bSavedPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying = { "bSavedPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSingleAnimationPlayData), &Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_MetaData[] = {
		{ "Category", "Animation" },
		{ "DisplayName", "Looping" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "Default setting for looping for SequenceToPlay. This is not current state of looping." },
	};
#endif
	void Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_SetBit(void* Obj)
	{
		((FSingleAnimationPlayData*)Obj)->bSavedLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping = { "bSavedLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSingleAnimationPlayData), &Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/SingleAnimationPlayData.h" },
		{ "ToolTip", "@todo in the future, we should make this one UObject\nand have detail customization to display different things\nThe default sequence to play on this skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay = { "AnimToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleAnimationPlayData, AnimToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_SavedPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_bSavedLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::NewProp_AnimToPlay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SingleAnimationPlayData",
		sizeof(FSingleAnimationPlayData),
		alignof(FSingleAnimationPlayData),
		Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SingleAnimationPlayData"), sizeof(FSingleAnimationPlayData), Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSingleAnimationPlayData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSingleAnimationPlayData_Hash() { return 448781412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
