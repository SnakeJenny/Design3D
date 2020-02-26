// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Color/ParticleModuleColorScaleOverLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColorScaleOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleColorScaleOverLife::StaticRegisterNativesUParticleModuleColorScaleOverLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife_NoRegister()
	{
		return UParticleModuleColorScaleOverLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmitterTime_MetaData[];
#endif
		static void NewProp_bEmitterTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmitterTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleOverLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorScaleOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorScaleOverLife;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Scale Color / Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ToolTip", "Whether it is EmitterTime or ParticleTime related." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_SetBit(void* Obj)
	{
		((UParticleModuleColorScaleOverLife*)Obj)->bEmitterTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime = { "bEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleColorScaleOverLife), &Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ToolTip", "The scale factor for the alpha." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife = { "AlphaScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleColorScaleOverLife, AlphaScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorScaleOverLife.h" },
		{ "ToolTip", "The scale factor for the color." },
		{ "TreatAsColor", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife = { "ColorScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleColorScaleOverLife, ColorScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_bEmitterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_AlphaScaleOverLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::NewProp_ColorScaleOverLife,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColorScaleOverLife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::ClassParams = {
		&UParticleModuleColorScaleOverLife::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleColorScaleOverLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleColorScaleOverLife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleColorScaleOverLife, 649348946);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleColorScaleOverLife>()
	{
		return UParticleModuleColorScaleOverLife::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleColorScaleOverLife(Z_Construct_UClass_UParticleModuleColorScaleOverLife, &UParticleModuleColorScaleOverLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleColorScaleOverLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColorScaleOverLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
