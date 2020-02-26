// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/DEditorVectorParameterValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorVectorParameterValue() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDEditorVectorParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorVectorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UDEditorVectorParameterValue::StaticRegisterNativesUDEditorVectorParameterValue()
	{
	}
	UClass* Z_Construct_UClass_UDEditorVectorParameterValue_NoRegister()
	{
		return UDEditorVectorParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorVectorParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsedAsChannelMask_MetaData[];
#endif
		static void NewProp_bIsUsedAsChannelMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsedAsChannelMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorVectorParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorVectorParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorVectorParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorVectorParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorVectorParameterValue.h" },
	};
#endif
	void Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_SetBit(void* Obj)
	{
		((UDEditorVectorParameterValue*)Obj)->bIsUsedAsChannelMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask = { "bIsUsedAsChannelMask", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDEditorVectorParameterValue), &Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorVectorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorVectorParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEditorVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorVectorParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorVectorParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorVectorParameterValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEditorVectorParameterValue_Statics::ClassParams = {
		&UDEditorVectorParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorVectorParameterValue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorVectorParameterValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEditorVectorParameterValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEditorVectorParameterValue, 3504477519);
	template<> UNREALED_API UClass* StaticClass<UDEditorVectorParameterValue>()
	{
		return UDEditorVectorParameterValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEditorVectorParameterValue(Z_Construct_UClass_UDEditorVectorParameterValue, &UDEditorVectorParameterValue::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDEditorVectorParameterValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorVectorParameterValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
