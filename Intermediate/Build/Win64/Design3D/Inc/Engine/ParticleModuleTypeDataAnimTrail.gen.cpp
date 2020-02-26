// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataAnimTrail() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleTypeDataAnimTrail::StaticRegisterNativesUParticleModuleTypeDataAnimTrail()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_NoRegister()
	{
		return UParticleModuleTypeDataAnimTrail::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthTessellationStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidthTessellationStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentTessellationStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TangentTessellationStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceTessellationStepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceTessellationStepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TilingDistance;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeadTrailsOnDeactivate_MetaData[];
#endif
		static void NewProp_bDeadTrailsOnDeactivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeadTrailsOnDeactivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AnimTrail Data" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_WidthTessellationStepSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "The width step size for tessellation.\nThis is the number of world units change in the width required to warrant an additional tessellation point. If 0 then there is no width tessellation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_WidthTessellationStepSize = { "WidthTessellationStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, WidthTessellationStepSize), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_WidthTessellationStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_WidthTessellationStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TangentTessellationStepSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "The tangent scalar for tessellation.\nThis is the degree change in the tangent direction [0...180] required to warrant an additional tessellation point. If 0 then there is no tangent tessellation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TangentTessellationStepSize = { "TangentTessellationStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, TangentTessellationStepSize), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TangentTessellationStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TangentTessellationStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_DistanceTessellationStepSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "The distance step size for tessellation.\n# Tessellation Points = TruncToInt((Distance Between Spawned Particles) / DistanceTessellationStepSize)). If 0 then there is no distance tessellation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_DistanceTessellationStepSize = { "DistanceTessellationStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, DistanceTessellationStepSize), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_DistanceTessellationStepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_DistanceTessellationStepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TilingDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "The (estimated) covered distance to tile the 2nd UV set at.\nIf 0.0, a second UV set will not be passed in." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TilingDistance = { "TilingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleTypeDataAnimTrail, TilingDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TilingDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TilingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "If true, recalculate tangents every frame to allow velocity/acceleration to be applied" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataAnimTrail*)Obj)->bTangentRecalculationEveryFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame = { "bTangentRecalculationEveryFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataAnimTrail), &Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "If true, recalculate the previous tangent when a new particle is spawned" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataAnimTrail*)Obj)->bEnablePreviousTangentRecalculation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation = { "bEnablePreviousTangentRecalculation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataAnimTrail), &Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h" },
		{ "ToolTip", "If true, when the system is deactivated, mark trails as dead.\nThis means they will still render, but will not have more particles\nadded to them, even if the system re-activates..." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataAnimTrail*)Obj)->bDeadTrailsOnDeactivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate = { "bDeadTrailsOnDeactivate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataAnimTrail), &Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_WidthTessellationStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TangentTessellationStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_DistanceTessellationStepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_TilingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bTangentRecalculationEveryFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bEnablePreviousTangentRecalculation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::NewProp_bDeadTrailsOnDeactivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataAnimTrail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::ClassParams = {
		&UParticleModuleTypeDataAnimTrail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTypeDataAnimTrail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleTypeDataAnimTrail, 535533068);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataAnimTrail>()
	{
		return UParticleModuleTypeDataAnimTrail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataAnimTrail(Z_Construct_UClass_UParticleModuleTypeDataAnimTrail, &UParticleModuleTypeDataAnimTrail::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataAnimTrail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataAnimTrail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
