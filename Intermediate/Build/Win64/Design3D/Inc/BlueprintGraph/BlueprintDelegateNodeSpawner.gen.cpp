// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/BlueprintDelegateNodeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintDelegateNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintDelegateNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintDelegateNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintDelegateNodeSpawner::StaticRegisterNativesUBlueprintDelegateNodeSpawner()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintDelegateNodeSpawner_NoRegister()
	{
		return UBlueprintDelegateNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFieldNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintDelegateNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintDelegateNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning various nodes associated with delegates. Serves as the\n\"action\" portion for certain FBlueprintActionMenuItems. Evolved from\nFEdGraphSchemaAction_K2Delegate, FEdGraphSchemaAction_K2AssignDelegate, etc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintDelegateNodeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::ClassParams = {
		&UBlueprintDelegateNodeSpawner::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintDelegateNodeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintDelegateNodeSpawner, 1052708865);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintDelegateNodeSpawner>()
	{
		return UBlueprintDelegateNodeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintDelegateNodeSpawner(Z_Construct_UClass_UBlueprintDelegateNodeSpawner, &UBlueprintDelegateNodeSpawner::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UBlueprintDelegateNodeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintDelegateNodeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
