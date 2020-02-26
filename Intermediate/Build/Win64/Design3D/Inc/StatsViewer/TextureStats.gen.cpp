// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsViewer/Classes/TextureStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureStats() {}
// Cross Module References
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_ETextureObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
	STATSVIEWER_API UClass* Z_Construct_UClass_UTextureStats_NoRegister();
	STATSVIEWER_API UClass* Z_Construct_UClass_UTextureStats();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	static UEnum* ETextureObjectSets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_ETextureObjectSets, Z_Construct_UPackage__Script_StatsViewer(), TEXT("ETextureObjectSets"));
		}
		return Singleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<ETextureObjectSets>()
	{
		return ETextureObjectSets_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureObjectSets(ETextureObjectSets_StaticEnum, TEXT("/Script/StatsViewer"), TEXT("ETextureObjectSets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Hash() { return 887670787U; }
	UEnum* Z_Construct_UEnum_StatsViewer_ETextureObjectSets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsViewer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureObjectSets"), 0, Get_Z_Construct_UEnum_StatsViewer_ETextureObjectSets_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TextureObjectSet_CurrentStreamingLevel", (int64)TextureObjectSet_CurrentStreamingLevel },
				{ "TextureObjectSet_AllStreamingLevels", (int64)TextureObjectSet_AllStreamingLevels },
				{ "TextureObjectSet_SelectedActors", (int64)TextureObjectSet_SelectedActors },
				{ "TextureObjectSet_SelectedMaterials", (int64)TextureObjectSet_SelectedMaterials },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/TextureStats.h" },
				{ "TextureObjectSet_AllStreamingLevels.DisplayName", "All Streaming Levels" },
				{ "TextureObjectSet_AllStreamingLevels.ToolTip", "Display texture statistics for all streaming levels" },
				{ "TextureObjectSet_CurrentStreamingLevel.DisplayName", "Current Streaming Level" },
				{ "TextureObjectSet_CurrentStreamingLevel.ToolTip", "Display texture statistics for the current streaming level" },
				{ "TextureObjectSet_SelectedActors.DisplayName", "Selected Actor(s)" },
				{ "TextureObjectSet_SelectedActors.ToolTip", "Display texture statistics of selected Actors" },
				{ "TextureObjectSet_SelectedMaterials.DisplayName", "Selected Materials(s)" },
				{ "TextureObjectSet_SelectedMaterials.ToolTip", "Display texture statistics of selected Materials" },
				{ "ToolTip", "Enum defining the object sets for this stats object" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
				nullptr,
				"ETextureObjectSets",
				"ETextureObjectSets",
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
	void UTextureStats::StaticRegisterNativesUTextureStats()
	{
	}
	UClass* Z_Construct_UClass_UTextureStats_NoRegister()
	{
		return UTextureStats::StaticClass();
	}
	struct Z_Construct_UClass_UTextureStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTimeRendered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastTimeRendered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumUses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumUses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyLoadedKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullyLoadedKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentKB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentKB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxDim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Texture Stats" },
		{ "IncludePath", "TextureStats.h" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ObjectSetType", "ETextureObjectSets" },
		{ "ToolTip", "Statistics page for textures." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "200" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Texture path without the name \"package.[group.]\"" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, Path), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "78" },
		{ "DisplayName", "Last Seen" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Relative time it was used for rendering the last time" },
		{ "Unit", "s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered = { "LastTimeRendered", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, LastTimeRendered), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "74" },
		{ "DisplayName", "Uses" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The number of times the texture is used" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses = { "NumUses", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, NumUses), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "110" },
		{ "DisplayName", "Fully Loaded Memory" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ShowTotal", "true" },
		{ "SortMode", "Descending" },
		{ "ToolTip", "The memory used when the texture is fully loaded in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB = { "FullyLoadedKB", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, FullyLoadedKB), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "80" },
		{ "DisplayName", "Current Memory" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The memory used currently in KB" },
		{ "Unit", "KB" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB = { "CurrentKB", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, CurrentKB), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "70" },
		{ "DisplayName", "LODBias" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "LOD Bias for this texture. (Texture LODBias + Texture group)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, LODBias), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "94" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "The texture group, TEXTUREGROUP_MAX is not used, e.g. TEXTUREGROUP_World" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, Group), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Group_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "96" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "The texture format, e.g. PF_DXT1" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Format_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "90" },
		{ "DisplayName", "Current Dimension" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Current Dimension e.g 256x256" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim = { "CurrentDim", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, CurrentDim), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "90" },
		{ "DisplayName", "Max Dimension" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Max Dimension e.g. 256x256, not including the format" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim = { "MaxDim", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, MaxDim), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "60" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Texture type e.g. 2D, 3D, Cube, \"\" if not known, ..." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, Type), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "100" },
		{ "DisplayName", "Actor(s)" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Actor(s) - click to select & zoom Actor(s)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014010000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, Actors), METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "100" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/TextureStats.h" },
		{ "ToolTip", "Texture - click to go to asset" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014010000020001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextureStats, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_LastTimeRendered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_NumUses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_FullyLoadedKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentKB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_LODBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_CurrentDim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_MaxDim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureStats_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureStats_Statics::ClassParams = {
		&UTextureStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureStats_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureStats_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureStats, 502246643);
	template<> STATSVIEWER_API UClass* StaticClass<UTextureStats>()
	{
		return UTextureStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureStats(Z_Construct_UClass_UTextureStats, &UTextureStats::StaticClass, TEXT("/Script/StatsViewer"), TEXT("UTextureStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
