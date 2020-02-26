// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/RichTextBlockDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlockDecorator() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void URichTextBlockDecorator::StaticRegisterNativesURichTextBlockDecorator()
	{
	}
	UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister()
	{
		return URichTextBlockDecorator::StaticClass();
	}
	struct Z_Construct_UClass_URichTextBlockDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextBlockDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlockDecorator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/RichTextBlockDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextBlockDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlockDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlockDecorator_Statics::ClassParams = {
		&URichTextBlockDecorator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URichTextBlockDecorator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URichTextBlockDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextBlockDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URichTextBlockDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URichTextBlockDecorator, 2078449675);
	template<> UMG_API UClass* StaticClass<URichTextBlockDecorator>()
	{
		return URichTextBlockDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URichTextBlockDecorator(Z_Construct_UClass_URichTextBlockDecorator, &URichTextBlockDecorator::StaticClass, TEXT("/Script/UMG"), TEXT("URichTextBlockDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
