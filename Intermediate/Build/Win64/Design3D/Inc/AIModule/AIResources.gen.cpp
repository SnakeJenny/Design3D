// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/AIResources.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIResources() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Movement_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Movement();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Logic_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResource_Logic();
// End Cross Module References
	void UAIResource_Movement::StaticRegisterNativesUAIResource_Movement()
	{
	}
	UClass* Z_Construct_UClass_UAIResource_Movement_NoRegister()
	{
		return UAIResource_Movement::StaticClass();
	}
	struct Z_Construct_UClass_UAIResource_Movement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIResource_Movement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTaskResource,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIResource_Movement_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Movement" },
		{ "IncludePath", "AIResources.h" },
		{ "ModuleRelativePath", "Classes/AIResources.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIResource_Movement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIResource_Movement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIResource_Movement_Statics::ClassParams = {
		&UAIResource_Movement::StaticClass,
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
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIResource_Movement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIResource_Movement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIResource_Movement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIResource_Movement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIResource_Movement, 2190539572);
	template<> AIMODULE_API UClass* StaticClass<UAIResource_Movement>()
	{
		return UAIResource_Movement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIResource_Movement(Z_Construct_UClass_UAIResource_Movement, &UAIResource_Movement::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIResource_Movement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResource_Movement);
	void UAIResource_Logic::StaticRegisterNativesUAIResource_Logic()
	{
	}
	UClass* Z_Construct_UClass_UAIResource_Logic_NoRegister()
	{
		return UAIResource_Logic::StaticClass();
	}
	struct Z_Construct_UClass_UAIResource_Logic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIResource_Logic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTaskResource,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIResource_Logic_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Logic" },
		{ "IncludePath", "AIResources.h" },
		{ "ModuleRelativePath", "Classes/AIResources.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIResource_Logic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIResource_Logic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIResource_Logic_Statics::ClassParams = {
		&UAIResource_Logic::StaticClass,
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
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIResource_Logic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIResource_Logic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIResource_Logic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIResource_Logic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIResource_Logic, 823321762);
	template<> AIMODULE_API UClass* StaticClass<UAIResource_Logic>()
	{
		return UAIResource_Logic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIResource_Logic(Z_Construct_UClass_UAIResource_Logic, &UAIResource_Logic::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIResource_Logic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResource_Logic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
