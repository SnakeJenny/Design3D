// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/RectLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRectLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ARectLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARectLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_URectLightComponent_NoRegister();
// End Cross Module References
	void ARectLight::StaticRegisterNativesARectLight()
	{
	}
	UClass* Z_Construct_UClass_ARectLight_NoRegister()
	{
		return ARectLight::StaticClass();
	}
	struct Z_Construct_UClass_ARectLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RectLightComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARectLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARectLight_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights RectLights" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/RectLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/RectLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "RectLight,Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/RectLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent = { "RectLightComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARectLight, RectLightComponent), Z_Construct_UClass_URectLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARectLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARectLight_Statics::NewProp_RectLightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARectLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARectLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARectLight_Statics::ClassParams = {
		&ARectLight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARectLight_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ARectLight_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARectLight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARectLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARectLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARectLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARectLight, 2165834043);
	template<> ENGINE_API UClass* StaticClass<ARectLight>()
	{
		return ARectLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARectLight(Z_Construct_UClass_ARectLight, &ARectLight::StaticClass, TEXT("/Script/Engine"), TEXT("ARectLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARectLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
