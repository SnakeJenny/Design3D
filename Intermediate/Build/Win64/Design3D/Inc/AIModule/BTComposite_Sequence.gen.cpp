// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Composites/BTComposite_Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTComposite_Sequence() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTComposite_Sequence();
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTComposite_Sequence::StaticRegisterNativesUBTComposite_Sequence()
	{
	}
	UClass* Z_Construct_UClass_UBTComposite_Sequence_NoRegister()
	{
		return UBTComposite_Sequence::StaticClass();
	}
	struct Z_Construct_UClass_UBTComposite_Sequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTComposite_Sequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTCompositeNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTComposite_Sequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BTComposite_Sequence.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Composites/BTComposite_Sequence.h" },
		{ "ToolTip", "Sequence composite node.\nSequence Nodes execute their children from left to right, and will stop executing its children when one of their children fails.\nIf a child fails, then the Sequence fails. If all the Sequence's children succeed, then the Sequence succeeds." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTComposite_Sequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTComposite_Sequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTComposite_Sequence_Statics::ClassParams = {
		&UBTComposite_Sequence::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTComposite_Sequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTComposite_Sequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTComposite_Sequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTComposite_Sequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTComposite_Sequence, 3389961881);
	template<> AIMODULE_API UClass* StaticClass<UBTComposite_Sequence>()
	{
		return UBTComposite_Sequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTComposite_Sequence(Z_Construct_UClass_UBTComposite_Sequence, &UBTComposite_Sequence::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTComposite_Sequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTComposite_Sequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
