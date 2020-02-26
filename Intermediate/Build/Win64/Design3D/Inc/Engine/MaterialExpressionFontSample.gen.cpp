// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionFontSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFontSample() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSample_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void UMaterialExpressionFontSample::StaticRegisterNativesUMaterialExpressionFontSample()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFontSample_NoRegister()
	{
		return UMaterialExpressionFontSample::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionFontSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontTexturePage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontTexturePage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionFontSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFontSample_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFontSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSample.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage_MetaData[] = {
		{ "Category", "MaterialExpressionFontSample" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSample.h" },
		{ "ToolTip", "allow access to the various font pages" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage = { "FontTexturePage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFontSample, FontTexturePage), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "MaterialExpressionFontSample" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSample.h" },
		{ "ToolTip", "font resource that will be sampled" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFontSample, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFontSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionFontSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFontSample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFontSample_Statics::ClassParams = {
		&UMaterialExpressionFontSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionFontSample_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionFontSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionFontSample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionFontSample, 1447500263);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFontSample>()
	{
		return UMaterialExpressionFontSample::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFontSample(Z_Construct_UClass_UMaterialExpressionFontSample, &UMaterialExpressionFontSample::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFontSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFontSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
