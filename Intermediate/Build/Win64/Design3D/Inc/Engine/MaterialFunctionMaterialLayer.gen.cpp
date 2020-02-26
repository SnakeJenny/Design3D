// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialFunctionMaterialLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionMaterialLayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
// End Cross Module References
	void UMaterialFunctionMaterialLayer::StaticRegisterNativesUMaterialFunctionMaterialLayer()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister()
	{
		return UMaterialFunctionMaterialLayer::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayer.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayer.h" },
		{ "ToolTip", "Specialized Material Function that acts as a layer" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayer::StaticClass,
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
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionMaterialLayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionMaterialLayer, 14014047);
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayer>()
	{
		return UMaterialFunctionMaterialLayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionMaterialLayer(Z_Construct_UClass_UMaterialFunctionMaterialLayer, &UMaterialFunctionMaterialLayer::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionMaterialLayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayer);
	void UMaterialFunctionMaterialLayerInstance::StaticRegisterNativesUMaterialFunctionMaterialLayerInstance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_NoRegister()
	{
		return UMaterialFunctionMaterialLayerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayer.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayer.h" },
		{ "ToolTip", "Specialized Material Function Instance that instances a layer" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerInstance::StaticClass,
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
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionMaterialLayerInstance, 3451007919);
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayerInstance>()
	{
		return UMaterialFunctionMaterialLayerInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionMaterialLayerInstance(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance, &UMaterialFunctionMaterialLayerInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionMaterialLayerInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
