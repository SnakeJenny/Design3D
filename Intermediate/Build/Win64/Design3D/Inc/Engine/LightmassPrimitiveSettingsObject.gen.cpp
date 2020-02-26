// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Lightmass/LightmassPrimitiveSettingsObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPrimitiveSettingsObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
// End Cross Module References
	void ULightmassPrimitiveSettingsObject::StaticRegisterNativesULightmassPrimitiveSettingsObject()
	{
	}
	UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister()
	{
		return ULightmassPrimitiveSettingsObject::StaticClass();
	}
	struct Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Lightmass/LightmassPrimitiveSettingsObject.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPrimitiveSettingsObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPrimitiveSettingsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightmassPrimitiveSettingsObject, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmassPrimitiveSettingsObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::ClassParams = {
		&ULightmassPrimitiveSettingsObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers),
		0,
		0x000830A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightmassPrimitiveSettingsObject, 3352984241);
	template<> ENGINE_API UClass* StaticClass<ULightmassPrimitiveSettingsObject>()
	{
		return ULightmassPrimitiveSettingsObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightmassPrimitiveSettingsObject(Z_Construct_UClass_ULightmassPrimitiveSettingsObject, &ULightmassPrimitiveSettingsObject::StaticClass, TEXT("/Script/Engine"), TEXT("ULightmassPrimitiveSettingsObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmassPrimitiveSettingsObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
