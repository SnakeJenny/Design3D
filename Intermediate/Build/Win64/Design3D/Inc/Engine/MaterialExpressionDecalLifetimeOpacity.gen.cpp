// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionDecalLifetimeOpacity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalLifetimeOpacity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDecalLifetimeOpacity::StaticRegisterNativesUMaterialExpressionDecalLifetimeOpacity()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_NoRegister()
	{
		return UMaterialExpressionDecalLifetimeOpacity::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDecalLifetimeOpacity.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalLifetimeOpacity.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDecalLifetimeOpacity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::ClassParams = {
		&UMaterialExpressionDecalLifetimeOpacity::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionDecalLifetimeOpacity, 2154819862);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDecalLifetimeOpacity>()
	{
		return UMaterialExpressionDecalLifetimeOpacity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDecalLifetimeOpacity(Z_Construct_UClass_UMaterialExpressionDecalLifetimeOpacity, &UMaterialExpressionDecalLifetimeOpacity::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDecalLifetimeOpacity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalLifetimeOpacity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
