// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_StructMemberSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_StructMemberSet() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructMemberSet_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructMemberSet();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructOperation();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
// End Cross Module References
	void UK2Node_StructMemberSet::StaticRegisterNativesUK2Node_StructMemberSet()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_StructMemberSet_NoRegister()
	{
		return UK2Node_StructMemberSet::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_StructMemberSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPinForProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowPinForProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShowPinForProperties_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_StructMemberSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_StructOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_StructMemberSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_StructMemberSet.h" },
		{ "ModuleRelativePath", "Classes/K2Node_StructMemberSet.h" },
		{ "ToolTip", "Imperative kismet node that sets one or more member variables of a struct" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/K2Node_StructMemberSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_StructMemberSet, ShowPinForProperties), METADATA_PARAMS(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_Inner = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOptionalPinFromProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_StructMemberSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_StructMemberSet_Statics::NewProp_ShowPinForProperties_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_StructMemberSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_StructMemberSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_StructMemberSet_Statics::ClassParams = {
		&UK2Node_StructMemberSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_StructMemberSet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_StructMemberSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_StructMemberSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_StructMemberSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_StructMemberSet, 1054035541);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_StructMemberSet>()
	{
		return UK2Node_StructMemberSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_StructMemberSet(Z_Construct_UClass_UK2Node_StructMemberSet, &UK2Node_StructMemberSet::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_StructMemberSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_StructMemberSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
