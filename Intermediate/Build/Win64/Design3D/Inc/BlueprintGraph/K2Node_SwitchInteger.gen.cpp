// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_SwitchInteger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SwitchInteger() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchInteger_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchInteger();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_SwitchInteger::StaticRegisterNativesUK2Node_SwitchInteger()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_SwitchInteger_NoRegister()
	{
		return UK2Node_SwitchInteger::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SwitchInteger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SwitchInteger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchInteger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SwitchInteger.h" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchInteger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchInteger.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "Set the starting index for the node" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_SwitchInteger, StartIndex), METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_SwitchInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchInteger_Statics::NewProp_StartIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SwitchInteger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SwitchInteger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SwitchInteger_Statics::ClassParams = {
		&UK2Node_SwitchInteger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_SwitchInteger_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchInteger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SwitchInteger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_SwitchInteger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_SwitchInteger, 677108810);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_SwitchInteger>()
	{
		return UK2Node_SwitchInteger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_SwitchInteger(Z_Construct_UClass_UK2Node_SwitchInteger, &UK2Node_SwitchInteger::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_SwitchInteger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SwitchInteger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
