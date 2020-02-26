// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_GetClassDefaults.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetClassDefaults() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetClassDefaults_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetClassDefaults();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
// End Cross Module References
	void UK2Node_GetClassDefaults::StaticRegisterNativesUK2Node_GetClassDefaults()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_GetClassDefaults_NoRegister()
	{
		return UK2Node_GetClassDefaults::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetClassDefaults_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeObjectArrays_MetaData[];
#endif
		static void NewProp_bExcludeObjectArrays_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeObjectArrays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeObjectContainers_MetaData[];
#endif
		static void NewProp_bExcludeObjectContainers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeObjectContainers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPinForProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowPinForProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShowPinForProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintSubscribedTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueprintSubscribedTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetClassDefaults.h" },
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
		{ "ToolTip", "Whether or not to exclude object array properties (deprecated)" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_SetBit(void* Obj)
	{
		((UK2Node_GetClassDefaults*)Obj)->bExcludeObjectArrays_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays = { "bExcludeObjectArrays", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_GetClassDefaults), &Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
		{ "ToolTip", "Whether or not to exclude object container properties" },
	};
#endif
	void Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_SetBit(void* Obj)
	{
		((UK2Node_GetClassDefaults*)Obj)->bExcludeObjectContainers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers = { "bExcludeObjectContainers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_GetClassDefaults), &Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
		{ "ToolTip", "Output pin visibility control" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_GetClassDefaults, ShowPinForProperties), METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_Inner = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOptionalPinFromProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_GetClassDefaults.h" },
		{ "ToolTip", "Blueprint that we subscribed OnBlueprintChangedDelegate and OnBlueprintCompiledDelegate to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo = { "BlueprintSubscribedTo", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_GetClassDefaults, BlueprintSubscribedTo), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectArrays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_bExcludeObjectContainers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_ShowPinForProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::NewProp_BlueprintSubscribedTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetClassDefaults>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::ClassParams = {
		&UK2Node_GetClassDefaults::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetClassDefaults()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_GetClassDefaults_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_GetClassDefaults, 1278122234);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetClassDefaults>()
	{
		return UK2Node_GetClassDefaults::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_GetClassDefaults(Z_Construct_UClass_UK2Node_GetClassDefaults, &UK2Node_GetClassDefaults::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_GetClassDefaults"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetClassDefaults);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
