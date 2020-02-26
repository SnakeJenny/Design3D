// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionShadowReplace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionShadowReplace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadowReplace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShadowReplace();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionShadowReplace::StaticRegisterNativesUMaterialExpressionShadowReplace()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionShadowReplace_NoRegister()
	{
		return UMaterialExpressionShadowReplace::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shadow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ShadowPassSwitch" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionShadowReplace.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadowReplace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadowReplace.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into ShadowMap" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow = { "Shadow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionShadowReplace, Shadow), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShadowReplace.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used when rendering into non-ShadowMap passes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionShadowReplace, Default), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Shadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::NewProp_Default,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionShadowReplace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::ClassParams = {
		&UMaterialExpressionShadowReplace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionShadowReplace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionShadowReplace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionShadowReplace, 2555929602);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionShadowReplace>()
	{
		return UMaterialExpressionShadowReplace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionShadowReplace(Z_Construct_UClass_UMaterialExpressionShadowReplace, &UMaterialExpressionShadowReplace::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionShadowReplace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionShadowReplace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
