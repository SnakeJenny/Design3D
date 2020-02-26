// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_FormatText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_FormatText() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FormatText_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FormatText();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_FormatText::StaticRegisterNativesUK2Node_FormatText()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_FormatText_NoRegister()
	{
		return UK2Node_FormatText::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_FormatText_Statics
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
	UObject* (*const Z_Construct_UClass_UK2Node_FormatText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FormatText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_FormatText.h" },
		{ "ModuleRelativePath", "Classes/K2Node_FormatText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_FormatText.h" },
		{ "ToolTip", "When adding arguments to the node, their names are placed here and are generated as pins during construction" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames = { "PinNames", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_FormatText, PinNames), METADATA_PARAMS(Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_Inner = { "PinNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_FormatText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FormatText_Statics::NewProp_PinNames_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_FormatText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_FormatText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_FormatText_Statics::ClassParams = {
		&UK2Node_FormatText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_FormatText_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_FormatText_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_FormatText_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FormatText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_FormatText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_FormatText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_FormatText, 847107451);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_FormatText>()
	{
		return UK2Node_FormatText::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_FormatText(Z_Construct_UClass_UK2Node_FormatText, &UK2Node_FormatText::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_FormatText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_FormatText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
