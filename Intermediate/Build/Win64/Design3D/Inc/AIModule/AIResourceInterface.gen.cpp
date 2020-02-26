// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/AIResourceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIResourceInterface() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIResourceInterface::StaticRegisterNativesUAIResourceInterface()
	{
	}
	UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister()
	{
		return UAIResourceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAIResourceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIResourceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIResourceInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AIResourceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIResourceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAIResourceInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIResourceInterface_Statics::ClassParams = {
		&UAIResourceInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAIResourceInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIResourceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIResourceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIResourceInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIResourceInterface, 1004445740);
	template<> AIMODULE_API UClass* StaticClass<UAIResourceInterface>()
	{
		return UAIResourceInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIResourceInterface(Z_Construct_UClass_UAIResourceInterface, &UAIResourceInterface::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIResourceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIResourceInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
