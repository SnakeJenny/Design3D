// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/PhysicsAssetGenerationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetGenerationSettings() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetGenerationSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetGenerationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FPhysAssetCreateParams();
// End Cross Module References
	void UPhysicsAssetGenerationSettings::StaticRegisterNativesUPhysicsAssetGenerationSettings()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsAssetGenerationSettings_NoRegister()
	{
		return UPhysicsAssetGenerationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreateParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsAssetGenerationSettings.h" },
		{ "ModuleRelativePath", "Public/PhysicsAssetGenerationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "ModuleRelativePath", "Public/PhysicsAssetGenerationSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams = { "CreateParams", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhysicsAssetGenerationSettings, CreateParams), Z_Construct_UScriptStruct_FPhysAssetCreateParams, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetGenerationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::ClassParams = {
		&UPhysicsAssetGenerationSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetGenerationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsAssetGenerationSettings, 2702762057);
	template<> UNREALED_API UClass* StaticClass<UPhysicsAssetGenerationSettings>()
	{
		return UPhysicsAssetGenerationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsAssetGenerationSettings(Z_Construct_UClass_UPhysicsAssetGenerationSettings, &UPhysicsAssetGenerationSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPhysicsAssetGenerationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetGenerationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
