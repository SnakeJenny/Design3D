// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_Switch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Switch() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UK2Node_Switch::StaticRegisterNativesUK2Node_Switch()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_Switch_NoRegister()
	{
		return UK2Node_Switch::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Switch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FunctionClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultPin_MetaData[];
#endif
		static void NewProp_bHasDefaultPin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultPin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Switch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Switch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Switch.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Switch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Switch.h" },
		{ "ToolTip", "The class that the function is from." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass = { "FunctionClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Switch, FunctionClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Switch.h" },
		{ "ToolTip", "The function underpining the switch, if required" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Switch, FunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/K2Node_Switch.h" },
		{ "ToolTip", "If true switch has a default pin" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_SetBit(void* Obj)
	{
		((UK2Node_Switch*)Obj)->bHasDefaultPin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin = { "bHasDefaultPin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Switch), &Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Switch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Switch_Statics::NewProp_bHasDefaultPin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Switch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Switch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Switch_Statics::ClassParams = {
		&UK2Node_Switch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Switch_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Switch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Switch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Switch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_Switch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_Switch, 1540479901);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Switch>()
	{
		return UK2Node_Switch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_Switch(Z_Construct_UClass_UK2Node_Switch, &UK2Node_Switch::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_Switch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Switch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
