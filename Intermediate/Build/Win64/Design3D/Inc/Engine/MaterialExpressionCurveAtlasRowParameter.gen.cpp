// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCurveAtlasRowParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
// End Cross Module References
	void UMaterialExpressionCurveAtlasRowParameter::StaticRegisterNativesUMaterialExpressionCurveAtlasRowParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_NoRegister()
	{
		return UMaterialExpressionCurveAtlasRowParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Atlas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionScalarParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object MaterialExpressionScalarParameter Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCurveAtlasRowParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime = { "InputTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCurveAtlasRowParameter, InputTime), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas_MetaData[] = {
		{ "Category", "MaterialExpressionCurveAtlasRowParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCurveAtlasRowParameter, Atlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "MaterialExpressionCurveAtlasRowParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionCurveAtlasRowParameter, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCurveAtlasRowParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::ClassParams = {
		&UMaterialExpressionCurveAtlasRowParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionCurveAtlasRowParameter, 1919220200);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCurveAtlasRowParameter>()
	{
		return UMaterialExpressionCurveAtlasRowParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionCurveAtlasRowParameter(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter, &UMaterialExpressionCurveAtlasRowParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionCurveAtlasRowParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCurveAtlasRowParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
