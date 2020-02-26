// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSphericalParticleOpacity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSphericalParticleOpacity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionSphericalParticleOpacity::StaticRegisterNativesUMaterialExpressionSphericalParticleOpacity()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_NoRegister()
	{
		return UMaterialExpressionSphericalParticleOpacity::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstantDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstantDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Density;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSphericalParticleOpacity.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity_MetaData[] = {
		{ "Category", "MaterialExpressionSphericalParticleOpacity" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
		{ "OverridingInputProperty", "Density" },
		{ "ToolTip", "Constant density of the particle sphere.  Will be overridden if Density is connected." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity = { "ConstantDensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSphericalParticleOpacity, ConstantDensity), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphericalParticleOpacity.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstantDensity' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSphericalParticleOpacity, Density), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_ConstantDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::NewProp_Density,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSphericalParticleOpacity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::ClassParams = {
		&UMaterialExpressionSphericalParticleOpacity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSphericalParticleOpacity, 977498091);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSphericalParticleOpacity>()
	{
		return UMaterialExpressionSphericalParticleOpacity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSphericalParticleOpacity(Z_Construct_UClass_UMaterialExpressionSphericalParticleOpacity, &UMaterialExpressionSphericalParticleOpacity::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSphericalParticleOpacity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSphericalParticleOpacity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
