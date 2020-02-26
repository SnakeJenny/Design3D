// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/BlueprintVariableNodeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintVariableNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintVariableNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintVariableNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UBlueprintVariableNodeSpawner::StaticRegisterNativesUBlueprintVariableNodeSpawner()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintVariableNodeSpawner_NoRegister()
	{
		return UBlueprintVariableNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalVarDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalVarDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalVarOuter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalVarOuter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFieldNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintVariableNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintVariableNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning variable getter/setter nodes. Serves as the \"action\"\nportion for certain FBlueprintActionMenuItems. Evolved from\nFEdGraphSchemaAction_K2Var, and can spawn nodes for both member-variables and\nlocal function variables." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintVariableNodeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc = { "LocalVarDesc", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintVariableNodeSpawner, LocalVarDesc), Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintVariableNodeSpawner.h" },
		{ "ToolTip", "The graph that the local variable belongs to (if this is a local variable spawner)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter = { "LocalVarOuter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintVariableNodeSpawner, LocalVarOuter), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintVariableNodeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::ClassParams = {
		&UBlueprintVariableNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintVariableNodeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintVariableNodeSpawner, 2007993197);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintVariableNodeSpawner>()
	{
		return UBlueprintVariableNodeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintVariableNodeSpawner(Z_Construct_UClass_UBlueprintVariableNodeSpawner, &UBlueprintVariableNodeSpawner::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UBlueprintVariableNodeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintVariableNodeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
