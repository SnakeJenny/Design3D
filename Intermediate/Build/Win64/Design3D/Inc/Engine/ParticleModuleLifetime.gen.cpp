// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Lifetime/ParticleModuleLifetime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLifetime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetime_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetime();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLifetimeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	void UParticleModuleLifetime::StaticRegisterNativesUParticleModuleLifetime()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLifetime_NoRegister()
	{
		return UParticleModuleLifetime::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLifetime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lifetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLifetime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLifetimeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLifetime_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Lifetime" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Lifetime/ParticleModuleLifetime.h" },
		{ "ModuleRelativePath", "Classes/Particles/Lifetime/ParticleModuleLifetime.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLifetime_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "Lifetime" },
		{ "ModuleRelativePath", "Classes/Particles/Lifetime/ParticleModuleLifetime.h" },
		{ "ToolTip", "The lifetime of the particle, in seconds. Retrieved using the EmitterTime at the spawn of the particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLifetime_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLifetime, Lifetime), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLifetime_Statics::NewProp_Lifetime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLifetime_Statics::NewProp_Lifetime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLifetime_Statics::NewProp_Lifetime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLifetime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLifetime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLifetime_Statics::ClassParams = {
		&UParticleModuleLifetime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLifetime_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLifetime_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLifetime_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLifetime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLifetime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLifetime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLifetime, 1005244911);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLifetime>()
	{
		return UParticleModuleLifetime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLifetime(Z_Construct_UClass_UParticleModuleLifetime, &UParticleModuleLifetime::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLifetime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLifetime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
