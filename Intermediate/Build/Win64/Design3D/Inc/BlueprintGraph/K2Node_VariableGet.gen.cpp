// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_VariableGet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_VariableGet() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_VariableGet_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_VariableGet();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Variable();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_VariableGet::StaticRegisterNativesUK2Node_VariableGet()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_VariableGet_NoRegister()
	{
		return UK2Node_VariableGet::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_VariableGet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPureGet_MetaData[];
#endif
		static void NewProp_bIsPureGet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPureGet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_VariableGet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Variable,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_VariableGet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_VariableGet.h" },
		{ "ModuleRelativePath", "Classes/K2Node_VariableGet.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_VariableGet.h" },
		{ "ToolTip", "TRUE if the node should function as a pure node, without exec pins" },
	};
#endif
	void Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_SetBit(void* Obj)
	{
		((UK2Node_VariableGet*)Obj)->bIsPureGet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet = { "bIsPureGet", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_VariableGet), &Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_VariableGet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_VariableGet_Statics::NewProp_bIsPureGet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_VariableGet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_VariableGet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_VariableGet_Statics::ClassParams = {
		&UK2Node_VariableGet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_VariableGet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_VariableGet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_VariableGet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_VariableGet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_VariableGet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_VariableGet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_VariableGet, 2526252211);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_VariableGet>()
	{
		return UK2Node_VariableGet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_VariableGet(Z_Construct_UClass_UK2Node_VariableGet, &UK2Node_VariableGet::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_VariableGet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_VariableGet);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_VariableGet)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
