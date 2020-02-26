// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Level.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevel() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSimplificationDetails();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicTextureInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamableTextureInstance();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModelComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
class UScriptStruct* FReplicatedStaticActorDestructionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("ReplicatedStaticActorDestructionInfo"), sizeof(FReplicatedStaticActorDestructionInfo), Get_Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FReplicatedStaticActorDestructionInfo>()
{
	return FReplicatedStaticActorDestructionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicatedStaticActorDestructionInfo(FReplicatedStaticActorDestructionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("ReplicatedStaticActorDestructionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFReplicatedStaticActorDestructionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFReplicatedStaticActorDestructionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicatedStaticActorDestructionInfo")),new UScriptStruct::TCppStructOps<FReplicatedStaticActorDestructionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFReplicatedStaticActorDestructionInfo;
	struct Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Stored information about replicated static/placed actors that have been destroyed in a level.\nThis information is cached in ULevel so that any net drivers that are created after these actors\nare destroyed can access this info and correctly replicate the destruction to their clients." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedStaticActorDestructionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass = { "ObjClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedStaticActorDestructionInfo, ObjClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ReplicatedStaticActorDestructionInfo",
		sizeof(FReplicatedStaticActorDestructionInfo),
		alignof(FReplicatedStaticActorDestructionInfo),
		Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicatedStaticActorDestructionInfo"), sizeof(FReplicatedStaticActorDestructionInfo), Get_Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Hash() { return 694646406U; }
class UScriptStruct* FLevelSimplificationDetails::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSimplificationDetails, Z_Construct_UPackage__Script_Engine(), TEXT("LevelSimplificationDetails"), sizeof(FLevelSimplificationDetails), Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelSimplificationDetails>()
{
	return FLevelSimplificationDetails::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSimplificationDetails(FLevelSimplificationDetails::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelSimplificationDetails"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelSimplificationDetails
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelSimplificationDetails()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSimplificationDetails")),new UScriptStruct::TCppStructOps<FLevelSimplificationDetails>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelSimplificationDetails;
	struct Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeSpecularMap_MetaData[];
#endif
		static void NewProp_bGenerateLandscapeSpecularMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeSpecularMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeRoughnessMap_MetaData[];
#endif
		static void NewProp_bGenerateLandscapeRoughnessMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeRoughnessMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeMetallicMap_MetaData[];
#endif
		static void NewProp_bGenerateLandscapeMetallicMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeMetallicMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeNormalMap_MetaData[];
#endif
		static void NewProp_bGenerateLandscapeNormalMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeNormalMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshSpecularMap_MetaData[];
#endif
		static void NewProp_bGenerateMeshSpecularMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshSpecularMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshRoughnessMap_MetaData[];
#endif
		static void NewProp_bGenerateMeshRoughnessMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshRoughnessMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshMetallicMap_MetaData[];
#endif
		static void NewProp_bGenerateMeshMetallicMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshMetallicMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshNormalMap_MetaData[];
#endif
		static void NewProp_bGenerateMeshNormalMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshNormalMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeGrassToLandscape_MetaData[];
#endif
		static void NewProp_bBakeGrassToLandscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeGrassToLandscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakeFoliageToLandscape_MetaData[];
#endif
		static void NewProp_bBakeFoliageToLandscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakeFoliageToLandscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeMaterialSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LandscapeExportLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLandscapeExportLOD_MetaData[];
#endif
		static void NewProp_bOverrideLandscapeExportLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLandscapeExportLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshMaterialSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshMaterialSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailsPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetailsPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreatePackagePerAsset_MetaData[];
#endif
		static void NewProp_bCreatePackagePerAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreatePackagePerAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSimplificationDetails>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeSpecularMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeSpecularMap_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bGenerateLandscapeSpecularMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeSpecularMap = { "bGenerateLandscapeSpecularMap", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeSpecularMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeSpecularMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeRoughnessMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeRoughnessMap_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bGenerateLandscapeRoughnessMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeRoughnessMap = { "bGenerateLandscapeRoughnessMap", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeRoughnessMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeMetallicMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeMetallicMap_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bGenerateLandscapeMetallicMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeMetallicMap = { "bGenerateLandscapeMetallicMap", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeMetallicMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeMetallicMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeNormalMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeNormalMap_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bGenerateLandscapeNormalMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeNormalMap = { "bGenerateLandscapeNormalMap", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeNormalMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeNormalMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshSpecularMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshSpecularMap_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bGenerateMeshSpecularMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshSpecularMap = { "bGenerateMeshSpecularMap", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshSpecularMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshSpecularMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshRoughnessMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshRoughnessMap_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bGenerateMeshRoughnessMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshRoughnessMap = { "bGenerateMeshRoughnessMap", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshRoughnessMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshMetallicMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshMetallicMap_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bGenerateMeshMetallicMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshMetallicMap = { "bGenerateMeshMetallicMap", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshMetallicMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshMetallicMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshNormalMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshNormalMap_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bGenerateMeshNormalMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshNormalMap = { "bGenerateMeshNormalMap", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshNormalMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshNormalMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether to bake grass into landscape static mesh texture" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bBakeGrassToLandscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape = { "bBakeGrassToLandscape", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether to bake foliage into landscape static mesh texture" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bBakeFoliageToLandscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape = { "bBakeFoliageToLandscape", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Landscape material simplification" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings = { "LandscapeMaterialSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSimplificationDetails, LandscapeMaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "editcondition", "bOverrideLandscapeExportLOD" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Landscape LOD to use for static mesh generation, when not specified 'Max LODLevel' from landscape actor will be used" },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD = { "LandscapeExportLOD", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSimplificationDetails, LandscapeExportLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_MetaData[] = {
		{ "Category", "Landscape" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bOverrideLandscapeExportLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD = { "bOverrideLandscapeExportLOD", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Landscape material simplification" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings = { "StaticMeshMaterialSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSimplificationDetails, StaticMeshMaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Static Mesh Details Percentage" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Percentage of details for static mesh proxy" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage = { "DetailsPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSimplificationDetails, DetailsPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether to create separate packages for each generated asset. All in map package otherwise" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bCreatePackagePerAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset = { "bCreatePackagePerAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeSpecularMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeRoughnessMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeMetallicMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateLandscapeNormalMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshSpecularMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshRoughnessMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshMetallicMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bGenerateMeshNormalMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelSimplificationDetails",
		sizeof(FLevelSimplificationDetails),
		alignof(FLevelSimplificationDetails),
		Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSimplificationDetails()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSimplificationDetails"), sizeof(FLevelSimplificationDetails), Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSimplificationDetails_Hash() { return 1145435382U; }
class UScriptStruct* FDynamicTextureInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicTextureInstance, Z_Construct_UPackage__Script_Engine(), TEXT("DynamicTextureInstance"), sizeof(FDynamicTextureInstance), Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDynamicTextureInstance>()
{
	return FDynamicTextureInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDynamicTextureInstance(FDynamicTextureInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("DynamicTextureInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDynamicTextureInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFDynamicTextureInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DynamicTextureInstance")),new UScriptStruct::TCppStructOps<FDynamicTextureInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDynamicTextureInstance;
	struct Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginalRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttached_MetaData[];
#endif
		static void NewProp_bAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Serialized ULevel information about dynamic texture instances" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicTextureInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Original bounding sphere radius, at the time the TexelFactor was calculated originally." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius = { "OriginalRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicTextureInstance, OriginalRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether the primitive that uses this texture is attached to the scene or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_SetBit(void* Obj)
	{
		((FDynamicTextureInstance*)Obj)->bAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached = { "bAttached", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDynamicTextureInstance), &Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Texture that is used by a dynamic UPrimitiveComponent." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDynamicTextureInstance, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FStreamableTextureInstance,
		&NewStructOps,
		"DynamicTextureInstance",
		sizeof(FDynamicTextureInstance),
		alignof(FDynamicTextureInstance),
		Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicTextureInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DynamicTextureInstance"), sizeof(FDynamicTextureInstance), Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDynamicTextureInstance_Hash() { return 2694561512U; }
class UScriptStruct* FStreamableTextureInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamableTextureInstance, Z_Construct_UPackage__Script_Engine(), TEXT("StreamableTextureInstance"), sizeof(FStreamableTextureInstance), Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamableTextureInstance>()
{
	return FStreamableTextureInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamableTextureInstance(FStreamableTextureInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamableTextureInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamableTextureInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamableTextureInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamableTextureInstance")),new UScriptStruct::TCppStructOps<FStreamableTextureInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamableTextureInstance;
	struct Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Structure containing all information needed for determining the screen space\nsize of an object/ texture instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamableTextureInstance>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamableTextureInstance",
		sizeof(FStreamableTextureInstance),
		alignof(FStreamableTextureInstance),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamableTextureInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamableTextureInstance"), sizeof(FStreamableTextureInstance), Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamableTextureInstance_Hash() { return 1693678315U; }
	void ULevel::StaticRegisterNativesULevel()
	{
	}
	UClass* Z_Construct_UClass_ULevel_NoRegister()
	{
		return ULevel::StaticClass();
	}
	struct Z_Construct_UClass_ULevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyedReplicatedStaticActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DestroyedReplicatedStaticActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestroyedReplicatedStaticActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSimplification_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelSimplification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticComponentsRegisteredInStreamingManager_MetaData[];
#endif
		static void NewProp_bStaticComponentsRegisteredInStreamingManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStaticComponentsRegisteredInStreamingManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTextureStreamingRotationChanged_MetaData[];
#endif
		static void NewProp_bTextureStreamingRotationChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTextureStreamingRotationChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLightingScenario_MetaData[];
#endif
		static void NewProp_bIsLightingScenario_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLightingScenario;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightBuildLevelOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightBuildLevelOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapBuildData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapBuildData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelBuildDataId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelBuildDataId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingTextureGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingTextureGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StreamingTextureGuids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticNavigableGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticNavigableGeometry;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticNavigableGeometry_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowmapTotalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowmapTotalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapTotalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightmapTotalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataChunks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavDataChunks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavDataChunks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavListEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavListEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavListStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavListStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelScriptActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelScriptActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTextureStreamingDirtyResources_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTextureStreamingDirtyResources;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTextureStreamingUnbuiltComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTextureStreamingUnbuiltComponents;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingResourceGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingResourceGuids;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureStreamingResourceGuids_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelScriptBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelScriptBlueprint;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorCluster_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorCluster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModelComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModelComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Level.h" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A Level is a collection of Actors (lights, volumes, mesh instances etc.).\nMultiple Levels can be loaded and unloaded into the World to create a streaming experience.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Levels\n@see UActor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "List of replicated static actors that have been destroyed. Used by net drivers to replicate destruction to clients." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors = { "DestroyedReplicatedStaticActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, DestroyedReplicatedStaticActors), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_Inner = { "DestroyedReplicatedStaticActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, AssetUserData), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings = { "WorldSettings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, WorldSettings), Z_Construct_UClass_AWorldSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The level color used for visualization. (Show -> Advanced -> Level Coloration)\nUsed only in world composition mode" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor = { "LevelColor", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, LevelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Level simplification settings for each LOD" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification = { "LevelSimplification", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LevelSimplification, ULevel), STRUCT_OFFSET(ULevel, LevelSimplification), Z_Construct_UScriptStruct_FLevelSimplificationDetails, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether this level is locked; that is, its actors are read-only\n    Used by WorldBrowser to lock a level when corresponding ULevelStreaming does not exist" },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether the level is currently visible/ associated with the world" },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether the level has finished registering all static components in the streaming manager.\nOnce a level static components are registered, all new components need to go through the dynamic path.\nThis flag is used to direct the registration to the right path with a low perf impact." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bStaticComponentsRegisteredInStreamingManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager = { "bStaticComponentsRegisteredInStreamingManager", nullptr, (EPropertyFlags)0x0010000400202000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether a level transform rotation was applied since the texture streaming builds. Invalidates the precomputed streaming bounds." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bTextureStreamingRotationChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged = { "bTextureStreamingRotationChanged", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether the level is a lighting scenario.  Lighting is built separately for each lighting scenario level with all other scenario levels hidden.\nOnly one lighting scenario level should be visible at a time for correct rendering, and lightmaps from that level will be used on the rest of the world.\nNote: When a lighting scenario level is present, lightmaps for all streaming levels are placed in the scenario's _BuildData package.\n             This means that lightmaps for those streaming levels will not be streamed with them." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bIsLightingScenario = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario = { "bIsLightingScenario", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Level offset at time when lighting was built" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset = { "LightBuildLevelOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, LightBuildLevelOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Registry for data from the map build.  This is stored in a separate package from the level to speed up saving / autosaving.\nReleaseRenderingResources must be called before changing what is referenced, to update the rendering thread state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData = { "MapBuildData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, MapBuildData), Z_Construct_UClass_UMapBuildDataRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Identifies map build data specific to this level, eg lighting volume samples." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId = { "LevelBuildDataId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, LevelBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The Guid of each texture refered by FStreamingTextureBuildInfo::TextureLevelIndex" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids = { "StreamingTextureGuids", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, StreamingTextureGuids), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_Inner = { "StreamingTextureGuids", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "threes of triangle vertices - AABB filtering friendly. Stored if there's a runtime need to rebuild navigation that accepts BSPs\n    as well - it's a lot easier this way than retrieve this data at runtime" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry = { "StaticNavigableGeometry", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, StaticNavigableGeometry), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_Inner = { "StaticNavigableGeometry", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Total number of KB used for shadowmap textures in the level." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize = { "ShadowmapTotalSize", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, ShadowmapTotalSize), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Total number of KB used for lightmap textures in the level." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize = { "LightmapTotalSize", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, LightmapTotalSize), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Navigation related data that can be stored per level" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks = { "NavDataChunks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, NavDataChunks), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_Inner = { "NavDataChunks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNavigationDataChunk_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd = { "NavListEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, NavListEnd), Z_Construct_UClass_ANavigationObjectBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Start and end of the navigation list for this level, used for quickly fixing up\nwhen streaming this level in/out. @TODO DEPRECATED - DELETE" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart = { "NavListStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, NavListStart), Z_Construct_UClass_ANavigationObjectBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The level scripting actor, created by instantiating the class from LevelScriptBlueprint.  This handles all level scripting" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor = { "LevelScriptActor", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, LevelScriptActor), Z_Construct_UClass_ALevelScriptActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Num of resources that have changed since the last texture streaming build. Updated in map check." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources = { "NumTextureStreamingDirtyResources", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, NumTextureStreamingDirtyResources), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Num of components missing valid texture streaming data. Updated in map check." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents = { "NumTextureStreamingUnbuiltComponents", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, NumTextureStreamingUnbuiltComponents), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The Guid list of all materials and meshes Guid used in the last texture streaming build. Used to know if the streaming data needs rebuild. Only used for the persistent level." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids = { "TextureStreamingResourceGuids", nullptr, (EPropertyFlags)0x0010000c00000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, TextureStreamingResourceGuids), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_Inner = { "TextureStreamingResourceGuids", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Reference to the blueprint for level scripting" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint = { "LevelScriptBlueprint", nullptr, (EPropertyFlags)0x0010000c00000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, LevelScriptBlueprint), Z_Construct_UClass_ULevelScriptBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster = { "ActorCluster", nullptr, (EPropertyFlags)0x0010000400282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, ActorCluster), Z_Construct_UClass_ULevelActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "BSP Model components used for rendering." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents = { "ModelComponents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, ModelComponents), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_Inner = { "ModelComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UModelComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "BSP UModel." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, Model), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_Model_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The World that has this level in its Levels array.\nThis is not the same as GetOuter(), because GetOuter() for a streaming level is a vestigial world that is not used.\nIt should not be accessed during BeginDestroy(), just like any other UObject references, since GC may occur in any order." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld = { "OwningWorld", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevel, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bLocked,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_Model,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULevel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(ULevel, IInterface_AssetUserData), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevel_Statics::ClassParams = {
		&ULevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevel_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevel, 3124935553);
	template<> ENGINE_API UClass* StaticClass<ULevel>()
	{
		return ULevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevel(Z_Construct_UClass_ULevel, &ULevel::StaticClass, TEXT("/Script/Engine"), TEXT("ULevel"), false, nullptr, nullptr, nullptr);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULevel)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
