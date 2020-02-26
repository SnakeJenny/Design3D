// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Location/ParticleModuleLocationWorldOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationWorldOffset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocation();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocationWorldOffset::StaticRegisterNativesUParticleModuleLocationWorldOffset()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset_NoRegister()
	{
		return UParticleModuleLocationWorldOffset::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocation,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "World Offset" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationWorldOffset.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationWorldOffset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationWorldOffset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::ClassParams = {
		&UParticleModuleLocationWorldOffset::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationWorldOffset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationWorldOffset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationWorldOffset, 3673946773);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationWorldOffset>()
	{
		return UParticleModuleLocationWorldOffset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationWorldOffset(Z_Construct_UClass_UParticleModuleLocationWorldOffset, &UParticleModuleLocationWorldOffset::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationWorldOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationWorldOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
