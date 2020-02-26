// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionMaterialLayerOutput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialLayerOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionMaterialLayerOutput::StaticRegisterNativesUMaterialExpressionMaterialLayerOutput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_NoRegister()
	{
		return UMaterialExpressionMaterialLayerOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionFunctionOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMaterialLayerOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialLayerOutput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialLayerOutput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::ClassParams = {
		&UMaterialExpressionMaterialLayerOutput::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionMaterialLayerOutput, 3444652730);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMaterialLayerOutput>()
	{
		return UMaterialExpressionMaterialLayerOutput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionMaterialLayerOutput(Z_Construct_UClass_UMaterialExpressionMaterialLayerOutput, &UMaterialExpressionMaterialLayerOutput::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionMaterialLayerOutput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialLayerOutput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
