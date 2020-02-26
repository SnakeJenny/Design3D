// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/BlueprintBoundEventNodeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintBoundEventNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintBoundEventNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UMulticastDelegateProperty();
// End Cross Module References
	void UBlueprintBoundEventNodeSpawner::StaticRegisterNativesUBlueprintBoundEventNodeSpawner()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_NoRegister()
	{
		return UBlueprintBoundEventNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintEventNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintBoundEventNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintBoundEventNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning UK2Node_Event nodes. Acts as the \"action\" portion of\ncertain FBlueprintActionMenuItems. Will not spawn a new event node if one\nassociated with the specified function already exits (instead, Invoke() will\nreturn the existing one). Evolved from FEdGraphSchemaAction_K2AddEvent and\nFEdGraphSchemaAction_K2ViewNode." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintBoundEventNodeSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate = { "EventDelegate", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintBoundEventNodeSpawner, EventDelegate), Z_Construct_UClass_UMulticastDelegateProperty, METADATA_PARAMS(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintBoundEventNodeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::ClassParams = {
		&UBlueprintBoundEventNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintBoundEventNodeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintBoundEventNodeSpawner, 3900648983);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintBoundEventNodeSpawner>()
	{
		return UBlueprintBoundEventNodeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintBoundEventNodeSpawner(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner, &UBlueprintBoundEventNodeSpawner::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UBlueprintBoundEventNodeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintBoundEventNodeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
