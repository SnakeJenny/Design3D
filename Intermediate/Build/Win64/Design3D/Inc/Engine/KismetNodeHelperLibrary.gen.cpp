// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetNodeHelperLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetNodeHelperLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetNodeHelperLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit();
// End Cross Module References
	void UKismetNodeHelperLibrary::StaticRegisterNativesUKismetNodeHelperLibrary()
	{
		UClass* Class = UKismetNodeHelperLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BitIsMarked", &UKismetNodeHelperLibrary::execBitIsMarked },
			{ "ClearAllBits", &UKismetNodeHelperLibrary::execClearAllBits },
			{ "ClearBit", &UKismetNodeHelperLibrary::execClearBit },
			{ "GetEnumeratorName", &UKismetNodeHelperLibrary::execGetEnumeratorName },
			{ "GetEnumeratorUserFriendlyName", &UKismetNodeHelperLibrary::execGetEnumeratorUserFriendlyName },
			{ "GetEnumeratorValueFromIndex", &UKismetNodeHelperLibrary::execGetEnumeratorValueFromIndex },
			{ "GetFirstUnmarkedBit", &UKismetNodeHelperLibrary::execGetFirstUnmarkedBit },
			{ "GetRandomUnmarkedBit", &UKismetNodeHelperLibrary::execGetRandomUnmarkedBit },
			{ "GetUnmarkedBit", &UKismetNodeHelperLibrary::execGetUnmarkedBit },
			{ "GetValidValue", &UKismetNodeHelperLibrary::execGetValidValue },
			{ "HasMarkedBit", &UKismetNodeHelperLibrary::execHasMarkedBit },
			{ "HasUnmarkedBit", &UKismetNodeHelperLibrary::execHasUnmarkedBit },
			{ "MarkBit", &UKismetNodeHelperLibrary::execMarkBit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics
	{
		struct KismetNodeHelperLibrary_eventBitIsMarked_Parms
		{
			int32 Data;
			int32 Index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetNodeHelperLibrary_eventBitIsMarked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetNodeHelperLibrary_eventBitIsMarked_Parms), &Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventBitIsMarked_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventBitIsMarked_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Returns whether the bit at index \"Index\" is set or not in the data\n\n@param Data - The integer containing the bits that are being tested against\n@param Index - The bit index into the Data that we are inquiring\n@return  - Whether the bit at index \"Index\" is set or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "BitIsMarked", sizeof(KismetNodeHelperLibrary_eventBitIsMarked_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics
	{
		struct KismetNodeHelperLibrary_eventClearAllBits_Parms
		{
			int32 Data;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventClearAllBits_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Clears all of the bit in the data\n\n@param Data - The integer containing the bits that are being cleared" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "ClearAllBits", sizeof(KismetNodeHelperLibrary_eventClearAllBits_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics
	{
		struct KismetNodeHelperLibrary_eventClearBit_Parms
		{
			int32 Data;
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventClearBit_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventClearBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Clears the bit at index \"Index\" in the data\n\n@param Data - The integer containing the bits that are being cleared\n@param Index - The bit index into the Data that we are clearing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "ClearBit", sizeof(KismetNodeHelperLibrary_eventClearBit_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics
	{
		struct KismetNodeHelperLibrary_eventGetEnumeratorName_Parms
		{
			const UEnum* Enum;
			uint8 EnumeratorValue;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumeratorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_EnumeratorValue = { "EnumeratorValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms, EnumeratorValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_Enum_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_Enum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_EnumeratorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::NewProp_Enum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Gets enumerator name.\n\n@param Enum - Enumeration\n@param EnumeratorValue - Value of searched enumeration\n@return - name of the searched enumerator, or NAME_None" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetEnumeratorName", sizeof(KismetNodeHelperLibrary_eventGetEnumeratorName_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics
	{
		struct KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms
		{
			const UEnum* Enum;
			uint8 EnumeratorValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumeratorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_EnumeratorValue = { "EnumeratorValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms, EnumeratorValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_Enum_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_Enum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_EnumeratorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::NewProp_Enum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Gets enumerator name as FString. Use DeisplayName when possible.\n\n@param Enum - Enumeration\n@param EnumeratorValue - Value of searched enumeration\n@return - name of the searched enumerator, or NAME_None" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetEnumeratorUserFriendlyName", sizeof(KismetNodeHelperLibrary_eventGetEnumeratorUserFriendlyName_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics
	{
		struct KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms
		{
			const UEnum* Enum;
			uint8 EnumeratorIndex;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumeratorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_EnumeratorIndex = { "EnumeratorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms, EnumeratorIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_Enum_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_Enum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_EnumeratorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::NewProp_Enum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "@param Enum - Enumeration\n@param EnumeratorIndex - Input index\n@return - The value of the enumerator, or INDEX_NONE" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetEnumeratorValueFromIndex", sizeof(KismetNodeHelperLibrary_eventGetEnumeratorValueFromIndex_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics
	{
		struct KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms
		{
			int32 Data;
			int32 StartIdx;
			int32 NumBits;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIdx;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_StartIdx = { "StartIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, StartIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_NumBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_StartIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Gets the first index not already marked starting from a specific index and returns the bit index selected\n\n@param Data - The integer containing the bits that are being set\n@param StartIdx - The index to start looking for an available index from\n@param NumBits - The logical number of bits we want to track\n@return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetFirstUnmarkedBit", sizeof(KismetNodeHelperLibrary_eventGetFirstUnmarkedBit_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics
	{
		struct KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms
		{
			int32 Data;
			int32 StartIdx;
			int32 NumBits;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIdx;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_StartIdx = { "StartIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, StartIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_NumBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_StartIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Gets a random not already marked bit and returns the bit index selected\n\n@param Data - The integer containing the bits that are being set\n@param NumBits - The logical number of bits we want to track\n@return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetRandomUnmarkedBit", sizeof(KismetNodeHelperLibrary_eventGetRandomUnmarkedBit_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics
	{
		struct KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms
		{
			int32 Data;
			int32 StartIdx;
			int32 NumBits;
			bool bRandom;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandom;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIdx;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_bRandom_SetBit(void* Obj)
	{
		((KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms*)Obj)->bRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_bRandom = { "bRandom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms), &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_bRandom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_StartIdx = { "StartIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, StartIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_bRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_NumBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_StartIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Gets an already unmarked bit and returns the bit index selected\n\n@param Data - The integer containing the bits that are being set\n@param StartIdx - The index to start with when determining the selection'\n@param NumBits - The logical number of bits we want to track\n@param bRandom - Whether to select a random index or not\n@return - The index that was selected (returns INDEX_NONE if there was no unmarked bits to choose from)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetUnmarkedBit", sizeof(KismetNodeHelperLibrary_eventGetUnmarkedBit_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics
	{
		struct KismetNodeHelperLibrary_eventGetValidValue_Parms
		{
			const UEnum* Enum;
			uint8 EnumeratorValue;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumeratorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetValidValue_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_EnumeratorValue = { "EnumeratorValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetValidValue_Parms, EnumeratorValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_Enum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventGetValidValue_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_Enum_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_Enum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_EnumeratorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::NewProp_Enum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "@param Enum - Enumeration\n@param EnumeratorIndex - Input value\n@return - if EnumeratorIndex is valid return EnumeratorIndex, otherwise return MAX value of Enum" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "GetValidValue", sizeof(KismetNodeHelperLibrary_eventGetValidValue_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics
	{
		struct KismetNodeHelperLibrary_eventHasMarkedBit_Parms
		{
			int32 Data;
			int32 NumBits;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetNodeHelperLibrary_eventHasMarkedBit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetNodeHelperLibrary_eventHasMarkedBit_Parms), &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasMarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasMarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_NumBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Returns whether there exists a marked bit in the data\n\n@param Data - The data being tested against\n@param NumBits - The logical number of bits we want to track\n@return - Whether there is a bit marked in the data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "HasMarkedBit", sizeof(KismetNodeHelperLibrary_eventHasMarkedBit_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics
	{
		struct KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms
		{
			int32 Data;
			int32 NumBits;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms), &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_NumBits = { "NumBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms, NumBits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_NumBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Returns whether there exists an unmarked bit in the data\n\n@param Data - The data being tested against\n@param NumBits - The logical number of bits we want to track\n@return - Whether there is a bit not marked in the data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "HasUnmarkedBit", sizeof(KismetNodeHelperLibrary_eventHasUnmarkedBit_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics
	{
		struct KismetNodeHelperLibrary_eventMarkBit_Parms
		{
			int32 Data;
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventMarkBit_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetNodeHelperLibrary_eventMarkBit_Parms, Data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
		{ "ToolTip", "Sets the bit at index \"Index\" in the data\n\n@param Data - The integer containing the bits that are being set\n@param Index - The bit index into the Data that we are setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetNodeHelperLibrary, nullptr, "MarkBit", sizeof(KismetNodeHelperLibrary_eventMarkBit_Parms), Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetNodeHelperLibrary_NoRegister()
	{
		return UKismetNodeHelperLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetNodeHelperLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_BitIsMarked, "BitIsMarked" }, // 569610212
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearAllBits, "ClearAllBits" }, // 2524003752
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_ClearBit, "ClearBit" }, // 1352437883
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorName, "GetEnumeratorName" }, // 1707038742
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorUserFriendlyName, "GetEnumeratorUserFriendlyName" }, // 1159547176
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetEnumeratorValueFromIndex, "GetEnumeratorValueFromIndex" }, // 830137977
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetFirstUnmarkedBit, "GetFirstUnmarkedBit" }, // 4160958895
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetRandomUnmarkedBit, "GetRandomUnmarkedBit" }, // 3419654242
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetUnmarkedBit, "GetUnmarkedBit" }, // 2914020755
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_GetValidValue, "GetValidValue" }, // 2697962109
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasMarkedBit, "HasMarkedBit" }, // 2033452556
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_HasUnmarkedBit, "HasUnmarkedBit" }, // 3752605409
		{ &Z_Construct_UFunction_UKismetNodeHelperLibrary_MarkBit, "MarkBit" }, // 2468065993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetNodeHelperLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetNodeHelperLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetNodeHelperLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::ClassParams = {
		&UKismetNodeHelperLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetNodeHelperLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetNodeHelperLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetNodeHelperLibrary, 1266334996);
	template<> ENGINE_API UClass* StaticClass<UKismetNodeHelperLibrary>()
	{
		return UKismetNodeHelperLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetNodeHelperLibrary(Z_Construct_UClass_UKismetNodeHelperLibrary, &UKismetNodeHelperLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetNodeHelperLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetNodeHelperLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
