// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionEyeAdaptation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionEyeAdaptation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionEyeAdaptation::StaticRegisterNativesUMaterialExpressionEyeAdaptation()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation_NoRegister()
	{
		return UMaterialExpressionEyeAdaptation::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionEyeAdaptation.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionEyeAdaptation.h" },
		{ "ToolTip", "Provides access to the EyeAdaptation render target." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionEyeAdaptation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::ClassParams = {
		&UMaterialExpressionEyeAdaptation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionEyeAdaptation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionEyeAdaptation, 1472297971);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionEyeAdaptation>()
	{
		return UMaterialExpressionEyeAdaptation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionEyeAdaptation(Z_Construct_UClass_UMaterialExpressionEyeAdaptation, &UMaterialExpressionEyeAdaptation::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionEyeAdaptation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionEyeAdaptation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
