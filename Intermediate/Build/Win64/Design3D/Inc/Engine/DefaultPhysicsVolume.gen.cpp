// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultPhysicsVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ADefaultPhysicsVolume::StaticRegisterNativesADefaultPhysicsVolume()
	{
	}
	UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister()
	{
		return ADefaultPhysicsVolume::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultPhysicsVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultPhysicsVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultPhysicsVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "GameFramework/DefaultPhysicsVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPhysicsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "DefaultPhysicsVolume determines the physical effects an actor will experience if they are not inside any user specified PhysicsVolume\n\n@see APhysicsVolume" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultPhysicsVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultPhysicsVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultPhysicsVolume_Statics::ClassParams = {
		&ADefaultPhysicsVolume::StaticClass,
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
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultPhysicsVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADefaultPhysicsVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultPhysicsVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultPhysicsVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultPhysicsVolume, 377747409);
	template<> ENGINE_API UClass* StaticClass<ADefaultPhysicsVolume>()
	{
		return ADefaultPhysicsVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultPhysicsVolume(Z_Construct_UClass_ADefaultPhysicsVolume, &ADefaultPhysicsVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ADefaultPhysicsVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultPhysicsVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
