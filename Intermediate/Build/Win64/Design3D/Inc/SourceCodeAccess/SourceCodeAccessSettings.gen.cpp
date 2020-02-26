// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceCodeAccess/Private/SourceCodeAccessSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceCodeAccessSettings() {}
// Cross Module References
	SOURCECODEACCESS_API UClass* Z_Construct_UClass_USourceCodeAccessSettings_NoRegister();
	SOURCECODEACCESS_API UClass* Z_Construct_UClass_USourceCodeAccessSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SourceCodeAccess();
// End Cross Module References
	void USourceCodeAccessSettings::StaticRegisterNativesUSourceCodeAccessSettings()
	{
	}
	UClass* Z_Construct_UClass_USourceCodeAccessSettings_NoRegister()
	{
		return USourceCodeAccessSettings::StaticClass();
	}
	struct Z_Construct_UClass_USourceCodeAccessSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredAccessor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreferredAccessor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceCodeAccessSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceCodeAccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceCodeAccessSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SourceCodeAccessSettings.h" },
		{ "ModuleRelativePath", "Private/SourceCodeAccessSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor_MetaData[] = {
		{ "Category", "Source Code Editor" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Source Code Editor" },
		{ "ModuleRelativePath", "Private/SourceCodeAccessSettings.h" },
		{ "ToolTip", "The source code editor we prefer to use." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor = { "PreferredAccessor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USourceCodeAccessSettings, PreferredAccessor), METADATA_PARAMS(Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor_MetaData, ARRAY_COUNT(Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceCodeAccessSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceCodeAccessSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceCodeAccessSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USourceCodeAccessSettings_Statics::ClassParams = {
		&USourceCodeAccessSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USourceCodeAccessSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USourceCodeAccessSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USourceCodeAccessSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USourceCodeAccessSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceCodeAccessSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USourceCodeAccessSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USourceCodeAccessSettings, 672048171);
	template<> SOURCECODEACCESS_API UClass* StaticClass<USourceCodeAccessSettings>()
	{
		return USourceCodeAccessSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USourceCodeAccessSettings(Z_Construct_UClass_USourceCodeAccessSettings, &USourceCodeAccessSettings::StaticClass, TEXT("/Script/SourceCodeAccess"), TEXT("USourceCodeAccessSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceCodeAccessSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
