// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/DeviceProfiles/DeviceProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfile();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UDeviceProfile::StaticRegisterNativesUDeviceProfile()
	{
	}
	UClass* Z_Construct_UClass_UDeviceProfile_NoRegister()
	{
		return UDeviceProfile::StaticClass();
	}
	struct Z_Construct_UClass_UDeviceProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CVars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CVars;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeviceProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureLODSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeviceProfiles/DeviceProfile.h" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars_MetaData[] = {
		{ "Category", "ConsoleVariables" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "The collection of CVars which is set from this profile" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars = { "CVars", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeviceProfile, CVars), METADATA_PARAMS(Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars_Inner = { "CVars", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfile_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "The parent object of this profile, it is the object matching this DeviceType with the BaseProfileName" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeviceProfile, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeviceProfile_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfile_Statics::NewProp_BaseProfileName_MetaData[] = {
		{ "Category", "DeviceSettings" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "The name of the parent profile of this object" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_BaseProfileName = { "BaseProfileName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeviceProfile, BaseProfileName), METADATA_PARAMS(Z_Construct_UClass_UDeviceProfile_Statics::NewProp_BaseProfileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::NewProp_BaseProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfile_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "DeviceSettings" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "The type of this profile, I.e. IOS, Windows, PS4 etc" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeviceProfile, DeviceType), METADATA_PARAMS(Z_Construct_UClass_UDeviceProfile_Statics::NewProp_DeviceType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::NewProp_DeviceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeviceProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_BaseProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_DeviceType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeviceProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeviceProfile_Statics::ClassParams = {
		&UDeviceProfile::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeviceProfile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeviceProfile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeviceProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeviceProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeviceProfile, 444100888);
	template<> ENGINE_API UClass* StaticClass<UDeviceProfile>()
	{
		return UDeviceProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeviceProfile(Z_Construct_UClass_UDeviceProfile, &UDeviceProfile::StaticClass, TEXT("/Script/Engine"), TEXT("UDeviceProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
