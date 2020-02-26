// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_FunctionEntry.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_FunctionEntry() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionEntry_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionEntry();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionTerminator();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata();
// End Cross Module References
	void UK2Node_FunctionEntry::StaticRegisterNativesUK2Node_FunctionEntry()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_FunctionEntry_NoRegister()
	{
		return UK2Node_FunctionEntry::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_FunctionEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtraFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnforceConstCorrectness_MetaData[];
#endif
		static void NewProp_bEnforceConstCorrectness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnforceConstCorrectness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalVariables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalVariables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomGeneratedFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomGeneratedFunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_FunctionEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_FunctionTerminator,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_FunctionEntry.h" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "Any extra flags that the function may need" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags = { "ExtraFlags", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_FunctionEntry, ExtraFlags), METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "Whether or not to enforce const-correctness for const function overrides" },
	};
#endif
	void Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_SetBit(void* Obj)
	{
		((UK2Node_FunctionEntry*)Obj)->bEnforceConstCorrectness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness = { "bEnforceConstCorrectness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_FunctionEntry), &Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "Array of local variables to be added to generated function" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables = { "LocalVariables", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_FunctionEntry, LocalVariables), METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_Inner = { "LocalVariables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "Function metadata" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_FunctionEntry, MetaData), Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_FunctionEntry.h" },
		{ "ToolTip", "If specified, the function that is created for this entry point will have this name.  Otherwise, it will have the function signature's name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName = { "CustomGeneratedFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_FunctionEntry, CustomGeneratedFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_FunctionEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_ExtraFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_bEnforceConstCorrectness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_LocalVariables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionEntry_Statics::NewProp_CustomGeneratedFunctionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_FunctionEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_FunctionEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_FunctionEntry_Statics::ClassParams = {
		&UK2Node_FunctionEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_FunctionEntry_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_FunctionEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_FunctionEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_FunctionEntry, 330406165);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_FunctionEntry>()
	{
		return UK2Node_FunctionEntry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_FunctionEntry(Z_Construct_UClass_UK2Node_FunctionEntry, &UK2Node_FunctionEntry::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_FunctionEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_FunctionEntry);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_FunctionEntry)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
