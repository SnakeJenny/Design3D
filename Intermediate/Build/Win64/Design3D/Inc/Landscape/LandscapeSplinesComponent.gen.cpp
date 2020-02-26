// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeSplinesComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplinesComponent() {}
// Cross Module References
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FForeignWorldSplineData();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FForeignSplineSegmentData();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FForeignControlPointData();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	LANDSCAPE_API UFunction* Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FForeignWorldSplineData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForeignWorldSplineData, Z_Construct_UPackage__Script_Landscape(), TEXT("ForeignWorldSplineData"), sizeof(FForeignWorldSplineData), Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FForeignWorldSplineData>()
{
	return FForeignWorldSplineData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForeignWorldSplineData(FForeignWorldSplineData::StaticStruct, TEXT("/Script/Landscape"), TEXT("ForeignWorldSplineData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFForeignWorldSplineData
{
	FScriptStruct_Landscape_StaticRegisterNativesFForeignWorldSplineData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForeignWorldSplineData")),new UScriptStruct::TCppStructOps<FForeignWorldSplineData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFForeignWorldSplineData;
	struct Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignSplineSegmentData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForeignSplineSegmentData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignSplineSegmentData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignSplineSegmentDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForeignSplineSegmentDataMap;
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_ForeignSplineSegmentDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignSplineSegmentDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignControlPointData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ForeignControlPointData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignControlPointData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignControlPointDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForeignControlPointDataMap;
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_ForeignControlPointDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignControlPointDataMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForeignWorldSplineData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData = { "ForeignSplineSegmentData", nullptr, (EPropertyFlags)0x0010008800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignWorldSplineData, ForeignSplineSegmentData), METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData_Inner = { "ForeignSplineSegmentData", nullptr, (EPropertyFlags)0x0000008800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FForeignSplineSegmentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap = { "ForeignSplineSegmentDataMap", nullptr, (EPropertyFlags)0x0010008820000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignWorldSplineData, ForeignSplineSegmentDataMap_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_MetaData)) };
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_Key_KeyProp = { "ForeignSplineSegmentDataMap_Key", nullptr, (EPropertyFlags)0x0004008800000000, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_ValueProp = { "ForeignSplineSegmentDataMap", nullptr, (EPropertyFlags)0x0000008820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FForeignSplineSegmentData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData = { "ForeignControlPointData", nullptr, (EPropertyFlags)0x0010008800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignWorldSplineData, ForeignControlPointData), METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData_Inner = { "ForeignControlPointData", nullptr, (EPropertyFlags)0x0000008800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FForeignControlPointData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap = { "ForeignControlPointDataMap", nullptr, (EPropertyFlags)0x0010008820000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignWorldSplineData, ForeignControlPointDataMap_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_MetaData)) };
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_Key_KeyProp = { "ForeignControlPointDataMap_Key", nullptr, (EPropertyFlags)0x0004008800000000, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_ValueProp = { "ForeignControlPointDataMap", nullptr, (EPropertyFlags)0x0000008820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FForeignControlPointData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignSplineSegmentDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::NewProp_ForeignControlPointDataMap_ValueProp,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"ForeignWorldSplineData",
		sizeof(FForeignWorldSplineData),
		alignof(FForeignWorldSplineData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForeignWorldSplineData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForeignWorldSplineData"), sizeof(FForeignWorldSplineData), Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForeignWorldSplineData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForeignWorldSplineData_Hash() { return 3858293009U; }
class UScriptStruct* FForeignSplineSegmentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForeignSplineSegmentData, Z_Construct_UPackage__Script_Landscape(), TEXT("ForeignSplineSegmentData"), sizeof(FForeignSplineSegmentData), Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FForeignSplineSegmentData>()
{
	return FForeignSplineSegmentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForeignSplineSegmentData(FForeignSplineSegmentData::StaticStruct, TEXT("/Script/Landscape"), TEXT("ForeignSplineSegmentData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFForeignSplineSegmentData
{
	FScriptStruct_Landscape_StaticRegisterNativesFForeignSplineSegmentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForeignSplineSegmentData")),new UScriptStruct::TCppStructOps<FForeignSplineSegmentData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFForeignSplineSegmentData;
	struct Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModificationKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForeignSplineSegmentData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0014000800000000, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignSplineSegmentData, Identifier), Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_Identifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0010008800000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignSplineSegmentData, MeshComponents), METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_ModificationKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_ModificationKey = { "ModificationKey", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignSplineSegmentData, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_ModificationKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_ModificationKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_MeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::NewProp_ModificationKey,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"ForeignSplineSegmentData",
		sizeof(FForeignSplineSegmentData),
		alignof(FForeignSplineSegmentData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForeignSplineSegmentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForeignSplineSegmentData"), sizeof(FForeignSplineSegmentData), Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForeignSplineSegmentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForeignSplineSegmentData_Hash() { return 1515369643U; }
class UScriptStruct* FForeignControlPointData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FForeignControlPointData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForeignControlPointData, Z_Construct_UPackage__Script_Landscape(), TEXT("ForeignControlPointData"), sizeof(FForeignControlPointData), Get_Z_Construct_UScriptStruct_FForeignControlPointData_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FForeignControlPointData>()
{
	return FForeignControlPointData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForeignControlPointData(FForeignControlPointData::StaticStruct, TEXT("/Script/Landscape"), TEXT("ForeignControlPointData"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFForeignControlPointData
{
	FScriptStruct_Landscape_StaticRegisterNativesFForeignControlPointData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForeignControlPointData")),new UScriptStruct::TCppStructOps<FForeignControlPointData>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFForeignControlPointData;
	struct Z_Construct_UScriptStruct_FForeignControlPointData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModificationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModificationKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignControlPointData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "structs for ForeignWorldSplineDataMap\nthese are editor-only, but we don't have the concept of an editor-only USTRUCT" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForeignControlPointData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0014000800000000, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignControlPointData, Identifier), Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_Identifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignControlPointData, MeshComponent), Z_Construct_UClass_UControlPointMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_ModificationKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_ModificationKey = { "ModificationKey", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForeignControlPointData, ModificationKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_ModificationKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_ModificationKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForeignControlPointData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_Identifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForeignControlPointData_Statics::NewProp_ModificationKey,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForeignControlPointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"ForeignControlPointData",
		sizeof(FForeignControlPointData),
		alignof(FForeignControlPointData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FForeignControlPointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForeignControlPointData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForeignControlPointData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForeignControlPointData"), sizeof(FForeignControlPointData), Get_Z_Construct_UScriptStruct_FForeignControlPointData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForeignControlPointData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForeignControlPointData_Hash() { return 2536491218U; }
	void ULandscapeSplinesComponent::StaticRegisterNativesULandscapeSplinesComponent()
	{
		UClass* Class = ULandscapeSplinesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSplineMeshComponents", &ULandscapeSplinesComponent::execGetSplineMeshComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics
	{
		struct LandscapeSplinesComponent_eventGetSplineMeshComponents_Parms
		{
			TArray<USplineMeshComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeSplinesComponent_eventGetSplineMeshComponents_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapeSplines" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Get a list of spline mesh components representing this landscape spline (Editor only)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeSplinesComponent, nullptr, "GetSplineMeshComponents", sizeof(LandscapeSplinesComponent_eventGetSplineMeshComponents_Parms), Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister()
	{
		return ULandscapeSplinesComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeSplinesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedForeignMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CookedForeignMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CookedForeignMeshComponents_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForeignWorldSplineDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForeignWorldSplineDataMap;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ForeignWorldSplineDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForeignWorldSplineDataMap_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlPoints_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSplineEditorMesh_MetaData[];
#endif
		static void NewProp_bShowSplineEditorMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSplineEditorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineEditorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineEditorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPointSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlPointSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineResolution;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeSplinesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandscapeSplinesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeSplinesComponent_GetSplineMeshComponents, "GetSplineMeshComponents" }, // 400896258
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "LandscapeSplinesComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "ULandscapeSplinesComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "References to components owned by landscape splines in other levels\nfor cooked build (uncooked keeps references via ForeignWorldSplineDataMap)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents = { "CookedForeignMeshComponents", nullptr, (EPropertyFlags)0x0020488000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, CookedForeignMeshComponents), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents_Inner = { "CookedForeignMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Serialized" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap = { "ForeignWorldSplineDataMap", nullptr, (EPropertyFlags)0x0020488800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, ForeignWorldSplineDataMap), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_Key_KeyProp = { "ForeignWorldSplineDataMap_Key", nullptr, (EPropertyFlags)0x0004008800000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_ValueProp = { "ForeignWorldSplineDataMap", nullptr, (EPropertyFlags)0x0000008800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FForeignWorldSplineData, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0020480000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, Segments), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0020480000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, ControlPoints), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Whether we are in-editor and showing spline editor meshes" },
	};
#endif
	void Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh_SetBit(void* Obj)
	{
		((ULandscapeSplinesComponent*)Obj)->bShowSplineEditorMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh = { "bShowSplineEditorMesh", nullptr, (EPropertyFlags)0x0010000c00002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeSplinesComponent), &Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineEditorMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Mesh used to draw splines that have no mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineEditorMesh = { "SplineEditorMesh", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, SplineEditorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineEditorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineEditorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPointSprite_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Sprite used to draw control points" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPointSprite = { "ControlPointSprite", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, ControlPointSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPointSprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPointSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Color to use to draw the splines" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineColor = { "SplineColor", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, SplineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineResolution_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeSplinesComponent.h" },
		{ "ToolTip", "Resolution of the spline, in distance per point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineResolution = { "SplineResolution", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSplinesComponent, SplineResolution), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineResolution_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeSplinesComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_CookedForeignMeshComponents_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ForeignWorldSplineDataMap_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_Segments_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPoints_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_bShowSplineEditorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineEditorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_ControlPointSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSplinesComponent_Statics::NewProp_SplineResolution,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeSplinesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSplinesComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSplinesComponent_Statics::ClassParams = {
		&ULandscapeSplinesComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULandscapeSplinesComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeSplinesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeSplinesComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeSplinesComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeSplinesComponent, 801783966);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSplinesComponent>()
	{
		return ULandscapeSplinesComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeSplinesComponent(Z_Construct_UClass_ULandscapeSplinesComponent, &ULandscapeSplinesComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeSplinesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSplinesComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeSplinesComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
