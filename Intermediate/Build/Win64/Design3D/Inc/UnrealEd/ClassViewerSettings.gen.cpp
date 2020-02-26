// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Settings/ClassViewerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassViewerSettings() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UClassViewerSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UClassViewerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EClassViewerDeveloperType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EClassViewerDeveloperType"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EClassViewerDeveloperType>()
	{
		return EClassViewerDeveloperType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClassViewerDeveloperType(EClassViewerDeveloperType_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EClassViewerDeveloperType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Hash() { return 647855370U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClassViewerDeveloperType"), 0, Get_Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClassViewerDeveloperType::CVDT_None", (int64)EClassViewerDeveloperType::CVDT_None },
				{ "EClassViewerDeveloperType::CVDT_CurrentUser", (int64)EClassViewerDeveloperType::CVDT_CurrentUser },
				{ "EClassViewerDeveloperType::CVDT_All", (int64)EClassViewerDeveloperType::CVDT_All },
				{ "EClassViewerDeveloperType::CVDT_Max", (int64)EClassViewerDeveloperType::CVDT_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CVDT_All.ToolTip", "Allow all users' developer folders to be displayed." },
				{ "CVDT_CurrentUser.ToolTip", "Allow the current user's developer folder to be displayed." },
				{ "CVDT_Max.ToolTip", "Max developer type" },
				{ "CVDT_None.ToolTip", "Display no developer folders" },
				{ "ModuleRelativePath", "Classes/Settings/ClassViewerSettings.h" },
				{ "ToolTip", "The developer folder view modes used in SClassViewer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EClassViewerDeveloperType",
				"EClassViewerDeveloperType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UClassViewerSettings::StaticRegisterNativesUClassViewerSettings()
	{
	}
	UClass* Z_Construct_UClass_UClassViewerSettings_NoRegister()
	{
		return UClassViewerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClassViewerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperFolderType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeveloperFolderType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeveloperFolderType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayInternalClasses_MetaData[];
#endif
		static void NewProp_DisplayInternalClasses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayInternalClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassViewerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/ClassViewerSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/ClassViewerSettings.h" },
		{ "ToolTip", "Implements the Class Viewer's loading and saving settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ClassViewerSettings.h" },
		{ "ToolTip", "The developer folder view modes used in SClassViewer" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType = { "DeveloperFolderType", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClassViewerSettings, DeveloperFolderType), Z_Construct_UEnum_UnrealEd_EClassViewerDeveloperType, METADATA_PARAMS(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Settings/ClassViewerSettings.h" },
		{ "ToolTip", "Whether to display internal use classes." },
	};
#endif
	void Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_SetBit(void* Obj)
	{
		((UClassViewerSettings*)Obj)->DisplayInternalClasses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses = { "DisplayInternalClasses", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClassViewerSettings), &Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassViewerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DeveloperFolderType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerSettings_Statics::NewProp_DisplayInternalClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassViewerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassViewerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClassViewerSettings_Statics::ClassParams = {
		&UClassViewerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClassViewerSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UClassViewerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClassViewerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UClassViewerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassViewerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClassViewerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClassViewerSettings, 2903159171);
	template<> UNREALED_API UClass* StaticClass<UClassViewerSettings>()
	{
		return UClassViewerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClassViewerSettings(Z_Construct_UClass_UClassViewerSettings, &UClassViewerSettings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UClassViewerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassViewerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
