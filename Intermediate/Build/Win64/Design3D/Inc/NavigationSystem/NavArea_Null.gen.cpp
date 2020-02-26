// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavAreas/NavArea_Null.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Null() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Null_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Null();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavArea_Null::StaticRegisterNativesUNavArea_Null()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_Null_NoRegister()
	{
		return UNavArea_Null::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_Null_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_Null_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Null_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavAreas/NavArea_Null.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea_Null.h" },
		{ "ToolTip", "In general represents an empty area, that cannot be traversed by anyone. Ever." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_Null_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Null>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Null_Statics::ClassParams = {
		&UNavArea_Null::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_Null_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavArea_Null_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea_Null()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavArea_Null_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavArea_Null, 244441969);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea_Null>()
	{
		return UNavArea_Null::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_Null(Z_Construct_UClass_UNavArea_Null, &UNavArea_Null::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavArea_Null"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Null);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
