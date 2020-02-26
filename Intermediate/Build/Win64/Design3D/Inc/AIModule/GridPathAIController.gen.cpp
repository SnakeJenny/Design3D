// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/GridPathAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPathAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AGridPathAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AGridPathAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void AGridPathAIController::StaticRegisterNativesAGridPathAIController()
	{
	}
	UClass* Z_Construct_UClass_AGridPathAIController_NoRegister()
	{
		return AGridPathAIController::StaticClass();
	}
	struct Z_Construct_UClass_AGridPathAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridPathAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridPathAIController_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GridPathAIController.h" },
		{ "ModuleRelativePath", "Classes/GridPathAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridPathAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridPathAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGridPathAIController_Statics::ClassParams = {
		&AGridPathAIController::StaticClass,
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
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGridPathAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGridPathAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridPathAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGridPathAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGridPathAIController, 3569103998);
	template<> AIMODULE_API UClass* StaticClass<AGridPathAIController>()
	{
		return AGridPathAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGridPathAIController(Z_Construct_UClass_AGridPathAIController, &AGridPathAIController::StaticClass, TEXT("/Script/AIModule"), TEXT("AGridPathAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridPathAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
