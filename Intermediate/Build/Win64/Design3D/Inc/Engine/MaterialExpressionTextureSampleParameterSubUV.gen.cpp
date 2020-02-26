// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterSubUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameterSubUV::StaticRegisterNativesUMaterialExpressionTextureSampleParameterSubUV()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameterSubUV::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlend_MetaData[];
#endif
		static void NewProp_bBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSampleParameterSubUV" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_SetBit(void* Obj)
	{
		((UMaterialExpressionTextureSampleParameterSubUV*)Obj)->bBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend = { "bBlend", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionTextureSampleParameterSubUV), &Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::NewProp_bBlend,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterSubUV>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::ClassParams = {
		&UMaterialExpressionTextureSampleParameterSubUV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTextureSampleParameterSubUV, 989069595);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSampleParameterSubUV>()
	{
		return UMaterialExpressionTextureSampleParameterSubUV::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureSampleParameterSubUV(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterSubUV, &UMaterialExpressionTextureSampleParameterSubUV::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureSampleParameterSubUV"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterSubUV);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
