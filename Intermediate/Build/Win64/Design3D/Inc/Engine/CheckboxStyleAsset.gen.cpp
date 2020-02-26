// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Slate/CheckboxStyleAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckboxStyleAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCheckBoxStyleAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
// End Cross Module References
	void UCheckBoxStyleAsset::StaticRegisterNativesUCheckBoxStyleAsset()
	{
	}
	UClass* Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister()
	{
		return UCheckBoxStyleAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCheckBoxStyleAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckBoxStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckBoxStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckBoxStyleAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBoxStyleAsset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Slate/CheckboxStyleAsset.h" },
		{ "ModuleRelativePath", "Classes/Slate/CheckboxStyleAsset.h" },
		{ "ToolTip", "An asset describing a CheckBox's appearance.\nJust a wrapper for the struct with real data in it." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/Slate/CheckboxStyleAsset.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the Check Box's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle = { "CheckBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBoxStyleAsset, CheckBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckBoxStyleAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckBoxStyleAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckBoxStyleAsset_Statics::ClassParams = {
		&UCheckBoxStyleAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckBoxStyleAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckBoxStyleAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckBoxStyleAsset, 1895295800);
	template<> ENGINE_API UClass* StaticClass<UCheckBoxStyleAsset>()
	{
		return UCheckBoxStyleAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckBoxStyleAsset(Z_Construct_UClass_UCheckBoxStyleAsset, &UCheckBoxStyleAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UCheckBoxStyleAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBoxStyleAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
