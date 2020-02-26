// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGEditor/Private/Nodes/K2Node_CreateWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CreateWidget() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_CreateWidget_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_CreateWidget();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ConstructObjectFromClass();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UK2Node_CreateWidget::StaticRegisterNativesUK2Node_CreateWidget()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_CreateWidget_NoRegister()
	{
		return UK2Node_CreateWidget::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CreateWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CreateWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_ConstructObjectFromClass,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CreateWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/K2Node_CreateWidget.h" },
		{ "ModuleRelativePath", "Private/Nodes/K2Node_CreateWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CreateWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CreateWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CreateWidget_Statics::ClassParams = {
		&UK2Node_CreateWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CreateWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CreateWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_CreateWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_CreateWidget, 4134386909);
	template<> UMGEDITOR_API UClass* StaticClass<UK2Node_CreateWidget>()
	{
		return UK2Node_CreateWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_CreateWidget(Z_Construct_UClass_UK2Node_CreateWidget, &UK2Node_CreateWidget::StaticClass, TEXT("/Script/UMGEditor"), TEXT("UK2Node_CreateWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CreateWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
