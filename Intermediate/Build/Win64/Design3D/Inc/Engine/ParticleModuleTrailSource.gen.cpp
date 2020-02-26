// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Trail/ParticleModuleTrailSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTrailSource() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrail2SourceMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailSource_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailSource();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	static UEnum* ETrail2SourceMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrail2SourceMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ETrail2SourceMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETrail2SourceMethod>()
	{
		return ETrail2SourceMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrail2SourceMethod(ETrail2SourceMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ETrail2SourceMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETrail2SourceMethod_Hash() { return 2079578731U; }
	UEnum* Z_Construct_UEnum_Engine_ETrail2SourceMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrail2SourceMethod"), 0, Get_Z_Construct_UEnum_Engine_ETrail2SourceMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PET2SRCM_Default", (int64)PET2SRCM_Default },
				{ "PET2SRCM_Particle", (int64)PET2SRCM_Particle },
				{ "PET2SRCM_Actor", (int64)PET2SRCM_Actor },
				{ "PET2SRCM_MAX", (int64)PET2SRCM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
				{ "PET2SRCM_Actor.ToolTip", "Actor          - use the actor as the source.\n    The name of the actor should be set in SourceName." },
				{ "PET2SRCM_Default.ToolTip", "Default        - use the emitter position.\n    This is the fallback for when other modes can't be resolved." },
				{ "PET2SRCM_Particle.ToolTip", "Particle       - use the particles from a given emitter in the system.\n    The name of the emitter should be set in SourceName." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETrail2SourceMethod",
				"ETrail2SourceMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleTrailSource::StaticRegisterNativesUParticleModuleTrailSource()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTrailSource_NoRegister()
	{
		return UParticleModuleTrailSource::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTrailSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritRotation_MetaData[];
#endif
		static void NewProp_bInheritRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceOffsetDefaults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceOffsetDefaults;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceOffsetDefaults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceOffsetCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceOffsetCount;
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
	UObject* (*const Z_Construct_UClass_UParticleModuleTrailSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleTrailBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Source" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Interhit particle rotation - only valid for SourceMethod of PET2SRCM_Particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_SetBit(void* Obj)
	{
		((UParticleModuleTrailSource*)Obj)->bInheritRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation = { "bInheritRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTrailSource), &Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Particle selection method, when using the SourceMethod of Particle." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SelectionMethod), Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Default offsets from the source(s).\nIf there are < SourceOffsetCount slots, the grabbing of values will simply wrap." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults = { "SourceOffsetDefaults", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceOffsetDefaults), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_Inner = { "SourceOffsetDefaults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "SourceOffsetCount\nThe number of source offsets that can be expected to be found on the instance.\nThese must be named\n        TrailSourceOffset#" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount = { "SourceOffsetCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceOffsetCount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "Whether to lock the source to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_SetBit(void* Obj)
	{
		((UParticleModuleTrailSource*)Obj)->bLockSourceStength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength = { "bLockSourceStength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTrailSource), &Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "The strength of the tangent from the source point for each Trail." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength = { "SourceStrength", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "The name of the source - either the emitter or Actor." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailSource.h" },
		{ "ToolTip", "The source method for the trail." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod = { "SourceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTrailSource, SourceMethod), Z_Construct_UEnum_Engine_ETrail2SourceMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bInheritRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SelectionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetDefaults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceOffsetCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_bLockSourceStength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTrailSource_Statics::NewProp_SourceMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTrailSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTrailSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTrailSource_Statics::ClassParams = {
		&UParticleModuleTrailSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailSource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTrailSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleTrailSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleTrailSource, 630506802);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTrailSource>()
	{
		return UParticleModuleTrailSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTrailSource(Z_Construct_UClass_UParticleModuleTrailSource, &UParticleModuleTrailSource::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTrailSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTrailSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
