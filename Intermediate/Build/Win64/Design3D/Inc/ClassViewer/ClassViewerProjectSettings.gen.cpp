// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassViewer/Public/ClassViewerProjectSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassViewerProjectSettings() {}
// Cross Module References
	CLASSVIEWER_API UClass* Z_Construct_UClass_UClassViewerProjectSettings_NoRegister();
	CLASSVIEWER_API UClass* Z_Construct_UClass_UClassViewerProjectSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClassViewer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void UClassViewerProjectSettings::StaticRegisterNativesUClassViewerProjectSettings()
	{
	}
	UClass* Z_Construct_UClass_UClassViewerProjectSettings_NoRegister()
	{
		return UClassViewerProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClassViewerProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalOnlyClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InternalOnlyClasses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InternalOnlyClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalOnlyPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InternalOnlyPaths;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InternalOnlyPaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassViewerProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClassViewer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClassViewerProjectSettings.h" },
		{ "ModuleRelativePath", "Public/ClassViewerProjectSettings.h" },
		{ "ToolTip", "Implements the settings for the Class Viewer Project Settings" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_MetaData[] = {
		{ "AllowAbstract", "true" },
		{ "Category", "ClassVisibilityManagement" },
		{ "DisplayName", "List of base classes to consider Internal Only." },
		{ "HideViewOptions", "" },
		{ "MetaClass", "Object" },
		{ "ModuleRelativePath", "Public/ClassViewerProjectSettings.h" },
		{ "ShowTreeView", "" },
		{ "ToolTip", "The base classes to be considered Internal Only for the class picker." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses = { "InternalOnlyClasses", nullptr, (EPropertyFlags)0x0010000800004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClassViewerProjectSettings, InternalOnlyClasses), METADATA_PARAMS(Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_Inner = { "InternalOnlyClasses", nullptr, (EPropertyFlags)0x0000000800004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_MetaData[] = {
		{ "Category", "ClassVisibilityManagement" },
		{ "ContentDir", "" },
		{ "DisplayName", "List of directories to consider Internal Only." },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/ClassViewerProjectSettings.h" },
		{ "ToolTip", "The base directories to be considered Internal Only for the class picker." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths = { "InternalOnlyPaths", nullptr, (EPropertyFlags)0x0010000800004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClassViewerProjectSettings, InternalOnlyPaths), METADATA_PARAMS(Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_Inner = { "InternalOnlyPaths", nullptr, (EPropertyFlags)0x0000000800004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassViewerProjectSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_Inner,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassViewerProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassViewerProjectSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::ClassParams = {
		&UClassViewerProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UClassViewerProjectSettings_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UClassViewerProjectSettings_Statics::PropPointers), 0),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UClassViewerProjectSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClassViewerProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassViewerProjectSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClassViewerProjectSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClassViewerProjectSettings, 1740633991);
	template<> CLASSVIEWER_API UClass* StaticClass<UClassViewerProjectSettings>()
	{
		return UClassViewerProjectSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClassViewerProjectSettings(Z_Construct_UClass_UClassViewerProjectSettings, &UClassViewerProjectSettings::StaticClass, TEXT("/Script/ClassViewer"), TEXT("UClassViewerProjectSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassViewerProjectSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
