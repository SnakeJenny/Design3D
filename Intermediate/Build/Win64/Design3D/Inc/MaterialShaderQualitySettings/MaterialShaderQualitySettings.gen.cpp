// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialShaderQualitySettings/Classes/MaterialShaderQualitySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings() {}
// Cross Module References
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister();
// End Cross Module References
	void UMaterialShaderQualitySettings::StaticRegisterNativesUMaterialShaderQualitySettings()
	{
	}
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister()
	{
		return UMaterialShaderQualitySettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialShaderQualitySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardSettingMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForwardSettingMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ForwardSettingMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForwardSettingMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialShaderQualitySettings.h" },
		{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
		{ "ToolTip", "UCLASS(config = Engine, defaultconfig)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap = { "ForwardSettingMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialShaderQualitySettings, ForwardSettingMap), METADATA_PARAMS(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_Key_KeyProp = { "ForwardSettingMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_ValueProp = { "ForwardSettingMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialShaderQualitySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::ClassParams = {
		&UMaterialShaderQualitySettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialShaderQualitySettings, 2673744866);
	template<> MATERIALSHADERQUALITYSETTINGS_API UClass* StaticClass<UMaterialShaderQualitySettings>()
	{
		return UMaterialShaderQualitySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialShaderQualitySettings(Z_Construct_UClass_UMaterialShaderQualitySettings, &UMaterialShaderQualitySettings::StaticClass, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("UMaterialShaderQualitySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialShaderQualitySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
