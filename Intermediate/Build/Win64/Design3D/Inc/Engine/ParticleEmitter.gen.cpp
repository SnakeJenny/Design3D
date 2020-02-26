// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleEmitter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleEmitter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterRenderMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleEmitter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
// End Cross Module References
	static UEnum* EEmitterRenderMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterRenderMode, Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterRenderMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEmitterRenderMode>()
	{
		return EEmitterRenderMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmitterRenderMode(EEmitterRenderMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EEmitterRenderMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEmitterRenderMode_Hash() { return 1005629003U; }
	UEnum* Z_Construct_UEnum_Engine_EEmitterRenderMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmitterRenderMode"), 0, Get_Z_Construct_UEnum_Engine_EEmitterRenderMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERM_Normal", (int64)ERM_Normal },
				{ "ERM_Point", (int64)ERM_Point },
				{ "ERM_Cross", (int64)ERM_Cross },
				{ "ERM_LightsOnly", (int64)ERM_LightsOnly },
				{ "ERM_None", (int64)ERM_None },
				{ "ERM_MAX", (int64)ERM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ERM_Cross.DisplayName", "Cross" },
				{ "ERM_LightsOnly.DisplayName", "Lights Only" },
				{ "ERM_None.DisplayName", "None" },
				{ "ERM_Normal.DisplayName", "Normal" },
				{ "ERM_Point.DisplayName", "Point" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "Cascade-related" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EEmitterRenderMode",
				"EEmitterRenderMode",
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
	static UEnum* EParticleSubUVInterpMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSubUVInterpMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSubUVInterpMethod>()
	{
		return EParticleSubUVInterpMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSubUVInterpMethod(EParticleSubUVInterpMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSubUVInterpMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Hash() { return 2190603822U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSubUVInterpMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PSUVIM_None", (int64)PSUVIM_None },
				{ "PSUVIM_Linear", (int64)PSUVIM_Linear },
				{ "PSUVIM_Linear_Blend", (int64)PSUVIM_Linear_Blend },
				{ "PSUVIM_Random", (int64)PSUVIM_Random },
				{ "PSUVIM_Random_Blend", (int64)PSUVIM_Random_Blend },
				{ "PSUVIM_MAX", (int64)PSUVIM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "PSUVIM_Linear.DisplayName", "Linear" },
				{ "PSUVIM_Linear_Blend.DisplayName", "Linear Blend" },
				{ "PSUVIM_None.DisplayName", "None" },
				{ "PSUVIM_Random.DisplayName", "Random" },
				{ "PSUVIM_Random_Blend.DisplayName", "Random Blend" },
				{ "ToolTip", "SubUV-related" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleSubUVInterpMethod",
				"EParticleSubUVInterpMethod",
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
	static UEnum* EParticleBurstMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleBurstMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleBurstMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleBurstMethod>()
	{
		return EParticleBurstMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleBurstMethod(EParticleBurstMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleBurstMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleBurstMethod_Hash() { return 2056939972U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleBurstMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleBurstMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPBM_Instant", (int64)EPBM_Instant },
				{ "EPBM_Interpolated", (int64)EPBM_Interpolated },
				{ "EPBM_MAX", (int64)EPBM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPBM_Instant.DisplayName", "Instant" },
				{ "EPBM_Interpolated.DisplayName", "Interpolated" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
				{ "ToolTip", "Burst emissions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleBurstMethod",
				"EParticleBurstMethod",
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
class UScriptStruct* FParticleBurst::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleBurst_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleBurst, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleBurst"), sizeof(FParticleBurst), Get_Z_Construct_UScriptStruct_FParticleBurst_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleBurst>()
{
	return FParticleBurst::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleBurst(FParticleBurst::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleBurst"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleBurst
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleBurst()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleBurst")),new UScriptStruct::TCppStructOps<FParticleBurst>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleBurst;
	struct Z_Construct_UScriptStruct_FParticleBurst_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountLow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleBurst_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleBurst_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleBurst>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "ParticleBurst" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The time at which to burst them (0..1: emitter lifetime)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleBurst, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow_MetaData[] = {
		{ "Category", "ParticleBurst" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If >= 0, use as a range [CountLow..Count]" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow = { "CountLow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleBurst, CountLow), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ParticleBurst" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The number of particles to burst" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleBurst, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleBurst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_CountLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleBurst_Statics::NewProp_Count,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleBurst_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleBurst",
		sizeof(FParticleBurst),
		alignof(FParticleBurst),
		Z_Construct_UScriptStruct_FParticleBurst_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleBurst_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleBurst_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleBurst_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleBurst"), sizeof(FParticleBurst), Get_Z_Construct_UScriptStruct_FParticleBurst_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleBurst_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleBurst_Hash() { return 2781776971U; }
	void UParticleEmitter::StaticRegisterNativesUParticleEmitter()
	{
	}
	UClass* Z_Construct_UClass_UParticleEmitter_NoRegister()
	{
		return UParticleEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UParticleEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailModeDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DetailModeDisplay;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailModeBitmask_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DetailModeBitmask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevelSpawnRateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QualityLevelSpawnRateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAllocationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialAllocationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeakActiveParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PeakActiveParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODLevels_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LODLevels_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterEditorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterEditorColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetailMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[];
#endif
		static void NewProp_bCollapsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollapsed;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableWhenInsignficant_MetaData[];
#endif
		static void NewProp_bDisableWhenInsignficant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableWhenInsignficant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabledLODsKeepEmitterAlive_MetaData[];
#endif
		static void NewProp_bDisabledLODsKeepEmitterAlive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabledLODsKeepEmitterAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCookedOut_MetaData[];
#endif
		static void NewProp_bCookedOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCookedOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSoloing_MetaData[];
#endif
		static void NewProp_bIsSoloing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSoloing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConvertedModules_MetaData[];
#endif
		static void NewProp_ConvertedModules_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConvertedModules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacySpawningBehavior_MetaData[];
#endif
		static void NewProp_bUseLegacySpawningBehavior_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacySpawningBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignificanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SignificanceLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SignificanceLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterRenderMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmitterRenderMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubUVDataOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubUVDataOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleEmitter.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay_MetaData[] = {
		{ "Category", "Particle" },
		{ "DisplayName", "Current Detailmodes" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay = { "DetailModeDisplay", nullptr, (EPropertyFlags)0x0010000800022001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, DetailModeDisplay), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EParticleDetailMode" },
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "Detail mode: Set flags reflecting which system detail mode you want the emitter to be ticked and rendered in" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask = { "DetailModeBitmask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, DetailModeBitmask), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale = { "QualityLevelSpawnRateScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, QualityLevelSpawnRateScale), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "Initial allocation count - overrides calculated peak count if > 0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount = { "InitialAllocationCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, InitialAllocationCount), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles = { "PeakActiveParticles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, PeakActiveParticles), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "'Private' data - not required by the editor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels = { "LODLevels", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, LODLevels), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "'Private' data - not required by the editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner = { "LODLevels", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UParticleLODLevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor_MetaData[] = {
		{ "Category", "Cascade" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The color of the emitter in the curve editor and debug rendering modes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor = { "EmitterEditorColor", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, EmitterEditorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If detail mode is >= system detail mode, primitive won't be rendered." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode = { "DetailMode", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, DetailMode_DEPRECATED), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_MetaData[] = {
		{ "Category", "Cascade" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "This value indicates the emitter should be drawn 'collapsed' in Cascade" },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bCollapsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed = { "bCollapsed", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_MetaData[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "When true, emitters deemed insignificant will have their tick and render disabled Instantly. When false they will simple stop spawning new particles." },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bDisableWhenInsignficant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant = { "bDisableWhenInsignficant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "When true, if the current LOD is disabled the emitter will be kept alive. Otherwise, the emitter will be considered complete if the current LOD is disabled." },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bDisabledLODsKeepEmitterAlive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive = { "bDisabledLODsKeepEmitterAlive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If true, then this emitter was 'cooked out' by the cooker.\nThis means it was completely disabled, but to preserve any\nindexing schemes, it is left in place." },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bCookedOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut = { "bCookedOut", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If true, then show only this emitter in the editor" },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bIsSoloing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing = { "bIsSoloing", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->ConvertedModules = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules = { "ConvertedModules", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "If true, maintains some legacy spawning behavior." },
	};
#endif
	void Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_SetBit(void* Obj)
	{
		((UParticleEmitter*)Obj)->bUseLegacySpawningBehavior = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior = { "bUseLegacySpawningBehavior", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleEmitter), &Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_MetaData[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The significance level required of this emitter's owner for this emitter to be active." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel = { "SignificanceLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, SignificanceLevel), Z_Construct_UEnum_Engine_EParticleSignificanceLevel, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode_MetaData[] = {
		{ "Category", "Cascade" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "How to render the emitter particles. Can be one of the following:\n        ERM_Normal      - As the intended sprite/mesh\n        ERM_Point       - As a 2x2 pixel block with no scaling and the color set in EmitterEditorColor\n        ERM_Cross       - As a cross of lines, scaled to the size of the particle in EmitterEditorColor\n        ERM_None        - Do not render" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode = { "EmitterRenderMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, EmitterRenderMode), Z_Construct_UEnum_Engine_EEmitterRenderMode, METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset = { "SubUVDataOffset", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, SubUVDataOffset), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleEmitter.h" },
		{ "ToolTip", "The name of the emitter." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleEmitter, EmitterName), METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleEmitter_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeDisplay,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailModeBitmask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_QualityLevelSpawnRateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_InitialAllocationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_PeakActiveParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_LODLevels_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterEditorColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_DetailMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCollapsed,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisableWhenInsignficant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bDisabledLODsKeepEmitterAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bCookedOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bIsSoloing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_ConvertedModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_bUseLegacySpawningBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SignificanceLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterRenderMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_SubUVDataOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleEmitter_Statics::NewProp_EmitterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleEmitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleEmitter_Statics::ClassParams = {
		&UParticleEmitter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleEmitter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::PropPointers),
		0,
		0x008810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleEmitter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleEmitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleEmitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleEmitter, 749626240);
	template<> ENGINE_API UClass* StaticClass<UParticleEmitter>()
	{
		return UParticleEmitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleEmitter(Z_Construct_UClass_UParticleEmitter, &UParticleEmitter::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleEmitter);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleEmitter)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
