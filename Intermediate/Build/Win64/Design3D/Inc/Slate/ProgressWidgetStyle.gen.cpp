// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Styling/ProgressWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UProgressWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
// End Cross Module References
	void UProgressWidgetStyle::StaticRegisterNativesUProgressWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister()
	{
		return UProgressWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UProgressWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBarStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressBarStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProgressWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ProgressWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ProgressWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ProgressWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle = { "ProgressBarStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressWidgetStyle, ProgressBarStyle), Z_Construct_UScriptStruct_FProgressBarStyle, METADATA_PARAMS(Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProgressWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProgressWidgetStyle_Statics::ClassParams = {
		&UProgressWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProgressWidgetStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProgressWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProgressWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProgressWidgetStyle, 2052548827);
	template<> SLATE_API UClass* StaticClass<UProgressWidgetStyle>()
	{
		return UProgressWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProgressWidgetStyle(Z_Construct_UClass_UProgressWidgetStyle, &UProgressWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UProgressWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
