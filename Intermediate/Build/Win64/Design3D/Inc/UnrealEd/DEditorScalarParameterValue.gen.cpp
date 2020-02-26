// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/DEditorScalarParameterValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorScalarParameterValue() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasData();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorScalarParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorScalarParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
// End Cross Module References
class UScriptStruct* FScalarParameterAtlasData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FScalarParameterAtlasData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterAtlasData, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ScalarParameterAtlasData"), sizeof(FScalarParameterAtlasData), Get_Z_Construct_UScriptStruct_FScalarParameterAtlasData_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FScalarParameterAtlasData>()
{
	return FScalarParameterAtlasData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScalarParameterAtlasData(FScalarParameterAtlasData::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("ScalarParameterAtlasData"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFScalarParameterAtlasData
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFScalarParameterAtlasData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScalarParameterAtlasData")),new UScriptStruct::TCppStructOps<FScalarParameterAtlasData>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFScalarParameterAtlasData;
	struct Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Atlas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsedAsAtlasPosition_MetaData[];
#endif
		static void NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsedAsAtlasPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterAtlasData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterAtlasData, Atlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScalarParameterAtlasData, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj)
	{
		((FScalarParameterAtlasData*)Obj)->bIsUsedAsAtlasPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition = { "bIsUsedAsAtlasPosition", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScalarParameterAtlasData), &Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Atlas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_Curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::NewProp_bIsUsedAsAtlasPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ScalarParameterAtlasData",
		sizeof(FScalarParameterAtlasData),
		alignof(FScalarParameterAtlasData),
		Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScalarParameterAtlasData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScalarParameterAtlasData"), sizeof(FScalarParameterAtlasData), Get_Z_Construct_UScriptStruct_FScalarParameterAtlasData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScalarParameterAtlasData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScalarParameterAtlasData_Hash() { return 2111473212U; }
	void UDEditorScalarParameterValue::StaticRegisterNativesUDEditorScalarParameterValue()
	{
	}
	UClass* Z_Construct_UClass_UDEditorScalarParameterValue_NoRegister()
	{
		return UDEditorScalarParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorScalarParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlasData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtlasData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorScalarParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorScalarParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorScalarParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData = { "AtlasData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEditorScalarParameterValue, AtlasData), Z_Construct_UScriptStruct_FScalarParameterAtlasData, METADATA_PARAMS(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorScalarParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEditorScalarParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorScalarParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_AtlasData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorScalarParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorScalarParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorScalarParameterValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEditorScalarParameterValue_Statics::ClassParams = {
		&UDEditorScalarParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorScalarParameterValue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEditorScalarParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorScalarParameterValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEditorScalarParameterValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEditorScalarParameterValue, 3643906727);
	template<> UNREALED_API UClass* StaticClass<UDEditorScalarParameterValue>()
	{
		return UDEditorScalarParameterValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEditorScalarParameterValue(Z_Construct_UClass_UDEditorScalarParameterValue, &UDEditorScalarParameterValue::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDEditorScalarParameterValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorScalarParameterValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
