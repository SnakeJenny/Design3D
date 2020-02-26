// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/FunctionalTestUtilityLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestUtilityLibrary() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestUtilityLibrary_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestUtilityLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UFunctionalTestUtilityLibrary::StaticRegisterNativesUFunctionalTestUtilityLibrary()
	{
		UClass* Class = UFunctionalTestUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TraceChannelTestUtil", &UFunctionalTestUtilityLibrary::execTraceChannelTestUtil },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics
	{
		struct FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms
		{
			UObject* WorldContextObject;
			FTraceChannelTestBatchOptions BatchOptions;
			FVector Start;
			FVector End;
			float SphereCapsuleRadius;
			float CapsuleHalfHeight;
			FVector BoxHalfSize;
			FRotator Orientation;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			FName ProfileName;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			bool bIgnoreSelf;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			UTraceQueryTestResults* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxHalfSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereCapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatchOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BatchOptions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, ReturnValue), Z_Construct_UClass_UTraceQueryTestResults_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms), &Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms), &Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, ProfileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, ObjectTypes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BoxHalfSize = { "BoxHalfSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, BoxHalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, CapsuleHalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_SphereCapsuleRadius = { "SphereCapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, SphereCapsuleRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions = { "BatchOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, BatchOptions), Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_DrawTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceHitColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bIgnoreSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BoxHalfSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_CapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_SphereCapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceColor,TraceHitColor,DrawTime" },
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Utilities|Collision" },
		{ "CPP_Default_DrawTime", "5.000000" },
		{ "CPP_Default_TraceColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_TraceHitColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Classes/FunctionalTestUtilityLibrary.h" },
		{ "ToolTip", "Helper function to trace and permute many options at once" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionalTestUtilityLibrary, nullptr, "TraceChannelTestUtil", sizeof(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms), Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFunctionalTestUtilityLibrary_NoRegister()
	{
		return UFunctionalTestUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil, "TraceChannelTestUtil" }, // 751250252
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionalTestUtilityLibrary.h" },
		{ "ModuleRelativePath", "Classes/FunctionalTestUtilityLibrary.h" },
		{ "ToolTip", "Used to expose C++ functions to tests that we don't want to make BP accessible\nin the engine itself." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionalTestUtilityLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::ClassParams = {
		&UFunctionalTestUtilityLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFunctionalTestUtilityLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFunctionalTestUtilityLibrary, 981904939);
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UFunctionalTestUtilityLibrary>()
	{
		return UFunctionalTestUtilityLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFunctionalTestUtilityLibrary(Z_Construct_UClass_UFunctionalTestUtilityLibrary, &UFunctionalTestUtilityLibrary::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UFunctionalTestUtilityLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionalTestUtilityLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
