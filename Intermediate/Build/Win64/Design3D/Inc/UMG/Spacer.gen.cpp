// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/Spacer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpacer() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_USpacer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USpacer();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_USpacer_SetSize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void USpacer::StaticRegisterNativesUSpacer()
	{
		UClass* Class = USpacer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSize", &USpacer::execSetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpacer_SetSize_Statics
	{
		struct Spacer_eventSetSize_Parms
		{
			FVector2D InSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpacer_SetSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spacer_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpacer_SetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpacer_SetSize_Statics::NewProp_InSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpacer_SetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/Spacer.h" },
		{ "ToolTip", "Sets the size of the spacer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpacer_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpacer, nullptr, "SetSize", sizeof(Spacer_eventSetSize_Parms), Z_Construct_UFunction_USpacer_SetSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USpacer_SetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpacer_SetSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USpacer_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpacer_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpacer_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpacer_NoRegister()
	{
		return USpacer::StaticClass();
	}
	struct Z_Construct_UClass_USpacer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpacer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpacer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpacer_SetSize, "SetSize" }, // 10303321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpacer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/Spacer.h" },
		{ "ModuleRelativePath", "Public/Components/Spacer.h" },
		{ "ToolTip", "A spacer widget; it does not have a visual representation, and just provides padding between other widgets.\n\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpacer_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Spacer.h" },
		{ "ToolTip", "The size of the spacer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpacer_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpacer, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USpacer_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_USpacer_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpacer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacer_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpacer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpacer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpacer_Statics::ClassParams = {
		&USpacer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpacer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USpacer_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpacer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpacer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpacer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpacer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpacer, 2327890666);
	template<> UMG_API UClass* StaticClass<USpacer>()
	{
		return USpacer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpacer(Z_Construct_UClass_USpacer, &USpacer::StaticClass, TEXT("/Script/UMG"), TEXT("USpacer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpacer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
