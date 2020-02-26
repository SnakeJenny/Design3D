// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionFresnel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFresnel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFresnel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionFresnel::StaticRegisterNativesUMaterialExpressionFresnel()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister()
	{
		return UMaterialExpressionFresnel::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionFresnel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseReflectFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseReflectFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseReflectFractionIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseReflectFractionIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Exponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExponentIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExponentIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionFresnel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFresnel.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Pixel World Normal if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction_MetaData[] = {
		{ "Category", "MaterialExpressionFresnel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "OverridingInputProperty", "BaseReflectFractionIn" },
		{ "ToolTip", "Specifies the fraction of specular reflection when the surfaces is viewed from straight on.\nA value of 1 effectively disables Fresnel." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction = { "BaseReflectFraction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, BaseReflectFraction), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'BaseReflectFraction' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn = { "BaseReflectFractionIn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, BaseReflectFractionIn), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent_MetaData[] = {
		{ "Category", "MaterialExpressionFresnel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "OverridingInputProperty", "ExponentIn" },
		{ "ToolTip", "The exponent to pass into the pow() function" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, Exponent), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'Exponent' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn = { "ExponentIn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionFresnel, ExponentIn), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionFresnel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFresnel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::ClassParams = {
		&UMaterialExpressionFresnel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionFresnel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionFresnel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionFresnel, 2027300391);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFresnel>()
	{
		return UMaterialExpressionFresnel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFresnel(Z_Construct_UClass_UMaterialExpressionFresnel, &UMaterialExpressionFresnel::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFresnel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFresnel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
