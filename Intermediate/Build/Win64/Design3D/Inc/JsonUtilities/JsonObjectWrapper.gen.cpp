// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonUtilities/Public/JsonObjectWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonObjectWrapper() {}
// Cross Module References
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	UPackage* Z_Construct_UPackage__Script_JsonUtilities();
	JSONUTILITIES_API UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister();
	JSONUTILITIES_API UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FJsonObjectWrapper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectWrapper, Z_Construct_UPackage__Script_JsonUtilities(), TEXT("JsonObjectWrapper"), sizeof(FJsonObjectWrapper), Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_Hash());
	}
	return Singleton;
}
template<> JSONUTILITIES_API UScriptStruct* StaticStruct<FJsonObjectWrapper>()
{
	return FJsonObjectWrapper::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJsonObjectWrapper(FJsonObjectWrapper::StaticStruct, TEXT("/Script/JsonUtilities"), TEXT("JsonObjectWrapper"), false, nullptr, nullptr);
static struct FScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper
{
	FScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JsonObjectWrapper")),new UScriptStruct::TCppStructOps<FJsonObjectWrapper>);
	}
} ScriptStruct_JsonUtilities_StaticRegisterNativesFJsonObjectWrapper;
	struct Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
		{ "ToolTip", "UStruct that holds a JsonObject, can be used by structs passed to JsonObjectConverter to pass through JsonObjects directly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonObjectWrapper>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJsonObjectWrapper, JsonString), METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonUtilities,
		nullptr,
		&NewStructOps,
		"JsonObjectWrapper",
		sizeof(FJsonObjectWrapper),
		alignof(FJsonObjectWrapper),
		Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JsonUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JsonObjectWrapper"), sizeof(FJsonObjectWrapper), Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_Hash() { return 3041315427U; }
	void UJsonUtilitiesDummyObject::StaticRegisterNativesUJsonUtilitiesDummyObject()
	{
	}
	UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister()
	{
		return UJsonUtilitiesDummyObject::StaticClass();
	}
	struct Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JsonObjectWrapper.h" },
		{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonUtilitiesDummyObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::ClassParams = {
		&UJsonUtilitiesDummyObject::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonUtilitiesDummyObject, 3001089398);
	template<> JSONUTILITIES_API UClass* StaticClass<UJsonUtilitiesDummyObject>()
	{
		return UJsonUtilitiesDummyObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonUtilitiesDummyObject(Z_Construct_UClass_UJsonUtilitiesDummyObject, &UJsonUtilitiesDummyObject::StaticClass, TEXT("/Script/JsonUtilities"), TEXT("UJsonUtilitiesDummyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonUtilitiesDummyObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
