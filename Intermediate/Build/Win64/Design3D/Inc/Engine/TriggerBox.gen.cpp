// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerBox::StaticRegisterNativesATriggerBox()
	{
	}
	UClass* Z_Construct_UClass_ATriggerBox_NoRegister()
	{
		return ATriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TriggerBox.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerBox.h" },
		{ "ToolTip", "A box shaped trigger, used to generate overlap events in the level" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBox_Statics::ClassParams = {
		&ATriggerBox::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerBox, 415859916);
	template<> ENGINE_API UClass* StaticClass<ATriggerBox>()
	{
		return ATriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerBox(Z_Construct_UClass_ATriggerBox, &ATriggerBox::StaticClass, TEXT("/Script/Engine"), TEXT("ATriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
