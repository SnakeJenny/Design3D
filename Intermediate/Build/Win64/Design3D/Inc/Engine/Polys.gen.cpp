// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Polys.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolys() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPolys_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPolys();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPolys::StaticRegisterNativesUPolys()
	{
	}
	UClass* Z_Construct_UClass_UPolys_NoRegister()
	{
		return UPolys::StaticClass();
	}
	struct Z_Construct_UClass_UPolys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolys_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Polys.h" },
		{ "ModuleRelativePath", "Classes/Engine/Polys.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolys>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPolys_Statics::ClassParams = {
		&UPolys::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPolys_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPolys_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolys()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPolys_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPolys, 510176575);
	template<> ENGINE_API UClass* StaticClass<UPolys>()
	{
		return UPolys::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPolys(Z_Construct_UClass_UPolys, &UPolys::StaticClass, TEXT("/Script/Engine"), TEXT("UPolys"), false, nullptr, nullptr, nullptr);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPolys)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
