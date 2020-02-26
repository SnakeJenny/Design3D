// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MergeActors/Private/MeshProxyTool/MeshProxyTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshProxyTool() {}
// Cross Module References
	MERGEACTORS_API UClass* Z_Construct_UClass_UMeshProxySettingsObject_NoRegister();
	MERGEACTORS_API UClass* Z_Construct_UClass_UMeshProxySettingsObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MergeActors();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
// End Cross Module References
	void UMeshProxySettingsObject::StaticRegisterNativesUMeshProxySettingsObject()
	{
	}
	UClass* Z_Construct_UClass_UMeshProxySettingsObject_NoRegister()
	{
		return UMeshProxySettingsObject::StaticClass();
	}
	struct Z_Construct_UClass_UMeshProxySettingsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshProxySettingsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MergeActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshProxySettingsObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshProxyTool/MeshProxyTool.h" },
		{ "ModuleRelativePath", "Private/MeshProxyTool/MeshProxyTool.h" },
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshProxySettingsObject_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Private/MeshProxyTool/MeshProxyTool.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshProxySettingsObject_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshProxySettingsObject, Settings), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(Z_Construct_UClass_UMeshProxySettingsObject_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshProxySettingsObject_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshProxySettingsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshProxySettingsObject_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshProxySettingsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshProxySettingsObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshProxySettingsObject_Statics::ClassParams = {
		&UMeshProxySettingsObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshProxySettingsObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMeshProxySettingsObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshProxySettingsObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshProxySettingsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshProxySettingsObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshProxySettingsObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshProxySettingsObject, 50954239);
	template<> MERGEACTORS_API UClass* StaticClass<UMeshProxySettingsObject>()
	{
		return UMeshProxySettingsObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshProxySettingsObject(Z_Construct_UClass_UMeshProxySettingsObject, &UMeshProxySettingsObject::StaticClass, TEXT("/Script/MergeActors"), TEXT("UMeshProxySettingsObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshProxySettingsObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
