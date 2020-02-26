// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/WorldSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVolumeLightingMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityAggressiveness();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBroadphaseSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHierarchicalSimplification();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetViewer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassWorldInfoSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalLODSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalLODSetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInteriorSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings();
	ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* EVolumeLightingMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVolumeLightingMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EVolumeLightingMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVolumeLightingMethod>()
	{
		return EVolumeLightingMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVolumeLightingMethod(EVolumeLightingMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EVolumeLightingMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVolumeLightingMethod_Hash() { return 2254807166U; }
	UEnum* Z_Construct_UEnum_Engine_EVolumeLightingMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVolumeLightingMethod"), 0, Get_Z_Construct_UEnum_Engine_EVolumeLightingMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VLM_VolumetricLightmap", (int64)VLM_VolumetricLightmap },
				{ "VLM_SparseVolumeLightingSamples", (int64)VLM_SparseVolumeLightingSamples },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "VLM_SparseVolumeLightingSamples.DisplayName", "Sparse Volume Lighting Samples" },
				{ "VLM_SparseVolumeLightingSamples.ToolTip", "Volume lighting samples are placed on top of static surfaces at medium density, and everywhere else in the Lightmass Importance Volume at low density.  Positions outside of the Importance Volume will have no indirect lighting.\nThis method requires CPU interpolation so the Indirect Lighting Cache is used to interpolate results for each dynamic object, adding Rendering Thread overhead.\nVolumetric Fog cannot be affected by precomputed lighting with this method." },
				{ "VLM_VolumetricLightmap.DisplayName", "Volumetric Lightmap" },
				{ "VLM_VolumetricLightmap.ToolTip", "Lighting samples are computed in an adaptive grid which covers the entire Lightmass Importance Volume.  Higher density grids are used near geometry.\nThe Volumetric Lightmap is interpolated efficiently on the GPU per-pixel, allowing accurate indirect lighting for dynamic objects and volumetric fog.\nPositions outside of the Importance Volume reuse the border texels of the Volumetric Lightmap (clamp addressing).\nOn mobile, interpolation is done on the CPU at the center of each object's bounds." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVolumeLightingMethod",
				"EVolumeLightingMethod",
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
	static UEnum* EVisibilityAggressiveness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityAggressiveness, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityAggressiveness"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVisibilityAggressiveness>()
	{
		return EVisibilityAggressiveness_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVisibilityAggressiveness(EVisibilityAggressiveness_StaticEnum, TEXT("/Script/Engine"), TEXT("EVisibilityAggressiveness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Hash() { return 1346519736U; }
	UEnum* Z_Construct_UEnum_Engine_EVisibilityAggressiveness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVisibilityAggressiveness"), 0, Get_Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VIS_LeastAggressive", (int64)VIS_LeastAggressive },
				{ "VIS_ModeratelyAggressive", (int64)VIS_ModeratelyAggressive },
				{ "VIS_MostAggressive", (int64)VIS_MostAggressive },
				{ "VIS_Max", (int64)VIS_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
				{ "VIS_LeastAggressive.DisplayName", "Least Aggressive" },
				{ "VIS_Max.Hidden", "" },
				{ "VIS_ModeratelyAggressive.DisplayName", "Moderately Aggressive" },
				{ "VIS_MostAggressive.DisplayName", "Most Aggressive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EVisibilityAggressiveness",
				"EVisibilityAggressiveness",
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
class UScriptStruct* FBroadphaseSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBroadphaseSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBroadphaseSettings, Z_Construct_UPackage__Script_Engine(), TEXT("BroadphaseSettings"), sizeof(FBroadphaseSettings), Get_Z_Construct_UScriptStruct_FBroadphaseSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBroadphaseSettings>()
{
	return FBroadphaseSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBroadphaseSettings(FBroadphaseSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("BroadphaseSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBroadphaseSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFBroadphaseSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BroadphaseSettings")),new UScriptStruct::TCppStructOps<FBroadphaseSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBroadphaseSettings;
	struct Z_Construct_UScriptStruct_FBroadphaseSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MBPNumSubdivs_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MBPNumSubdivs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MBPBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MBPBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMBPOnServer_MetaData[];
#endif
		static void NewProp_bUseMBPOnServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMBPOnServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMBPOnClient_MetaData[];
#endif
		static void NewProp_bUseMBPOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMBPOnClient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Settings pertaining to which PhysX broadphase to use, and settings for MBP if that is the chosen broadphase type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBroadphaseSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUseMBP" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Number of times to subdivide the MBP bounds, final number of regions is MBPNumSubdivs^2" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs = { "MBPNumSubdivs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBroadphaseSettings, MBPNumSubdivs), METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "EditCondition", "bUseMBP" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Total bounds for MBP, must cover the game world or collisions are disabled for out of bounds actors" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds = { "MBPBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBroadphaseSettings, MBPBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_SetBit(void* Obj)
	{
		((FBroadphaseSettings*)Obj)->bUseMBPOnServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer = { "bUseMBPOnServer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBroadphaseSettings), &Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to use MBP (Multi Broadphase Pruning" },
	};
#endif
	void Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_SetBit(void* Obj)
	{
		((FBroadphaseSettings*)Obj)->bUseMBPOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient = { "bUseMBPOnClient", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBroadphaseSettings), &Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BroadphaseSettings",
		sizeof(FBroadphaseSettings),
		alignof(FBroadphaseSettings),
		Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBroadphaseSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBroadphaseSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BroadphaseSettings"), sizeof(FBroadphaseSettings), Get_Z_Construct_UScriptStruct_FBroadphaseSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBroadphaseSettings_Hash() { return 1727847896U; }
class UScriptStruct* FHierarchicalSimplification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHierarchicalSimplification, Z_Construct_UPackage__Script_Engine(), TEXT("HierarchicalSimplification"), sizeof(FHierarchicalSimplification), Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHierarchicalSimplification>()
{
	return FHierarchicalSimplification::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHierarchicalSimplification(FHierarchicalSimplification::StaticStruct, TEXT("/Script/Engine"), TEXT("HierarchicalSimplification"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFHierarchicalSimplification
{
	FScriptStruct_Engine_StaticRegisterNativesFHierarchicalSimplification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HierarchicalSimplification")),new UScriptStruct::TCppStructOps<FHierarchicalSimplification>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFHierarchicalSimplification;
	struct Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinNumberOfActorsToBuild_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinNumberOfActorsToBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredFillingPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredFillingPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredBoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredBoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergeSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MergeSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxySetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProxySetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReusePreviousLevelClusters_MetaData[];
#endif
		static void NewProp_bReusePreviousLevelClusters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReusePreviousLevelClusters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyGenerateClustersForVolumes_MetaData[];
#endif
		static void NewProp_bOnlyGenerateClustersForVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyGenerateClustersForVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimplifyMesh_MetaData[];
#endif
		static void NewProp_bSimplifyMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimplifyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSpecificExclusion_MetaData[];
#endif
		static void NewProp_bAllowSpecificExclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSpecificExclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideDrawDistance_MetaData[];
#endif
		static void NewProp_bUseOverrideDrawDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideDrawDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideDrawDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideDrawDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionScreenSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHierarchicalSimplification>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMin", "1" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Min number of actors to build LODActor" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild = { "MinNumberOfActorsToBuild", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHierarchicalSimplification, MinNumberOfActorsToBuild), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Desired Filling Percentage for clustering - this is not guaranteed but used to calculate filling factor  for auto clustering" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage = { "DesiredFillingPercentage", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHierarchicalSimplification, DesiredFillingPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMin", "10.000000" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Desired Bounding Radius for clustering - this is not guaranteed but used to calculate filling factor for auto clustering" },
		{ "UIMin", "10.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius = { "DesiredBoundRadius", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHierarchicalSimplification, DesiredBoundRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Merge Mesh Setting if bSimplifyMesh is false" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting = { "MergeSetting", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHierarchicalSimplification, MergeSetting), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Simplification Setting if bSimplifyMesh is true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting = { "ProxySetting", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHierarchicalSimplification, ProxySetting), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "DisplayAfter", "bOnlyGenerateClustersForVolumes" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Will reuse the clusters generated for the previous (lower) HLOD level" },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bReusePreviousLevelClusters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters = { "bReusePreviousLevelClusters", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "DisplayAfter", "MinNumberOfActorsToBuild" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Min number of actors to build LODActor" },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bOnlyGenerateClustersForVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes = { "bOnlyGenerateClustersForVolumes", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If this is true, it will simplify mesh but it is slower.\nIf false, it will just merge actors but not simplify using the lower LOD if exists.\nFor example if you build LOD 1, it will use LOD 1 of the mesh to merge actors if exists.\nIf you merge material, it will reduce drawcalls." },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bSimplifyMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh = { "bSimplifyMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bAllowSpecificExclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion = { "bAllowSpecificExclusion", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bUseOverrideDrawDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance = { "bUseOverrideDrawDistance", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMin", "1.0" },
		{ "editcondition", "bUseOverrideDrawDistance" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "UIMax", "50000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance = { "OverrideDrawDistance", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHierarchicalSimplification, OverrideDrawDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The screen radius an mesh object should reach before swapping to the LOD actor, once one of parent displays, it won't draw any of children." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.00001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize = { "TransitionScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHierarchicalSimplification, TransitionScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HierarchicalSimplification",
		sizeof(FHierarchicalSimplification),
		alignof(FHierarchicalSimplification),
		Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHierarchicalSimplification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HierarchicalSimplification"), sizeof(FHierarchicalSimplification), Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHierarchicalSimplification_Hash() { return 1321577502U; }
class UScriptStruct* FNetViewer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNetViewer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetViewer, Z_Construct_UPackage__Script_Engine(), TEXT("NetViewer"), sizeof(FNetViewer), Get_Z_Construct_UScriptStruct_FNetViewer_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetViewer>()
{
	return FNetViewer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNetViewer(FNetViewer::StaticStruct, TEXT("/Script/Engine"), TEXT("NetViewer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNetViewer
{
	FScriptStruct_Engine_StaticRegisterNativesFNetViewer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NetViewer")),new UScriptStruct::TCppStructOps<FNetViewer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNetViewer;
	struct Z_Construct_UScriptStruct_FNetViewer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InViewer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InViewer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "stores information on a viewer that actors need to be checked against for relevancy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetViewer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetViewer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Direction the viewer is looking" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir = { "ViewDir", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetViewer, ViewDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Where the viewer is looking from" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetViewer, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The actor that is being directly viewed, usually a pawn.  Could also be the net actor of consequence" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetViewer, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The \"controlling net object\" associated with this view (typically player controller)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer = { "InViewer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetViewer, InViewer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetViewer, Connection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetViewer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetViewer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NetViewer",
		sizeof(FNetViewer),
		alignof(FNetViewer),
		Z_Construct_UScriptStruct_FNetViewer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetViewer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNetViewer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NetViewer"), sizeof(FNetViewer), Get_Z_Construct_UScriptStruct_FNetViewer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNetViewer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNetViewer_Hash() { return 1872998259U; }
class UScriptStruct* FLightmassWorldInfoSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LightmassWorldInfoSettings"), sizeof(FLightmassWorldInfoSettings), Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLightmassWorldInfoSettings>()
{
	return FLightmassWorldInfoSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightmassWorldInfoSettings(FLightmassWorldInfoSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LightmassWorldInfoSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLightmassWorldInfoSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLightmassWorldInfoSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightmassWorldInfoSettings")),new UScriptStruct::TCppStructOps<FLightmassWorldInfoSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLightmassWorldInfoSettings;
	struct Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOcclusionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOcclusionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyOccludedSamplesFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullyOccludedSamplesFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectIlluminationOcclusionFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectIlluminationOcclusionFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectIlluminationOcclusionFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectIlluminationOcclusionFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeLightSamplePlacementScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeLightSamplePlacementScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapSphericalHarmonicSmoothing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricLightmapSphericalHarmonicSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricLightmapMaximumBrickMemoryMb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapDetailCellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricLightmapDetailCellSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompressLightmaps_MetaData[];
#endif
		static void NewProp_bCompressLightmaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompressLightmaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizeAmbientOcclusion_MetaData[];
#endif
		static void NewProp_bVisualizeAmbientOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizeAmbientOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualizeMaterialDiffuse_MetaData[];
#endif
		static void NewProp_bVisualizeMaterialDiffuse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualizeMaterialDiffuse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData[];
#endif
		static void NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateAmbientOcclusionMaterialMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAmbientOcclusion_MetaData[];
#endif
		static void NewProp_bUseAmbientOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAmbientOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeLightingMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VolumeLightingMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffuseBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissiveBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvironmentIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnvironmentColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingSmoothness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingSmoothness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSkyLightingBounces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSkyLightingBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumIndirectLightingBounces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIndirectLightingBounces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticLightingLevelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticLightingLevelScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassWorldInfoSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Maximum distance for an object to cause occlusion on another object." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance = { "MaxOcclusionDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, MaxOcclusionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Fraction of samples taken that must be occluded in order to reach full occlusion." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction = { "FullyOccludedSamplesFraction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, FullyOccludedSamplesFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Higher exponents increase contrast." },
		{ "UIMax", "8" },
		{ "UIMin", ".5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent = { "OcclusionExponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, OcclusionExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "How much of the AO to apply to indirect lighting." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction = { "IndirectIlluminationOcclusionFraction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, IndirectIlluminationOcclusionFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "How much of the AO to apply to direct lighting." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction = { "DirectIlluminationOcclusionFraction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, DirectIlluminationOcclusionFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Scales the distances at which volume lighting samples are placed.  Volume lighting samples are computed by Lightmass and are used for GI on movable components.\nUsing larger scales results in less sample memory usage and reduces Indirect Lighting Cache update times, but less accurate transitions between lighting areas." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale = { "VolumeLightSamplePlacementScale", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumeLightSamplePlacementScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Controls how much smoothing should be done to Volumetric Lightmap samples during Spherical Harmonic de-ringing.\nWhenever highly directional lighting is stored in a Spherical Harmonic, a ringing artifact occurs which manifests as unexpected black areas on the opposite side.\nSmoothing can reduce this artifact.  Smoothing is only applied when the ringing artifact is present.\n0 = no smoothing, 1 = strong smooth (little directionality in lighting)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing = { "VolumetricLightmapSphericalHarmonicSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumetricLightmapSphericalHarmonicSmoothing), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Maximum amount of memory to spend on Volumetric Lightmap Brick data.  High density bricks will be discarded until this limit is met, with bricks furthest from geometry discarded first." },
		{ "UIMax", "500" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb = { "VolumetricLightmapMaximumBrickMemoryMb", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumetricLightmapMaximumBrickMemoryMb), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Size of an Volumetric Lightmap voxel at the highest density (used around geometry), in world space units.\nThis setting has a large impact on build times and memory, use with caution.\nHalving the DetailCellSize can increase memory by up to a factor of 8x." },
		{ "UIMax", "1000" },
		{ "UIMin", "50" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize = { "VolumetricLightmapDetailCellSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumetricLightmapDetailCellSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to compress lightmap textures.  Disabling lightmap texture compression will reduce artifacts but increase memory and disk size by 4x.\nUse caution when disabling this." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bCompressLightmaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps = { "bCompressLightmaps", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_MetaData[] = {
		{ "Category", "LightmassDebug" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If true, override normal direct and indirect lighting with just the AO term." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bVisualizeAmbientOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion = { "bVisualizeAmbientOcclusion", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_MetaData[] = {
		{ "Category", "LightmassDebug" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If true, override normal direct and indirect lighting with just the exported diffuse term." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bVisualizeMaterialDiffuse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse = { "bVisualizeMaterialDiffuse", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to generate textures storing the AO computed by Lightmass.\nThese can be accessed through the PrecomputedAOMask material node,\nWhich is useful for blending between material layers on environment assets.\nBe sure to set DirectIlluminationOcclusionFraction and IndirectIlluminationOcclusionFraction to 0 if you only want the PrecomputedAOMask!" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bGenerateAmbientOcclusionMaterialMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask = { "bGenerateAmbientOcclusionMaterialMask", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If true, AmbientOcclusion will be enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bUseAmbientOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion = { "bUseAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Technique to use for providing precomputed lighting at all positions inside the Lightmass Importance Volume" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod = { "VolumeLightingMethod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumeLightingMethod), Z_Construct_UEnum_Engine_EVolumeLightingMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Scales the diffuse contribution of all materials in the scene." },
		{ "UIMax", "6.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost = { "DiffuseBoost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, DiffuseBoost), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Scales the emissive contribution of all materials in the scene.  Currently disabled and should be removed with mesh area lights." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost = { "EmissiveBoost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, EmissiveBoost), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Scales EnvironmentColor to allow independent color and brightness controls." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity = { "EnvironmentIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, EnvironmentIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Represents a constant color light surrounding the upper hemisphere of the level, like a sky.\nThis light source currently does not get bounced as indirect lighting and causes reflection capture brightness to be incorrect.  Prefer using a Static Skylight instead." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor = { "EnvironmentColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, EnvironmentColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Smoothness factor to apply to indirect lighting.  This is useful in some lighting conditions when Lightmass cannot resolve accurate indirect lighting.\n1 is default smoothness tweaked for a variety of lighting situations.\nHigher values like 3 smooth out the indirect lighting more, but at the cost of indirect shadows losing detail." },
		{ "UIMax", "6.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness = { "IndirectLightingSmoothness", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, IndirectLightingSmoothness), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Warning: Setting this higher than 1 will greatly increase build times!\nCan be used to increase the GI solver sample counts in order to get higher quality for levels that need it.\nIt can be useful to reduce IndirectLightingSmoothness somewhat (~.75) when increasing quality to get defined indirect shadows.\nNote that this can't affect compression artifacts, UV seams or other texture based artifacts." },
		{ "UIMax", "4.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality = { "IndirectLightingQuality", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, IndirectLightingQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Number of skylight and emissive bounces to simulate.\nLightmass uses a non-distributable radiosity method for skylight bounces whose cost is proportional to the number of bounces." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces = { "NumSkyLightingBounces", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, NumSkyLightingBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Number of light bounces to simulate for point / spot / directional lights, starting from the light source.\n0 is direct lighting only, 1 is one bounce, etc.\nBounce 1 takes the most time to calculate and contributes the most to visual quality, followed by bounce 2.\nSuccessive bounces don't really affect build times, but have a much lower visual impact, unless the material diffuse colors are close to 1." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces = { "NumIndirectLightingBounces", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, NumIndirectLightingBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Warning: Setting this to less than 1 will greatly increase build times!\nScale of the level relative to real world scale (1 Unreal Unit = 1 cm).\nAll scale-dependent Lightmass setting defaults have been tweaked to work well with real world scale,\nAny levels with a different scale should use this scale to compensate.\nFor large levels it can drastically reduce build times to set this to 2 or 4." },
		{ "UIMax", "4.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale = { "StaticLightingLevelScale", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassWorldInfoSettings, StaticLightingLevelScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LightmassWorldInfoSettings",
		sizeof(FLightmassWorldInfoSettings),
		alignof(FLightmassWorldInfoSettings),
		Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassWorldInfoSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightmassWorldInfoSettings"), sizeof(FLightmassWorldInfoSettings), Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Hash() { return 2801887301U; }
	void UHierarchicalLODSetup::StaticRegisterNativesUHierarchicalLODSetup()
	{
	}
	UClass* Z_Construct_UClass_UHierarchicalLODSetup_NoRegister()
	{
		return UHierarchicalLODSetup::StaticClass();
	}
	struct Z_Construct_UClass_UHierarchicalLODSetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideBaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchicalLODSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HierarchicalLODSetup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HierarchicalLODSetup_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHierarchicalLODSetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSetup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameFramework/WorldSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial = { "OverrideBaseMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalLODSetup, OverrideBaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Hierarchical LOD Setup" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHierarchicalLODSetup, HierarchicalLODSetup), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_Inner = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHierarchicalSimplification, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHierarchicalLODSetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHierarchicalLODSetup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::ClassParams = {
		&UHierarchicalLODSetup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSetup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHierarchicalLODSetup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHierarchicalLODSetup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHierarchicalLODSetup, 4137915599);
	template<> ENGINE_API UClass* StaticClass<UHierarchicalLODSetup>()
	{
		return UHierarchicalLODSetup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHierarchicalLODSetup(Z_Construct_UClass_UHierarchicalLODSetup, &UHierarchicalLODSetup::StaticClass, TEXT("/Script/Engine"), TEXT("UHierarchicalLODSetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalLODSetup);
	void AWorldSettings::StaticRegisterNativesAWorldSettings()
	{
		UClass* Class = AWorldSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_WorldGravityZ", &AWorldSettings::execOnRep_WorldGravityZ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldSettings, nullptr, "OnRep_WorldGravityZ", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWorldSettings_NoRegister()
	{
		return AWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_AWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBookmarkClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LastBookmarkClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookmarkArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BookmarkArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BookmarkArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBookmarkClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultBookmarkClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfBookmarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfBookmarks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationViewers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicationViewers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicationViewers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pauser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadphaseSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BroadphaseSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUndilatedFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUndilatedFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinUndilatedFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinUndilatedFrameTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGlobalTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGlobalTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGlobalTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGlobalTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemoPlayTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DemoPlayTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatineeTimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatineeTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeDilation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeDilation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookMarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BookMarks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateSingleClusterForLevel_MetaData[];
#endif
		static void NewProp_bGenerateSingleClusterForLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateSingleClusterForLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumHLODLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumHLODLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchicalLODSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HierarchicalLODSetup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HierarchicalLODSetup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideBaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HLODSetupAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_HLODSetupAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHierarchicalLODSystem_MetaData[];
#endif
		static void NewProp_bEnableHierarchicalLODSystem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHierarchicalLODSystem;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseSoundMix_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultBaseSoundMix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonoCullingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MonoCullingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAmbientZoneSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAmbientZoneSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultReverbSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicIndirectShadowsSelfShadowingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDistanceFieldViewDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalDistanceFieldViewDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxDistanceFieldOcclusionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultColorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultColorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedLightAndShadowMapTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PackedLightAndShadowMapTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameNetworkManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameNetworkManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollisionHandlerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PhysicsCollisionHandlerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysicsVolumeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultPhysicsVolumeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalGravityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalGravityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldGravityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldGravityZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillZDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_KillZDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KillZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldToMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfigOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationSystemConfigOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationSystemConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultBroadphaseSettings_MetaData[];
#endif
		static void NewProp_bOverrideDefaultBroadphaseSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultBroadphaseSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighPriorityLoadingLocal_MetaData[];
#endif
		static void NewProp_bHighPriorityLoadingLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPriorityLoadingLocal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighPriorityLoading_MetaData[];
#endif
		static void NewProp_bHighPriorityLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPriorityLoading;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNoPrecomputedLighting_MetaData[];
#endif
		static void NewProp_bForceNoPrecomputedLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNoPrecomputedLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMinimizeBSPSections_MetaData[];
#endif
		static void NewProp_bMinimizeBSPSections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMinimizeBSPSections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalGravitySet_MetaData[];
#endif
		static void NewProp_bGlobalGravitySet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalGravitySet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorldGravitySet_MetaData[];
#endif
		static void NewProp_bWorldGravitySet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldGravitySet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldOriginRebasing_MetaData[];
#endif
		static void NewProp_bEnableWorldOriginRebasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldOriginRebasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseClientSideLevelStreamingVolumes_MetaData[];
#endif
		static void NewProp_bUseClientSideLevelStreamingVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseClientSideLevelStreamingVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldComposition_MetaData[];
#endif
		static void NewProp_bEnableWorldComposition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldComposition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAISystem_MetaData[];
#endif
		static void NewProp_bEnableAISystem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAISystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableNavigationSystem_MetaData[];
#endif
		static void NewProp_bEnableNavigationSystem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableNavigationSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldBoundsChecks_MetaData[];
#endif
		static void NewProp_bEnableWorldBoundsChecks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldBoundsChecks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData[];
#endif
		static void NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaceCellsOnlyAlongCameraTracks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrecomputeVisibility_MetaData[];
#endif
		static void NewProp_bPrecomputeVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrecomputeVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityAggressiveness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibilityAggressiveness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibilityCellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VisibilityCellSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorldSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ, "OnRep_WorldGravityZ" }, // 1218269562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Utilities|Transformation" },
		{ "IncludePath", "GameFramework/WorldSettings.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor containing all script accessible world properties." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Tracked so we can detect changes from Config" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass = { "LastBookmarkClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, LastBookmarkClass), Z_Construct_UClass_UBookmarkBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray = { "BookmarkArray", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, BookmarkArray), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_Inner = { "BookmarkArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBookmarkBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "AllowedClasses", "BookmarkBase" },
		{ "ExactClass", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Class that will be used when creating new bookmarks.\nOld bookmarks may be recreated with the new class where possible." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass = { "DefaultBookmarkClass", nullptr, (EPropertyFlags)0x0044000000004000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DefaultBookmarkClass), Z_Construct_UClass_UBookmarkBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks_MetaData[] = {
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Maximum number of bookmarks allowed.\nChanging this will change the allocation of the bookmarks array, and when shrinking\nmay cause some bookmarks to become eligible for GC." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks = { "MaxNumberOfBookmarks", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, MaxNumberOfBookmarks), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, AssetUserData), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "valid only during replication - information about the player(s) being replicated to\n(there could be more than one in the case of a splitscreen client)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers = { "ReplicationViewers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, ReplicationViewers), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_Inner = { "ReplicationViewers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNetViewer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_Pauser_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If paused, FName of person pausing the game." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_Pauser = { "Pauser", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, Pauser), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_Pauser_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_Pauser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings = { "BroadphaseSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, BroadphaseSettings), Z_Construct_UScriptStruct_FBroadphaseSettings, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime_MetaData[] = {
		{ "Category", "Tick" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Largest possible frametime, not considering dilation. Equiv to 1/SlowestFPS." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime = { "MaxUndilatedFrameTime", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, MaxUndilatedFrameTime), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime_MetaData[] = {
		{ "Category", "Tick" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Smallest possible frametime, not considering dilation. Equiv to 1/FastestFPS." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime = { "MinUndilatedFrameTime", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, MinUndilatedFrameTime), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation_MetaData[] = {
		{ "Category", "Tick" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Highest acceptable global time dilation." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation = { "MaxGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, MaxGlobalTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation_MetaData[] = {
		{ "Category", "Tick" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Lowest acceptable global time dilation." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation = { "MinGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, MinGlobalTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Additional TimeDilation used to control demo playback speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation = { "DemoPlayTimeDilation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DemoPlayTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MatineeTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Additional time dilation used by Matinee (or Sequencer) slomo track.  Transient because this is often\ntemporarily modified by the editor when previewing slow motion effects, yet we don't want it saved or loaded from level packages." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MatineeTimeDilation = { "MatineeTimeDilation", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, MatineeTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MatineeTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MatineeTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Normally 1 - scales real time passage.\nWarning - most use cases should use GetEffectiveTimeDilation() instead of reading from this directly" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, TimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks = { "BookMarks", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BookMarks, AWorldSettings), STRUCT_OFFSET(AWorldSettings, BookMarks), Z_Construct_UClass_UBookMark_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_MetaData[] = {
		{ "Category", "LODSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "if set to true, all eligible actors in this level will be added to a single cluster representing the entire level (used for small sublevels)" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bGenerateSingleClusterForLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel = { "bGenerateSingleClusterForLevel", nullptr, (EPropertyFlags)0x0010040800004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels = { "NumHLODLevels", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, NumHLODLevels), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_MetaData[] = {
		{ "Category", "LODSystem" },
		{ "editcondition", "bEnableHierarchicalLODSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Hierarchical LOD Setup" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0020080800004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, HierarchicalLODSetup), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_Inner = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0000000800004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHierarchicalSimplification, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial_MetaData[] = {
		{ "Category", "LODSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If set overrides the project-wide base material used for Proxy Materials" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial = { "OverrideBaseMaterial", nullptr, (EPropertyFlags)0x0014000800004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, OverrideBaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset_MetaData[] = {
		{ "Category", "LODSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If set overrides the level settings and global project settings" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset = { "HLODSetupAsset", nullptr, (EPropertyFlags)0x0014000800004001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, HLODSetupAsset), Z_Construct_UClass_UHierarchicalLODSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_MetaData[] = {
		{ "Category", "LODSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "if set to true, hierarchical LODs will be built, which will create hierarchical LODActors" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableHierarchicalLODSystem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem = { "bEnableHierarchicalLODSystem", nullptr, (EPropertyFlags)0x0010000800004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Default Base SoundMix." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix = { "DefaultBaseSoundMix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DefaultBaseSoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MonoCullingDistance_MetaData[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Distance from the player after which content will be rendered in mono if monoscopic far field rendering is activated" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MonoCullingDistance = { "MonoCullingDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, MonoCullingDistance), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MonoCullingDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MonoCullingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Default interior settings used by audio volumes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings = { "DefaultAmbientZoneSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DefaultAmbientZoneSettings), Z_Construct_UScriptStruct_FInteriorSettings, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Default reverb settings used by audio volumes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings = { "DefaultReverbSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DefaultReverbSettings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "LIGHTMASS RELATED SETTINGS *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, LightmassSettings), Z_Construct_UScriptStruct_FLightmassWorldInfoSettings, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Controls the intensity of self-shadowing from capsule indirect shadows.\nThese types of shadows use approximate occluder representations, so reducing self-shadowing intensity can hide those artifacts." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity = { "DynamicIndirectShadowsSelfShadowingIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DynamicIndirectShadowsSelfShadowingIntensity), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Global DistanceField View Distance" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Distance from the camera that the global distance field should cover." },
		{ "UIMax", "100000" },
		{ "UIMin", "10000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance = { "GlobalDistanceFieldViewDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, GlobalDistanceFieldViewDistance), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Default Max DistanceField Occlusion Distance" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Max occlusion distance used by mesh distance fields, overridden if there is a movable skylight." },
		{ "UIMax", "5000" },
		{ "UIMin", "500" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance = { "DefaultMaxDistanceFieldOcclusionDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DefaultMaxDistanceFieldOcclusionDistance), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Default color scale for the level" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale = { "DefaultColorScale", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DefaultColorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Maximum size of textures for packed light and shadow maps" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize = { "PackedLightAndShadowMapTextureSize", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, PackedLightAndShadowMapTextureSize), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Class of GameNetworkManager to spawn for network games" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass = { "GameNetworkManagerClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, GameNetworkManagerClass), Z_Construct_UClass_AGameNetworkManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode_MetaData[] = {
		{ "Category", "GameMode" },
		{ "DisplayName", "GameMode Override" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The default GameMode to use when starting this map in the game. If this value is NULL, the INI setting for default game type is used." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode = { "DefaultGameMode", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DefaultGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "optional level specific collision handler" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass = { "PhysicsCollisionHandlerClass", nullptr, (EPropertyFlags)0x0014040000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, PhysicsCollisionHandlerClass), Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "level specific default physics volume" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass = { "DefaultPhysicsVolumeClass", nullptr, (EPropertyFlags)0x0014040002000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, DefaultPhysicsVolumeClass), Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ_MetaData[] = {
		{ "Category", "Physics" },
		{ "editcondition", "bGlobalGravitySet" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "optional level specific gravity override set by level designer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ = { "GlobalGravityZ", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, GlobalGravityZ), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "current gravity actually being used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ = { "WorldGravityZ", "OnRep_WorldGravityZ", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, WorldGravityZ), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType_MetaData[] = {
		{ "Category", "World" },
		{ "editcondition", "bEnableWorldBoundsChecks" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The type of damage inflicted when a actor falls below KillZ" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType = { "KillZDamageType", nullptr, (EPropertyFlags)0x0014040000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, KillZDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ_MetaData[] = {
		{ "Category", "World" },
		{ "editcondition", "bEnableWorldBoundsChecks" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "any actor falling below this level gets destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ = { "KillZ", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, KillZ), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters_MetaData[] = {
		{ "Category", "VR" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "scale of 1uu to 1m in real world measurements, for HMD and other physically tracked devices (e.g. 1uu = 1cm would be 100.0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, WorldToMeters), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Overrides NavigationSystemConfig." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride = { "NavigationSystemConfigOverride", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, NavigationSystemConfigOverride), Z_Construct_UClass_UNavigationSystemConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig_MetaData[] = {
		{ "Category", "World" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Holds parameters for NavigationSystem's creation. Set to Null will result\n    in NavigationSystem instance not being created for this world. Note that\n    if set NavigationSystemConfigOverride will be used instead." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig = { "NavigationSystemConfig", nullptr, (EPropertyFlags)0x00220c000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, NavigationSystemConfig), Z_Construct_UClass_UNavigationSystemConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bOverrideDefaultBroadphaseSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings = { "bOverrideDefaultBroadphaseSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "copy of bHighPriorityLoading that is not replicated, for clientside-only loading operations" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bHighPriorityLoadingLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal = { "bHighPriorityLoadingLocal", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "when this flag is set, more time is allocated to background loading (replicated)" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bHighPriorityLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading = { "bHighPriorityLoading", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to force lightmaps and other precomputed lighting to not be created even when the engine thinks they are needed.\nThis is useful for improving iteration in levels with fully dynamic lighting and shadowing.\nNote that any lighting and shadowing interactions that are usually precomputed will be lost if this is enabled." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bForceNoPrecomputedLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting = { "bForceNoPrecomputedLighting", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Causes the BSP build to generate as few sections as possible.\nThis is useful when you need to reduce draw calls but can reduce texture streaming efficiency and effective lightmap resolution.\nNote - changes require a rebuild to propagate.  Also, be sure to select all surfaces and make sure they all have the same flags to minimize section count." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bMinimizeBSPSections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections = { "bMinimizeBSPSections", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Override World Gravity" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If set to true we will use GlobalGravityZ instead of project setting DefaultGravityZ" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bGlobalGravitySet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet = { "bGlobalGravitySet", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "if set to true, when we call GetGravityZ we assume WorldGravityZ has already been initialized and skip the lookup of DefaultGravityZ and GlobalGravityZ" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bWorldGravitySet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet = { "bWorldGravitySet", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_MetaData[] = {
		{ "Category", "World" },
		{ "editcondition", "bEnableWorldComposition" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "World origin will shift to a camera position when camera goes far away from current origin" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableWorldOriginRebasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing = { "bEnableWorldOriginRebasing", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Enables client-side streaming volumes instead of server-side.\nExpected usage scenario: server has all streaming levels always loaded, clients independently stream levels in/out based on streaming volumes." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bUseClientSideLevelStreamingVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes = { "bUseClientSideLevelStreamingVolumes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Enables tools for composing a tiled world.\nLevel has to be saved and all sub-levels removed before enabling this option." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableWorldComposition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition = { "bEnableWorldComposition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "if set to false AI system will not get created. Use it to disable all AI-related activity on a map" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableAISystem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem = { "bEnableAISystem", nullptr, (EPropertyFlags)0x0010040000004015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_MetaData[] = {
		{ "Category", "World" },
		{ "DisplayName", "DEPRECATED_bEnableNavigationSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableNavigationSystem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem = { "bEnableNavigationSystem", nullptr, (EPropertyFlags)0x0020080000004014, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If true, enables CheckStillInWorld checks" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableWorldBoundsChecks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks = { "bEnableWorldBoundsChecks", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData[] = {
		{ "Category", "PrecomputedVisibility" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to place visibility cells only along camera tracks or only above shadow casting surfaces." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bPlaceCellsOnlyAlongCameraTracks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks = { "bPlaceCellsOnlyAlongCameraTracks", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_MetaData[] = {
		{ "Category", "PrecomputedVisibility" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to place visibility cells inside Precomputed Visibility Volumes and along camera tracks in this level.\nPrecomputing visibility reduces rendering thread time at the cost of some runtime memory and somewhat increased lighting build times." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bPrecomputeVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility = { "bPrecomputeVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness_MetaData[] = {
		{ "Category", "PrecomputedVisibility" },
		{ "DisplayAfter", "bPlaceCellsOnlyAlongCameraTracks" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Determines how aggressive precomputed visibility should be.\nMore aggressive settings cull more objects but also cause more visibility errors like popping." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness = { "VisibilityAggressiveness", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, VisibilityAggressiveness), Z_Construct_UEnum_Engine_EVisibilityAggressiveness, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize_MetaData[] = {
		{ "Category", "PrecomputedVisibility" },
		{ "DisplayAfter", "bPlaceCellsOnlyAlongCameraTracks" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "World space size of precomputed visibility cells in x and y.\nSmaller sizes produce more effective occlusion culling at the cost of increased runtime memory usage and lighting build times." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize = { "VisibilityCellSize", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldSettings, VisibilityCellSize), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_Pauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MatineeTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MonoCullingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWorldSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(AWorldSettings, IInterface_AssetUserData), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorldSettings_Statics::ClassParams = {
		&AWorldSettings::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorldSettings_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorldSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldSettings, 2411995113);
	template<> ENGINE_API UClass* StaticClass<AWorldSettings>()
	{
		return AWorldSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldSettings(Z_Construct_UClass_AWorldSettings, &AWorldSettings::StaticClass, TEXT("/Script/Engine"), TEXT("AWorldSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldSettings);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldSettings)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
