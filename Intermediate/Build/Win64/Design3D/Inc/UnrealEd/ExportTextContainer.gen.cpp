// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Exporters/ExportTextContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportTextContainer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UExportTextContainer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UExportTextContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UExportTextContainer::StaticRegisterNativesUExportTextContainer()
	{
	}
	UClass* Z_Construct_UClass_UExportTextContainer_NoRegister()
	{
		return UExportTextContainer::StaticClass();
	}
	struct Z_Construct_UClass_UExportTextContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExportText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExportTextContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportTextContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/ExportTextContainer.h" },
		{ "ModuleRelativePath", "Classes/Exporters/ExportTextContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Exporters/ExportTextContainer.h" },
		{ "ToolTip", "ExportText representation of one or more objects" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText = { "ExportText", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExportTextContainer, ExportText), METADATA_PARAMS(Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExportTextContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExportTextContainer_Statics::NewProp_ExportText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExportTextContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportTextContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExportTextContainer_Statics::ClassParams = {
		&UExportTextContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExportTextContainer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UExportTextContainer_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExportTextContainer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UExportTextContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExportTextContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExportTextContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExportTextContainer, 2426407939);
	template<> UNREALED_API UClass* StaticClass<UExportTextContainer>()
	{
		return UExportTextContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExportTextContainer(Z_Construct_UClass_UExportTextContainer, &UExportTextContainer::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UExportTextContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExportTextContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
