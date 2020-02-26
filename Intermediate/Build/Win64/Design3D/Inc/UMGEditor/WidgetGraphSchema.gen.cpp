// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGEditor/Classes/WidgetGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetGraphSchema() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetGraphSchema_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetGraphSchema();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetGraphSchema::StaticRegisterNativesUWidgetGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UWidgetGraphSchema_NoRegister()
	{
		return UWidgetGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/WidgetGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetGraphSchema_Statics::ClassParams = {
		&UWidgetGraphSchema::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetGraphSchema, 2648185206);
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetGraphSchema>()
	{
		return UWidgetGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetGraphSchema(Z_Construct_UClass_UWidgetGraphSchema, &UWidgetGraphSchema::StaticClass, TEXT("/Script/UMGEditor"), TEXT("UWidgetGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
