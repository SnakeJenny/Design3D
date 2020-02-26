// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactorySkyLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactorySkyLight() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkyLight_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySkyLight();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactorySkyLight::StaticRegisterNativesUActorFactorySkyLight()
	{
	}
	UClass* Z_Construct_UClass_UActorFactorySkyLight_NoRegister()
	{
		return UActorFactorySkyLight::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactorySkyLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactorySkyLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactorySkyLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactorySkyLight.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactorySkyLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactorySkyLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactorySkyLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactorySkyLight_Statics::ClassParams = {
		&UActorFactorySkyLight::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactorySkyLight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactorySkyLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactorySkyLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactorySkyLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactorySkyLight, 3694626753);
	template<> UNREALED_API UClass* StaticClass<UActorFactorySkyLight>()
	{
		return UActorFactorySkyLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactorySkyLight(Z_Construct_UClass_UActorFactorySkyLight, &UActorFactorySkyLight::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactorySkyLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactorySkyLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
