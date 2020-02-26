// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Slate/ButtonStyleAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonStyleAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UButtonStyleAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UButtonStyleAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
// End Cross Module References
	void UButtonStyleAsset::StaticRegisterNativesUButtonStyleAsset()
	{
	}
	UClass* Z_Construct_UClass_UButtonStyleAsset_NoRegister()
	{
		return UButtonStyleAsset::StaticClass();
	}
	struct Z_Construct_UClass_UButtonStyleAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonStyleAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonStyleAsset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Slate/ButtonStyleAsset.h" },
		{ "ModuleRelativePath", "Classes/Slate/ButtonStyleAsset.h" },
		{ "ToolTip", "An asset describing a button's appearance.\nJust a wrapper for the struct with real data in it.style factory" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonStyleAsset_Statics::NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Classes/Slate/ButtonStyleAsset.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButtonStyleAsset_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonStyleAsset, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UButtonStyleAsset_Statics::NewProp_ButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UButtonStyleAsset_Statics::NewProp_ButtonStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonStyleAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonStyleAsset_Statics::NewProp_ButtonStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonStyleAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonStyleAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UButtonStyleAsset_Statics::ClassParams = {
		&UButtonStyleAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UButtonStyleAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UButtonStyleAsset_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UButtonStyleAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UButtonStyleAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButtonStyleAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UButtonStyleAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UButtonStyleAsset, 2658323602);
	template<> ENGINE_API UClass* StaticClass<UButtonStyleAsset>()
	{
		return UButtonStyleAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonStyleAsset(Z_Construct_UClass_UButtonStyleAsset, &UButtonStyleAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UButtonStyleAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonStyleAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
