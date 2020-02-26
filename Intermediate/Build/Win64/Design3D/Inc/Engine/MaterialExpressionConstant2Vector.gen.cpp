// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionConstant2Vector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionConstant2Vector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant2Vector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant2Vector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionConstant2Vector::StaticRegisterNativesUMaterialExpressionConstant2Vector()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionConstant2Vector_NoRegister()
	{
		return UMaterialExpressionConstant2Vector::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_R;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionConstant2Vector.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant2Vector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G_MetaData[] = {
		{ "Category", "MaterialExpressionConstant2Vector" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant2Vector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionConstant2Vector, G), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R_MetaData[] = {
		{ "Category", "MaterialExpressionConstant2Vector" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant2Vector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionConstant2Vector, R), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionConstant2Vector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::ClassParams = {
		&UMaterialExpressionConstant2Vector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionConstant2Vector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionConstant2Vector, 4020580812);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionConstant2Vector>()
	{
		return UMaterialExpressionConstant2Vector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionConstant2Vector(Z_Construct_UClass_UMaterialExpressionConstant2Vector, &UMaterialExpressionConstant2Vector::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionConstant2Vector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstant2Vector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
