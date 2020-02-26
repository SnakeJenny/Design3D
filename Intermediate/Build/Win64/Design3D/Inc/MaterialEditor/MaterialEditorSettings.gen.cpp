// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialEditor/Public/MaterialEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorSettings() {}
// Cross Module References
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditorSettings_NoRegister();
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MaterialEditor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	void UMaterialEditorSettings::StaticRegisterNativesUMaterialEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UMaterialEditorSettings_NoRegister()
	{
		return UMaterialEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaliOfflineCompilerPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaliOfflineCompilerPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialEditorSettings.h" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath_MetaData[] = {
		{ "Category", "Offline Shader Compilers" },
		{ "DisplayName", "Mali Offline Compiler" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "Path to user installed Mali shader compiler that can be used by the material editor to compile and extract shader informations for Android platforms.\nOfficial website address: https://developer.arm.com/products/software-development-tools/graphics-development-tools/mali-offline-compiler/downloads" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath = { "MaliOfflineCompilerPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialEditorSettings, MaliOfflineCompilerPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorSettings_Statics::ClassParams = {
		&UMaterialEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialEditorSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialEditorSettings, 3624451413);
	template<> MATERIALEDITOR_API UClass* StaticClass<UMaterialEditorSettings>()
	{
		return UMaterialEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialEditorSettings(Z_Construct_UClass_UMaterialEditorSettings, &UMaterialEditorSettings::StaticClass, TEXT("/Script/MaterialEditor"), TEXT("UMaterialEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
