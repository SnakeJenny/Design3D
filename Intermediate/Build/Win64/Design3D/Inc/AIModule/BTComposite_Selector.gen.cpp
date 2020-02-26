// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Composites/BTComposite_Selector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_Selector() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Selector_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Selector();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTComposite_Selector::StaticRegisterNativesUBTComposite_Selector()
	{
	}
	UClass* Z_Construct_UClass_UBTComposite_Selector_NoRegister()
	{
		return UBTComposite_Selector::StaticClass();
	}
	struct Z_Construct_UClass_UBTComposite_Selector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTComposite_Selector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTComposite_Selector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BTComposite_Selector.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_Selector.h" },
		{ "ToolTip", "Selector composite node.\nSelector Nodes execute their children from left to right, and will stop executing its children when one of their children succeeds.\nIf a Selector's child succeeds, the Selector succeeds. If all the Selector's children fail, the Selector fails." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTComposite_Selector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTComposite_Selector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTComposite_Selector_Statics::ClassParams = {
		&UBTComposite_Selector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTComposite_Selector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTComposite_Selector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTComposite_Selector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTComposite_Selector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTComposite_Selector, 3868286646);
	template<> AIMODULE_API UClass* StaticClass<UBTComposite_Selector>()
	{
		return UBTComposite_Selector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTComposite_Selector(Z_Construct_UClass_UBTComposite_Selector, &UBTComposite_Selector::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTComposite_Selector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_Selector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
