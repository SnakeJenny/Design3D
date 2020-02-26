// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/DestructibleInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDestructibleInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDestructibleInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDestructibleInterface::StaticRegisterNativesUDestructibleInterface()
	{
	}
	UClass* Z_Construct_UClass_UDestructibleInterface_NoRegister()
	{
		return UDestructibleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDestructibleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestructibleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DestructibleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestructibleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDestructibleInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDestructibleInterface_Statics::ClassParams = {
		&UDestructibleInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDestructibleInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDestructibleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestructibleInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDestructibleInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDestructibleInterface, 2215456934);
	template<> ENGINE_API UClass* StaticClass<UDestructibleInterface>()
	{
		return UDestructibleInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDestructibleInterface(Z_Construct_UClass_UDestructibleInterface, &UDestructibleInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UDestructibleInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestructibleInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
