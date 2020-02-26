// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/BlueprintComponentNodeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintComponentNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintComponentNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintComponentNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	void UBlueprintComponentNodeSpawner::StaticRegisterNativesUBlueprintComponentNodeSpawner()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintComponentNodeSpawner_NoRegister()
	{
		return UBlueprintComponentNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentAssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentAssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintComponentNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintComponentNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning UK2Node_AddComponent nodes. Acts as the \"action\"\nportion of certain FBlueprintActionMenuItems. Evolved from\nFEdGraphSchemaAction_K2AddComponent." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintComponentNodeSpawner.h" },
		{ "ToolTip", "The name of the asset name that needs to be loaded" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName = { "ComponentAssetName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintComponentNodeSpawner, ComponentAssetName), METADATA_PARAMS(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintComponentNodeSpawner.h" },
		{ "ToolTip", "The name of the component class to configure new nodes with." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintComponentNodeSpawner, ComponentName), METADATA_PARAMS(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintComponentNodeSpawner.h" },
		{ "ToolTip", "The component class to configure new nodes with." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintComponentNodeSpawner, ComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintComponentNodeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::ClassParams = {
		&UBlueprintComponentNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintComponentNodeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintComponentNodeSpawner, 1330225724);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintComponentNodeSpawner>()
	{
		return UBlueprintComponentNodeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintComponentNodeSpawner(Z_Construct_UClass_UBlueprintComponentNodeSpawner, &UBlueprintComponentNodeSpawner::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UBlueprintComponentNodeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintComponentNodeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
