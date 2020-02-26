// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/MeshSimplificationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSimplificationSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMeshSimplificationSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshSimplificationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMeshSimplificationSettings::StaticRegisterNativesUMeshSimplificationSettings()
	{
	}
	UClass* Z_Construct_UClass_UMeshSimplificationSettings_NoRegister()
	{
		return UMeshSimplificationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSimplificationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshReductionModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MeshReductionModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSimplificationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSimplificationSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Simplification" },
		{ "IncludePath", "Engine/MeshSimplificationSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MeshReductionModule" },
		{ "DisplayName", "Mesh Reduction Plugin" },
		{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
		{ "ToolTip", "Mesh reduction plugin to use when simplifying mesh geometry" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName = { "MeshReductionModuleName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshSimplificationSettings, MeshReductionModuleName), METADATA_PARAMS(Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSimplificationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSimplificationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshSimplificationSettings_Statics::ClassParams = {
		&UMeshSimplificationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSimplificationSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSimplificationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshSimplificationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshSimplificationSettings, 819534607);
	template<> ENGINE_API UClass* StaticClass<UMeshSimplificationSettings>()
	{
		return UMeshSimplificationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshSimplificationSettings(Z_Construct_UClass_UMeshSimplificationSettings, &UMeshSimplificationSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UMeshSimplificationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSimplificationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
