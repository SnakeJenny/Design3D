// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Styling/ComboButtonWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboButtonWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UComboButtonWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboButtonStyle();
// End Cross Module References
	void UComboButtonWidgetStyle::StaticRegisterNativesUComboButtonWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UComboButtonWidgetStyle_NoRegister()
	{
		return UComboButtonWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UComboButtonWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComboButtonStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboButtonWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboButtonWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ComboButtonWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ComboButtonWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ComboButtonWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the combo button's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle = { "ComboButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComboButtonWidgetStyle, ComboButtonStyle), Z_Construct_UScriptStruct_FComboButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboButtonWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboButtonWidgetStyle_Statics::NewProp_ComboButtonStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboButtonWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboButtonWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComboButtonWidgetStyle_Statics::ClassParams = {
		&UComboButtonWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboButtonWidgetStyle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UComboButtonWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboButtonWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComboButtonWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComboButtonWidgetStyle, 825318894);
	template<> SLATE_API UClass* StaticClass<UComboButtonWidgetStyle>()
	{
		return UComboButtonWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboButtonWidgetStyle(Z_Construct_UClass_UComboButtonWidgetStyle, &UComboButtonWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UComboButtonWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboButtonWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
