// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Commands/InputChord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputChord() {}
// Cross Module References
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UPackage* Z_Construct_UPackage__Script_Slate();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FInputChord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FInputChord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputChord, Z_Construct_UPackage__Script_Slate(), TEXT("InputChord"), sizeof(FInputChord), Get_Z_Construct_UScriptStruct_FInputChord_Hash());
	}
	return Singleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FInputChord>()
{
	return FInputChord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputChord(FInputChord::StaticStruct, TEXT("/Script/Slate"), TEXT("InputChord"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFInputChord
{
	FScriptStruct_Slate_StaticRegisterNativesFInputChord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputChord")),new UScriptStruct::TCppStructOps<FInputChord>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFInputChord;
	struct Z_Construct_UScriptStruct_FInputChord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCmd_MetaData[];
#endif
		static void NewProp_bCmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCmd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[];
#endif
		static void NewProp_bAlt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCtrl_MetaData[];
#endif
		static void NewProp_bCtrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCtrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[];
#endif
		static void NewProp_bShift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "An Input Chord is a key and the modifier keys that are to be held with it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputChord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputChord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the command key is part of the chord." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_SetBit(void* Obj)
	{
		((FInputChord*)Obj)->bCmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd = { "bCmd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the alt key is part of the chord." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_SetBit(void* Obj)
	{
		((FInputChord*)Obj)->bAlt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the control key is part of the chord." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_SetBit(void* Obj)
	{
		((FInputChord*)Obj)->bCtrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl = { "bCtrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the shift key is part of the chord." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_SetBit(void* Obj)
	{
		((FInputChord*)Obj)->bShift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "The Key is the core of the chord." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputChord, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputChord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"InputChord",
		sizeof(FInputChord),
		alignof(FInputChord),
		Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputChord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputChord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputChord"), sizeof(FInputChord), Get_Z_Construct_UScriptStruct_FInputChord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputChord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputChord_Hash() { return 1174457291U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
