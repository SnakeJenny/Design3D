// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BlockingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockingVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ABlockingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ABlockingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ABlockingVolume::StaticRegisterNativesABlockingVolume()
	{
	}
	UClass* Z_Construct_UClass_ABlockingVolume_NoRegister()
	{
		return ABlockingVolume::StaticClass();
	}
	struct Z_Construct_UClass_ABlockingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockingVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Engine/BlockingVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/BlockingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An invisible volume used to block other actors." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockingVolume_Statics::ClassParams = {
		&ABlockingVolume::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABlockingVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABlockingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockingVolume, 2077732539);
	template<> ENGINE_API UClass* StaticClass<ABlockingVolume>()
	{
		return ABlockingVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockingVolume(Z_Construct_UClass_ABlockingVolume, &ABlockingVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ABlockingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
