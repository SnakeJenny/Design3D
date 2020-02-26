// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimationConduitGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationConduitGraphSchema() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationConduitGraphSchema_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationConduitGraphSchema();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationConduitGraphSchema::StaticRegisterNativesUAnimationConduitGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UAnimationConduitGraphSchema_NoRegister()
	{
		return UAnimationConduitGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationConduitGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationConduitGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/AnimationConduitGraphSchema.h" },
		{ "ToolTip", "@TODO: Should this derive from AnimationTransitionSchema (with appropriate suppression of state-based queries)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationConduitGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::ClassParams = {
		&UAnimationConduitGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationConduitGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationConduitGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationConduitGraphSchema, 3516517381);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationConduitGraphSchema>()
	{
		return UAnimationConduitGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationConduitGraphSchema(Z_Construct_UClass_UAnimationConduitGraphSchema, &UAnimationConduitGraphSchema::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimationConduitGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationConduitGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
