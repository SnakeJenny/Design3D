// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Styling/SpinBoxWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinBoxWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_USpinBoxWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
// End Cross Module References
	void USpinBoxWidgetStyle::StaticRegisterNativesUSpinBoxWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister()
	{
		return USpinBoxWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_USpinBoxWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpinBoxStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpinBoxStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpinBoxWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBoxWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/SpinBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/SpinBoxWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Framework/Styling/SpinBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle = { "SpinBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinBoxWidgetStyle, SpinBoxStyle), Z_Construct_UScriptStruct_FSpinBoxStyle, METADATA_PARAMS(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpinBoxWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinBoxWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpinBoxWidgetStyle_Statics::ClassParams = {
		&USpinBoxWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpinBoxWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpinBoxWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpinBoxWidgetStyle, 2112395832);
	template<> SLATE_API UClass* StaticClass<USpinBoxWidgetStyle>()
	{
		return USpinBoxWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpinBoxWidgetStyle(Z_Construct_UClass_USpinBoxWidgetStyle, &USpinBoxWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("USpinBoxWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpinBoxWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
