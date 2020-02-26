// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorStaticComponentMaskParameterValue() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FDComponentMaskParameter();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
// End Cross Module References
class UScriptStruct* FDComponentMaskParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FDComponentMaskParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDComponentMaskParameter, Z_Construct_UPackage__Script_UnrealEd(), TEXT("DComponentMaskParameter"), sizeof(FDComponentMaskParameter), Get_Z_Construct_UScriptStruct_FDComponentMaskParameter_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FDComponentMaskParameter>()
{
	return FDComponentMaskParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDComponentMaskParameter(FDComponentMaskParameter::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("DComponentMaskParameter"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFDComponentMaskParameter
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFDComponentMaskParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DComponentMaskParameter")),new UScriptStruct::TCppStructOps<FDComponentMaskParameter>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFDComponentMaskParameter;
	struct Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static void NewProp_G_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static void NewProp_R_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_R;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDComponentMaskParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_MetaData[] = {
		{ "Category", "DComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FDComponentMaskParameter*)Obj)->A = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDComponentMaskParameter), &Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_MetaData[] = {
		{ "Category", "DComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FDComponentMaskParameter*)Obj)->B = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDComponentMaskParameter), &Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_MetaData[] = {
		{ "Category", "DComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_SetBit(void* Obj)
	{
		((FDComponentMaskParameter*)Obj)->G = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDComponentMaskParameter), &Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_MetaData[] = {
		{ "Category", "DComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_SetBit(void* Obj)
	{
		((FDComponentMaskParameter*)Obj)->R = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDComponentMaskParameter), &Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::NewProp_R,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"DComponentMaskParameter",
		sizeof(FDComponentMaskParameter),
		alignof(FDComponentMaskParameter),
		Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDComponentMaskParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDComponentMaskParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DComponentMaskParameter"), sizeof(FDComponentMaskParameter), Get_Z_Construct_UScriptStruct_FDComponentMaskParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDComponentMaskParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDComponentMaskParameter_Hash() { return 3530171115U; }
	void UDEditorStaticComponentMaskParameterValue::StaticRegisterNativesUDEditorStaticComponentMaskParameterValue()
	{
	}
	UClass* Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_NoRegister()
	{
		return UDEditorStaticComponentMaskParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics
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
	UObject* (*const Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorStaticComponentMaskParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticComponentMaskParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEditorStaticComponentMaskParameterValue, ParameterValue), Z_Construct_UScriptStruct_FDComponentMaskParameter, METADATA_PARAMS(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorStaticComponentMaskParameterValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::ClassParams = {
		&UDEditorStaticComponentMaskParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEditorStaticComponentMaskParameterValue, 3184122967);
	template<> UNREALED_API UClass* StaticClass<UDEditorStaticComponentMaskParameterValue>()
	{
		return UDEditorStaticComponentMaskParameterValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEditorStaticComponentMaskParameterValue(Z_Construct_UClass_UDEditorStaticComponentMaskParameterValue, &UDEditorStaticComponentMaskParameterValue::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDEditorStaticComponentMaskParameterValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorStaticComponentMaskParameterValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
