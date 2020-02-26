// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DebugCameraHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCameraHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADebugCameraHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ADebugCameraHUD::StaticRegisterNativesADebugCameraHUD()
	{
	}
	UClass* Z_Construct_UClass_ADebugCameraHUD_NoRegister()
	{
		return ADebugCameraHUD::StaticClass();
	}
	struct Z_Construct_UClass_ADebugCameraHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADebugCameraHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADebugCameraHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Engine/DebugCameraHUD.h" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "HUD that displays info for the DebugCameraController view." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADebugCameraHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADebugCameraHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADebugCameraHUD_Statics::ClassParams = {
		&ADebugCameraHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x049002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADebugCameraHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADebugCameraHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADebugCameraHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADebugCameraHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADebugCameraHUD, 3802263504);
	template<> ENGINE_API UClass* StaticClass<ADebugCameraHUD>()
	{
		return ADebugCameraHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADebugCameraHUD(Z_Construct_UClass_ADebugCameraHUD, &ADebugCameraHUD::StaticClass, TEXT("/Script/Engine"), TEXT("ADebugCameraHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADebugCameraHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
