// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactoryPointLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryPointLight() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPointLight_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPointLight();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryPointLight::StaticRegisterNativesUActorFactoryPointLight()
	{
	}
	UClass* Z_Construct_UClass_UActorFactoryPointLight_NoRegister()
	{
		return UActorFactoryPointLight::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryPointLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryPointLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryPointLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryPointLight.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryPointLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryPointLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryPointLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryPointLight_Statics::ClassParams = {
		&UActorFactoryPointLight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryPointLight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactoryPointLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryPointLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactoryPointLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactoryPointLight, 550648978);
	template<> UNREALED_API UClass* StaticClass<UActorFactoryPointLight>()
	{
		return UActorFactoryPointLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactoryPointLight(Z_Construct_UClass_UActorFactoryPointLight, &UActorFactoryPointLight::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactoryPointLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryPointLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
