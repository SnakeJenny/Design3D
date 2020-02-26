// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSizeScaleBySpeed() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSizeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UParticleModuleSizeScaleBySpeed::StaticRegisterNativesUParticleModuleSizeScaleBySpeed()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_NoRegister()
	{
		return UParticleModuleSizeScaleBySpeed::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeedScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSizeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Size By Speed" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale_MetaData[] = {
		{ "Category", "ParticleModuleSizeScaleBySpeed" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
		{ "ToolTip", "The maximum amount by which to scale a particle in each dimension." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSizeScaleBySpeed, MaxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale_MetaData[] = {
		{ "Category", "ParticleModuleSizeScaleBySpeed" },
		{ "ModuleRelativePath", "Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h" },
		{ "ToolTip", "By how much speed affects the size of the particle in each dimension." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale = { "SpeedScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSizeScaleBySpeed, SpeedScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_MaxScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::NewProp_SpeedScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSizeScaleBySpeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::ClassParams = {
		&UParticleModuleSizeScaleBySpeed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSizeScaleBySpeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSizeScaleBySpeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSizeScaleBySpeed, 3061276900);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSizeScaleBySpeed>()
	{
		return UParticleModuleSizeScaleBySpeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSizeScaleBySpeed(Z_Construct_UClass_UParticleModuleSizeScaleBySpeed, &UParticleModuleSizeScaleBySpeed::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSizeScaleBySpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSizeScaleBySpeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
