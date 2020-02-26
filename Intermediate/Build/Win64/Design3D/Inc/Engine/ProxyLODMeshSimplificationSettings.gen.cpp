// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ProxyLODMeshSimplificationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyLODMeshSimplificationSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UProxyLODMeshSimplificationSettings::StaticRegisterNativesUProxyLODMeshSimplificationSettings()
	{
	}
	UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings_NoRegister()
	{
		return UProxyLODMeshSimplificationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProxyLODMeshReductionModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProxyLODMeshReductionModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Hierarchical LOD Mesh Simplification" },
		{ "IncludePath", "Engine/ProxyLODMeshSimplificationSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/ProxyLODMeshSimplificationSettings.h" },
		{ "ToolTip", "Controls the system used to generate proxy LODs with merged meshes (i.e. the HLOD system)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.ProxyLODMeshReductionModule" },
		{ "DisplayName", "Hierarchical LOD Mesh Reduction Plugin" },
		{ "ModuleRelativePath", "Classes/Engine/ProxyLODMeshSimplificationSettings.h" },
		{ "ToolTip", "Mesh reduction plugin to use when simplifying mesh geometry for Hierarchical LOD" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName = { "ProxyLODMeshReductionModuleName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProxyLODMeshSimplificationSettings, ProxyLODMeshReductionModuleName), METADATA_PARAMS(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::NewProp_ProxyLODMeshReductionModuleName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyLODMeshSimplificationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::ClassParams = {
		&UProxyLODMeshSimplificationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProxyLODMeshSimplificationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProxyLODMeshSimplificationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProxyLODMeshSimplificationSettings, 1888400355);
	template<> ENGINE_API UClass* StaticClass<UProxyLODMeshSimplificationSettings>()
	{
		return UProxyLODMeshSimplificationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProxyLODMeshSimplificationSettings(Z_Construct_UClass_UProxyLODMeshSimplificationSettings, &UProxyLODMeshSimplificationSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UProxyLODMeshSimplificationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyLODMeshSimplificationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
