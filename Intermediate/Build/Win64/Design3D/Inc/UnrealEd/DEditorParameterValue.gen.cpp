// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialEditor/DEditorParameterValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorParameterValue() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
// End Cross Module References
	void UDEditorParameterValue::StaticRegisterNativesUDEditorParameterValue()
	{
	}
	UClass* Z_Construct_UClass_UDEditorParameterValue_NoRegister()
	{
		return UDEditorParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortPriority;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MaterialEditor/DEditorParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
		{ "ToolTip", "Controls where this parameter is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEditorParameterValue, SortPriority), METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId = { "ExpressionId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEditorParameterValue, ExpressionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "DEditorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEditorParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_MetaData[] = {
		{ "Category", "DEditorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
	void Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((UDEditorParameterValue*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDEditorParameterValue), &Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorParameterValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorParameterValue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEditorParameterValue_Statics::ClassParams = {
		&UDEditorParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorParameterValue_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorParameterValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEditorParameterValue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEditorParameterValue, 3912265315);
	template<> UNREALED_API UClass* StaticClass<UDEditorParameterValue>()
	{
		return UDEditorParameterValue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEditorParameterValue(Z_Construct_UClass_UDEditorParameterValue, &UDEditorParameterValue::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UDEditorParameterValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorParameterValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
