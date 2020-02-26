// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_BreakStruct.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_BreakStruct() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BreakStruct_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BreakStruct();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructMemberGet();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_BreakStruct::StaticRegisterNativesUK2Node_BreakStruct()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_BreakStruct_NoRegister()
	{
		return UK2Node_BreakStruct::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_BreakStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMadeAfterOverridePinRemoval_MetaData[];
#endif
		static void NewProp_bMadeAfterOverridePinRemoval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMadeAfterOverridePinRemoval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_BreakStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_StructMemberGet,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BreakStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_BreakStruct.h" },
		{ "ModuleRelativePath", "Classes/K2Node_BreakStruct.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_BreakStruct.h" },
		{ "ToolTip", "Helper property to handle upgrades from an old system of displaying pins for\n     the override values that properties referenced as a conditional of being set in a struct" },
	};
#endif
	void Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_SetBit(void* Obj)
	{
		((UK2Node_BreakStruct*)Obj)->bMadeAfterOverridePinRemoval = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval = { "bMadeAfterOverridePinRemoval", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_BreakStruct), &Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_BreakStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BreakStruct_Statics::NewProp_bMadeAfterOverridePinRemoval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_BreakStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_BreakStruct>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_BreakStruct_Statics::ClassParams = {
		&UK2Node_BreakStruct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_BreakStruct_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_BreakStruct_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_BreakStruct_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_BreakStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_BreakStruct()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_BreakStruct_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_BreakStruct, 1418319863);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_BreakStruct>()
	{
		return UK2Node_BreakStruct::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_BreakStruct(Z_Construct_UClass_UK2Node_BreakStruct, &UK2Node_BreakStruct::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_BreakStruct"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_BreakStruct);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_BreakStruct)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
