// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapBuildDataRegistry() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightingBuildQuality();
// End Cross Module References
	void UMapBuildDataRegistry::StaticRegisterNativesUMapBuildDataRegistry()
	{
	}
	UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister()
	{
		return UMapBuildDataRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UMapBuildDataRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelLightingQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LevelLightingQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapBuildDataRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapBuildDataRegistry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/MapBuildDataRegistry.h" },
		{ "ModuleRelativePath", "Classes/Engine/MapBuildDataRegistry.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality_MetaData[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/MapBuildDataRegistry.h" },
		{ "ToolTip", "The lighting quality the level was last built with" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality = { "LevelLightingQuality", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapBuildDataRegistry, LevelLightingQuality), Z_Construct_UEnum_Engine_ELightingBuildQuality, METADATA_PARAMS(Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapBuildDataRegistry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapBuildDataRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapBuildDataRegistry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapBuildDataRegistry_Statics::ClassParams = {
		&UMapBuildDataRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMapBuildDataRegistry_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMapBuildDataRegistry_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapBuildDataRegistry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMapBuildDataRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapBuildDataRegistry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapBuildDataRegistry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapBuildDataRegistry, 2368659831);
	template<> ENGINE_API UClass* StaticClass<UMapBuildDataRegistry>()
	{
		return UMapBuildDataRegistry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapBuildDataRegistry(Z_Construct_UClass_UMapBuildDataRegistry, &UMapBuildDataRegistry::StaticClass, TEXT("/Script/Engine"), TEXT("UMapBuildDataRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapBuildDataRegistry);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMapBuildDataRegistry)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
