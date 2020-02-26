// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Design3D/MyPlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerCameraManager() {}
// Cross Module References
	DESIGN3D_API UClass* Z_Construct_UClass_AMyPlayerCameraManager_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_AMyPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_Design3D();
// End Cross Module References
	void AMyPlayerCameraManager::StaticRegisterNativesAMyPlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_AMyPlayerCameraManager_NoRegister()
	{
		return AMyPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyPlayerCameraManager.h" },
		{ "ModuleRelativePath", "MyPlayerCameraManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerCameraManager_Statics::ClassParams = {
		&AMyPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerCameraManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerCameraManager, 1601674644);
	template<> DESIGN3D_API UClass* StaticClass<AMyPlayerCameraManager>()
	{
		return AMyPlayerCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerCameraManager(Z_Construct_UClass_AMyPlayerCameraManager, &AMyPlayerCameraManager::StaticClass, TEXT("/Script/Design3D"), TEXT("AMyPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
