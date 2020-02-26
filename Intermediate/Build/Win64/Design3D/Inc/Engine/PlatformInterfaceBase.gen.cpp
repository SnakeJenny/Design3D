// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PlatformInterfaceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformInterfaceBase() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPlatformInterfaceDataType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateArray();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics
	{
		struct _Script_Engine_eventPlatformInterfaceDelegate_Parms
		{
			FPlatformInterfaceDelegateResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventPlatformInterfaceDelegate_Parms, Result), Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Generic platform interface delegate signature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "PlatformInterfaceDelegate__DelegateSignature", sizeof(_Script_Engine_eventPlatformInterfaceDelegate_Parms), Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EPlatformInterfaceDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPlatformInterfaceDataType, Z_Construct_UPackage__Script_Engine(), TEXT("EPlatformInterfaceDataType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPlatformInterfaceDataType>()
	{
		return EPlatformInterfaceDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlatformInterfaceDataType(EPlatformInterfaceDataType_StaticEnum, TEXT("/Script/Engine"), TEXT("EPlatformInterfaceDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_Hash() { return 760080604U; }
	UEnum* Z_Construct_UEnum_Engine_EPlatformInterfaceDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlatformInterfaceDataType"), 0, Get_Z_Construct_UEnum_Engine_EPlatformInterfaceDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PIDT_None", (int64)PIDT_None },
				{ "PIDT_Int", (int64)PIDT_Int },
				{ "PIDT_Float", (int64)PIDT_Float },
				{ "PIDT_String", (int64)PIDT_String },
				{ "PIDT_Object", (int64)PIDT_Object },
				{ "PIDT_Custom", (int64)PIDT_Custom },
				{ "PIDT_MAX", (int64)PIDT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
				{ "PIDT_Custom.ToolTip", "A custom type where more than one value may be filled out." },
				{ "PIDT_None.ToolTip", "No data type specified." },
				{ "ToolTip", "An enum for the types of data used in a PlatformInterfaceData struct." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EPlatformInterfaceDataType",
				"EPlatformInterfaceDataType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDelegateArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDelegateArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateArray, Z_Construct_UPackage__Script_Engine(), TEXT("DelegateArray"), sizeof(FDelegateArray), Get_Z_Construct_UScriptStruct_FDelegateArray_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDelegateArray>()
{
	return FDelegateArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDelegateArray(FDelegateArray::StaticStruct, TEXT("/Script/Engine"), TEXT("DelegateArray"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDelegateArray
{
	FScriptStruct_Engine_StaticRegisterNativesFDelegateArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DelegateArray")),new UScriptStruct::TCppStructOps<FDelegateArray>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDelegateArray;
	struct Z_Construct_UScriptStruct_FDelegateArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delegates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Delegates;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegates_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Helper struct, since UnrealScript doesn't allow arrays of arrays, but\narrays of structs of arrays are okay." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelegateArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates = { "Delegates", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDelegateArray, Delegates), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates_Inner = { "Delegates", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UDelegateFunction_Engine_PlatformInterfaceDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelegateArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateArray_Statics::NewProp_Delegates_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelegateArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DelegateArray",
		sizeof(FDelegateArray),
		alignof(FDelegateArray),
		Z_Construct_UScriptStruct_FDelegateArray_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelegateArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDelegateArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DelegateArray"), sizeof(FDelegateArray), Get_Z_Construct_UScriptStruct_FDelegateArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDelegateArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDelegateArray_Hash() { return 1978793153U; }
class UScriptStruct* FPlatformInterfaceDelegateResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult, Z_Construct_UPackage__Script_Engine(), TEXT("PlatformInterfaceDelegateResult"), sizeof(FPlatformInterfaceDelegateResult), Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPlatformInterfaceDelegateResult>()
{
	return FPlatformInterfaceDelegateResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlatformInterfaceDelegateResult(FPlatformInterfaceDelegateResult::StaticStruct, TEXT("/Script/Engine"), TEXT("PlatformInterfaceDelegateResult"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceDelegateResult
{
	FScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceDelegateResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlatformInterfaceDelegateResult")),new UScriptStruct::TCppStructOps<FPlatformInterfaceDelegateResult>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceDelegateResult;
	struct Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccessful_MetaData[];
#endif
		static void NewProp_bSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Generic structure for returning most any kind of data from C++ to delegate functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformInterfaceDelegateResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "The result actual data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformInterfaceDelegateResult, Data), Z_Construct_UScriptStruct_FPlatformInterfaceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "This is always usable, no matter the type" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful_SetBit(void* Obj)
	{
		((FPlatformInterfaceDelegateResult*)Obj)->bSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlatformInterfaceDelegateResult), &Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::NewProp_bSuccessful,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PlatformInterfaceDelegateResult",
		sizeof(FPlatformInterfaceDelegateResult),
		alignof(FPlatformInterfaceDelegateResult),
		Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlatformInterfaceDelegateResult"), sizeof(FPlatformInterfaceDelegateResult), Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_Hash() { return 4174455196U; }
class UScriptStruct* FPlatformInterfaceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformInterfaceData, Z_Construct_UPackage__Script_Engine(), TEXT("PlatformInterfaceData"), sizeof(FPlatformInterfaceData), Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPlatformInterfaceData>()
{
	return FPlatformInterfaceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlatformInterfaceData(FPlatformInterfaceData::StaticStruct, TEXT("/Script/Engine"), TEXT("PlatformInterfaceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceData
{
	FScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlatformInterfaceData")),new UScriptStruct::TCppStructOps<FPlatformInterfaceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPlatformInterfaceData;
	struct Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Struct that encompasses the most common types of data. This is the data payload\nof PlatformInterfaceDelegateResult." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformInterfaceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_ObjectValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_ObjectValue = { "ObjectValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformInterfaceData, ObjectValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_ObjectValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_ObjectValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_StringValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformInterfaceData, StringValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_StringValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_StringValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformInterfaceData, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_FloatValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Various typed result values" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformInterfaceData, IntValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_IntValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Specifies which value is valid for this structure" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformInterfaceData, Type), Z_Construct_UEnum_Engine_EPlatformInterfaceDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_DataName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "An optional tag for this data" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlatformInterfaceData, DataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_DataName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_DataName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_ObjectValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::NewProp_DataName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PlatformInterfaceData",
		sizeof(FPlatformInterfaceData),
		alignof(FPlatformInterfaceData),
		Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlatformInterfaceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlatformInterfaceData"), sizeof(FPlatformInterfaceData), Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlatformInterfaceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_Hash() { return 1347989446U; }
	void UPlatformInterfaceBase::StaticRegisterNativesUPlatformInterfaceBase()
	{
	}
	UClass* Z_Construct_UClass_UPlatformInterfaceBase_NoRegister()
	{
		return UPlatformInterfaceBase::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformInterfaceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllDelegates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllDelegates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllDelegates_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformInterfaceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformInterfaceBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PlatformInterfaceBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PlatformInterfaceBase.h" },
		{ "ToolTip", "Array of delegate arrays. Only add and remove via helper functions, and call via the helper delegate call function" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates = { "AllDelegates", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlatformInterfaceBase, AllDelegates), METADATA_PARAMS(Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates_Inner = { "AllDelegates", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDelegateArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformInterfaceBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformInterfaceBase_Statics::NewProp_AllDelegates_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformInterfaceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformInterfaceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlatformInterfaceBase_Statics::ClassParams = {
		&UPlatformInterfaceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlatformInterfaceBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceBase_Statics::PropPointers),
		0,
		0x008800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformInterfaceBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlatformInterfaceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformInterfaceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlatformInterfaceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlatformInterfaceBase, 2324530924);
	template<> ENGINE_API UClass* StaticClass<UPlatformInterfaceBase>()
	{
		return UPlatformInterfaceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformInterfaceBase(Z_Construct_UClass_UPlatformInterfaceBase, &UPlatformInterfaceBase::StaticClass, TEXT("/Script/Engine"), TEXT("UPlatformInterfaceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformInterfaceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
