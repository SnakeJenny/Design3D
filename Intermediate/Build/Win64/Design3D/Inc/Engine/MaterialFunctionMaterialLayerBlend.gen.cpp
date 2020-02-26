// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialFunctionMaterialLayerBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionMaterialLayerBlend() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
// End Cross Module References
	void UMaterialFunctionMaterialLayerBlend::StaticRegisterNativesUMaterialFunctionMaterialLayerBlend()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister()
	{
		return UMaterialFunctionMaterialLayerBlend::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ToolTip", "Specialized Material Function that acts as a blend" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerBlend::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionMaterialLayerBlend, 1957586372);
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlend>()
	{
		return UMaterialFunctionMaterialLayerBlend::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionMaterialLayerBlend(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend, &UMaterialFunctionMaterialLayerBlend::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionMaterialLayerBlend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlend);
	void UMaterialFunctionMaterialLayerBlendInstance::StaticRegisterNativesUMaterialFunctionMaterialLayerBlendInstance()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_NoRegister()
	{
		return UMaterialFunctionMaterialLayerBlendInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object object object" },
		{ "IncludePath", "Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionMaterialLayerBlend.h" },
		{ "ToolTip", "Specialized Material Function Instance that instances a blend" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlendInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerBlendInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionMaterialLayerBlendInstance, 2519858314);
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlendInstance>()
	{
		return UMaterialFunctionMaterialLayerBlendInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionMaterialLayerBlendInstance(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstance, &UMaterialFunctionMaterialLayerBlendInstance::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionMaterialLayerBlendInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlendInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
