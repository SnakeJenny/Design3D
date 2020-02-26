// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PlayerStartPIE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStartPIE() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerStartPIE_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStartPIE();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APlayerStartPIE::StaticRegisterNativesAPlayerStartPIE()
	{
	}
	UClass* Z_Construct_UClass_APlayerStartPIE_NoRegister()
	{
		return APlayerStartPIE::StaticClass();
	}
	struct Z_Construct_UClass_APlayerStartPIE_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerStartPIE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStartPIE_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "Engine/PlayerStartPIE.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlayerStartPIE.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerStartPIE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerStartPIE>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerStartPIE_Statics::ClassParams = {
		&APlayerStartPIE::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlayerStartPIE_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerStartPIE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerStartPIE()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerStartPIE_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerStartPIE, 1945596763);
	template<> ENGINE_API UClass* StaticClass<APlayerStartPIE>()
	{
		return APlayerStartPIE::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerStartPIE(Z_Construct_UClass_APlayerStartPIE, &APlayerStartPIE::StaticClass, TEXT("/Script/Engine"), TEXT("APlayerStartPIE"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStartPIE);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
