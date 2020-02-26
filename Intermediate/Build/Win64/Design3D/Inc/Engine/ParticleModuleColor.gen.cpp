// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Color/ParticleModuleColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleColor::StaticRegisterNativesUParticleModuleColor()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleColor_NoRegister()
	{
		return UParticleModuleColor::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampAlpha_MetaData[];
#endif
		static void NewProp_bClampAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Initial Color" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColor.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
		{ "ToolTip", "If true, the alpha value will be clamped to the [0..1] range." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_SetBit(void* Obj)
	{
		((UParticleModuleColor*)Obj)->bClampAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha = { "bClampAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleColor), &Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
		{ "ToolTip", "Initial alpha for a particle as a function of Emitter time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha = { "StartAlpha", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleColor, StartAlpha), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColor.h" },
		{ "ToolTip", "Initial color for a particle as a function of Emitter time." },
		{ "TreatAsColor", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor = { "StartColor", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleColor, StartColor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_bClampAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColor_Statics::NewProp_StartColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColor_Statics::ClassParams = {
		&UParticleModuleColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleColor, 2105139546);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleColor>()
	{
		return UParticleModuleColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleColor(Z_Construct_UClass_UParticleModuleColor, &UParticleModuleColor::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
