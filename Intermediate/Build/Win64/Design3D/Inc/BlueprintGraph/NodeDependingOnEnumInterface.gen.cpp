// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/NodeDependingOnEnumInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeDependingOnEnumInterface() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UNodeDependingOnEnumInterface::StaticRegisterNativesUNodeDependingOnEnumInterface()
	{
	}
	UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister()
	{
		return UNodeDependingOnEnumInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/NodeDependingOnEnumInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INodeDependingOnEnumInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::ClassParams = {
		&UNodeDependingOnEnumInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNodeDependingOnEnumInterface, 1432357276);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UNodeDependingOnEnumInterface>()
	{
		return UNodeDependingOnEnumInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNodeDependingOnEnumInterface(Z_Construct_UClass_UNodeDependingOnEnumInterface, &UNodeDependingOnEnumInterface::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UNodeDependingOnEnumInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeDependingOnEnumInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
