// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/EdGraph/EdGraphNode_Documentation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_Documentation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_Documentation();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEdGraphNode_Documentation::StaticRegisterNativesUEdGraphNode_Documentation()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphNode_Documentation_NoRegister()
	{
		return UEdGraphNode_Documentation::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_Documentation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Excerpt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Excerpt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Link;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_Documentation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Documentation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphNode_Documentation.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt_MetaData[] = {
		{ "DisplayName", "Documentation Excerpt" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
		{ "ToolTip", "Documentation Excerpt" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt = { "Excerpt", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_Documentation, Excerpt), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link_MetaData[] = {
		{ "DisplayName", "Documentation Link" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode_Documentation.h" },
		{ "ToolTip", "Documentation Link" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link = { "Link", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode_Documentation, Link), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Excerpt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Documentation_Statics::NewProp_Link,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_Documentation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_Documentation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_Documentation_Statics::ClassParams = {
		&UEdGraphNode_Documentation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Documentation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_Documentation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraphNode_Documentation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphNode_Documentation, 3537871000);
	template<> ENGINE_API UClass* StaticClass<UEdGraphNode_Documentation>()
	{
		return UEdGraphNode_Documentation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphNode_Documentation(Z_Construct_UClass_UEdGraphNode_Documentation, &UEdGraphNode_Documentation::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraphNode_Documentation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_Documentation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
