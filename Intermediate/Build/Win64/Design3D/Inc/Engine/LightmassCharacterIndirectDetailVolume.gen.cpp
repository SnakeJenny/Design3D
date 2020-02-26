// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Lightmass/LightmassCharacterIndirectDetailVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassCharacterIndirectDetailVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ALightmassCharacterIndirectDetailVolume::StaticRegisterNativesALightmassCharacterIndirectDetailVolume()
	{
	}
	UClass* Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_NoRegister()
	{
		return ALightmassCharacterIndirectDetailVolume::StaticClass();
	}
	struct Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Lightmass/LightmassCharacterIndirectDetailVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassCharacterIndirectDetailVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightmassCharacterIndirectDetailVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::ClassParams = {
		&ALightmassCharacterIndirectDetailVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightmassCharacterIndirectDetailVolume, 3360647583);
	template<> ENGINE_API UClass* StaticClass<ALightmassCharacterIndirectDetailVolume>()
	{
		return ALightmassCharacterIndirectDetailVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightmassCharacterIndirectDetailVolume(Z_Construct_UClass_ALightmassCharacterIndirectDetailVolume, &ALightmassCharacterIndirectDetailVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ALightmassCharacterIndirectDetailVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightmassCharacterIndirectDetailVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
