// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kismet/Public/Nodes/K2Node_AsyncAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AsyncAction() {}
// Cross Module References
	KISMET_API UClass* Z_Construct_UClass_UK2Node_AsyncAction_NoRegister();
	KISMET_API UClass* Z_Construct_UClass_UK2Node_AsyncAction();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References
	void UK2Node_AsyncAction::StaticRegisterNativesUK2Node_AsyncAction()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_AsyncAction_NoRegister()
	{
		return UK2Node_AsyncAction::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AsyncAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AsyncAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AsyncAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/K2Node_AsyncAction.h" },
		{ "ModuleRelativePath", "Public/Nodes/K2Node_AsyncAction.h" },
		{ "ToolTip", "!!! The proxy object should have RF_StrongRefOnFrame flag. !!!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AsyncAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AsyncAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AsyncAction_Statics::ClassParams = {
		&UK2Node_AsyncAction::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AsyncAction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_AsyncAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AsyncAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_AsyncAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_AsyncAction, 4140860359);
	template<> KISMET_API UClass* StaticClass<UK2Node_AsyncAction>()
	{
		return UK2Node_AsyncAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_AsyncAction(Z_Construct_UClass_UK2Node_AsyncAction, &UK2Node_AsyncAction::StaticClass, TEXT("/Script/Kismet"), TEXT("UK2Node_AsyncAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AsyncAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
