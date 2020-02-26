// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimationTransitionSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationTransitionSchema() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationTransitionSchema_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationTransitionSchema();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationTransitionSchema::StaticRegisterNativesUAnimationTransitionSchema()
	{
	}
	UClass* Z_Construct_UClass_UAnimationTransitionSchema_NoRegister()
	{
		return UAnimationTransitionSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationTransitionSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationTransitionSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationTransitionSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationTransitionSchema.h" },
		{ "ModuleRelativePath", "Classes/AnimationTransitionSchema.h" },
		{ "ToolTip", "This class is the schema for transition rule graphs in animation state machines" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationTransitionSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationTransitionSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationTransitionSchema_Statics::ClassParams = {
		&UAnimationTransitionSchema::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationTransitionSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationTransitionSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationTransitionSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationTransitionSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationTransitionSchema, 3083300076);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationTransitionSchema>()
	{
		return UAnimationTransitionSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationTransitionSchema(Z_Construct_UClass_UAnimationTransitionSchema, &UAnimationTransitionSchema::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimationTransitionSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationTransitionSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
