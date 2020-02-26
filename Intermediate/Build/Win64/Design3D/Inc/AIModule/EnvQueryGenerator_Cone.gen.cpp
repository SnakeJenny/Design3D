// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Cone() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UEnvQueryGenerator_Cone::StaticRegisterNativesUEnvQueryGenerator_Cone()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone_NoRegister()
	{
		return UEnvQueryGenerator_Cone::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeContextLocation_MetaData[];
#endif
		static void NewProp_bIncludeContextLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeContextLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CenterActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngleStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignedPointsDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlignedPointsDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Points: Cone" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Whether to include CenterActors' locations when generating items.\n    Note that this option skips the MinAngledPointsDistance parameter." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Cone*)Obj)->bIncludeContextLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation = { "bIncludeContextLocation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEnvQueryGenerator_Cone), &Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "The actor (or actors) that will generate a cone in their facing direction" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor = { "CenterActor", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, CenterActor), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Generation distance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020088000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, Range), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "The step of the angle increase. Angle step must be >=1\nSmaller values generate less items" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep = { "AngleStep", nullptr, (EPropertyFlags)0x0020088000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, AngleStep), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Maximum degrees of the generated cone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees = { "ConeDegrees", nullptr, (EPropertyFlags)0x0020088000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, ConeDegrees), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Cone.h" },
		{ "ToolTip", "Distance between each point of the same angle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance = { "AlignedPointsDistance", nullptr, (EPropertyFlags)0x0020088000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryGenerator_Cone, AlignedPointsDistance), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_bIncludeContextLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_CenterActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AngleStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_ConeDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::NewProp_AlignedPointsDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Cone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::ClassParams = {
		&UEnvQueryGenerator_Cone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Cone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_Cone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_Cone, 1788379682);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_Cone>()
	{
		return UEnvQueryGenerator_Cone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_Cone(Z_Construct_UClass_UEnvQueryGenerator_Cone, &UEnvQueryGenerator_Cone::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_Cone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Cone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
