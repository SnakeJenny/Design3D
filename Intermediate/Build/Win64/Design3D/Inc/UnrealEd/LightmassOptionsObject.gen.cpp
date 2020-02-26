// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Preferences/LightmassOptionsObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassOptionsObject() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_ULightmassOptionsObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULightmassOptionsObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmDebugOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassDebugOptions();
// End Cross Module References
	void ULightmassOptionsObject::StaticRegisterNativesULightmassOptionsObject()
	{
	}
	UClass* Z_Construct_UClass_ULightmassOptionsObject_NoRegister()
	{
		return ULightmassOptionsObject::StaticClass();
	}
	struct Z_Construct_UClass_ULightmassOptionsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwarmSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SwarmSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightmassOptionsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassOptionsObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/LightmassOptionsObject.h" },
		{ "ModuleRelativePath", "Classes/Preferences/LightmassOptionsObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings_MetaData[] = {
		{ "Category", "Swarm" },
		{ "ModuleRelativePath", "Classes/Preferences/LightmassOptionsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings = { "SwarmSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightmassOptionsObject, SwarmSettings), Z_Construct_UScriptStruct_FSwarmDebugOptions, METADATA_PARAMS(Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/Preferences/LightmassOptionsObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightmassOptionsObject, DebugSettings), Z_Construct_UScriptStruct_FLightmassDebugOptions, METADATA_PARAMS(Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmassOptionsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_SwarmSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmassOptionsObject_Statics::NewProp_DebugSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightmassOptionsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmassOptionsObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightmassOptionsObject_Statics::ClassParams = {
		&ULightmassOptionsObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightmassOptionsObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULightmassOptionsObject_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightmassOptionsObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightmassOptionsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightmassOptionsObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightmassOptionsObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightmassOptionsObject, 3014108281);
	template<> UNREALED_API UClass* StaticClass<ULightmassOptionsObject>()
	{
		return ULightmassOptionsObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightmassOptionsObject(Z_Construct_UClass_ULightmassOptionsObject, &ULightmassOptionsObject::StaticClass, TEXT("/Script/UnrealEd"), TEXT("ULightmassOptionsObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmassOptionsObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
