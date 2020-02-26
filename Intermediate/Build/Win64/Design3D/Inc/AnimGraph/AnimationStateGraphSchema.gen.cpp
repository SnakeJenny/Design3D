// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimationStateGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationStateGraphSchema() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateGraphSchema_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateGraphSchema();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraphSchema();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationStateGraphSchema::StaticRegisterNativesUAnimationStateGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UAnimationStateGraphSchema_NoRegister()
	{
		return UAnimationStateGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationStateGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationStateGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationStateGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/AnimationStateGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationStateGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationStateGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationStateGraphSchema_Statics::ClassParams = {
		&UAnimationStateGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimationStateGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationStateGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationStateGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationStateGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationStateGraphSchema, 189709743);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationStateGraphSchema>()
	{
		return UAnimationStateGraphSchema::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationStateGraphSchema(Z_Construct_UClass_UAnimationStateGraphSchema, &UAnimationStateGraphSchema::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimationStateGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationStateGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
