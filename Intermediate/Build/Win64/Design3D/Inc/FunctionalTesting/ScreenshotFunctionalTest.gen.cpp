// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/ScreenshotFunctionalTest.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshotFunctionalTest() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTest();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void AScreenshotFunctionalTest::StaticRegisterNativesAScreenshotFunctionalTest()
	{
	}
	UClass* Z_Construct_UClass_AScreenshotFunctionalTest_NoRegister()
	{
		return AScreenshotFunctionalTest::StaticClass();
	}
	struct Z_Construct_UClass_AScreenshotFunctionalTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraCutOnScreenshotPrep_MetaData[];
#endif
		static void NewProp_bCameraCutOnScreenshotPrep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCameraCutOnScreenshotPrep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScreenshotFunctionalTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScreenshotFunctionalTestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "ScreenshotFunctionalTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "No UI" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTest.h" },
		{ "ToolTip", "Tests not relying on temporal effects can force a camera cut to flush stale data" },
	};
#endif
	void Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_SetBit(void* Obj)
	{
		((AScreenshotFunctionalTest*)Obj)->bCameraCutOnScreenshotPrep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep = { "bCameraCutOnScreenshotPrep", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AScreenshotFunctionalTest), &Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_SetBit, METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_MetaData, ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScreenshotFunctionalTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScreenshotFunctionalTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScreenshotFunctionalTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScreenshotFunctionalTest_Statics::ClassParams = {
		&AScreenshotFunctionalTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScreenshotFunctionalTest_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScreenshotFunctionalTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScreenshotFunctionalTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScreenshotFunctionalTest, 1512808195);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<AScreenshotFunctionalTest>()
	{
		return AScreenshotFunctionalTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScreenshotFunctionalTest(Z_Construct_UClass_AScreenshotFunctionalTest, &AScreenshotFunctionalTest::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("AScreenshotFunctionalTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScreenshotFunctionalTest);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AScreenshotFunctionalTest)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
