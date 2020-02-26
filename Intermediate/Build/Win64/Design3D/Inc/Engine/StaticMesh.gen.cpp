// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/StaticMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMesh() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOptimizationType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EImportanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENormalMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialRemapIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfoMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_FindSocket();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetBoundingBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterial();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterialIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetNumLODs();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_GetNumSections();
	ENGINE_API UFunction* Z_Construct_UFunction_UStaticMesh_SetMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UNavCollisionBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* EOptimizationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOptimizationType, Z_Construct_UPackage__Script_Engine(), TEXT("EOptimizationType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EOptimizationType>()
	{
		return EOptimizationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOptimizationType(EOptimizationType_StaticEnum, TEXT("/Script/Engine"), TEXT("EOptimizationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EOptimizationType_Hash() { return 603320218U; }
	UEnum* Z_Construct_UEnum_Engine_EOptimizationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOptimizationType"), 0, Get_Z_Construct_UEnum_Engine_EOptimizationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OT_NumOfTriangles", (int64)OT_NumOfTriangles },
				{ "OT_MaxDeviation", (int64)OT_MaxDeviation },
				{ "OT_MAX", (int64)OT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Enum specifying the reduction type to use when simplifying static meshes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EOptimizationType",
				"EOptimizationType",
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
	static UEnum* EImportanceLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EImportanceLevel, Z_Construct_UPackage__Script_Engine(), TEXT("EImportanceLevel"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EImportanceLevel>()
	{
		return EImportanceLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImportanceLevel(EImportanceLevel_StaticEnum, TEXT("/Script/Engine"), TEXT("EImportanceLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EImportanceLevel_Hash() { return 2843833031U; }
	UEnum* Z_Construct_UEnum_Engine_EImportanceLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImportanceLevel"), 0, Get_Z_Construct_UEnum_Engine_EImportanceLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "IL_Off", (int64)IL_Off },
				{ "IL_Lowest", (int64)IL_Lowest },
				{ "IL_Low", (int64)IL_Low },
				{ "IL_Normal", (int64)IL_Normal },
				{ "IL_High", (int64)IL_High },
				{ "IL_Highest", (int64)IL_Highest },
				{ "TEMP_BROKEN2", (int64)TEMP_BROKEN2 },
				{ "EImportanceLevel_MAX", (int64)EImportanceLevel_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EImportanceLevel",
				"EImportanceLevel",
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
	static UEnum* ENormalMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENormalMode, Z_Construct_UPackage__Script_Engine(), TEXT("ENormalMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENormalMode>()
	{
		return ENormalMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENormalMode(ENormalMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ENormalMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENormalMode_Hash() { return 3617335744U; }
	UEnum* Z_Construct_UEnum_Engine_ENormalMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENormalMode"), 0, Get_Z_Construct_UEnum_Engine_ENormalMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NM_PreserveSmoothingGroups", (int64)NM_PreserveSmoothingGroups },
				{ "NM_RecalculateNormals", (int64)NM_RecalculateNormals },
				{ "NM_RecalculateNormalsSmooth", (int64)NM_RecalculateNormalsSmooth },
				{ "NM_RecalculateNormalsHard", (int64)NM_RecalculateNormalsHard },
				{ "TEMP_BROKEN", (int64)TEMP_BROKEN },
				{ "ENormalMode_MAX", (int64)ENormalMode_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
				{ "ToolTip", "Optimization settings used to simplify mesh LODs." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENormalMode",
				"ENormalMode",
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
class UScriptStruct* FMaterialRemapIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialRemapIndex, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialRemapIndex"), sizeof(FMaterialRemapIndex), Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialRemapIndex>()
{
	return FMaterialRemapIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialRemapIndex(FMaterialRemapIndex::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialRemapIndex"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialRemapIndex
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialRemapIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialRemapIndex")),new UScriptStruct::TCppStructOps<FMaterialRemapIndex>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialRemapIndex;
	struct Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialRemap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialRemap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportVersionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ImportVersionKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialRemapIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap = { "MaterialRemap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialRemapIndex, MaterialRemap), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_Inner = { "MaterialRemap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey = { "ImportVersionKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialRemapIndex, ImportVersionKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_MaterialRemap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::NewProp_ImportVersionKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialRemapIndex",
		sizeof(FMaterialRemapIndex),
		alignof(FMaterialRemapIndex),
		Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialRemapIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialRemapIndex"), sizeof(FMaterialRemapIndex), Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialRemapIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialRemapIndex_Hash() { return 1122133316U; }
class UScriptStruct* FStaticMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMaterial, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMaterial"), sizeof(FStaticMaterial), Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMaterial>()
{
	return FStaticMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMaterial(FStaticMaterial::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMaterial
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMaterial")),new UScriptStruct::TCppStructOps<FStaticMaterial>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMaterial;
	struct Z_Construct_UScriptStruct_FStaticMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVChannelData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedMaterialSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ImportedMaterialSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMaterial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Data used for texture streaming relative to each UV channels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData = { "UVChannelData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMaterial, UVChannelData), Z_Construct_UScriptStruct_FMeshUVChannelInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName = { "ImportedMaterialSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMaterial, ImportedMaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMaterial, MaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMaterial, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_UVChannelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_ImportedMaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterial_Statics::NewProp_MaterialInterface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMaterial",
		sizeof(FStaticMaterial),
		alignof(FStaticMaterial),
		Z_Construct_UScriptStruct_FStaticMaterial_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterial_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMaterial"), sizeof(FStaticMaterial), Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMaterial_Hash() { return 3615568737U; }
class UScriptStruct* FAssetEditorOrbitCameraPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition, Z_Construct_UPackage__Script_Engine(), TEXT("AssetEditorOrbitCameraPosition"), sizeof(FAssetEditorOrbitCameraPosition), Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetEditorOrbitCameraPosition>()
{
	return FAssetEditorOrbitCameraPosition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetEditorOrbitCameraPosition(FAssetEditorOrbitCameraPosition::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetEditorOrbitCameraPosition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetEditorOrbitCameraPosition
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetEditorOrbitCameraPosition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetEditorOrbitCameraPosition")),new UScriptStruct::TCppStructOps<FAssetEditorOrbitCameraPosition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetEditorOrbitCameraPosition;
	struct Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrbitPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamOrbitPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSet_MetaData[];
#endif
		static void NewProp_bIsSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetEditorOrbitCameraPosition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The rotation to apply around the orbit point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation = { "CamOrbitRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The distance of the camera from the orbit point" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom = { "CamOrbitZoom", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitZoom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The position to orbit the camera around" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint = { "CamOrbitPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetEditorOrbitCameraPosition, CamOrbitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether or not this has been set to a valid value" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_SetBit(void* Obj)
	{
		((FAssetEditorOrbitCameraPosition*)Obj)->bIsSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet = { "bIsSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetEditorOrbitCameraPosition), &Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_CamOrbitPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::NewProp_bIsSet,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetEditorOrbitCameraPosition",
		sizeof(FAssetEditorOrbitCameraPosition),
		alignof(FAssetEditorOrbitCameraPosition),
		Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetEditorOrbitCameraPosition"), sizeof(FAssetEditorOrbitCameraPosition), Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition_Hash() { return 745788988U; }
class UScriptStruct* FMeshSectionInfoMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSectionInfoMap, Z_Construct_UPackage__Script_Engine(), TEXT("MeshSectionInfoMap"), sizeof(FMeshSectionInfoMap), Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshSectionInfoMap>()
{
	return FMeshSectionInfoMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshSectionInfoMap(FMeshSectionInfoMap::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshSectionInfoMap"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfoMap
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfoMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshSectionInfoMap")),new UScriptStruct::TCppStructOps<FMeshSectionInfoMap>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfoMap;
	struct Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Map_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Map containing per-section settings for each section of each LOD." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSectionInfoMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Maps an LOD+Section to the material it should render with." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionInfoMap, Map), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMeshSectionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::NewProp_Map_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshSectionInfoMap",
		sizeof(FMeshSectionInfoMap),
		alignof(FMeshSectionInfoMap),
		Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfoMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshSectionInfoMap"), sizeof(FMeshSectionInfoMap), Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshSectionInfoMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfoMap_Hash() { return 4226329567U; }
class UScriptStruct* FMeshSectionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSectionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MeshSectionInfo"), sizeof(FMeshSectionInfo), Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMeshSectionInfo>()
{
	return FMeshSectionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshSectionInfo(FMeshSectionInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MeshSectionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshSectionInfo")),new UScriptStruct::TCppStructOps<FMeshSectionInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMeshSectionInfo;
	struct Z_Construct_UScriptStruct_FMeshSectionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Per-section settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSectionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, this section will cast shadows." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bCastShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, collision is enabled for this section." },
	};
#endif
	void Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FMeshSectionInfo*)Obj)->bEnableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMeshSectionInfo), &Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Index in to the Materials array on UStaticMesh." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeshSectionInfo, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bCastShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_bEnableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::NewProp_MaterialIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MeshSectionInfo",
		sizeof(FMeshSectionInfo),
		alignof(FMeshSectionInfo),
		Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSectionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshSectionInfo"), sizeof(FMeshSectionInfo), Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeshSectionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshSectionInfo_Hash() { return 758442533U; }
class UScriptStruct* FStaticMeshSourceModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshSourceModel, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshSourceModel"), sizeof(FStaticMeshSourceModel), Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshSourceModel>()
{
	return FStaticMeshSourceModel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshSourceModel(FStaticMeshSourceModel::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshSourceModel"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshSourceModel
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshSourceModel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMeshSourceModel")),new UScriptStruct::TCppStructOps<FStaticMeshSourceModel>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshSourceModel;
	struct Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportWithBaseMesh_MetaData[];
#endif
		static void NewProp_bImportWithBaseMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportWithBaseMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceImportFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceImportFilename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Source model from which a renderable static mesh is built." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshSourceModel>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Weather this LOD was imported in the same file as the base mesh." },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_SetBit(void* Obj)
	{
		((FStaticMeshSourceModel*)Obj)->bImportWithBaseMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh = { "bImportWithBaseMesh", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticMeshSourceModel), &Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename_MetaData[] = {
		{ "Category", "StaticMeshSourceModel" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The file path that was used to import this LOD." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename = { "SourceImportFilename", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, SourceImportFilename), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "ScreenSize to display this LOD.\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, ScreenSize), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance = { "LODDistance", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, LODDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Reduction settings to apply when building render data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, ReductionSettings), Z_Construct_UScriptStruct_FMeshReductionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Settings applied when building the mesh." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshSourceModel, BuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_bImportWithBaseMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_SourceImportFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_LODDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_ReductionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::NewProp_BuildSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMeshSourceModel",
		sizeof(FStaticMeshSourceModel),
		alignof(FStaticMeshSourceModel),
		Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshSourceModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshSourceModel"), sizeof(FStaticMeshSourceModel), Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshSourceModel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshSourceModel_Hash() { return 856464795U; }
class UScriptStruct* FStaticMeshOptimizationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshOptimizationSettings"), sizeof(FStaticMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshOptimizationSettings>()
{
	return FStaticMeshOptimizationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshOptimizationSettings(FStaticMeshOptimizationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMeshOptimizationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMeshOptimizationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMeshOptimizationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMeshOptimizationSettings")),new UScriptStruct::TCppStructOps<FStaticMeshOptimizationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMeshOptimizationSettings;
	struct Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalsThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[];
#endif
		static void NewProp_bRecalcNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfTrianglesPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumOfTrianglesPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Old optimization settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshOptimizationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "How important shading quality is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance = { "ShadingImportance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, ShadingImportance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "How important texture density is (EImportanceLevel)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance = { "TextureImportance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, TextureImportance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "How important the shape of the geometry is (EImportanceLevel)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance = { "SilhouetteImportance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, SilhouetteImportance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If the angle between two triangles are above this value, the normals will not be\n      smooth over the edge between those two triangles. Set in degrees. This is only used when PreserveNormals is set to false" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold = { "NormalsThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, NormalsThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether Normal smoothing groups should be preserved. If false then NormalsThreshold is used *" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit(void* Obj)
	{
		((FStaticMeshOptimizationSettings*)Obj)->bRecalcNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals = { "bRecalcNormals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticMeshOptimizationSettings), &Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The welding threshold distance. Vertices under this distance will be welded." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, WeldingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If ReductionMethod equals SMOT_MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage = { "MaxDeviationPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, MaxDeviationPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If ReductionMethod equals SMOT_NumOfTriangles this value is the ratio of triangles [0-1] to remove from the mesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage = { "NumOfTrianglesPercentage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, NumOfTrianglesPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod = { "ReductionMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshOptimizationSettings, ReductionMethod), Z_Construct_UEnum_Engine_EOptimizationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ShadingImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_TextureImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NormalsThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_bRecalcNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_WeldingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::NewProp_ReductionMethod,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMeshOptimizationSettings",
		sizeof(FStaticMeshOptimizationSettings),
		alignof(FStaticMeshOptimizationSettings),
		Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshOptimizationSettings"), sizeof(FStaticMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshOptimizationSettings_Hash() { return 4001039277U; }
	void UStaticMesh::StaticRegisterNativesUStaticMesh()
	{
		UClass* Class = UStaticMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSocket", &UStaticMesh::execFindSocket },
			{ "GetBoundingBox", &UStaticMesh::execGetBoundingBox },
			{ "GetBounds", &UStaticMesh::execGetBounds },
			{ "GetMaterial", &UStaticMesh::execGetMaterial },
			{ "GetMaterialIndex", &UStaticMesh::execGetMaterialIndex },
			{ "GetNumLODs", &UStaticMesh::execGetNumLODs },
			{ "GetNumSections", &UStaticMesh::execGetNumSections },
#if WITH_EDITOR
			{ "SetMaterial", &UStaticMesh::execSetMaterial },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMesh_FindSocket_Statics
	{
		struct StaticMesh_eventFindSocket_Parms
		{
			FName InSocketName;
			UStaticMeshSocket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventFindSocket_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventFindSocket_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Find a socket object in this StaticMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "FindSocket", sizeof(StaticMesh_eventFindSocket_Parms), Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_FindSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_FindSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics
	{
		struct StaticMesh_eventGetBoundingBox_Parms
		{
			FBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns the bounding box, in local space including bounds extension(s), of the StaticMesh asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetBoundingBox", sizeof(StaticMesh_eventGetBoundingBox_Parms), Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetBounds_Statics
	{
		struct StaticMesh_eventGetBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns the number of bounds of the mesh.\n\n@return      The bounding box represented as box origin with extents and also a sphere that encapsulates that box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetBounds", sizeof(StaticMesh_eventGetBounds_Parms), Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics
	{
		struct StaticMesh_eventGetMaterial_Parms
		{
			int32 MaterialIndex;
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMaterial_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::NewProp_MaterialIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Gets a Material given a Material Index and an LOD number\n\n@return Requested material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMaterial", sizeof(StaticMesh_eventGetMaterial_Parms), Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics
	{
		struct StaticMesh_eventGetMaterialIndex_Parms
		{
			FName MaterialSlotName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetMaterialIndex_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::NewProp_MaterialSlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Gets a Material index given a slot name\n\n@return Requested material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetMaterialIndex", sizeof(StaticMesh_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics
	{
		struct StaticMesh_eventGetNumLODs_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetNumLODs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ScriptName", "GetNumLods" },
		{ "ToolTip", "Returns the number of LODs used by the mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetNumLODs", sizeof(StaticMesh_eventGetNumLODs_Parms), Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetNumLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetNumLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics
	{
		struct StaticMesh_eventGetNumSections_Parms
		{
			int32 InLOD;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_InLOD = { "InLOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventGetNumSections_Parms, InLOD), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::NewProp_InLOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Returns number of Sections that this StaticMesh has, in the supplied LOD (LOD 0 is the highest)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "GetNumSections", sizeof(StaticMesh_eventGetNumSections_Parms), Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_GetNumSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_GetNumSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics
	{
		struct StaticMesh_eventSetMaterial_Parms
		{
			int32 MaterialIndex;
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventSetMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StaticMesh_eventSetMaterial_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_NewMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::NewProp_MaterialIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Sets a Material given a Material Index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMesh, nullptr, "SetMaterial", sizeof(StaticMesh_eventSetMaterial_Parms), Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMesh_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStaticMesh_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UStaticMesh_NoRegister()
	{
		return UStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditableMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditableMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementToIgnoreForTexFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementToIgnoreForTexFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendedBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtendedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NegativeBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositiveBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sockets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sockets_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODForOccluderMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODForOccluderMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomizedCollision_MetaData[];
#endif
		static void NewProp_bCustomizedCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomizedCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCameraPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorCameraPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCPUAccess_MetaData[];
#endif
		static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[];
#endif
		static void NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNavigationData_MetaData[];
#endif
		static void NewProp_bHasNavigationData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNavigationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStripComplexCollisionForConsole_MetaData[];
#endif
		static void NewProp_bStripComplexCollisionForConsole_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStripComplexCollisionForConsole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDistanceField_MetaData[];
#endif
		static void NewProp_bGenerateMeshDistanceField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDistanceField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODForCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODForCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapCoordinateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapCoordinateIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapUVDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightmapUVDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMaterials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LpvBiasMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LpvBiasMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinLOD;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoComputeLODScreenSize_MetaData[];
#endif
		static void NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoComputeLODScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmapUVVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightmapUVVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialRemapIndexPerImportVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialRemapIndexPerImportVersion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialRemapIndexPerImportVersion_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImportVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalSectionInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalSectionInfoMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionInfoMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceModels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceModels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceModels_Inner;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMesh_FindSocket, "FindSocket" }, // 2128475021
		{ &Z_Construct_UFunction_UStaticMesh_GetBoundingBox, "GetBoundingBox" }, // 3655557709
		{ &Z_Construct_UFunction_UStaticMesh_GetBounds, "GetBounds" }, // 1500872221
		{ &Z_Construct_UFunction_UStaticMesh_GetMaterial, "GetMaterial" }, // 1229903013
		{ &Z_Construct_UFunction_UStaticMesh_GetMaterialIndex, "GetMaterialIndex" }, // 600145519
		{ &Z_Construct_UFunction_UStaticMesh_GetNumLODs, "GetNumLODs" }, // 2501176552
		{ &Z_Construct_UFunction_UStaticMesh_GetNumSections, "GetNumSections" }, // 2101281730
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UStaticMesh_SetMaterial, "SetMaterial" }, // 925329972
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/StaticMesh.h" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A StaticMesh is a piece of geometry that consists of a static set of polygons.\nStatic Meshes can be translated, rotated, and scaled, but they cannot have their vertices animated in any way. As such, they are more efficient\nto render than other types of geometry such as USkeletalMesh, and they are often the basic building block of levels created in the engine.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/StaticMeshes/\n@see AStaticMeshActor, UStaticMeshComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Pre-build navigation collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision = { "NavCollision", nullptr, (EPropertyFlags)0x00120000002a2009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, NavCollision), Z_Construct_UClass_UNavCollisionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh_MetaData[] = {
		{ "Category", "EditableMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The editable mesh representation of this static mesh // @todo: Maybe we don't want this visible in the details panel in the end; for now, this might aid debugging." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh = { "EditableMesh", nullptr, (EPropertyFlags)0x00120000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, EditableMesh), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00200c8000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, AssetUserData), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Index of an element to ignore while gathering streaming texture factors.\nThis is useful to disregard automatically generated vertex data which breaks texture factor heuristics." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor = { "ElementToIgnoreForTexFactor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, ElementToIgnoreForTexFactor), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Original mesh bounds extended with Positive/NegativeBoundsExtension" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds = { "ExtendedBounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, ExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Bound extension values in the negative direction of XYZ, positive value increases bound size" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension = { "NegativeBoundsExtension", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, NegativeBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Bound extension values in the positive direction of XYZ, positive value increases bound size" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension = { "PositiveBoundsExtension", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, PositiveBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the StaticMeshComponent." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, Sockets), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "DisplayName", "LOD For Occluder Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Specifies which mesh LOD to use as occluder geometry for software occlusion\nSet to -1 to not use this mesh as occluder" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh = { "LODForOccluderMesh", nullptr, (EPropertyFlags)0x0010040800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LODForOccluderMesh), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If the user has modified collision in any way or has custom collision imported. Used for determining if to auto generate collision on import" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bCustomizedCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision = { "bCustomizedCollision", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The stored camera position to use as a default for the static mesh editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition = { "EditorCameraPosition", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, EditorCameraPosition), Z_Construct_UScriptStruct_FAssetEditorOrbitCameraPosition, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00120408000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Path to the resource used to construct this static mesh" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Importing data and options used for this mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0012000800080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, will keep geometry data CPU-accessible in cooked builds, rather than uploading to GPU memory and releasing it from CPU memory.\nThis is required if you wish to access StaticMesh geometry data on the CPU at runtime in cooked builds (e.g. to convert StaticMesh to ProceduralMeshComponent)" },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bAllowCPUAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Mesh supports uniformly distributed sampling in constant time.\nMemory cost is 8 bytes per triangle.\nExample usage is uniform spawning of particles." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bSupportUniformlyDistributedSampling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling = { "bSupportUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, mesh will have NavCollision property with additional data for navmesh generation and usage.\n          Set to false for distant meshes (always outside navigation bounds) to save memory on collision data." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bHasNavigationData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData = { "bHasNavigationData", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, strips unwanted complex collision data aka kDOP tree when cooking for consoles.\n              On the Playstation 3 data of this mesh will be stored in video memory." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bStripComplexCollisionForConsole_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole = { "bStripComplexCollisionForConsole", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Whether to generate a distance field for this mesh, which can be used by DistanceField Indirect Shadows.\nThis is ignored if the project's 'Generate Mesh Distance Fields' setting is enabled." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bGenerateMeshDistanceField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField = { "bGenerateMeshDistanceField", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "DisplayName", "LOD For Collision" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Specifies which mesh LOD to use for complex (per-poly) collision.\nSometimes it can be desirable to use a lower poly representation for collision to reduce memory usage, improve performance and behaviour.\nCollision representation does not change based on distance to camera." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision = { "LODForCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LODForCollision), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Physics data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0012000000282009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias = { "DistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, DistanceFieldSelfShadowBias), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The light map coordinate index" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex = { "LightMapCoordinateIndex", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LightMapCoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ClampMax", "4096" },
		{ "FixedIncrement", "4.0" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The light map resolution" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution = { "LightMapResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LightMapResolution), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity = { "LightmapUVDensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LightmapUVDensity), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials = { "StaticMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, StaticMaterials), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_Inner = { "StaticMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Bias multiplier for Light Propagation Volume lighting" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier = { "LpvBiasMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LpvBiasMultiplier), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Minimum LOD to use for rendering.  This is the default setting for the mesh and can be overridden by component settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, MinLOD), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Materials used by this static mesh. Individual sections index in to this array." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, Materials_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "If true, the screen sizees at which LODs swap are computed automatically." },
	};
#endif
	void Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_SetBit(void* Obj)
	{
		((UStaticMesh*)Obj)->bAutoComputeLODScreenSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize = { "bAutoComputeLODScreenSize", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStaticMesh), &Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The lightmap UV generation version used during the last derived data build" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion = { "LightmapUVVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LightmapUVVersion), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion = { "MaterialRemapIndexPerImportVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, MaterialRemapIndexPerImportVersion), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_Inner = { "MaterialRemapIndexPerImportVersion", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialRemapIndex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The last import version" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion = { "ImportVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, ImportVersion), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup_MetaData[] = {
		{ "Category", "LodSettings" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "The LOD group to which this mesh belongs." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010010800000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, LODGroup), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "We need the OriginalSectionInfoMap to be able to build mesh in a non destructive way. Reduce has to play with SectionInfoMap in case some sections disappear.\nThis member will be update in the following situation\n1. After a static mesh import/reimport\n2. Postload, if the OriginalSectionInfoMap is empty, we will fill it with the current SectionInfoMap\n\nWe do not update it when the user shuffle section in the staticmesh editor because the OriginalSectionInfoMap must always be in sync with the saved rawMesh bulk data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap = { "OriginalSectionInfoMap", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, OriginalSectionInfoMap), Z_Construct_UScriptStruct_FMeshSectionInfoMap, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Map of LOD+Section index to per-section info." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap = { "SectionInfoMap", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, SectionInfoMap), Z_Construct_UScriptStruct_FMeshSectionInfoMap, METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StaticMesh.h" },
		{ "ToolTip", "Imported raw mesh bulk data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels = { "SourceModels", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMesh, SourceModels), METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_Inner = { "SourceModels", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMeshSourceModel, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_NavCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditableMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ElementToIgnoreForTexFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ExtendedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_NegativeBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_PositiveBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Sockets_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForOccluderMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bCustomizedCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_EditorCameraPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ThumbnailInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFileTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAllowCPUAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bSupportUniformlyDistributedSampling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bHasNavigationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bStripComplexCollisionForConsole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bGenerateMeshDistanceField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODForCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_BodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_DistanceFieldSelfShadowBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapCoordinateIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightMapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_StaticMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LpvBiasMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MinLOD,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_bAutoComputeLODScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LightmapUVVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_MaterialRemapIndexPerImportVersion_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_ImportVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_LODGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_OriginalSectionInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SectionInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMesh_Statics::NewProp_SourceModels_Inner,
#endif // WITH_EDITORONLY_DATA
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStaticMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMesh, IInterface_CollisionDataProvider), false },
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UStaticMesh, IInterface_AssetUserData), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMesh_Statics::ClassParams = {
		&UStaticMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStaticMesh_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMesh, 4214964632);
	template<> ENGINE_API UClass* StaticClass<UStaticMesh>()
	{
		return UStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMesh(Z_Construct_UClass_UStaticMesh, &UStaticMesh::StaticClass, TEXT("/Script/Engine"), TEXT("UStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMesh);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMesh)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
