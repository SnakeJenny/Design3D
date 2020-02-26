// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_MatineeController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MatineeController() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MatineeController_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MatineeController();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor_NoRegister();
// End Cross Module References
	void UK2Node_MatineeController::StaticRegisterNativesUK2Node_MatineeController()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_MatineeController_NoRegister()
	{
		return UK2Node_MatineeController::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MatineeController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatineeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatineeActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MatineeController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MatineeController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MatineeController.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MatineeController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MatineeController_Statics::NewProp_MatineeActor_MetaData[] = {
		{ "Category", "K2Node_MatineeController" },
		{ "ModuleRelativePath", "Classes/K2Node_MatineeController.h" },
		{ "ToolTip", "The matinee actor in the level that this node controls" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_MatineeController_Statics::NewProp_MatineeActor = { "MatineeActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_MatineeController, MatineeActor), Z_Construct_UClass_AMatineeActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MatineeController_Statics::NewProp_MatineeActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MatineeController_Statics::NewProp_MatineeActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MatineeController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MatineeController_Statics::NewProp_MatineeActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MatineeController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MatineeController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MatineeController_Statics::ClassParams = {
		&UK2Node_MatineeController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MatineeController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_MatineeController_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MatineeController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_MatineeController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MatineeController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_MatineeController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_MatineeController, 3411763926);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MatineeController>()
	{
		return UK2Node_MatineeController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_MatineeController(Z_Construct_UClass_UK2Node_MatineeController, &UK2Node_MatineeController::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_MatineeController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MatineeController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
