// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeInfoMap.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeInfoMap() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfoMap_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfoMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeInfoMap::StaticRegisterNativesULandscapeInfoMap()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeInfoMap_NoRegister()
	{
		return ULandscapeInfoMap::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeInfoMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeInfoMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeInfoMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeInfoMap.h" },
		{ "ModuleRelativePath", "Classes/LandscapeInfoMap.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeInfoMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeInfoMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeInfoMap_Statics::ClassParams = {
		&ULandscapeInfoMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeInfoMap_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeInfoMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeInfoMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeInfoMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeInfoMap, 2874163458);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeInfoMap>()
	{
		return ULandscapeInfoMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeInfoMap(Z_Construct_UClass_ULandscapeInfoMap, &ULandscapeInfoMap::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeInfoMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeInfoMap);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeInfoMap)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
