// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/WorldComposition.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldComposition() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldComposition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldComposition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
// End Cross Module References
	void UWorldComposition::StaticRegisterNativesUWorldComposition()
	{
	}
	UClass* Z_Construct_UClass_UWorldComposition_NoRegister()
	{
		return UWorldComposition::StaticClass();
	}
	struct Z_Construct_UClass_UWorldComposition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RebaseOriginDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RebaseOriginDistance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockTilesLocation_MetaData[];
#endif
		static void NewProp_bLockTilesLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockTilesLocation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRebaseOriginIn3DSpace_MetaData[];
#endif
		static void NewProp_bRebaseOriginIn3DSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebaseOriginIn3DSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadAllTilesDuringCinematic_MetaData[];
#endif
		static void NewProp_bLoadAllTilesDuringCinematic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadAllTilesDuringCinematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesStreamingTimeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_TilesStreamingTimeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesStreaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TilesStreaming;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TilesStreaming_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldComposition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/WorldComposition.h" },
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "WorldComposition represents world structure:\n    - Holds list of all level packages participating in this world and theirs base parameters (bounding boxes, offset from origin)\n    - Holds list of streaming level objects to stream in and out based on distance from current view point\n - Handles properly levels repositioning during level loading and saving" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Maximum distance to current view point where we should initiate origin rebasing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance = { "RebaseOriginDistance", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldComposition, RebaseOriginDistance), METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Whether all tiles locations are locked" },
	};
#endif
	void Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_SetBit(void* Obj)
	{
		((UWorldComposition*)Obj)->bLockTilesLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation = { "bLockTilesLocation", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldComposition), &Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Whether to rebase origin in 3D space, otherwise only on XY plane" },
	};
#endif
	void Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_SetBit(void* Obj)
	{
		((UWorldComposition*)Obj)->bRebaseOriginIn3DSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace = { "bRebaseOriginIn3DSpace", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldComposition), &Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Whether all distance dependent tiles should be loaded and visible during cinematic" },
	};
#endif
	void Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_SetBit(void* Obj)
	{
		((UWorldComposition*)Obj)->bLoadAllTilesDuringCinematic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic = { "bLoadAllTilesDuringCinematic", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldComposition), &Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Time threshold between tile streaming state changes" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold = { "TilesStreamingTimeThreshold", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldComposition, TilesStreamingTimeThreshold), METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/WorldComposition.h" },
		{ "ToolTip", "Streaming level objects for each tile" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming = { "TilesStreaming", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldComposition, TilesStreaming), METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_Inner = { "TilesStreaming", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldComposition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_RebaseOriginDistance,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLockTilesLocation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_bRebaseOriginIn3DSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_bLoadAllTilesDuringCinematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreamingTimeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldComposition_Statics::NewProp_TilesStreaming_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldComposition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldComposition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldComposition_Statics::ClassParams = {
		&UWorldComposition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldComposition_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldComposition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWorldComposition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldComposition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldComposition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldComposition, 1361711068);
	template<> ENGINE_API UClass* StaticClass<UWorldComposition>()
	{
		return UWorldComposition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldComposition(Z_Construct_UClass_UWorldComposition, &UWorldComposition::StaticClass, TEXT("/Script/Engine"), TEXT("UWorldComposition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldComposition);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldComposition)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
