// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISenseConfig_Touch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Touch() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Touch_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Touch();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseConfig_Touch::StaticRegisterNativesUAISenseConfig_Touch()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Touch_NoRegister()
	{
		return UAISenseConfig_Touch::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Touch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Touch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Touch_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Touch config" },
		{ "IncludePath", "Perception/AISenseConfig_Touch.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Touch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Touch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Touch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Touch_Statics::ClassParams = {
		&UAISenseConfig_Touch::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Touch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Touch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Touch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseConfig_Touch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_Touch, 2370138312);
	template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Touch>()
	{
		return UAISenseConfig_Touch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Touch(Z_Construct_UClass_UAISenseConfig_Touch, &UAISenseConfig_Touch::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseConfig_Touch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Touch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
