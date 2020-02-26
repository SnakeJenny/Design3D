// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/CameraBlockingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraBlockingVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACameraBlockingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraBlockingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ACameraBlockingVolume::StaticRegisterNativesACameraBlockingVolume()
	{
	}
	UClass* Z_Construct_UClass_ACameraBlockingVolume_NoRegister()
	{
		return ACameraBlockingVolume::StaticClass();
	}
	struct Z_Construct_UClass_ACameraBlockingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraBlockingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraBlockingVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "GameFramework/CameraBlockingVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/CameraBlockingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A volume which blocks the Camera channel by default." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraBlockingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraBlockingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraBlockingVolume_Statics::ClassParams = {
		&ACameraBlockingVolume::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraBlockingVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACameraBlockingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraBlockingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraBlockingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraBlockingVolume, 2349723689);
	template<> ENGINE_API UClass* StaticClass<ACameraBlockingVolume>()
	{
		return ACameraBlockingVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraBlockingVolume(Z_Construct_UClass_ACameraBlockingVolume, &ACameraBlockingVolume::StaticClass, TEXT("/Script/Engine"), TEXT("ACameraBlockingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraBlockingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
