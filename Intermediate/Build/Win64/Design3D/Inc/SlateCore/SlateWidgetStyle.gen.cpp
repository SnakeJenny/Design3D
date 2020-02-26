// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Styling/SlateWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyle() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
class UScriptStruct* FSlateWidgetStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLATECORE_API uint32 Get_Z_Construct_UScriptStruct_FSlateWidgetStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateWidgetStyle, Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateWidgetStyle"), sizeof(FSlateWidgetStyle), Get_Z_Construct_UScriptStruct_FSlateWidgetStyle_Hash());
	}
	return Singleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateWidgetStyle>()
{
	return FSlateWidgetStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateWidgetStyle(FSlateWidgetStyle::StaticStruct, TEXT("/Script/SlateCore"), TEXT("SlateWidgetStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SlateCore_StaticRegisterNativesFSlateWidgetStyle
{
	FScriptStruct_SlateCore_StaticRegisterNativesFSlateWidgetStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateWidgetStyle")),new UScriptStruct::TCppStructOps<FSlateWidgetStyle>);
	}
} ScriptStruct_SlateCore_StaticRegisterNativesFSlateWidgetStyle;
	struct Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyle.h" },
		{ "ToolTip", "Base structure for widget styles." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateWidgetStyle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateWidgetStyle",
		sizeof(FSlateWidgetStyle),
		alignof(FSlateWidgetStyle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateWidgetStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateWidgetStyle"), sizeof(FSlateWidgetStyle), Get_Z_Construct_UScriptStruct_FSlateWidgetStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateWidgetStyle_Hash() { return 1010719400U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
