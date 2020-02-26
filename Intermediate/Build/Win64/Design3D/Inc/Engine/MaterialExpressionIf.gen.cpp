// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionIf.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionIf() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIf_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIf();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionIf::StaticRegisterNativesUMaterialExpressionIf()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionIf_NoRegister()
	{
		return UMaterialExpressionIf::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionIf_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstAEqualsB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstAEqualsB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EqualsThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EqualsThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ALessThanB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ALessThanB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEqualsB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AEqualsB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AGreaterThanB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AGreaterThanB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionIf_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionIf.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB = { "ConstAEqualsB", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionIf, ConstAEqualsB_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB_MetaData[] = {
		{ "Category", "MaterialExpressionIf" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
		{ "ToolTip", "only used if B is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB = { "ConstB", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionIf, ConstB), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold_MetaData[] = {
		{ "Category", "MaterialExpressionIf" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold = { "EqualsThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionIf, EqualsThreshold), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB = { "ALessThanB", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionIf, ALessThanB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'A > B' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB = { "AEqualsB", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionIf, AEqualsB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB = { "AGreaterThanB", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionIf, AGreaterThanB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstB' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionIf, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionIf, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionIf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionIf_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionIf>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionIf_Statics::ClassParams = {
		&UMaterialExpressionIf::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionIf_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionIf()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionIf_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionIf, 2158399295);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionIf>()
	{
		return UMaterialExpressionIf::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionIf(Z_Construct_UClass_UMaterialExpressionIf, &UMaterialExpressionIf::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionIf"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionIf);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
