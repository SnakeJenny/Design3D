// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/NavFilter_AIControllerDefault.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavFilter_AIControllerDefault() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UNavFilter_AIControllerDefault::StaticRegisterNativesUNavFilter_AIControllerDefault()
	{
	}
	UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault_NoRegister()
	{
		return UNavFilter_AIControllerDefault::StaticClass();
	}
	struct Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/NavFilter_AIControllerDefault.h" },
		{ "ModuleRelativePath", "Classes/Navigation/NavFilter_AIControllerDefault.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavFilter_AIControllerDefault>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::ClassParams = {
		&UNavFilter_AIControllerDefault::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavFilter_AIControllerDefault()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavFilter_AIControllerDefault_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavFilter_AIControllerDefault, 3100330110);
	template<> AIMODULE_API UClass* StaticClass<UNavFilter_AIControllerDefault>()
	{
		return UNavFilter_AIControllerDefault::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavFilter_AIControllerDefault(Z_Construct_UClass_UNavFilter_AIControllerDefault, &UNavFilter_AIControllerDefault::StaticClass, TEXT("/Script/AIModule"), TEXT("UNavFilter_AIControllerDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavFilter_AIControllerDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
