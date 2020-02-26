// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/Navigation/NavAreaBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavAreaBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavAreaBase::StaticRegisterNativesUNavAreaBase()
	{
	}
	UClass* Z_Construct_UClass_UNavAreaBase_NoRegister()
	{
		return UNavAreaBase::StaticClass();
	}
	struct Z_Construct_UClass_UNavAreaBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavAreaBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavAreaBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Navigation/NavAreaBase.h" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavAreaBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "a stub class. Actual implementation in NavigationSystem module." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavAreaBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavAreaBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavAreaBase_Statics::ClassParams = {
		&UNavAreaBase::StaticClass,
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
		0x003000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavAreaBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavAreaBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavAreaBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavAreaBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavAreaBase, 2472161939);
	template<> ENGINE_API UClass* StaticClass<UNavAreaBase>()
	{
		return UNavAreaBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavAreaBase(Z_Construct_UClass_UNavAreaBase, &UNavAreaBase::StaticClass, TEXT("/Script/Engine"), TEXT("UNavAreaBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavAreaBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
