// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/DEditorFontParameterValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorFontParameterValue() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FDFontParameters();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorFontParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorFontParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
// End Cross Module References
class UScriptStruct* FDFontParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FDFontParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDFontParameters, Z_Construct_UPackage__Script_UnrealEd(), TEXT("DFontParameters"), sizeof(FDFontParameters), Get_Z_Construct_UScriptStruct_FDFontParameters_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FDFontParameters>()
{
	return FDFontParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDFontParameters(FDFontParameters::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("DFontParameters"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFDFontParameters
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFDFontParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DFontParameters")),new UScriptStruct::TCppStructOps<FDFontParameters>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFDFontParameters;
	struct Z_Construct_UScriptStruct_FDFontParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FontPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FontValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDFontParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDFontParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDFontParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage_MetaData[] = {
		{ "Category", "DFontParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage = { "FontPage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDFontParameters, FontPage), METADATA_PARAMS(Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue_MetaData[] = {
		{ "Category", "DFontParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue = { "FontValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDFontParameters, FontValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDFontParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDFontParameters_Statics::NewProp_FontValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDFontParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"DFontParameters",
		sizeof(FDFontParameters),
		alignof(FDFontParameters),
		Z_Construct_UScriptStruct_FDFontParameters_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDFontParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDFontParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDFontParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDFontParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDFontParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DFontParameters"), sizeof(FDFontParameters), Get_Z_Construct_UScriptStruct_FDFontParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDFontParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDFontParameters_Hash() { return 245197102U; }
	void UDEditorFontParameterValue::StaticRegisterNativesUDEditorFontParameterValue()
	{
	}
	UClass* Z_Construct_UClass_UDEditorFontParameterValue_NoRegister()
	{
		return UDEditorFontParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorFontParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorFontParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorFontParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorFontParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorFontParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorFontParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEditorFontParameterValue, ParameterValue), Z_Construct_UScriptStruct_FDFontParameters, METADATA_PARAMS(Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorFontParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorFontParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorFontParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorFontParameterValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEditorFontParameterValue_Statics::ClassParams = {
		&UDEditorFontParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorFontParameterValue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDEditorFontParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorFontParameterValue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEditorFontParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorFontParameterValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEditorFontParameterValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEditorFontParameterValue, 4251021875);
	template<> UNREALED_API UClass* StaticClass<UDEditorFontParameterValue>()
	{
		return UDEditorFontParameterValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEditorFontParameterValue(Z_Construct_UClass_UDEditorFontParameterValue, &UDEditorFontParameterValue::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDEditorFontParameterValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorFontParameterValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
