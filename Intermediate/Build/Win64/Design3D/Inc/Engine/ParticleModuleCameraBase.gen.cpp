// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Camera/ParticleModuleCameraBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCameraBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleCameraBase::StaticRegisterNativesUParticleModuleCameraBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleCameraBase_NoRegister()
	{
		return UParticleModuleCameraBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCameraBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCameraBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Camera" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Camera/ParticleModuleCameraBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCameraBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCameraBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCameraBase_Statics::ClassParams = {
		&UParticleModuleCameraBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCameraBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleCameraBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleCameraBase, 4160626065);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleCameraBase>()
	{
		return UParticleModuleCameraBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleCameraBase(Z_Construct_UClass_UParticleModuleCameraBase, &UParticleModuleCameraBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleCameraBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCameraBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
