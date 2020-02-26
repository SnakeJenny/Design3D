// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Beam/ParticleModuleBeamSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamSource() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamSource();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetMethod();
// End Cross Module References
	void UParticleModuleBeamSource::StaticRegisterNativesUParticleModuleBeamSource()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamSource_NoRegister()
	{
		return UParticleModuleBeamSource::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleBeamSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockSourceStength_MetaData[];
#endif
		static void NewProp_bLockSourceStength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockSourceStength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockSourceTangent_MetaData[];
#endif
		static void NewProp_bLockSourceTangent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockSourceTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTangentMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceTangentMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockSource_MetaData[];
#endif
		static void NewProp_bLockSource_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSourceAbsolute_MetaData[];
#endif
		static void NewProp_bSourceAbsolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSourceAbsolute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleBeamSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Source" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Whether to lock the source to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength_SetBit(void* Obj)
	{
		((UParticleModuleBeamSource*)Obj)->bLockSourceStength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength = { "bLockSourceStength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleBeamSource), &Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceStrength_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The strength of the tangent from the source point for each beam." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceStrength = { "SourceStrength", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Whether to lock the source to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent_SetBit(void* Obj)
	{
		((UParticleModuleBeamSource*)Obj)->bLockSourceTangent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent = { "bLockSourceTangent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleBeamSource), &Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangent_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The tangent for the source point for each beam." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangent = { "SourceTangent", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceTangent), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangentMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The method to use for the source tangent." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangentMethod = { "SourceTangentMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceTangentMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangentMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangentMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Whether to lock the source to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource_SetBit(void* Obj)
	{
		((UParticleModuleBeamSource*)Obj)->bLockSource = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource = { "bLockSource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleBeamSource), &Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Default source-point to use." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamSource, Source), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "Whether to treat the as an absolute position in world space." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute_SetBit(void* Obj)
	{
		((UParticleModuleBeamSource*)Obj)->bSourceAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute = { "bSourceAbsolute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleBeamSource), &Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The strength of the tangent from the source point for each beam." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamSource.h" },
		{ "ToolTip", "The method flag." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceMethod = { "SourceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleBeamSource, SourceMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleBeamSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceStength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSourceTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceTangentMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bLockSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_bSourceAbsolute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamSource_Statics::NewProp_SourceMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleBeamSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamSource_Statics::ClassParams = {
		&UParticleModuleBeamSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleBeamSource_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamSource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleBeamSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleBeamSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleBeamSource, 1090821827);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleBeamSource>()
	{
		return UParticleModuleBeamSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleBeamSource(Z_Construct_UClass_UParticleModuleBeamSource, &UParticleModuleBeamSource::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleBeamSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
