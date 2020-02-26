// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LODActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALODActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALODActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALODActor::StaticRegisterNativesALODActor()
	{
	}
	UClass* Z_Construct_UClass_ALODActor_NoRegister()
	{
		return ALODActor::StaticClass();
	}
	struct Z_Construct_UClass_ALODActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideScreenSize_MetaData[];
#endif
		static void NewProp_bOverrideScreenSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideTransitionScreenSize_MetaData[];
#endif
		static void NewProp_bOverrideTransitionScreenSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideTransitionScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterialMergeSettings_MetaData[];
#endif
		static void NewProp_bOverrideMaterialMergeSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterialMergeSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTrianglesInMergedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumTrianglesInMergedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTrianglesInSubActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumTrianglesInSubActors;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedNumHLODLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CachedNumHLODLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDrawDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDrawDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proxy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALODActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Collision Display Input Blueprint Transform Physics" },
		{ "IncludePath", "Engine/LODActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "LODActor is an instance of an autogenerated StaticMesh Actors by Hierarchical LOD System\nThis is essentially just StaticMeshActor that you can't move or edit, but it contains multiple actors reference\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/LODActor/\n@see UStaticMesh" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "editcondition", "bOverrideScreenSize" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Override screen size value used in mesh reduction, when creating the proxy mesh" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, ScreenSize), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Flag whether or not to use the override ScreenSize when creating the proxy mesh" },
	};
#endif
	void Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_SetBit(void* Obj)
	{
		((ALODActor*)Obj)->bOverrideScreenSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize = { "bOverrideScreenSize", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALODActor), &Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "editcondition", "bOverrideTransitionScreenSize" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Override transition screen size value, determines the screen size at which the proxy is visible\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize = { "TransitionScreenSize", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, TransitionScreenSize), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Flag whether or not to use the override TransitionScreenSize for this proxy mesh" },
	};
#endif
	void Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_SetBit(void* Obj)
	{
		((ALODActor*)Obj)->bOverrideTransitionScreenSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize = { "bOverrideTransitionScreenSize", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALODActor), &Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "editcondition", "bOverrideMaterialMergeSettings" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Override Material Settings, used when creating the proxy mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Flag whether or not to use the override MaterialSettings when creating the proxy mesh" },
	};
#endif
	void Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_SetBit(void* Obj)
	{
		((ALODActor*)Obj)->bOverrideMaterialMergeSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings = { "bOverrideMaterialMergeSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALODActor), &Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Cached number of triangles contained in the SubActors" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh = { "NumTrianglesInMergedMesh", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, NumTrianglesInMergedMesh), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Cached number of triangles contained in the SubActors" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors = { "NumTrianglesInSubActors", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, NumTrianglesInSubActors), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels = { "CachedNumHLODLevels", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, CachedNumHLODLevels), nullptr, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_MetaData[] = {
		{ "Category", "LODActor" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors = { "SubActors", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, SubActors), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_Inner = { "SubActors", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel_MetaData[] = {
		{ "Category", "LODActor" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "The hierarchy level of this actor; the first tier of HLOD is level 1, the second tier is level 2 and so on." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, LODLevel), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance_MetaData[] = {
		{ "Category", "LODActor" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "what distance do you want this to show up instead of SubActors" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance = { "LODDrawDistance", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, LODDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LODActor" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "The key used to validate this actor against the proxy" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, Key), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "LODActor" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "The mesh proxy used to display this LOD" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, Proxy), Z_Construct_UClass_UHLODProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "LODActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "disable display of this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALODActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALODActor_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALODActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALODActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALODActor_Statics::ClassParams = {
		&ALODActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALODActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALODActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALODActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALODActor, 131205735);
	template<> ENGINE_API UClass* StaticClass<ALODActor>()
	{
		return ALODActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALODActor(Z_Construct_UClass_ALODActor, &ALODActor::StaticClass, TEXT("/Script/Engine"), TEXT("ALODActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALODActor);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ALODActor)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
