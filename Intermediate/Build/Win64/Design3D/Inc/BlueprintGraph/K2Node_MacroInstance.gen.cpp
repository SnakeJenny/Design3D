// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_MacroInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MacroInstance() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MacroInstance_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MacroInstance();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Tunnel();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphReference();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UK2Node_MacroInstance::StaticRegisterNativesUK2Node_MacroInstance()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_MacroInstance_NoRegister()
	{
		return UK2Node_MacroInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MacroInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolvedWildcardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResolvedWildcardType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroGraphReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MacroGraphReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MacroGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MacroInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Tunnel,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MacroInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MacroInstance.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MacroInstance.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_MacroInstance.h" },
		{ "ToolTip", "Stored type info for what type the wildcard pins in this macro should become." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType = { "ResolvedWildcardType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_MacroInstance, ResolvedWildcardType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_MacroInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference = { "MacroGraphReference", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_MacroInstance, MacroGraphReference), Z_Construct_UScriptStruct_FGraphReference, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_MacroInstance.h" },
		{ "ToolTip", "A macro is like a composite node, except that the associated graph lives\nin another blueprint, and can be instanced multiple times." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph = { "MacroGraph", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_MacroInstance, MacroGraph_DEPRECATED), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MacroInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MacroInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MacroInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MacroInstance_Statics::ClassParams = {
		&UK2Node_MacroInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MacroInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MacroInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MacroInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_MacroInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_MacroInstance, 2795332120);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MacroInstance>()
	{
		return UK2Node_MacroInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_MacroInstance(Z_Construct_UClass_UK2Node_MacroInstance, &UK2Node_MacroInstance::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_MacroInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MacroInstance);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_MacroInstance)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
