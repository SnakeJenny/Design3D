// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimationCustomTransitionSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationCustomTransitionSchema() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationCustomTransitionSchema_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationCustomTransitionSchema();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraphSchema();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationCustomTransitionSchema::StaticRegisterNativesUAnimationCustomTransitionSchema()
	{
	}
	UClass* Z_Construct_UClass_UAnimationCustomTransitionSchema_NoRegister()
	{
		return UAnimationCustomTransitionSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationCustomTransitionSchema.h" },
		{ "ModuleRelativePath", "Classes/AnimationCustomTransitionSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationCustomTransitionSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics::ClassParams = {
		&UAnimationCustomTransitionSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationCustomTransitionSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationCustomTransitionSchema, 654160730);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationCustomTransitionSchema>()
	{
		return UAnimationCustomTransitionSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationCustomTransitionSchema(Z_Construct_UClass_UAnimationCustomTransitionSchema, &UAnimationCustomTransitionSchema::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimationCustomTransitionSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationCustomTransitionSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
