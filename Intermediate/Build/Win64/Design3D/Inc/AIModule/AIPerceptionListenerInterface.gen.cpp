// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionListenerInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionListenerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIPerceptionListenerInterface::StaticRegisterNativesUAIPerceptionListenerInterface()
	{
	}
	UClass* Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister()
	{
		return UAIPerceptionListenerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAIPerceptionListenerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionListenerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAIPerceptionListenerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::ClassParams = {
		&UAIPerceptionListenerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPerceptionListenerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIPerceptionListenerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPerceptionListenerInterface, 2205716197);
	template<> AIMODULE_API UClass* StaticClass<UAIPerceptionListenerInterface>()
	{
		return UAIPerceptionListenerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPerceptionListenerInterface(Z_Construct_UClass_UAIPerceptionListenerInterface, &UAIPerceptionListenerInterface::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIPerceptionListenerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionListenerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
