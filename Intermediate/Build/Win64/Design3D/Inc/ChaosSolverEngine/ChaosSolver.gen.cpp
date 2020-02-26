// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolverEngine/Public/Chaos/ChaosSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolver() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolver_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosSolver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References
	void UChaosSolver::StaticRegisterNativesUChaosSolver()
	{
	}
	UClass* Z_Construct_UClass_UChaosSolver_NoRegister()
	{
		return UChaosSolver::StaticClass();
	}
	struct Z_Construct_UClass_UChaosSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosSolver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/ChaosSolver.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UChaosSolver (UObject)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosSolver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaosSolver_Statics::ClassParams = {
		&UChaosSolver::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosSolver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChaosSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosSolver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaosSolver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaosSolver, 373538809);
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosSolver>()
	{
		return UChaosSolver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaosSolver(Z_Construct_UClass_UChaosSolver, &UChaosSolver::StaticClass, TEXT("/Script/ChaosSolverEngine"), TEXT("UChaosSolver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosSolver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
