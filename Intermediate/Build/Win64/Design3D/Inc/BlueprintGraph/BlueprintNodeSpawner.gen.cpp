// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Public/BlueprintNodeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	void UBlueprintNodeSpawner::StaticRegisterNativesUBlueprintNodeSpawner()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintNodeSpawner_NoRegister()
	{
		return UBlueprintNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NodeClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintNodeSpawner.h" },
		{ "ModuleRelativePath", "Public/BlueprintNodeSpawner.h" },
		{ "ToolTip", "Intended to be wrapped and used by FBlueprintActionMenuItem. Rather than\nsub-classing the menu item, we choose to subclass this instead (for\ndifferent node types). That way, we get the type inference that comes with\nUObjects (and we don't have to continuously compare identification strings)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintNodeSpawner.h" },
		{ "ToolTip", "Holds the node type that this spawner will instantiate." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintNodeSpawner, NodeClass), Z_Construct_UClass_UEdGraphNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintNodeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintNodeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintNodeSpawner_Statics::ClassParams = {
		&UBlueprintNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintNodeSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintNodeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintNodeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintNodeSpawner, 2903843134);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintNodeSpawner>()
	{
		return UBlueprintNodeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintNodeSpawner(Z_Construct_UClass_UBlueprintNodeSpawner, &UBlueprintNodeSpawner::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UBlueprintNodeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintNodeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
