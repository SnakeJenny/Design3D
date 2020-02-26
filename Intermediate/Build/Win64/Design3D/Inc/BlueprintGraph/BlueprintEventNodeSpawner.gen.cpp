// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/BlueprintEventNodeSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintEventNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
// End Cross Module References
	void UBlueprintEventNodeSpawner::StaticRegisterNativesUBlueprintEventNodeSpawner()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner_NoRegister()
	{
		return UBlueprintEventNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomEventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomEventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventFunc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventFunc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintEventNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintEventNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning UK2Node_Event nodes. Acts as the \"action\" portion of\ncertain FBlueprintActionMenuItems. Will not spawn a new event node if one\nassociated with the specified function already exits (instead, Invoke() will\nreturn the existing one). Evolved from FEdGraphSchemaAction_K2AddEvent and\nFEdGraphSchemaAction_K2ViewNode." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintEventNodeSpawner.h" },
		{ "ToolTip", "The custom name to configure new event nodes with." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName = { "CustomEventName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEventNodeSpawner, CustomEventName), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintEventNodeSpawner.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The function to configure new nodes with." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc = { "EventFunc", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEventNodeSpawner, EventFunc), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_CustomEventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::NewProp_EventFunc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintEventNodeSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::ClassParams = {
		&UBlueprintEventNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintEventNodeSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintEventNodeSpawner, 2672531185);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintEventNodeSpawner>()
	{
		return UBlueprintEventNodeSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintEventNodeSpawner(Z_Construct_UClass_UBlueprintEventNodeSpawner, &UBlueprintEventNodeSpawner::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UBlueprintEventNodeSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintEventNodeSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
