// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISightTargetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISightTargetInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISightTargetInterface::StaticRegisterNativesUAISightTargetInterface()
	{
	}
	UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister()
	{
		return UAISightTargetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAISightTargetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISightTargetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISightTargetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISightTargetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISightTargetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAISightTargetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISightTargetInterface_Statics::ClassParams = {
		&UAISightTargetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAISightTargetInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISightTargetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISightTargetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISightTargetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISightTargetInterface, 3101022384);
	template<> AIMODULE_API UClass* StaticClass<UAISightTargetInterface>()
	{
		return UAISightTargetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISightTargetInterface(Z_Construct_UClass_UAISightTargetInterface, &UAISightTargetInterface::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISightTargetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISightTargetInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
