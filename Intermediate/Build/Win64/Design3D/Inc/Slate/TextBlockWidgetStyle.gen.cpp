// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Styling/TextBlockWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBlockWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UTextBlockWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
// End Cross Module References
	void UTextBlockWidgetStyle::StaticRegisterNativesUTextBlockWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UTextBlockWidgetStyle_NoRegister()
	{
		return UTextBlockWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UTextBlockWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlockStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextBlockStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextBlockWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlockWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/TextBlockWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/TextBlockWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Framework/Styling/TextBlockWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle = { "TextBlockStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextBlockWidgetStyle, TextBlockStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextBlockWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextBlockWidgetStyle_Statics::NewProp_TextBlockStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextBlockWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBlockWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextBlockWidgetStyle_Statics::ClassParams = {
		&UTextBlockWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextBlockWidgetStyle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextBlockWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextBlockWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextBlockWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextBlockWidgetStyle, 3938109090);
	template<> SLATE_API UClass* StaticClass<UTextBlockWidgetStyle>()
	{
		return UTextBlockWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextBlockWidgetStyle(Z_Construct_UClass_UTextBlockWidgetStyle, &UTextBlockWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UTextBlockWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBlockWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
