// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetCarousel/Public/WidgetCarouselStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetCarouselStyle() {}
// Cross Module References
	WIDGETCAROUSEL_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle();
	UPackage* Z_Construct_UPackage__Script_WidgetCarousel();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	WIDGETCAROUSEL_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle();
// End Cross Module References
class UScriptStruct* FWidgetCarouselNavigationBarStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WIDGETCAROUSEL_API uint32 Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle, Z_Construct_UPackage__Script_WidgetCarousel(), TEXT("WidgetCarouselNavigationBarStyle"), sizeof(FWidgetCarouselNavigationBarStyle), Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Hash());
	}
	return Singleton;
}
template<> WIDGETCAROUSEL_API UScriptStruct* StaticStruct<FWidgetCarouselNavigationBarStyle>()
{
	return FWidgetCarouselNavigationBarStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetCarouselNavigationBarStyle(FWidgetCarouselNavigationBarStyle::StaticStruct, TEXT("/Script/WidgetCarousel"), TEXT("WidgetCarouselNavigationBarStyle"), false, nullptr, nullptr);
static struct FScriptStruct_WidgetCarousel_StaticRegisterNativesFWidgetCarouselNavigationBarStyle
{
	FScriptStruct_WidgetCarousel_StaticRegisterNativesFWidgetCarouselNavigationBarStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetCarouselNavigationBarStyle")),new UScriptStruct::TCppStructOps<FWidgetCarouselNavigationBarStyle>);
	}
} ScriptStruct_WidgetCarousel_StaticRegisterNativesFWidgetCarouselNavigationBarStyle;
	struct Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HighlightBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetCarouselNavigationBarStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle = { "RightButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetCarouselNavigationBarStyle, RightButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle = { "CenterButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetCarouselNavigationBarStyle, CenterButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle = { "LeftButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetCarouselNavigationBarStyle, LeftButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush = { "HighlightBrush", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetCarouselNavigationBarStyle, HighlightBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_RightButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_CenterButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_LeftButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::NewProp_HighlightBrush,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetCarousel,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"WidgetCarouselNavigationBarStyle",
		sizeof(FWidgetCarouselNavigationBarStyle),
		alignof(FWidgetCarouselNavigationBarStyle),
		Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WidgetCarousel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetCarouselNavigationBarStyle"), sizeof(FWidgetCarouselNavigationBarStyle), Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationBarStyle_Hash() { return 328604758U; }
class UScriptStruct* FWidgetCarouselNavigationButtonStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WIDGETCAROUSEL_API uint32 Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle, Z_Construct_UPackage__Script_WidgetCarousel(), TEXT("WidgetCarouselNavigationButtonStyle"), sizeof(FWidgetCarouselNavigationButtonStyle), Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Hash());
	}
	return Singleton;
}
template<> WIDGETCAROUSEL_API UScriptStruct* StaticStruct<FWidgetCarouselNavigationButtonStyle>()
{
	return FWidgetCarouselNavigationButtonStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetCarouselNavigationButtonStyle(FWidgetCarouselNavigationButtonStyle::StaticStruct, TEXT("/Script/WidgetCarousel"), TEXT("WidgetCarouselNavigationButtonStyle"), false, nullptr, nullptr);
static struct FScriptStruct_WidgetCarousel_StaticRegisterNativesFWidgetCarouselNavigationButtonStyle
{
	FScriptStruct_WidgetCarousel_StaticRegisterNativesFWidgetCarouselNavigationButtonStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetCarouselNavigationButtonStyle")),new UScriptStruct::TCppStructOps<FWidgetCarouselNavigationButtonStyle>);
	}
} ScriptStruct_WidgetCarousel_StaticRegisterNativesFWidgetCarouselNavigationButtonStyle;
	struct Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationButtonRightImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationButtonRightImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationButtonLeftImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationButtonLeftImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerButtonStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetCarouselNavigationButtonStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage = { "NavigationButtonRightImage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetCarouselNavigationButtonStyle, NavigationButtonRightImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage = { "NavigationButtonLeftImage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetCarouselNavigationButtonStyle, NavigationButtonLeftImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetCarouselStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle = { "InnerButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWidgetCarouselNavigationButtonStyle, InnerButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonRightImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_NavigationButtonLeftImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::NewProp_InnerButtonStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetCarousel,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"WidgetCarouselNavigationButtonStyle",
		sizeof(FWidgetCarouselNavigationButtonStyle),
		alignof(FWidgetCarouselNavigationButtonStyle),
		Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WidgetCarousel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetCarouselNavigationButtonStyle"), sizeof(FWidgetCarouselNavigationButtonStyle), Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetCarouselNavigationButtonStyle_Hash() { return 3241704258U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
