// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Orientation/ParticleModuleOrientationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrientationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleOrientationBase::StaticRegisterNativesUParticleModuleOrientationBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleOrientationBase_NoRegister()
	{
		return UParticleModuleOrientationBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleOrientationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleOrientationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrientationBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Orientation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Orientation/ParticleModuleOrientationBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Orientation/ParticleModuleOrientationBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleOrientationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleOrientationBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleOrientationBase_Statics::ClassParams = {
		&UParticleModuleOrientationBase::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrientationBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrientationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleOrientationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleOrientationBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleOrientationBase, 842951068);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleOrientationBase>()
	{
		return UParticleModuleOrientationBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleOrientationBase(Z_Construct_UClass_UParticleModuleOrientationBase, &UParticleModuleOrientationBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleOrientationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrientationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
