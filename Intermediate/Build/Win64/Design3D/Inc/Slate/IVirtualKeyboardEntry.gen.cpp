// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Input/IVirtualKeyboardEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVirtualKeyboardEntry() {}
// Cross Module References
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
class UScriptStruct* FVirtualKeyboardOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATE_API uint32 Get_Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualKeyboardOptions, Z_Construct_UPackage__Script_Slate(), TEXT("VirtualKeyboardOptions"), sizeof(FVirtualKeyboardOptions), Get_Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Hash());
	}
	return Singleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FVirtualKeyboardOptions>()
{
	return FVirtualKeyboardOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVirtualKeyboardOptions(FVirtualKeyboardOptions::StaticStruct, TEXT("/Script/Slate"), TEXT("VirtualKeyboardOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Slate_StaticRegisterNativesFVirtualKeyboardOptions
{
	FScriptStruct_Slate_StaticRegisterNativesFVirtualKeyboardOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VirtualKeyboardOptions")),new UScriptStruct::TCppStructOps<FVirtualKeyboardOptions>);
	}
} ScriptStruct_Slate_StaticRegisterNativesFVirtualKeyboardOptions;
	struct Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutocorrect_MetaData[];
#endif
		static void NewProp_bEnableAutocorrect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutocorrect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Input/IVirtualKeyboardEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualKeyboardOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_MetaData[] = {
		{ "Category", "Autocorrect" },
		{ "ModuleRelativePath", "Public/Widgets/Input/IVirtualKeyboardEntry.h" },
		{ "ToolTip", "Enables autocorrect for this widget, if supported by the platform's virtual keyboard. Autocorrect must also be enabled in Input settings for this to take effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_SetBit(void* Obj)
	{
		((FVirtualKeyboardOptions*)Obj)->bEnableAutocorrect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect = { "bEnableAutocorrect", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVirtualKeyboardOptions), &Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::NewProp_bEnableAutocorrect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"VirtualKeyboardOptions",
		sizeof(FVirtualKeyboardOptions),
		alignof(FVirtualKeyboardOptions),
		Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualKeyboardOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VirtualKeyboardOptions"), sizeof(FVirtualKeyboardOptions), Get_Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVirtualKeyboardOptions_Hash() { return 616935545U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
