// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Lightmass/LightmappedSurfaceCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmappedSurfaceCollection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmappedSurfaceCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
// End Cross Module References
	void ULightmappedSurfaceCollection::StaticRegisterNativesULightmappedSurfaceCollection()
	{
	}
	UClass* Z_Construct_UClass_ULightmappedSurfaceCollection_NoRegister()
	{
		return ULightmappedSurfaceCollection::StaticClass();
	}
	struct Z_Construct_UClass_ULightmappedSurfaceCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Surfaces;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Surfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Lightmass/LightmappedSurfaceCollection.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_MetaData[] = {
		{ "Category", "LightmappedSurfaceCollection" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
		{ "ToolTip", "An array of the surface indices grouped into a single static lighting mapping." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces = { "Surfaces", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightmappedSurfaceCollection, Surfaces), METADATA_PARAMS(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_Inner = { "Surfaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel_MetaData[] = {
		{ "Category", "LightmappedSurfaceCollection" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmappedSurfaceCollection.h" },
		{ "ToolTip", "The UModel these surfaces come from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel = { "SourceModel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightmappedSurfaceCollection, SourceModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_Surfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::NewProp_SourceModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmappedSurfaceCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::ClassParams = {
		&ULightmappedSurfaceCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightmappedSurfaceCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightmappedSurfaceCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightmappedSurfaceCollection, 1108393190);
	template<> ENGINE_API UClass* StaticClass<ULightmappedSurfaceCollection>()
	{
		return ULightmappedSurfaceCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightmappedSurfaceCollection(Z_Construct_UClass_ULightmappedSurfaceCollection, &ULightmappedSurfaceCollection::StaticClass, TEXT("/Script/Engine"), TEXT("ULightmappedSurfaceCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmappedSurfaceCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
