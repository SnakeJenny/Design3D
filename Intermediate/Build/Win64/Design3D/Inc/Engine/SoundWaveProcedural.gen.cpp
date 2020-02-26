// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundWaveProcedural.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveProcedural() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundWaveProcedural::StaticRegisterNativesUSoundWaveProcedural()
	{
	}
	UClass* Z_Construct_UClass_USoundWaveProcedural_NoRegister()
	{
		return USoundWaveProcedural::StaticClass();
	}
	struct Z_Construct_UClass_USoundWaveProcedural_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundWaveProcedural_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWave,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWaveProcedural_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundWaveProcedural.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveProcedural.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundWaveProcedural_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundWaveProcedural>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundWaveProcedural_Statics::ClassParams = {
		&USoundWaveProcedural::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundWaveProcedural_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundWaveProcedural_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundWaveProcedural()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundWaveProcedural_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundWaveProcedural, 1082603463);
	template<> ENGINE_API UClass* StaticClass<USoundWaveProcedural>()
	{
		return USoundWaveProcedural::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundWaveProcedural(Z_Construct_UClass_USoundWaveProcedural, &USoundWaveProcedural::StaticClass, TEXT("/Script/Engine"), TEXT("USoundWaveProcedural"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWaveProcedural);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWaveProcedural)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
