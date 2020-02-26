// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Lightmass/LightmassImportanceVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassImportanceVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALightmassImportanceVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALightmassImportanceVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ALightmassImportanceVolume::StaticRegisterNativesALightmassImportanceVolume()
	{
	}
	UClass* Z_Construct_UClass_ALightmassImportanceVolume_NoRegister()
	{
		return ALightmassImportanceVolume::StaticClass();
	}
	struct Z_Construct_UClass_ALightmassImportanceVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightmassImportanceVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightmassImportanceVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Lightmass/LightmassImportanceVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassImportanceVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightmassImportanceVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightmassImportanceVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightmassImportanceVolume_Statics::ClassParams = {
		&ALightmassImportanceVolume::StaticClass,
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
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALightmassImportanceVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALightmassImportanceVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightmassImportanceVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightmassImportanceVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightmassImportanceVolume, 1766907450);
	template<> ENGINE_API UClass* StaticClass<ALightmassImportanceVolume>()
	{
		return ALightmassImportanceVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightmassImportanceVolume(Z_Construct_UClass_ALightmassImportanceVolume, &ALightmassImportanceVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ALightmassImportanceVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightmassImportanceVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
