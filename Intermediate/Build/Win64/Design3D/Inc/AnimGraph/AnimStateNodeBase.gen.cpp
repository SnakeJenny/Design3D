// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimStateNodeBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateNodeBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimStateNodeBase::StaticRegisterNativesUAnimStateNodeBase()
	{
	}
	UClass* Z_Construct_UClass_UAnimStateNodeBase_NoRegister()
	{
		return UAnimStateNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNodeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateNodeBase.h" },
		{ "ModuleRelativePath", "Classes/AnimStateNodeBase.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateNodeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateNodeBase_Statics::ClassParams = {
		&UAnimStateNodeBase::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateNodeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimStateNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateNodeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimStateNodeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimStateNodeBase, 2681480801);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateNodeBase>()
	{
		return UAnimStateNodeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimStateNodeBase(Z_Construct_UClass_UAnimStateNodeBase, &UAnimStateNodeBase::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimStateNodeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateNodeBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateNodeBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
