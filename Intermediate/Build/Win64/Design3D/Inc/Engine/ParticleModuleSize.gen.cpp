// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Size/ParticleModuleSize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSize() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSize_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSize();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleSize::StaticRegisterNativesUParticleModuleSize()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSize_NoRegister()
	{
		return UParticleModuleSize::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSize_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Size" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSize.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSize.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSize_Statics::NewProp_StartSize_MetaData[] = {
		{ "Category", "Size" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSize.h" },
		{ "ToolTip", "The initial size that should be used for a particle.\nThe value is retrieved using the EmitterTime during the spawn of a particle.\nIt is added to the Size and BaseSize fields of the spawning particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSize_Statics::NewProp_StartSize = { "StartSize", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSize, StartSize), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSize_Statics::NewProp_StartSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSize_Statics::NewProp_StartSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSize_Statics::NewProp_StartSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSize>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSize_Statics::ClassParams = {
		&UParticleModuleSize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSize_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSize_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSize_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSize()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSize_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSize, 3287113899);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSize>()
	{
		return UParticleModuleSize::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSize(Z_Construct_UClass_UParticleModuleSize, &UParticleModuleSize::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSize"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSize);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
