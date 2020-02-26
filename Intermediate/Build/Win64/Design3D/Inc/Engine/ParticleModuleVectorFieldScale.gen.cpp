// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
// End Cross Module References
	void UParticleModuleVectorFieldScale::StaticRegisterNativesUParticleModuleVectorFieldScale()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale_NoRegister()
	{
		return UParticleModuleVectorFieldScale::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScaleRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorFieldScaleRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorFieldScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Vector Field Scale" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldScale.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using emitter time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw = { "VectorFieldScaleRaw", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVectorFieldScale, VectorFieldScaleRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h" },
		{ "ToolTip", "Per-particle vector field scale. Evaluated using emitter time." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale = { "VectorFieldScale", nullptr, (EPropertyFlags)0x0010000020080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVectorFieldScale, VectorFieldScale_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScaleRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::NewProp_VectorFieldScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldScale>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::ClassParams = {
		&UParticleModuleVectorFieldScale::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldScale()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVectorFieldScale_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVectorFieldScale, 1570775231);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldScale>()
	{
		return UParticleModuleVectorFieldScale::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldScale(Z_Construct_UClass_UParticleModuleVectorFieldScale, &UParticleModuleVectorFieldScale::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldScale"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldScale);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
