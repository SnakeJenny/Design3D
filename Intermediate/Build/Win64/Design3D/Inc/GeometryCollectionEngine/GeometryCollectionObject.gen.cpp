// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionObject.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionObject() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UGeometryCollection::StaticRegisterNativesUGeometryCollection()
	{
	}
	UClass* Z_Construct_UClass_UGeometryCollection_NoRegister()
	{
		return UGeometryCollection::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSelectedMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneSelectedMaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorMaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteriorMaterialIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersistentGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryCollection/GeometryCollectionObject.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "UGeometryCollectionObject (UObject)\n\nUObject wrapper for the FGeometryCollection" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex = { "BoneSelectedMaterialIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, BoneSelectedMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_InteriorMaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_InteriorMaterialIndex = { "InteriorMaterialIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, InteriorMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_InteriorMaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_InteriorMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Guid that can be invalidated on demand - essentially a 'version' that should be changed when a structural change is made to\nthe geometry collection. This signals to any caches that attempt to link to a geometry collection whether the collection\nis still valid (hasn't structurally changed post-recording)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid = { "StateGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, StateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
		{ "ToolTip", "Guid created on construction of this collection. It should be used to uniquely identify this collection" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid = { "PersistentGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, PersistentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeometryCollection, Materials), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_BoneSelectedMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_InteriorMaterialIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_StateGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_PersistentGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollection_Statics::NewProp_Materials_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollection_Statics::ClassParams = {
		&UGeometryCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometryCollection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeometryCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeometryCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeometryCollection, 1822867697);
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollection>()
	{
		return UGeometryCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeometryCollection(Z_Construct_UClass_UGeometryCollection, &UGeometryCollection::StaticClass, TEXT("/Script/GeometryCollectionEngine"), TEXT("UGeometryCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCollection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
