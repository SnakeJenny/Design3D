// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/NavigationSystemConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystemConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINE_API UClass* Z_Construct_UClass_UNullNavSysConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNullNavSysConfig();
// End Cross Module References
	void UNavigationSystemConfig::StaticRegisterNativesUNavigationSystemConfig()
	{
	}
	UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister()
	{
		return UNavigationSystemConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystemConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOverriden_MetaData[];
#endif
		static void NewProp_bIsOverriden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOverriden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavigationSystemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystemConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemConfig_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Generic Navigation System Config" },
		{ "IncludePath", "AI/NavigationSystemConfig.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ToolTip", "If true it means the navigation system settings are overridden from another source (like a NavConfigOverrideActor)" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_SetBit(void* Obj)
	{
		((UNavigationSystemConfig*)Obj)->bIsOverriden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden = { "bIsOverriden", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNavigationSystemConfig), &Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "MetaClass", "NavigationSystemBase" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass = { "NavigationSystemClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNavigationSystemConfig, NavigationSystemClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_bIsOverriden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemConfig_Statics::NewProp_NavigationSystemClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystemConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemConfig_Statics::ClassParams = {
		&UNavigationSystemConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::PropPointers),
		0,
		0x001030A2u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemConfig_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystemConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationSystemConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationSystemConfig, 2210448417);
	template<> ENGINE_API UClass* StaticClass<UNavigationSystemConfig>()
	{
		return UNavigationSystemConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationSystemConfig(Z_Construct_UClass_UNavigationSystemConfig, &UNavigationSystemConfig::StaticClass, TEXT("/Script/Engine"), TEXT("UNavigationSystemConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemConfig);
	void UNullNavSysConfig::StaticRegisterNativesUNullNavSysConfig()
	{
	}
	UClass* Z_Construct_UClass_UNullNavSysConfig_NoRegister()
	{
		return UNullNavSysConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNullNavSysConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNullNavSysConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationSystemConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNullNavSysConfig_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/NavigationSystemConfig.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNullNavSysConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNullNavSysConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNullNavSysConfig_Statics::ClassParams = {
		&UNullNavSysConfig::StaticClass,
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
		0x000830A2u,
		METADATA_PARAMS(Z_Construct_UClass_UNullNavSysConfig_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNullNavSysConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNullNavSysConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNullNavSysConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNullNavSysConfig, 1463547065);
	template<> ENGINE_API UClass* StaticClass<UNullNavSysConfig>()
	{
		return UNullNavSysConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNullNavSysConfig(Z_Construct_UClass_UNullNavSysConfig, &UNullNavSysConfig::StaticClass, TEXT("/Script/Engine"), TEXT("UNullNavSysConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNullNavSysConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
