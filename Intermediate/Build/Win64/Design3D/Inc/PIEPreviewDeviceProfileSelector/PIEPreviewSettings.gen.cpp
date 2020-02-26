// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PIEPreviewDeviceProfileSelector/Private/PIEPreviewSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIEPreviewSettings() {}
// Cross Module References
	PIEPREVIEWDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UPIEPreviewSettings_NoRegister();
	PIEPREVIEWDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UPIEPreviewSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PIEPreviewDeviceProfileSelector();
// End Cross Module References
	void UPIEPreviewSettings::StaticRegisterNativesUPIEPreviewSettings()
	{
	}
	UClass* Z_Construct_UClass_UPIEPreviewSettings_NoRegister()
	{
		return UPIEPreviewSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPIEPreviewSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindowScalingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowPosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WindowPosY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowPosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WindowPosX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPIEPreviewSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceProfileSelector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PIEPreviewSettings.h" },
		{ "ModuleRelativePath", "Private/PIEPreviewSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowScalingFactor_MetaData[] = {
		{ "ModuleRelativePath", "Private/PIEPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowScalingFactor = { "WindowScalingFactor", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewSettings, WindowScalingFactor), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowScalingFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowScalingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosY_MetaData[] = {
		{ "ModuleRelativePath", "Private/PIEPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosY = { "WindowPosY", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewSettings, WindowPosY), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosX_MetaData[] = {
		{ "ModuleRelativePath", "Private/PIEPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosX = { "WindowPosX", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPIEPreviewSettings, WindowPosX), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPIEPreviewSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowScalingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewSettings_Statics::NewProp_WindowPosX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPIEPreviewSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPIEPreviewSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPIEPreviewSettings_Statics::ClassParams = {
		&UPIEPreviewSettings::StaticClass,
		"PIEPreviewSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPIEPreviewSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPIEPreviewSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPIEPreviewSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPIEPreviewSettings, 3093108354);
	template<> PIEPREVIEWDEVICEPROFILESELECTOR_API UClass* StaticClass<UPIEPreviewSettings>()
	{
		return UPIEPreviewSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPIEPreviewSettings(Z_Construct_UClass_UPIEPreviewSettings, &UPIEPreviewSettings::StaticClass, TEXT("/Script/PIEPreviewDeviceProfileSelector"), TEXT("UPIEPreviewSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPIEPreviewSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
