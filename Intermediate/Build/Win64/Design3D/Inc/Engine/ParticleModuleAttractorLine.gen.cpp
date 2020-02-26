// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Attractor/ParticleModuleAttractorLine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorLine() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorLine_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorLine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleAttractorLine::StaticRegisterNativesUParticleModuleAttractorLine()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorLine_NoRegister()
	{
		return UParticleModuleAttractorLine::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAttractorLine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPoint1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndPoint0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAttractorLine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Line Attractor" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Attractor" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ToolTip", "The strength of the line attractor." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleAttractorLine, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Attractor" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ToolTip", "The range of the line attractor." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleAttractorLine, Range), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1_MetaData[] = {
		{ "Category", "Attractor" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ToolTip", "The second endpoint of the line." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1 = { "EndPoint1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleAttractorLine, EndPoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0_MetaData[] = {
		{ "Category", "Attractor" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorLine.h" },
		{ "ToolTip", "The first endpoint of the line." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0 = { "EndPoint0", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleAttractorLine, EndPoint0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAttractorLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorLine_Statics::NewProp_EndPoint0,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAttractorLine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorLine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorLine_Statics::ClassParams = {
		&UParticleModuleAttractorLine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAttractorLine_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorLine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAttractorLine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleAttractorLine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleAttractorLine, 2776319097);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAttractorLine>()
	{
		return UParticleModuleAttractorLine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAttractorLine(Z_Construct_UClass_UParticleModuleAttractorLine, &UParticleModuleAttractorLine::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAttractorLine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorLine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
