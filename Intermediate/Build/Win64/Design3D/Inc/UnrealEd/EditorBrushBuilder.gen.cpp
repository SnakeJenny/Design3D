// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Builders/EditorBrushBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorBrushBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorBrushBuilder::StaticRegisterNativesUEditorBrushBuilder()
	{
	}
	UClass* Z_Construct_UClass_UEditorBrushBuilder_NoRegister()
	{
		return UEditorBrushBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditorBrushBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorBrushBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorBrushBuilder_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/EditorBrushBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/EditorBrushBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorBrushBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorBrushBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorBrushBuilder_Statics::ClassParams = {
		&UEditorBrushBuilder::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorBrushBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorBrushBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorBrushBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorBrushBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorBrushBuilder, 3113350141);
	template<> UNREALED_API UClass* StaticClass<UEditorBrushBuilder>()
	{
		return UEditorBrushBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorBrushBuilder(Z_Construct_UClass_UEditorBrushBuilder, &UEditorBrushBuilder::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorBrushBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorBrushBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
