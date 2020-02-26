// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SystemTimeTimecodeProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemTimeTimecodeProvider() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USystemTimeTimecodeProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USystemTimeTimecodeProvider();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
	void USystemTimeTimecodeProvider::StaticRegisterNativesUSystemTimeTimecodeProvider()
	{
		UClass* Class = USystemTimeTimecodeProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFrameRate", &USystemTimeTimecodeProvider::execSetFrameRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct SystemTimeTimecodeProvider_eventSetFrameRate_Parms
		{
			FFrameRate InFrameRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::NewProp_InFrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SystemTimeTimecodeProvider_eventSetFrameRate_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::NewProp_InFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::NewProp_InFrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::NewProp_InFrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USystemTimeTimecodeProvider, nullptr, "SetFrameRate", sizeof(SystemTimeTimecodeProvider_eventSetFrameRate_Parms), Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USystemTimeTimecodeProvider_NoRegister()
	{
		return USystemTimeTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_USystemTimeTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USystemTimeTimecodeProvider_SetFrameRate, "SetFrameRate" }, // 688049239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/SystemTimeTimecodeProvider.h" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "Converts the current system time to timecode, relative to a provided frame rate." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USystemTimeTimecodeProvider, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemTimeTimecodeProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::ClassParams = {
		&USystemTimeTimecodeProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USystemTimeTimecodeProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USystemTimeTimecodeProvider, 2011092154);
	template<> ENGINE_API UClass* StaticClass<USystemTimeTimecodeProvider>()
	{
		return USystemTimeTimecodeProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USystemTimeTimecodeProvider(Z_Construct_UClass_USystemTimeTimecodeProvider, &USystemTimeTimecodeProvider::StaticClass, TEXT("/Script/Engine"), TEXT("USystemTimeTimecodeProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USystemTimeTimecodeProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
