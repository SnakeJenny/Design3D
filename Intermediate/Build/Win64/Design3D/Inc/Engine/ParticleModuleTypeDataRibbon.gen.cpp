// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataRibbon() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrailsRenderAxisOption();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
// End Cross Module References
	static UEnum* ETrailsRenderAxisOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrailsRenderAxisOption, Z_Construct_UPackage__Script_Engine(), TEXT("ETrailsRenderAxisOption"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETrailsRenderAxisOption>()
	{
		return ETrailsRenderAxisOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrailsRenderAxisOption(ETrailsRenderAxisOption_StaticEnum, TEXT("/Script/Engine"), TEXT("ETrailsRenderAxisOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_Hash() { return 3807667279U; }
	UEnum* Z_Construct_UEnum_Engine_ETrailsRenderAxisOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrailsRenderAxisOption"), 0, Get_Z_Construct_UEnum_Engine_ETrailsRenderAxisOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Trails_CameraUp", (int64)Trails_CameraUp },
				{ "Trails_SourceUp", (int64)Trails_SourceUp },
				{ "Trails_WorldUp", (int64)Trails_WorldUp },
				{ "Trails_MAX", (int64)Trails_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
				{ "Trails_CameraUp.DisplayName", "Camera Up" },
				{ "Trails_SourceUp.DisplayName", "Source Up" },
				{ "Trails_WorldUp.DisplayName", "World Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETrailsRenderAxisOption",
				"ETrailsRenderAxisOption",
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
	void UParticleModuleTypeDataRibbon::StaticRegisterNativesUParticleModuleTypeDataRibbon()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister()
	{
		return UParticleModuleTypeDataRibbon::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentTessellationScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TangentTessellationScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTangentDiffInterpScale_MetaData[];
#endif
		static void NewProp_bEnableTangentDiffInterpScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTangentDiffInterpScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceTessellationStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceTessellationStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TilingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderTessellation_MetaData[];
#endif
		static void NewProp_bRenderTessellation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderTessellation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderTangents_MetaData[];
#endif
		static void NewProp_bRenderTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderSpawnPoints_MetaData[];
#endif
		static void NewProp_bRenderSpawnPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderSpawnPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderGeometry_MetaData[];
#endif
		static void NewProp_bRenderGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentSpawningScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TangentSpawningScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnInitialParticle_MetaData[];
#endif
		static void NewProp_bSpawnInitialParticle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnInitialParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTangentRecalculationEveryFrame_MetaData[];
#endif
		static void NewProp_bTangentRecalculationEveryFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTangentRecalculationEveryFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePreviousTangentRecalculation_MetaData[];
#endif
		static void NewProp_bEnablePreviousTangentRecalculation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePreviousTangentRecalculation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClipSourceSegement_MetaData[];
#endif
		static void NewProp_bClipSourceSegement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClipSourceSegement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeadTrailsOnSourceLoss_MetaData[];
#endif
		static void NewProp_bDeadTrailsOnSourceLoss_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeadTrailsOnSourceLoss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeadTrailsOnDeactivate_MetaData[];
#endif
		static void NewProp_bDeadTrailsOnDeactivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeadTrailsOnDeactivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParticleInTrailCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParticleInTrailCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTrailCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTrailCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SheetsPerTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SheetsPerTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTessellationBetweenParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTessellationBetweenParticles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ribbon Data" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentTessellationScalar_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The tangent scalar for tessellation.\nAngles between tangent A and B are mapped to [0.0f .. 1.0f]\nThis is then multiplied by TangentTessellationScalar to give the number of points to tessellate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentTessellationScalar = { "TangentTessellationScalar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, TangentTessellationScalar), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentTessellationScalar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentTessellationScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If this flag is enabled, the system will scale the number of interpolated vertices\nbased on the difference in the tangents of neighboring particles.\nEach pair of neighboring particles will compute the following CheckTangent value:\n        CheckTangent = ((ParticleA Tangent DOT ParticleB Tangent) - 1.0f) * 0.5f\nIf CheckTangent is LESS THAN 0.5, then the DistanceTessellationStepSize will be\nscaled based on the result. This will map so that from parallel to orthogonal\n(0..90 degrees) will scale from [0..1]. Anything greater than 90 degrees will clamp\nat a scale of 1." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bEnableTangentDiffInterpScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale = { "bEnableTangentDiffInterpScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_DistanceTessellationStepSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The distance step size for tessellation.\n# Tessellation Points = TruncToInt((Distance Between Spawned Particles) / DistanceTessellationStepSize))" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_DistanceTessellationStepSize = { "DistanceTessellationStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, DistanceTessellationStepSize), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_DistanceTessellationStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_DistanceTessellationStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TilingDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The (estimated) covered distance to tile the 2nd UV set at.\nIf 0.0, a second UV set will not be passed in." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TilingDistance = { "TilingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, TilingDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TilingDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TilingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, render the tessellated path between spawned particles" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bRenderTessellation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation = { "bRenderTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, render a line showing the tangent at each spawned particle point along the trail" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bRenderTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents = { "bRenderTangents", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, render stars at each spawned particle point along the trail" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bRenderSpawnPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints = { "bRenderSpawnPoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, render the trail geometry (this should typically be on)" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bRenderGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry = { "bRenderGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentSpawningScalar_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The tangent scalar for spawning.\nAngles between tangent A and B are mapped to [0.0f .. 1.0f]\nThis is then multiplied by TangentTessellationScalar to give the number of particles to spawn" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentSpawningScalar = { "TangentSpawningScalar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, TangentSpawningScalar), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentSpawningScalar_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentSpawningScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_RenderAxis_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The 'render' axis for the trail (what axis the trail is stretched out on)\n        Trails_CameraUp - Traditional camera-facing trail.\n        Trails_SourceUp - Use the up axis of the source for each spawned particle.\n        Trails_WorldUp  - Use the world up axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_RenderAxis = { "RenderAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, RenderAxis), Z_Construct_UEnum_Engine_ETrailsRenderAxisOption, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_RenderAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_RenderAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, ribbon will spawn a particle when it first starts moving" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bSpawnInitialParticle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle = { "bSpawnInitialParticle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, recalculate tangents every frame to allow velocity/acceleration to be applied" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bTangentRecalculationEveryFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame = { "bTangentRecalculationEveryFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, recalculate the previous tangent when a new particle is spawned" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bEnablePreviousTangentRecalculation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation = { "bEnablePreviousTangentRecalculation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, do not join the trail to the source position" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bClipSourceSegement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement = { "bClipSourceSegement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, when the source of a trail is 'lost' (ie, the source particle\ndies), mark the current trail as dead." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bDeadTrailsOnSourceLoss = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss = { "bDeadTrailsOnSourceLoss", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "If true, when the system is deactivated, mark trails as dead.\nThis means they will still render, but will not have more particles\nadded to them, even if the system re-activates..." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataRibbon*)Obj)->bDeadTrailsOnDeactivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate = { "bDeadTrailsOnDeactivate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataRibbon), &Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxParticleInTrailCount_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "Max particles per trail" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxParticleInTrailCount = { "MaxParticleInTrailCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, MaxParticleInTrailCount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxParticleInTrailCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxParticleInTrailCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTrailCount_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The number of live trails" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTrailCount = { "MaxTrailCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, MaxTrailCount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTrailCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTrailCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_SheetsPerTrail_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The number of sheets to render for the trail." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_SheetsPerTrail = { "SheetsPerTrail", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, SheetsPerTrail), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_SheetsPerTrail_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_SheetsPerTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTessellationBetweenParticles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h" },
		{ "ToolTip", "The maximum amount to tessellate between two particles of the trail.\nDepending on the distance between the particles and the tangent change, the\nsystem will select a number of tessellation points\n        [0..MaxTessellationBetweenParticles]" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTessellationBetweenParticles = { "MaxTessellationBetweenParticles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataRibbon, MaxTessellationBetweenParticles), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTessellationBetweenParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTessellationBetweenParticles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentTessellationScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnableTangentDiffInterpScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_DistanceTessellationStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TilingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTessellation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bRenderGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_TangentSpawningScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_RenderAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bSpawnInitialParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bTangentRecalculationEveryFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bEnablePreviousTangentRecalculation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bClipSourceSegement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnSourceLoss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_bDeadTrailsOnDeactivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxParticleInTrailCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTrailCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_SheetsPerTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::NewProp_MaxTessellationBetweenParticles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataRibbon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::ClassParams = {
		&UParticleModuleTypeDataRibbon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTypeDataRibbon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleTypeDataRibbon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleTypeDataRibbon, 3917525692);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataRibbon>()
	{
		return UParticleModuleTypeDataRibbon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataRibbon(Z_Construct_UClass_UParticleModuleTypeDataRibbon, &UParticleModuleTypeDataRibbon::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataRibbon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataRibbon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
