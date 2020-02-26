// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_SetVariableOnPersistentFrame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SetVariableOnPersistentFrame() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_SetVariableOnPersistentFrame::StaticRegisterNativesUK2Node_SetVariableOnPersistentFrame()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_NoRegister()
	{
		return UK2Node_SetVariableOnPersistentFrame::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SetVariableOnPersistentFrame.h" },
		{ "ModuleRelativePath", "Classes/K2Node_SetVariableOnPersistentFrame.h" },
		{ "ToolTip", "*     FOR INTERNAL USAGE ONLY!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SetVariableOnPersistentFrame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_Statics::ClassParams = {
		&UK2Node_SetVariableOnPersistentFrame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_SetVariableOnPersistentFrame, 427166472);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_SetVariableOnPersistentFrame>()
	{
		return UK2Node_SetVariableOnPersistentFrame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_SetVariableOnPersistentFrame(Z_Construct_UClass_UK2Node_SetVariableOnPersistentFrame, &UK2Node_SetVariableOnPersistentFrame::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_SetVariableOnPersistentFrame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SetVariableOnPersistentFrame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
