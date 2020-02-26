// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Commandlets/ImportDialogueScriptCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportDialogueScriptCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UImportDialogueScriptCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UImportDialogueScriptCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UImportDialogueScriptCommandlet::StaticRegisterNativesUImportDialogueScriptCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UImportDialogueScriptCommandlet_NoRegister()
	{
		return UImportDialogueScriptCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ImportDialogueScriptCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ImportDialogueScriptCommandlet.h" },
		{ "ToolTip", "UImportDialogueScriptCommandlet: Handles importing localized script sheets to update the translated archive text." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportDialogueScriptCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::ClassParams = {
		&UImportDialogueScriptCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportDialogueScriptCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImportDialogueScriptCommandlet, 1587183771);
	template<> UNREALED_API UClass* StaticClass<UImportDialogueScriptCommandlet>()
	{
		return UImportDialogueScriptCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImportDialogueScriptCommandlet(Z_Construct_UClass_UImportDialogueScriptCommandlet, &UImportDialogueScriptCommandlet::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UImportDialogueScriptCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportDialogueScriptCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
