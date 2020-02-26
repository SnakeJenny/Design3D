// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsViewer/Classes/StaticMeshLightingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshLightingInfo() {}
// Cross Module References
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
	STATSVIEWER_API UClass* Z_Construct_UClass_UStaticMeshLightingInfo_NoRegister();
	STATSVIEWER_API UClass* Z_Construct_UClass_UStaticMeshLightingInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EStaticMeshLightingInfoObjectSets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets, Z_Construct_UPackage__Script_StatsViewer(), TEXT("EStaticMeshLightingInfoObjectSets"));
		}
		return Singleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<EStaticMeshLightingInfoObjectSets>()
	{
		return EStaticMeshLightingInfoObjectSets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStaticMeshLightingInfoObjectSets(EStaticMeshLightingInfoObjectSets_StaticEnum, TEXT("/Script/StatsViewer"), TEXT("EStaticMeshLightingInfoObjectSets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Hash() { return 1127643195U; }
	UEnum* Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsViewer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStaticMeshLightingInfoObjectSets"), 0, Get_Z_Construct_UEnum_StatsViewer_EStaticMeshLightingInfoObjectSets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "StaticMeshLightingInfoObjectSets_CurrentLevel", (int64)StaticMeshLightingInfoObjectSets_CurrentLevel },
				{ "StaticMeshLightingInfoObjectSets_SelectedLevels", (int64)StaticMeshLightingInfoObjectSets_SelectedLevels },
				{ "StaticMeshLightingInfoObjectSets_AllLevels", (int64)StaticMeshLightingInfoObjectSets_AllLevels },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
				{ "StaticMeshLightingInfoObjectSets_AllLevels.DisplayName", "All Levels" },
				{ "StaticMeshLightingInfoObjectSets_AllLevels.ToolTip", "View static mesh lighting info for all levels" },
				{ "StaticMeshLightingInfoObjectSets_CurrentLevel.DisplayName", "Current Level" },
				{ "StaticMeshLightingInfoObjectSets_CurrentLevel.ToolTip", "View static mesh lighting info for the current level" },
				{ "StaticMeshLightingInfoObjectSets_SelectedLevels.DisplayName", "Selected Levels" },
				{ "StaticMeshLightingInfoObjectSets_SelectedLevels.ToolTip", "View lighting info for selected levels" },
				{ "ToolTip", "Enum defining the object sets for this stats object" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
				nullptr,
				"EStaticMeshLightingInfoObjectSets",
				"EStaticMeshLightingInfoObjectSets",
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
	void UStaticMeshLightingInfo::StaticRegisterNativesUStaticMeshLightingInfo()
	{
	}
	UClass* Z_Construct_UClass_UStaticMeshLightingInfo_NoRegister()
	{
		return UStaticMeshLightingInfo::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshLightingInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowMapLightCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShadowMapLightCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexShadowMapMemoryUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexShadowMapMemoryUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureShadowMapMemoryUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureShadowMapMemoryUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMapLightCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightMapLightCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexLightMapMemoryUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexLightMapMemoryUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureLightMapMemoryUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureLightMapMemoryUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticLightingResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticLightingResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasLightmapTexCoords_MetaData[];
#endif
		static void NewProp_bHasLightmapTexCoords_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasLightmapTexCoords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTextureMapping_MetaData[];
#endif
		static void NewProp_bTextureMapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTextureMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextureMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_StaticMeshActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshLightingInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Static Mesh Lighting Info" },
		{ "IncludePath", "StaticMeshLightingInfo.h" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ObjectSetType", "EStaticMeshLightingInfoObjectSets" },
		{ "ToolTip", "Statistics page for static meshes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "102" },
		{ "DisplayName", "Num SM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Number of lights generating shadow maps on the primitive." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount = { "ShadowMapLightCount", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, ShadowMapLightCount), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "112" },
		{ "DisplayName", "Vertex SM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Estimated memory usage in KB for shadow map vertex data." },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage = { "VertexShadowMapMemoryUsage", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, VertexShadowMapMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "120" },
		{ "DisplayName", "Texture SM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "SortMode", "Descending" },
		{ "ToolTip", "Estimated memory usage in KB for shadow map texel data." },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage = { "TextureShadowMapMemoryUsage", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, TextureShadowMapMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "100" },
		{ "DisplayName", "Num LM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Num lightmap lights" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount = { "LightMapLightCount", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, LightMapLightCount), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "112" },
		{ "DisplayName", "Vertex LM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Estimated memory usage in KB for light map vertex data." },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage = { "VertexLightMapMemoryUsage", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, VertexLightMapMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "118" },
		{ "DisplayName", "Texture LM" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "Estimated memory usage in KB for light map texel data." },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage = { "TextureLightMapMemoryUsage", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, TextureLightMapMemoryUsage), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "DisplayName", "Res" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "The static lighting resolution the texture mapping was estimated with." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution = { "StaticLightingResolution", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, StaticLightingResolution), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "76" },
		{ "DisplayName", "UVs" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "Does the Lightmap have UVs?" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_SetBit(void* Obj)
	{
		((UStaticMeshLightingInfo*)Obj)->bHasLightmapTexCoords = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords = { "bHasLightmapTexCoords", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticMeshLightingInfo), &Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "Current mapping type flag - not displayed" },
	};
#endif
	void Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_SetBit(void* Obj)
	{
		((UStaticMeshLightingInfo*)Obj)->bTextureMapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping = { "bTextureMapping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticMeshLightingInfo), &Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "82" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "Current mapping type string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping = { "TextureMapping", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, TextureMapping), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "150" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "Cached version of the level name this object resides in" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, LevelName), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "The source StaticMesh that is related to this info." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014010000020001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "DisplayName", "Actor" },
		{ "ModuleRelativePath", "Classes/StaticMeshLightingInfo.h" },
		{ "ToolTip", "The actor that is related to this error/warning." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0014010000020001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshLightingInfo, StaticMeshActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshLightingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_ShadowMapLightCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexShadowMapMemoryUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureShadowMapMemoryUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LightMapLightCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_VertexLightMapMemoryUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureLightMapMemoryUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticLightingResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bHasLightmapTexCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_bTextureMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_TextureMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshLightingInfo_Statics::NewProp_StaticMeshActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshLightingInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshLightingInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshLightingInfo_Statics::ClassParams = {
		&UStaticMeshLightingInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaticMeshLightingInfo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshLightingInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshLightingInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMeshLightingInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMeshLightingInfo, 3263313667);
	template<> STATSVIEWER_API UClass* StaticClass<UStaticMeshLightingInfo>()
	{
		return UStaticMeshLightingInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshLightingInfo(Z_Construct_UClass_UStaticMeshLightingInfo, &UStaticMeshLightingInfo::StaticClass, TEXT("/Script/StatsViewer"), TEXT("UStaticMeshLightingInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshLightingInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
