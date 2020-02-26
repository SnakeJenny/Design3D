// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionCache() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionCache_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionCache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	GEOMETRYCOLLECTIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRecordedTransformTrack();
// End Cross Module References
	void UGeometryCollectionCache::StaticRegisterNativesUGeometryCollectionCache()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCollectionCache_NoRegister()
	{
		return UGeometryCollectionCache::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollectionCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibleCollectionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompatibleCollectionState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SupportedCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollectionCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCache_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionCache.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCache.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCache.h" },
		{ "ToolTip", "Guid pulled from the collection when the recording was last saved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState = { "CompatibleCollectionState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionCache, CompatibleCollectionState), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCache.h" },
		{ "ToolTip", "The collection that we recorded the data from" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection = { "SupportedCollection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionCache, SupportedCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionCache.h" },
		{ "ToolTip", "The recorded data from the simulation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData = { "RecordedData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollectionCache, RecordedData), Z_Construct_UScriptStruct_FRecordedTransformTrack, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_CompatibleCollectionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_SupportedCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionCache_Statics::NewProp_RecordedData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollectionCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionCache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionCache_Statics::ClassParams = {
		&UGeometryCollectionCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCollectionCache_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionCache_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollectionCache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCollectionCache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCollectionCache, 3224165850);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionCache>()
	{
		return UGeometryCollectionCache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCollectionCache(Z_Construct_UClass_UGeometryCollectionCache, &UGeometryCollectionCache::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("UGeometryCollectionCache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionCache);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
