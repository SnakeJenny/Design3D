// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/DEditorStaticSwitchParameterValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorStaticSwitchParameterValue() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDEditorStaticSwitchParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorStaticSwitchParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEditorStaticSwitchParameterValue::StaticRegisterNativesUDEditorStaticSwitchParameterValue()
	{
	}
	UClass* Z_Construct_UClass_UDEditorStaticSwitchParameterValue_NoRegister()
	{
		return UDEditorStaticSwitchParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static void NewProp_ParameterValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ParameterValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorStaticSwitchParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticSwitchParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorStaticSwitchParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorStaticSwitchParameterValue.h" },
	};
#endif
	void Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_SetBit(void* Obj)
	{
		((UDEditorStaticSwitchParameterValue*)Obj)->ParameterValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDEditorStaticSwitchParameterValue), &Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorStaticSwitchParameterValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::ClassParams = {
		&UDEditorStaticSwitchParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorStaticSwitchParameterValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEditorStaticSwitchParameterValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEditorStaticSwitchParameterValue, 3907328602);
	template<> UNREALED_API UClass* StaticClass<UDEditorStaticSwitchParameterValue>()
	{
		return UDEditorStaticSwitchParameterValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEditorStaticSwitchParameterValue(Z_Construct_UClass_UDEditorStaticSwitchParameterValue, &UDEditorStaticSwitchParameterValue::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDEditorStaticSwitchParameterValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorStaticSwitchParameterValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
