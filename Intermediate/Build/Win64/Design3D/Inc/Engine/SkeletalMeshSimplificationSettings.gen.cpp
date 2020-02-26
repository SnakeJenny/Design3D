// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SkeletalMeshSimplificationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSimplificationSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSimplificationSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSimplificationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USkeletalMeshSimplificationSettings::StaticRegisterNativesUSkeletalMeshSimplificationSettings()
	{
	}
	UClass* Z_Construct_UClass_USkeletalMeshSimplificationSettings_NoRegister()
	{
		return USkeletalMeshSimplificationSettings::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshReductionModuleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshReductionModuleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Skeletal Mesh Simplification" },
		{ "IncludePath", "Engine/SkeletalMeshSimplificationSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSimplificationSettings.h" },
		{ "ToolTip", "Controls the selection of the system used to simplify skeletal meshes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SkeletalMeshReductionModule" },
		{ "DisplayName", "Skeletal Mesh Reduction Plugin" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSimplificationSettings.h" },
		{ "ToolTip", "Mesh reduction plugin to use when simplifying skeletal meshes" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName = { "SkeletalMeshReductionModuleName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMeshSimplificationSettings, SkeletalMeshReductionModuleName), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshSimplificationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::ClassParams = {
		&USkeletalMeshSimplificationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshSimplificationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalMeshSimplificationSettings, 3661033830);
	template<> ENGINE_API UClass* StaticClass<USkeletalMeshSimplificationSettings>()
	{
		return USkeletalMeshSimplificationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshSimplificationSettings(Z_Construct_UClass_USkeletalMeshSimplificationSettings, &USkeletalMeshSimplificationSettings::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalMeshSimplificationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshSimplificationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
