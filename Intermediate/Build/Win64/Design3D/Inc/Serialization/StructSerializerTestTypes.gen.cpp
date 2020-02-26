// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Serialization/Private/Tests/StructSerializerTestTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructSerializerTestTypes() {}
// Cross Module References
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct();
	UPackage* Z_Construct_UPackage__Script_Serialization();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FStructSerializerTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerTestStruct>()
{
	return FStructSerializerTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerTestStruct(FStructSerializerTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Maps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Maps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arrays_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arrays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Builtins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Builtins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Objects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Booleans_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Booleans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Numerics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Numerics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for all supported types." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Maps), Z_Construct_UScriptStruct_FStructSerializerMapTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays = { "Arrays", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Arrays), Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins = { "Builtins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Builtins), Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Objects), Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans = { "Booleans", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Booleans), Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics = { "Numerics", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerTestStruct, Numerics), Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerTestStruct",
		sizeof(FStructSerializerTestStruct),
		alignof(FStructSerializerTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_Hash() { return 230156376U; }
class UScriptStruct* FStructSerializerMapTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerMapTestStruct"), sizeof(FStructSerializerMapTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerMapTestStruct>()
{
	return FStructSerializerMapTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerMapTestStruct(FStructSerializerMapTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerMapTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerMapTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrToVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StrToVec;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToVec_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrToVec_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrToStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StrToStr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToStr_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToStr_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntToStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IntToStr;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntToStr_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IntToStr_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for map properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec = { "StrToVec", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToVec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_Key_KeyProp = { "StrToVec_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_ValueProp = { "StrToVec", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr = { "StrToStr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_Key_KeyProp = { "StrToStr_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_ValueProp = { "StrToStr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr = { "IntToStr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerMapTestStruct, IntToStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_Key_KeyProp = { "IntToStr_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_ValueProp = { "IntToStr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerMapTestStruct",
		sizeof(FStructSerializerMapTestStruct),
		alignof(FStructSerializerMapTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerMapTestStruct"), sizeof(FStructSerializerMapTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Hash() { return 290270422U; }
class UScriptStruct* FStructSerializerArrayTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerArrayTestStruct>()
{
	return FStructSerializerArrayTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerArrayTestStruct(FStructSerializerArrayTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerArrayTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerArrayTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticFloatArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticFloatArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticInt32Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticInt32Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticSingleElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticSingleElement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int32Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32Array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for array properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerArrayTestStruct, VectorArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray = { "StaticFloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticFloatArray, FStructSerializerArrayTestStruct), STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticFloatArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array = { "StaticInt32Array", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticInt32Array, FStructSerializerArrayTestStruct), STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticInt32Array), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement = { "StaticSingleElement", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StaticSingleElement, FStructSerializerArrayTestStruct), STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticSingleElement), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array = { "Int32Array", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerArrayTestStruct, Int32Array), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_Inner = { "Int32Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerArrayTestStruct",
		sizeof(FStructSerializerArrayTestStruct),
		alignof(FStructSerializerArrayTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Hash() { return 2997353029U; }
class UScriptStruct* FStructSerializerBuiltinTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerBuiltinTestStruct>()
{
	return FStructSerializerBuiltinTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBuiltinTestStruct(FStructSerializerBuiltinTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerBuiltinTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBuiltinTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for properties of various built-in types." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerBuiltinTestStruct",
		sizeof(FStructSerializerBuiltinTestStruct),
		alignof(FStructSerializerBuiltinTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Hash() { return 703128716U; }
class UScriptStruct* FStructSerializerObjectTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerObjectTestStruct>()
{
	return FStructSerializerObjectTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerObjectTestStruct(FStructSerializerObjectTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerObjectTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerObjectTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for UObject properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr = { "ObjectPtr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, ObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerObjectTestStruct, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerObjectTestStruct",
		sizeof(FStructSerializerObjectTestStruct),
		alignof(FStructSerializerObjectTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Hash() { return 3254818577U; }
class UScriptStruct* FStructSerializerBooleanTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerBooleanTestStruct>()
{
	return FStructSerializerBooleanTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBooleanTestStruct(FStructSerializerBooleanTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerBooleanTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBooleanTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Bitfield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolTrue_MetaData[];
#endif
		static void NewProp_BoolTrue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolTrue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolFalse_MetaData[];
#endif
		static void NewProp_BoolFalse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolFalse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for boolean properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield = { "Bitfield", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerBooleanTestStruct, Bitfield), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->BoolTrue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue = { "BoolTrue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->BoolFalse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse = { "BoolFalse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerBooleanTestStruct",
		sizeof(FStructSerializerBooleanTestStruct),
		alignof(FStructSerializerBooleanTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Hash() { return 1052395307U; }
class UScriptStruct* FStructSerializerNumericTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash());
	}
	return Singleton;
}
template<> SERIALIZATION_API UScriptStruct* StaticStruct<FStructSerializerNumericTestStruct>()
{
	return FStructSerializerNumericTestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerNumericTestStruct(FStructSerializerNumericTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerNumericTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerNumericTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Double;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt64_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_UInt64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt32_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UInt32;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt16_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_UInt16;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt8_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UInt8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int64_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Int64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int16_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_Int16;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int8_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Int8;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for numeric properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double = { "Double", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Double), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64 = { "UInt64", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt64), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32 = { "UInt32", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt32), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16 = { "UInt16", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt16), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8 = { "UInt8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt8), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64 = { "Int64", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int64), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int32), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16 = { "Int16", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int16), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8 = { "Int8", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int8), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerNumericTestStruct",
		sizeof(FStructSerializerNumericTestStruct),
		alignof(FStructSerializerNumericTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Hash() { return 690357464U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
