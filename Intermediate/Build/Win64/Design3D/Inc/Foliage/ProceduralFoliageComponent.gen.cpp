// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/ProceduralFoliageComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageComponent() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister();
// End Cross Module References
	void UProceduralFoliageComponent::StaticRegisterNativesUProceduralFoliageComponent()
	{
	}
	UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister()
	{
		return UProceduralFoliageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralFoliageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawningVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawningVolume;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebugTiles_MetaData[];
#endif
		static void NewProp_bShowDebugTiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebugTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowFoliage_MetaData[];
#endif
		static void NewProp_bAllowFoliage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTranslucent_MetaData[];
#endif
		static void NewProp_bAllowTranslucent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTranslucent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStaticMesh_MetaData[];
#endif
		static void NewProp_bAllowStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowBSP_MetaData[];
#endif
		static void NewProp_bAllowBSP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBSP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowLandscape_MetaData[];
#endif
		static void NewProp_bAllowLandscape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowLandscape;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageSpawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralFoliageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ProceduralFoliageComponent.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid = { "ProceduralGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageComponent, ProceduralGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume = { "SpawningVolume", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageComponent, SpawningVolume), Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to visualize the tiles used for the foliage spawner simulation" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bShowDebugTiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles = { "bShowDebugTiles", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on other blocking foliage geometry" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowFoliage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage = { "bAllowFoliage", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on translucent geometry" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowTranslucent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent = { "bAllowTranslucent", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on StaticMesh" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh = { "bAllowStaticMesh", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on BSP" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowBSP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP = { "bAllowBSP", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "Whether to place foliage on landscape" },
	};
#endif
	void Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_SetBit(void* Obj)
	{
		((UProceduralFoliageComponent*)Obj)->bAllowLandscape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape = { "bAllowLandscape", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProceduralFoliageComponent), &Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "The amount of overlap between simulation tiles (in cm)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap = { "TileOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageComponent, TileOverlap), METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageComponent.h" },
		{ "ToolTip", "The procedural foliage spawner used to generate foliage instances within this volume." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner = { "FoliageSpawner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProceduralFoliageComponent, FoliageSpawner), Z_Construct_UClass_UProceduralFoliageSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_ProceduralGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_SpawningVolume,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bShowDebugTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowTranslucent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowBSP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_bAllowLandscape,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_TileOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralFoliageComponent_Statics::NewProp_FoliageSpawner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralFoliageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralFoliageComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProceduralFoliageComponent_Statics::ClassParams = {
		&UProceduralFoliageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralFoliageComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UProceduralFoliageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralFoliageComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProceduralFoliageComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProceduralFoliageComponent, 325317890);
	template<> FOLIAGE_API UClass* StaticClass<UProceduralFoliageComponent>()
	{
		return UProceduralFoliageComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProceduralFoliageComponent(Z_Construct_UClass_UProceduralFoliageComponent, &UProceduralFoliageComponent::StaticClass, TEXT("/Script/Foliage"), TEXT("UProceduralFoliageComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralFoliageComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
