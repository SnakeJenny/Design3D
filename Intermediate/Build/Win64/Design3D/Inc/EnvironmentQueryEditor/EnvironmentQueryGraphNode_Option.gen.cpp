// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentQueryEditor/Classes/EnvironmentQueryGraphNode_Option.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentQueryGraphNode_Option() {}
// Cross Module References
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_NoRegister();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Option();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UEnvironmentQueryGraphNode_Option::StaticRegisterNativesUEnvironmentQueryGraphNode_Option()
	{
	}
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_NoRegister()
	{
		return UEnvironmentQueryGraphNode_Option::StaticClass();
	}
	struct Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvironmentQueryGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQueryGraphNode_Option.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQueryGraphNode_Option.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentQueryGraphNode_Option>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_Statics::ClassParams = {
		&UEnvironmentQueryGraphNode_Option::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Option()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvironmentQueryGraphNode_Option_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvironmentQueryGraphNode_Option, 1329083956);
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UEnvironmentQueryGraphNode_Option>()
	{
		return UEnvironmentQueryGraphNode_Option::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvironmentQueryGraphNode_Option(Z_Construct_UClass_UEnvironmentQueryGraphNode_Option, &UEnvironmentQueryGraphNode_Option::StaticClass, TEXT("/Script/EnvironmentQueryEditor"), TEXT("UEnvironmentQueryGraphNode_Option"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode_Option);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
