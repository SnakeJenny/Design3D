// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/DeviceProfiles/DeviceProfileManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfileManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UDeviceProfileManager::StaticRegisterNativesUDeviceProfileManager()
	{
	}
	UClass* Z_Construct_UClass_UDeviceProfileManager_NoRegister()
	{
		return UDeviceProfileManager::StaticClass();
	}
	struct Z_Construct_UClass_UDeviceProfileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Profiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Profiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeviceProfileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfileManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeviceProfiles/DeviceProfileManager.h" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
		{ "ToolTip", "Implements a helper class that manages all profiles in the Device" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
		{ "ToolTip", "Holds the collection of managed profiles." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeviceProfileManager, Profiles), METADATA_PARAMS(Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeviceProfileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceProfileManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeviceProfileManager_Statics::ClassParams = {
		&UDeviceProfileManager::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDeviceProfileManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeviceProfileManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeviceProfileManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeviceProfileManager, 2367661940);
	template<> ENGINE_API UClass* StaticClass<UDeviceProfileManager>()
	{
		return UDeviceProfileManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeviceProfileManager(Z_Construct_UClass_UDeviceProfileManager, &UDeviceProfileManager::StaticClass, TEXT("/Script/Engine"), TEXT("UDeviceProfileManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfileManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
