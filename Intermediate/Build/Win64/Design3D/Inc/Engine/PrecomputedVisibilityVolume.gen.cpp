// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Lightmass/PrecomputedVisibilityVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrecomputedVisibilityVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APrecomputedVisibilityVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APrecomputedVisibilityVolume::StaticRegisterNativesAPrecomputedVisibilityVolume()
	{
	}
	UClass* Z_Construct_UClass_APrecomputedVisibilityVolume_NoRegister()
	{
		return APrecomputedVisibilityVolume::StaticClass();
	}
	struct Z_Construct_UClass_APrecomputedVisibilityVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrecomputedVisibilityVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrecomputedVisibilityVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Lightmass/PrecomputedVisibilityVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/PrecomputedVisibilityVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrecomputedVisibilityVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrecomputedVisibilityVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrecomputedVisibilityVolume_Statics::ClassParams = {
		&APrecomputedVisibilityVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APrecomputedVisibilityVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APrecomputedVisibilityVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrecomputedVisibilityVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrecomputedVisibilityVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrecomputedVisibilityVolume, 2571668621);
	template<> ENGINE_API UClass* StaticClass<APrecomputedVisibilityVolume>()
	{
		return APrecomputedVisibilityVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrecomputedVisibilityVolume(Z_Construct_UClass_APrecomputedVisibilityVolume, &APrecomputedVisibilityVolume::StaticClass, TEXT("/Script/Engine"), TEXT("APrecomputedVisibilityVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrecomputedVisibilityVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
