// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_SwitchName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SwitchName() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchName_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchName();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_SwitchName::StaticRegisterNativesUK2Node_SwitchName()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_SwitchName_NoRegister()
	{
		return UK2Node_SwitchName::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SwitchName_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PinNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SwitchName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchName_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SwitchName.h" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchName.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchName.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_SwitchName, PinNames), METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_SwitchName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchName_Statics::NewProp_PinNames_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SwitchName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SwitchName>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SwitchName_Statics::ClassParams = {
		&UK2Node_SwitchName::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_SwitchName_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchName_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchName_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SwitchName()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_SwitchName_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_SwitchName, 476800265);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_SwitchName>()
	{
		return UK2Node_SwitchName::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_SwitchName(Z_Construct_UClass_UK2Node_SwitchName, &UK2Node_SwitchName::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_SwitchName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SwitchName);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
