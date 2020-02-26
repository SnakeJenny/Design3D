// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactorySpotLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactorySpotLight() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySpotLight_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySpotLight();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactorySpotLight::StaticRegisterNativesUActorFactorySpotLight()
	{
	}
	UClass* Z_Construct_UClass_UActorFactorySpotLight_NoRegister()
	{
		return UActorFactorySpotLight::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactorySpotLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactorySpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactorySpotLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactorySpotLight.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactorySpotLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactorySpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactorySpotLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactorySpotLight_Statics::ClassParams = {
		&UActorFactorySpotLight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactorySpotLight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactorySpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactorySpotLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactorySpotLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactorySpotLight, 3817684896);
	template<> UNREALED_API UClass* StaticClass<UActorFactorySpotLight>()
	{
		return UActorFactorySpotLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactorySpotLight(Z_Construct_UClass_UActorFactorySpotLight, &UActorFactorySpotLight::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactorySpotLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactorySpotLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
