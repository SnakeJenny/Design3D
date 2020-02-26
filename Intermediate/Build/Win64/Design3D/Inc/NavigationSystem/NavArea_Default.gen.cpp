// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavAreas/NavArea_Default.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_Default() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Default_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_Default();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavArea_Default::StaticRegisterNativesUNavArea_Default()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_Default_NoRegister()
	{
		return UNavArea_Default::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_Default_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_Default_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Default_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavAreas/NavArea_Default.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea_Default.h" },
		{ "ToolTip", "Regular navigation area, applied to entire navigation data by default" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_Default_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_Default>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Default_Statics::ClassParams = {
		&UNavArea_Default::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_Default_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavArea_Default_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea_Default()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavArea_Default_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavArea_Default, 3725279564);
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea_Default>()
	{
		return UNavArea_Default::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_Default(Z_Construct_UClass_UNavArea_Default, &UNavArea_Default::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavArea_Default"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_Default);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
