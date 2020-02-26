// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/Volume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UClass* Z_Construct_UClass_ABrush();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AVolume::StaticRegisterNativesAVolume()
	{
	}
	UClass* Z_Construct_UClass_AVolume_NoRegister()
	{
		return AVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABrush,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "GameFramework/Volume.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Volume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An editable 3D volume placed in a level. Different types of volumes perform different functions\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/Volumes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVolume_Statics::ClassParams = {
		&AVolume::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVolume, 1784602584);
	template<> ENGINE_API UClass* StaticClass<AVolume>()
	{
		return AVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVolume(Z_Construct_UClass_AVolume, &AVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
