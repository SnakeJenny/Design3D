// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISenseConfig_Sight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Sight() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight_NoRegister();
// End Cross Module References
	void UAISenseConfig_Sight::StaticRegisterNativesUAISenseConfig_Sight()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister()
	{
		return UAISenseConfig_Sight::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Sight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoSuccessRangeFromLastSeenLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngleDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngleDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Implementation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Sight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Sight config" },
		{ "IncludePath", "Perception/AISenseConfig_Sight.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation = { "AutoSuccessRangeFromLastSeenLocation", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight, AutoSuccessRangeFromLastSeenLocation), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "DisplayName", "PeripheralVisionHalfAngleDegrees" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.\n    The value represents the angle measured in relation to the forward vector, not the whole range." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees = { "PeripheralVisionAngleDegrees", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight, PeripheralVisionAngleDegrees), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "Maximum sight distance to see target that has been already seen." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight, LoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "Maximum sight distance to notice a target." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight, SightRadius), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISenseConfig_Sight, Implementation), Z_Construct_UClass_UAISense_Sight_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Sight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Sight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Sight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::ClassParams = {
		&UAISenseConfig_Sight::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Sight_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Sight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseConfig_Sight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_Sight, 975129475);
	template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Sight>()
	{
		return UAISenseConfig_Sight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Sight(Z_Construct_UClass_UAISenseConfig_Sight, &UAISenseConfig_Sight::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseConfig_Sight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Sight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
