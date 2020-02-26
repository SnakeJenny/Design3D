// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/GeneratedMeshAreaLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedMeshAreaLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGeneratedMeshAreaLight();
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AGeneratedMeshAreaLight::StaticRegisterNativesAGeneratedMeshAreaLight()
	{
	}
	UClass* Z_Construct_UClass_AGeneratedMeshAreaLight_NoRegister()
	{
		return AGeneratedMeshAreaLight::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratedMeshAreaLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpotLight,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Collision Replication" },
		{ "IncludePath", "Engine/GeneratedMeshAreaLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/GeneratedMeshAreaLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Implements a light that is created after a lighting build with Lightmass and handles mesh area light influence on dynamic objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratedMeshAreaLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::ClassParams = {
		&AGeneratedMeshAreaLight::StaticClass,
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
		0x008802A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratedMeshAreaLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneratedMeshAreaLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneratedMeshAreaLight, 2612252444);
	template<> ENGINE_API UClass* StaticClass<AGeneratedMeshAreaLight>()
	{
		return AGeneratedMeshAreaLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneratedMeshAreaLight(Z_Construct_UClass_AGeneratedMeshAreaLight, &AGeneratedMeshAreaLight::StaticClass, TEXT("/Script/Engine"), TEXT("AGeneratedMeshAreaLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratedMeshAreaLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
