// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRequired() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterNormalsMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSortMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleUVFlipMode();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* EEmitterNormalsMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterNormalsMode, Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterNormalsMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEmitterNormalsMode>()
	{
		return EEmitterNormalsMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmitterNormalsMode(EEmitterNormalsMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EEmitterNormalsMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEmitterNormalsMode_Hash() { return 719060922U; }
	UEnum* Z_Construct_UEnum_Engine_EEmitterNormalsMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmitterNormalsMode"), 0, Get_Z_Construct_UEnum_Engine_EEmitterNormalsMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENM_CameraFacing", (int64)ENM_CameraFacing },
				{ "ENM_Spherical", (int64)ENM_Spherical },
				{ "ENM_Cylindrical", (int64)ENM_Cylindrical },
				{ "ENM_MAX", (int64)ENM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ENM_CameraFacing.ToolTip", "Default mode, normals are based on the camera facing geometry." },
				{ "ENM_Cylindrical.ToolTip", "Normals are generated from a cylinder going through NormalsSphereCenter, in the direction NormalsCylinderDirection." },
				{ "ENM_Spherical.ToolTip", "Normals are generated from a sphere centered at NormalsSphereCenter." },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EEmitterNormalsMode",
				"EEmitterNormalsMode",
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
	static UEnum* EParticleSortMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSortMode, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSortMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSortMode>()
	{
		return EParticleSortMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSortMode(EParticleSortMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSortMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSortMode_Hash() { return 1567729047U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSortMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSortMode"), 0, Get_Z_Construct_UEnum_Engine_EParticleSortMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PSORTMODE_None", (int64)PSORTMODE_None },
				{ "PSORTMODE_ViewProjDepth", (int64)PSORTMODE_ViewProjDepth },
				{ "PSORTMODE_DistanceToView", (int64)PSORTMODE_DistanceToView },
				{ "PSORTMODE_Age_OldestFirst", (int64)PSORTMODE_Age_OldestFirst },
				{ "PSORTMODE_Age_NewestFirst", (int64)PSORTMODE_Age_NewestFirst },
				{ "PSORTMODE_MAX", (int64)PSORTMODE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleSortMode",
				"EParticleSortMode",
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
	static UEnum* EParticleUVFlipMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleUVFlipMode, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleUVFlipMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleUVFlipMode>()
	{
		return EParticleUVFlipMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleUVFlipMode(EParticleUVFlipMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleUVFlipMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleUVFlipMode_Hash() { return 3320259233U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleUVFlipMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleUVFlipMode"), 0, Get_Z_Construct_UEnum_Engine_EParticleUVFlipMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParticleUVFlipMode::None", (int64)EParticleUVFlipMode::None },
				{ "EParticleUVFlipMode::FlipUV", (int64)EParticleUVFlipMode::FlipUV },
				{ "EParticleUVFlipMode::FlipUOnly", (int64)EParticleUVFlipMode::FlipUOnly },
				{ "EParticleUVFlipMode::FlipVOnly", (int64)EParticleUVFlipMode::FlipVOnly },
				{ "EParticleUVFlipMode::RandomFlipUV", (int64)EParticleUVFlipMode::RandomFlipUV },
				{ "EParticleUVFlipMode::RandomFlipUOnly", (int64)EParticleUVFlipMode::RandomFlipUOnly },
				{ "EParticleUVFlipMode::RandomFlipVOnly", (int64)EParticleUVFlipMode::RandomFlipVOnly },
				{ "EParticleUVFlipMode::RandomFlipUVIndependent", (int64)EParticleUVFlipMode::RandomFlipUVIndependent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FlipUOnly.ToolTip", "Flips U only on all particles." },
				{ "FlipUV.ToolTip", "Flips UV on all particles." },
				{ "FlipVOnly.ToolTip", "Flips V only on all particles." },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "None.ToolTip", "Flips UV on all particles." },
				{ "RandomFlipUOnly.ToolTip", "Flips U only randomly for each particle on spawn." },
				{ "RandomFlipUV.ToolTip", "Flips UV randomly for each particle on spawn." },
				{ "RandomFlipUVIndependent.ToolTip", "Flips U and V independently at random for each particle on spawn." },
				{ "RandomFlipVOnly.ToolTip", "Flips V only randomly for each particle on spawn." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EParticleUVFlipMode",
				"EParticleUVFlipMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleRequired::StaticRegisterNativesUParticleModuleRequired()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister()
	{
		return UParticleModuleRequired::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleRequired_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamedMaterialOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NamedMaterialOverrides;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NamedMaterialOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData[];
#endif
		static void NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrbitModuleAffectsVelocityAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsCylinderDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalsCylinderDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsSphereCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalsSphereCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterNormalsMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmitterNormalsMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacitySourceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpacitySourceMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutoutTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CutoutTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVFlippingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UVFlippingMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UVFlippingMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDrawCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDrawCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxDrawCount_MetaData[];
#endif
		static void NewProp_bUseMaxDrawCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxDrawCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroUVRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MacroUVRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroUVPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MacroUVPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSystemMacroUV_MetaData[];
#endif
		static void NewProp_bOverrideSystemMacroUV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSystemMacroUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomImageChanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomImageChanges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomImageTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomImageTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleUV_MetaData[];
#endif
		static void NewProp_bScaleUV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImages_Vertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImages_Vertical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImages_Horizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImages_Horizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpolationMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstLoopOnly_MetaData[];
#endif
		static void NewProp_bDelayFirstLoopOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayFirstLoopOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmitterDelayUseRange_MetaData[];
#endif
		static void NewProp_bEmitterDelayUseRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmitterDelayUseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterDelayLow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterDelayLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BurstList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurstList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleBurstMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParticleBurstMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterLoops_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterLoops;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDurationRecalcEachLoop_MetaData[];
#endif
		static void NewProp_bDurationRecalcEachLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDurationRecalcEachLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmitterDurationUseRange_MetaData[];
#endif
		static void NewProp_bEmitterDurationUseRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmitterDurationUseRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterDurationLow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterDurationLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[];
#endif
		static void NewProp_bRemoveHMDRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyEmitterTime_MetaData[];
#endif
		static void NewProp_bUseLegacyEmitterTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyEmitterTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKillOnCompleted_MetaData[];
#endif
		static void NewProp_bKillOnCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKillOnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKillOnDeactivate_MetaData[];
#endif
		static void NewProp_bKillOnDeactivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKillOnDeactivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLocalSpace_MetaData[];
#endif
		static void NewProp_bUseLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLocalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleRequired_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Required" },
		{ "HideCategories", "Object Cascade Object" },
		{ "IncludePath", "Particles/ParticleModuleRequired.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "SerializeToFStructuredArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Named material overrides for this emitter.\nOverrides this emitter's material(s) with those in the correspondingly named slot(s) of the owning system." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides = { "NamedMaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, NamedMaterialOverrides), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_Inner = { "NamedMaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Ensures that movement generated from the orbit module is applied to velocity-aligned particles" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bOrbitModuleAffectsVelocityAlignment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment = { "bOrbitModuleAffectsVelocityAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection_MetaData[] = {
		{ "Category", "Normals" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "When EmitterNormalsMode is ENM_Cylindrical,\nparticle normals are created to face away from the cylinder going through NormalsSphereCenter in the direction NormalsCylinderDirection.\nNormalsCylinderDirection is in local space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection = { "NormalsCylinderDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, NormalsCylinderDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter_MetaData[] = {
		{ "Category", "Normals" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "When EmitterNormalsMode is ENM_Spherical, particle normals are created to face away from NormalsSphereCenter.\nNormalsSphereCenter is in local space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter = { "NormalsSphereCenter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, NormalsSphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode_MetaData[] = {
		{ "Category", "Normals" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Normal generation mode for this emitter LOD." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode = { "EmitterNormalsMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterNormalsMode), Z_Construct_UEnum_Engine_EEmitterNormalsMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\nRaising this threshold slightly can reduce overdraw in particles using this animation asset." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold = { "AlphaThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, AlphaThreshold), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode = { "OpacitySourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, OpacitySourceMode), Z_Construct_UEnum_Engine_EOpacitySourceMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode = { "BoundingMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, BoundingMode), Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture_MetaData[] = {
		{ "Category", "ParticleCutout" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Texture to generate bounding geometry from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture = { "CutoutTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, CutoutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Controls UV Flipping for this emitter." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode = { "UVFlippingMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, UVFlippingMode), Z_Construct_UEnum_Engine_EParticleUVFlipMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The maximum number of particles to DRAW for this emitter.\nIf set to 0, it will use whatever number are present." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount = { "MaxDrawCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, MaxDrawCount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, use the MaxDrawCount to limit the number of particles rendered.\nNOTE: This does not limit the number spawned/updated, only what is drawn." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bUseMaxDrawCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount = { "bUseMaxDrawCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "World space radius that UVs generated with the ParticleMacroUV material node will tile based on." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius = { "MacroUVRadius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, MacroUVRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Local space position that UVs generated with the ParticleMacroUV material node will be centered on." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition = { "MacroUVPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, MacroUVPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_MetaData[] = {
		{ "Category", "MacroUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Override the system MacroUV settings" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bOverrideSystemMacroUV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV = { "bOverrideSystemMacroUV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of times to change a random image over the life of the particle." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges = { "RandomImageChanges", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, RandomImageChanges), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The amount of time (particle-relative, 0.0 to 1.0) to 'lock' on a random sub image\n    0.0 = change every frame\n1.0 = select a random image at spawn and hold for the life of the particle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime = { "RandomImageTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, RandomImageTime), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Whether to scale the UV or not - ie, the model wasn't setup with sub uvs" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bScaleUV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV = { "bScaleUV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of sub-images vertically in the texture" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical = { "SubImages_Vertical", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, SubImages_Vertical), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of sub-images horizontally in the texture" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal = { "SubImages_Horizontal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, SubImages_Horizontal), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The interpolation method to used for the SubUV image selection.\nOne of the following:\nPSUVIM_None                     - Do not apply SubUV modules to this emitter.\nPSUVIM_Linear           - Smoothly transition between sub-images in the given order,\n                                          with no blending between the current and the next\nPSUVIM_Linear_Blend     - Smoothly transition between sub-images in the given order,\n                                          blending between the current and the next\nPSUVIM_Random           - Pick the next image at random, with no blending between\n                                          the current and the next\nPSUVIM_Random_Blend     - Pick the next image at random, blending between the current\n                                          and the next" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod = { "InterpolationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, InterpolationMethod), Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, the emitter will be delayed only on the first loop." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bDelayFirstLoopOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly = { "bDelayFirstLoopOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, select the emitter delay from the range\n        [EmitterDelayLow..EmitterDelay]" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bEmitterDelayUseRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange = { "bEmitterDelayUseRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The low end of the emitter delay if using a range." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow = { "EmitterDelayLow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterDelayLow), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "Indicates the time (in seconds) that this emitter should be delayed in the particle system." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay = { "EmitterDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterDelay), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The array of burst entries." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList = { "BurstList", nullptr, (EPropertyFlags)0x0010000002000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, BurstList), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_Inner = { "BurstList", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParticleBurst, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The method to utilize when burst-emitting particles" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod = { "ParticleBurstMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, ParticleBurstMethod), Z_Construct_UEnum_Engine_EParticleBurstMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The rate at which to spawn particles" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate = { "SpawnRate", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, SpawnRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops_MetaData[] = {
		{ "Category", "Duration" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The number of times to loop the emitter.\n    0 indicates loop continuously" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops = { "EmitterLoops", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterLoops), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_MetaData[] = {
		{ "Category", "Duration" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, recalculate the emitter duration on each loop." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bDurationRecalcEachLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop = { "bDurationRecalcEachLoop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_MetaData[] = {
		{ "Category", "Duration" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, select the emitter duration from the range\n        [EmitterDurationLow..EmitterDuration]" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bEmitterDurationUseRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange = { "bEmitterDurationUseRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow_MetaData[] = {
		{ "Category", "Duration" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The low end of the emitter duration if using a range." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow = { "EmitterDurationLow", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterDurationLow), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration_MetaData[] = {
		{ "Category", "Duration" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "How long, in seconds, the emitter will run before looping." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration = { "EmitterDuration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterDuration), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_MetaData[] = {
		{ "Category", "Emitter" },
		{ "DisplayName", "Remove HMD Roll" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bRemoveHMDRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll = { "bRemoveHMDRoll", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, the EmitterTime for the emitter will be calculated by\nmodulating the SecondsSinceCreation by the EmitterDuration. As\nthis can lead to issues w/ looping and variable duration, a new\napproach has been implemented.\nIf false, this new approach is utilized, and the EmitterTime is\nsimply incremented by DeltaTime each tick. When the emitter\nloops, it adjusts the EmitterTime by the current EmitterDuration\nresulting in proper looping/delay behavior." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bUseLegacyEmitterTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime = { "bUseLegacyEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The sorting mode to use for this emitter.\nPSORTMODE_None                          - No sorting required.\nPSORTMODE_ViewProjDepth         - Sort by view projected depth of the particle.\nPSORTMODE_DistanceToView        - Sort by distance of particle to view in world space.\nPSORTMODE_Age_OldestFirst       - Sort by age, oldest drawn first.\nPSORTMODE_Age_NewestFirst       - Sort by age, newest drawn first." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, SortMode), Z_Construct_UEnum_Engine_EParticleSortMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, kill the emitter when it completes" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bKillOnCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted = { "bKillOnCompleted", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, kill the emitter when the particle system is deactivated" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bKillOnDeactivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate = { "bKillOnDeactivate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "If true, update the emitter in local space" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_SetBit(void* Obj)
	{
		((UParticleModuleRequired*)Obj)->bUseLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace = { "bUseLocalSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleRequired), &Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, MaxFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, MinFacingCameraBlendDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The screen alignment to utilize for the emitter at this LOD level.\nOne of the following:\nPSA_FacingCameraPosition - Faces the camera position, but is not dependent on the camera rotation.\n                                                        This method produces more stable particles under camera rotation.\nPSA_Square                      - Uniform scale (via SizeX) facing the camera\nPSA_Rectangle           - Non-uniform scale (via SizeX and SizeY) facing the camera\nPSA_Velocity            - Orient the particle towards both the camera and the direction\n                                          the particle is moving. Non-uniform scaling is allowed.\nPSA_TypeSpecific        - Use the alignment method indicated in the type data module.\nPSA_FacingCameraDistanceBlend - Blends between PSA_FacingCameraPosition and PSA_Square over specified distance." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment = { "ScreenAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation = { "EmitterRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin = { "EmitterOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, EmitterOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
		{ "ToolTip", "The material to utilize for the emitter at this LOD level." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleRequired, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NamedMaterialOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOrbitModuleAffectsVelocityAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsCylinderDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_NormalsSphereCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterNormalsMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_AlphaThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_OpacitySourceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BoundingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_CutoutTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_UVFlippingMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxDrawCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseMaxDrawCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MacroUVPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bOverrideSystemMacroUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageChanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_RandomImageTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bScaleUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Vertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SubImages_Horizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_InterpolationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDelayFirstLoopOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDelayUseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelayLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_BurstList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ParticleBurstMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SpawnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bDurationRecalcEachLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bEmitterDurationUseRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDurationLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bRemoveHMDRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLegacyEmitterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_SortMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bKillOnDeactivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_bUseLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MaxFacingCameraBlendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_MinFacingCameraBlendDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_ScreenAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_EmitterOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleRequired_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleRequired_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleRequired>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleRequired_Statics::ClassParams = {
		&UParticleModuleRequired::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleRequired_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleRequired_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleRequired()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleRequired_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleRequired, 2708902895);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleRequired>()
	{
		return UParticleModuleRequired::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleRequired(Z_Construct_UClass_UParticleModuleRequired, &UParticleModuleRequired::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleRequired"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRequired);
	IMPLEMENT_FARCHIVE_SERIALIZER(UParticleModuleRequired)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
