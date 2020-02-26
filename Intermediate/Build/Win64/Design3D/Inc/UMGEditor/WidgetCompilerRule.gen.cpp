// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGEditor/Public/WidgetCompilerRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetCompilerRule() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetCompilerRule_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetCompilerRule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetCompilerRule::StaticRegisterNativesUWidgetCompilerRule()
	{
	}
	UClass* Z_Construct_UClass_UWidgetCompilerRule_NoRegister()
	{
		return UWidgetCompilerRule::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetCompilerRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetCompilerRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetCompilerRule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetCompilerRule.h" },
		{ "ModuleRelativePath", "Public/WidgetCompilerRule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetCompilerRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetCompilerRule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetCompilerRule_Statics::ClassParams = {
		&UWidgetCompilerRule::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetCompilerRule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetCompilerRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetCompilerRule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetCompilerRule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetCompilerRule, 2751933252);
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetCompilerRule>()
	{
		return UWidgetCompilerRule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetCompilerRule(Z_Construct_UClass_UWidgetCompilerRule, &UWidgetCompilerRule::StaticClass, TEXT("/Script/UMGEditor"), TEXT("UWidgetCompilerRule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetCompilerRule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
