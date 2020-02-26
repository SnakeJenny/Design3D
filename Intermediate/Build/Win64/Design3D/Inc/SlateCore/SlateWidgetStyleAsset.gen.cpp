// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleAsset() {}
// Cross Module References
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister();
// End Cross Module References
	void USlateWidgetStyleAsset::StaticRegisterNativesUSlateWidgetStyleAsset()
	{
	}
	UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister()
	{
		return USlateWidgetStyleAsset::StaticClass();
	}
	struct Z_Construct_UClass_USlateWidgetStyleAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateWidgetStyleAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateWidgetStyleAsset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Styling/SlateWidgetStyleAsset.h" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleAsset.h" },
		{ "ToolTip", "Just a wrapper for the struct with real data in it." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle = { "CustomStyle", nullptr, (EPropertyFlags)0x0012000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlateWidgetStyleAsset, CustomStyle), Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateWidgetStyleAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateWidgetStyleAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateWidgetStyleAsset_Statics::ClassParams = {
		&USlateWidgetStyleAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateWidgetStyleAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateWidgetStyleAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateWidgetStyleAsset, 283334384);
	template<> SLATECORE_API UClass* StaticClass<USlateWidgetStyleAsset>()
	{
		return USlateWidgetStyleAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateWidgetStyleAsset(Z_Construct_UClass_USlateWidgetStyleAsset, &USlateWidgetStyleAsset::StaticClass, TEXT("/Script/SlateCore"), TEXT("USlateWidgetStyleAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
