// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/ScreenshotFunctionalTestBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshotFunctionalTestBase() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AScreenshotFunctionalTestBase::StaticRegisterNativesAScreenshotFunctionalTestBase()
	{
	}
	UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase_NoRegister()
	{
		return AScreenshotFunctionalTestBase::StaticClass();
	}
	struct Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenshotOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenshotCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Notes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "ScreenshotFunctionalTestBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Base class for screenshot functional test" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions = { "ScreenshotOptions", nullptr, (EPropertyFlags)0x00200a0000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScreenshotFunctionalTestBase, ScreenshotOptions), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera = { "ScreenshotCamera", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScreenshotFunctionalTestBase, ScreenshotCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTestBase.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AScreenshotFunctionalTestBase, Notes), METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_ScreenshotCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::NewProp_Notes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScreenshotFunctionalTestBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::ClassParams = {
		&AScreenshotFunctionalTestBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScreenshotFunctionalTestBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScreenshotFunctionalTestBase, 3163715995);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<AScreenshotFunctionalTestBase>()
	{
		return AScreenshotFunctionalTestBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScreenshotFunctionalTestBase(Z_Construct_UClass_AScreenshotFunctionalTestBase, &AScreenshotFunctionalTestBase::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("AScreenshotFunctionalTestBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScreenshotFunctionalTestBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AScreenshotFunctionalTestBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
