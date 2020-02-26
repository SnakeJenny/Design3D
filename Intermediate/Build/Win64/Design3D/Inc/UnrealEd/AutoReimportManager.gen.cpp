// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/AutoReimport/AutoReimportManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoReimportManager() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAutoReimportManager_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAutoReimportManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAutoReimportManager::StaticRegisterNativesUAutoReimportManager()
	{
	}
	UClass* Z_Construct_UClass_UAutoReimportManager_NoRegister()
	{
		return UAutoReimportManager::StaticClass();
	}
	struct Z_Construct_UClass_UAutoReimportManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoReimportManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoReimportManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoReimport/AutoReimportManager.h" },
		{ "ModuleRelativePath", "Public/AutoReimport/AutoReimportManager.h" },
		{ "ToolTip", "Deals with auto reimporting of objects when the objects file on disk is modified" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoReimportManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoReimportManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoReimportManager_Statics::ClassParams = {
		&UAutoReimportManager::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoReimportManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAutoReimportManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoReimportManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoReimportManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoReimportManager, 3939703201);
	template<> UNREALED_API UClass* StaticClass<UAutoReimportManager>()
	{
		return UAutoReimportManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoReimportManager(Z_Construct_UClass_UAutoReimportManager, &UAutoReimportManager::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UAutoReimportManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoReimportManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
