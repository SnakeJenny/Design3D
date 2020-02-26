// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Debug/DebugDrawService.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugDrawService() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawService_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawService();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDebugDrawService::StaticRegisterNativesUDebugDrawService()
	{
	}
	UClass* Z_Construct_UClass_UDebugDrawService_NoRegister()
	{
		return UDebugDrawService::StaticClass();
	}
	struct Z_Construct_UClass_UDebugDrawService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugDrawService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugDrawService_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/DebugDrawService.h" },
		{ "ModuleRelativePath", "Classes/Debug/DebugDrawService.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugDrawService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugDrawService>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDebugDrawService_Statics::ClassParams = {
		&UDebugDrawService::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDebugDrawService_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDebugDrawService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugDrawService()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDebugDrawService_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDebugDrawService, 4082704099);
	template<> ENGINE_API UClass* StaticClass<UDebugDrawService>()
	{
		return UDebugDrawService::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDebugDrawService(Z_Construct_UClass_UDebugDrawService, &UDebugDrawService::StaticClass, TEXT("/Script/Engine"), TEXT("UDebugDrawService"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugDrawService);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
