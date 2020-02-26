// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_ExecutionSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_ExecutionSequence() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ExecutionSequence_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ExecutionSequence();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
// End Cross Module References
	void UK2Node_ExecutionSequence::StaticRegisterNativesUK2Node_ExecutionSequence()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_ExecutionSequence_NoRegister()
	{
		return UK2Node_ExecutionSequence::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_ExecutionSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_ExecutionSequence.h" },
		{ "ModuleRelativePath", "Classes/K2Node_ExecutionSequence.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_ExecutionSequence, IK2Node_AddPinInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_ExecutionSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::ClassParams = {
		&UK2Node_ExecutionSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_ExecutionSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_ExecutionSequence, 2837034853);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_ExecutionSequence>()
	{
		return UK2Node_ExecutionSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_ExecutionSequence(Z_Construct_UClass_UK2Node_ExecutionSequence, &UK2Node_ExecutionSequence::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_ExecutionSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_ExecutionSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
