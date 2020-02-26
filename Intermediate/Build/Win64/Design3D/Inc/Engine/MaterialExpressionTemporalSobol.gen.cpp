// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionTemporalSobol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTemporalSobol() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTemporalSobol_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTemporalSobol();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionTemporalSobol::StaticRegisterNativesUMaterialExpressionTemporalSobol()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTemporalSobol_NoRegister()
	{
		return UMaterialExpressionTemporalSobol::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ConstIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionTemporalSobol.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed_MetaData[] = {
		{ "Category", "MaterialExpressionSobol" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
		{ "OverridingInputProperty", "Seed" },
		{ "Tooltip", "2D Seed for sequence randomization. Only used if Seed is not connected." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed = { "ConstSeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTemporalSobol, ConstSeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex_MetaData[] = {
		{ "Category", "MaterialExpressionSobol" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
		{ "OverridingInputProperty", "Index" },
		{ "Tooltip", "Sobol point number. Only used if Index is not connected." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex = { "ConstIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTemporalSobol, ConstIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
		{ "RequiredInput", "false" },
		{ "Tooltip", "2D Seed for sequence randomization (0,0)-(1,1). Use Const Seed if not connected." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTemporalSobol, Seed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTemporalSobol.h" },
		{ "RequiredInput", "false" },
		{ "Tooltip", "Sobol point number. Use Const Index if not connected." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionTemporalSobol, Index), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_ConstIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::NewProp_Index,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTemporalSobol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::ClassParams = {
		&UMaterialExpressionTemporalSobol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTemporalSobol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionTemporalSobol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTemporalSobol, 1607656667);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTemporalSobol>()
	{
		return UMaterialExpressionTemporalSobol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTemporalSobol(Z_Construct_UClass_UMaterialExpressionTemporalSobol, &UMaterialExpressionTemporalSobol::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTemporalSobol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTemporalSobol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
