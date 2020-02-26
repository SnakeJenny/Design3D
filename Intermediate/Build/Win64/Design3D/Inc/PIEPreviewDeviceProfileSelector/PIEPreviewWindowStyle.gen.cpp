// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PIEPreviewDeviceProfileSelector/Private/PIEPreviewWindowStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIEPreviewWindowStyle() {}
// Cross Module References
	PIEPREVIEWDEVICEPROFILESELECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewWindowStyle();
	UPackage* Z_Construct_UPackage__Script_PIEPreviewDeviceProfileSelector();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
// End Cross Module References
class UScriptStruct* FPIEPreviewWindowStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PIEPREVIEWDEVICEPROFILESELECTOR_API uint32 Get_Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle, Z_Construct_UPackage__Script_PIEPreviewDeviceProfileSelector(), TEXT("PIEPreviewWindowStyle"), sizeof(FPIEPreviewWindowStyle), Get_Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Hash());
	}
	return Singleton;
}
template<> PIEPREVIEWDEVICEPROFILESELECTOR_API UScriptStruct* StaticStruct<FPIEPreviewWindowStyle>()
{
	return FPIEPreviewWindowStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIEPreviewWindowStyle(FPIEPreviewWindowStyle::StaticStruct, TEXT("/Script/PIEPreviewDeviceProfileSelector"), TEXT("PIEPreviewWindowStyle"), false, nullptr, nullptr);
static struct FScriptStruct_PIEPreviewDeviceProfileSelector_StaticRegisterNativesFPIEPreviewWindowStyle
{
	FScriptStruct_PIEPreviewDeviceProfileSelector_StaticRegisterNativesFPIEPreviewWindowStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIEPreviewWindowStyle")),new UScriptStruct::TCppStructOps<FPIEPreviewWindowStyle>);
	}
} ScriptStruct_PIEPreviewDeviceProfileSelector_StaticRegisterNativesFPIEPreviewWindowStyle;
	struct Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullMobileContentScaleFactorButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FullMobileContentScaleFactorButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfMobileContentScaleFactorButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfMobileContentScaleFactorButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuarterMobileContentScaleFactorButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuarterMobileContentScaleFactorButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenRotationButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenRotationButtonStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Represents the appearance of an SPIEWindow" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEPreviewWindowStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle_MetaData[] = {
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Style used to draw the window 1X button" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle = { "FullMobileContentScaleFactorButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewWindowStyle, FullMobileContentScaleFactorButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle_MetaData[] = {
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Style used to draw the window 0.5x button" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle = { "HalfMobileContentScaleFactorButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewWindowStyle, HalfMobileContentScaleFactorButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle_MetaData[] = {
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Style used to draw the window 0.25x button" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle = { "QuarterMobileContentScaleFactorButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewWindowStyle, QuarterMobileContentScaleFactorButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle_MetaData[] = {
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Style used to draw the window ScreenRotationButton button" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle = { "ScreenRotationButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIEPreviewWindowStyle, ScreenRotationButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceProfileSelector,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"PIEPreviewWindowStyle",
		sizeof(FPIEPreviewWindowStyle),
		alignof(FPIEPreviewWindowStyle),
		Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewWindowStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PIEPreviewDeviceProfileSelector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIEPreviewWindowStyle"), sizeof(FPIEPreviewWindowStyle), Get_Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Hash() { return 3229302069U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
