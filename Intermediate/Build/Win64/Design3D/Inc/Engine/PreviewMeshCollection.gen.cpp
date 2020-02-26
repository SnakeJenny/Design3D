// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PreviewMeshCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewMeshCollection() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPreviewMeshCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPreviewMeshCollection();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPreviewCollectionInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FPreviewMeshCollectionEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry, Z_Construct_UPackage__Script_Engine(), TEXT("PreviewMeshCollectionEntry"), sizeof(FPreviewMeshCollectionEntry), Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPreviewMeshCollectionEntry>()
{
	return FPreviewMeshCollectionEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreviewMeshCollectionEntry(FPreviewMeshCollectionEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("PreviewMeshCollectionEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPreviewMeshCollectionEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFPreviewMeshCollectionEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PreviewMeshCollectionEntry")),new UScriptStruct::TCppStructOps<FPreviewMeshCollectionEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPreviewMeshCollectionEntry;
	struct Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
		{ "ToolTip", "An entry in a preview mesh collection" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewMeshCollectionEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Skeletal Mesh" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
		{ "ToolTip", "The skeletal mesh to display" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewMeshCollectionEntry, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewProp_SkeletalMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PreviewMeshCollectionEntry",
		sizeof(FPreviewMeshCollectionEntry),
		alignof(FPreviewMeshCollectionEntry),
		Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreviewMeshCollectionEntry"), sizeof(FPreviewMeshCollectionEntry), Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Hash() { return 736991235U; }
	void UPreviewMeshCollection::StaticRegisterNativesUPreviewMeshCollection()
	{
	}
	UClass* Z_Construct_UClass_UPreviewMeshCollection_NoRegister()
	{
		return UPreviewMeshCollection::StaticClass();
	}
	struct Z_Construct_UClass_UPreviewMeshCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreviewMeshCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMeshCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/PreviewMeshCollection.h" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
		{ "ToolTip", "A simple collection of skeletal meshes used for in-editor preview" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
		{ "ToolTip", "The skeletal meshes that this collection contains" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPreviewMeshCollection, SkeletalMeshes), METADATA_PARAMS(Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes_Inner = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Classes/Engine/PreviewMeshCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPreviewMeshCollection, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_Skeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_Skeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPreviewMeshCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_SkeletalMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewMeshCollection_Statics::NewProp_Skeleton,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPreviewMeshCollection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPreviewCollectionInterface_NoRegister, (int32)VTABLE_OFFSET(UPreviewMeshCollection, IPreviewCollectionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreviewMeshCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreviewMeshCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPreviewMeshCollection_Statics::ClassParams = {
		&UPreviewMeshCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPreviewMeshCollection_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollection_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPreviewMeshCollection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPreviewMeshCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreviewMeshCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPreviewMeshCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPreviewMeshCollection, 3526290284);
	template<> ENGINE_API UClass* StaticClass<UPreviewMeshCollection>()
	{
		return UPreviewMeshCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPreviewMeshCollection(Z_Construct_UClass_UPreviewMeshCollection, &UPreviewMeshCollection::StaticClass, TEXT("/Script/Engine"), TEXT("UPreviewMeshCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewMeshCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
