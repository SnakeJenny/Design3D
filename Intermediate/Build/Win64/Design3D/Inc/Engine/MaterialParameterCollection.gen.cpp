// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialParameterCollection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollection() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionVectorParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionParameterBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionScalarParameter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FCollectionVectorParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionVectorParameter, Z_Construct_UPackage__Script_Engine(), TEXT("CollectionVectorParameter"), sizeof(FCollectionVectorParameter), Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollectionVectorParameter>()
{
	return FCollectionVectorParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollectionVectorParameter(FCollectionVectorParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("CollectionVectorParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollectionVectorParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFCollectionVectorParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollectionVectorParameter")),new UScriptStruct::TCppStructOps<FCollectionVectorParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollectionVectorParameter;
	struct Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "A vector parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionVectorParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollectionVectorParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::NewProp_DefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCollectionParameterBase,
		&NewStructOps,
		"CollectionVectorParameter",
		sizeof(FCollectionVectorParameter),
		alignof(FCollectionVectorParameter),
		Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionVectorParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollectionVectorParameter"), sizeof(FCollectionVectorParameter), Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollectionVectorParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollectionVectorParameter_Hash() { return 1203974826U; }
class UScriptStruct* FCollectionScalarParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionScalarParameter, Z_Construct_UPackage__Script_Engine(), TEXT("CollectionScalarParameter"), sizeof(FCollectionScalarParameter), Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollectionScalarParameter>()
{
	return FCollectionScalarParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollectionScalarParameter(FCollectionScalarParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("CollectionScalarParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollectionScalarParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFCollectionScalarParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollectionScalarParameter")),new UScriptStruct::TCppStructOps<FCollectionScalarParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollectionScalarParameter;
	struct Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "A scalar parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionScalarParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollectionScalarParameter, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::NewProp_DefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCollectionParameterBase,
		&NewStructOps,
		"CollectionScalarParameter",
		sizeof(FCollectionScalarParameter),
		alignof(FCollectionScalarParameter),
		Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionScalarParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollectionScalarParameter"), sizeof(FCollectionScalarParameter), Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollectionScalarParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollectionScalarParameter_Hash() { return 4216800851U; }
class UScriptStruct* FCollectionParameterBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollectionParameterBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionParameterBase, Z_Construct_UPackage__Script_Engine(), TEXT("CollectionParameterBase"), sizeof(FCollectionParameterBase), Get_Z_Construct_UScriptStruct_FCollectionParameterBase_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCollectionParameterBase>()
{
	return FCollectionParameterBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollectionParameterBase(FCollectionParameterBase::StaticStruct, TEXT("/Script/Engine"), TEXT("CollectionParameterBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollectionParameterBase
{
	FScriptStruct_Engine_StaticRegisterNativesFCollectionParameterBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollectionParameterBase")),new UScriptStruct::TCppStructOps<FCollectionParameterBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollectionParameterBase;
	struct Z_Construct_UScriptStruct_FCollectionParameterBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Base struct for collection parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollectionParameterBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Uniquely identifies the parameter, used for fixing up materials that reference this parameter when renaming." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollectionParameterBase, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "The name of the parameter.  Changing this name will break any blueprints that reference the parameter." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollectionParameterBase, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::NewProp_ParameterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CollectionParameterBase",
		sizeof(FCollectionParameterBase),
		alignof(FCollectionParameterBase),
		Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollectionParameterBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollectionParameterBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollectionParameterBase"), sizeof(FCollectionParameterBase), Get_Z_Construct_UScriptStruct_FCollectionParameterBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollectionParameterBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollectionParameterBase_Hash() { return 4100502220U; }
	void UMaterialParameterCollection::StaticRegisterNativesUMaterialParameterCollection()
	{
	}
	UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister()
	{
		return UMaterialParameterCollection::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialParameterCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialParameterCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollection_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object" },
		{ "IncludePath", "Materials/MaterialParameterCollection.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Asset class that contains a list of parameter names and their default values.\nAny number of materials can reference these parameters and get new values when the parameter values are changed." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialParameterCollection, VectorParameters), METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCollectionVectorParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters = { "ScalarParameters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialParameterCollection, ScalarParameters), METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_Inner = { "ScalarParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCollectionScalarParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollection.h" },
		{ "ToolTip", "Used by materials using this collection to know when to recompile." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000200000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialParameterCollection, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_VectorParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_ScalarParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollection_Statics::NewProp_StateId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialParameterCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialParameterCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialParameterCollection_Statics::ClassParams = {
		&UMaterialParameterCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialParameterCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialParameterCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialParameterCollection, 1183928310);
	template<> ENGINE_API UClass* StaticClass<UMaterialParameterCollection>()
	{
		return UMaterialParameterCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialParameterCollection(Z_Construct_UClass_UMaterialParameterCollection, &UMaterialParameterCollection::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialParameterCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
