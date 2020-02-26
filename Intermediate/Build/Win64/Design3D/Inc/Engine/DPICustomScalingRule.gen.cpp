// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DPICustomScalingRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDPICustomScalingRule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDPICustomScalingRule::StaticRegisterNativesUDPICustomScalingRule()
	{
	}
	UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister()
	{
		return UDPICustomScalingRule::StaticClass();
	}
	struct Z_Construct_UClass_UDPICustomScalingRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDPICustomScalingRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDPICustomScalingRule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DPICustomScalingRule.h" },
		{ "ModuleRelativePath", "Classes/Engine/DPICustomScalingRule.h" },
		{ "ToolTip", "Custom Scaling Rules for Slate and UMG Widgets can be implemented by sub-classing from this class\nand setting this rule to be used in your project settings." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDPICustomScalingRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDPICustomScalingRule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDPICustomScalingRule_Statics::ClassParams = {
		&UDPICustomScalingRule::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDPICustomScalingRule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDPICustomScalingRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDPICustomScalingRule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDPICustomScalingRule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDPICustomScalingRule, 4081834850);
	template<> ENGINE_API UClass* StaticClass<UDPICustomScalingRule>()
	{
		return UDPICustomScalingRule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDPICustomScalingRule(Z_Construct_UClass_UDPICustomScalingRule, &UDPICustomScalingRule::StaticClass, TEXT("/Script/Engine"), TEXT("UDPICustomScalingRule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDPICustomScalingRule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
