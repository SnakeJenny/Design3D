// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionMaterialAttributeLayers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialAttributeLayers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMaterialExpressionMaterialAttributeLayers::StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister()
	{
		return UMaterialExpressionMaterialAttributeLayers::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLayerGraphBuilt_MetaData[];
#endif
		static void NewProp_bIsLayerGraphBuilt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLayerGraphBuilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumActiveBlendCallers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumActiveBlendCallers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendCallers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendCallers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendCallers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumActiveLayerCallers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumActiveLayerCallers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerCallers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LayerCallers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerCallers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMaterialAttributeLayers.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_SetBit(void* Obj)
	{
		((UMaterialExpressionMaterialAttributeLayers*)Obj)->bIsLayerGraphBuilt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt = { "bIsLayerGraphBuilt", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialExpressionMaterialAttributeLayers), &Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers = { "NumActiveBlendCallers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, NumActiveBlendCallers), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers = { "BlendCallers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, BlendCallers), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_Inner = { "BlendCallers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers = { "NumActiveLayerCallers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, NumActiveLayerCallers), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers = { "LayerCallers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, LayerCallers), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_Inner = { "LayerCallers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers = { "DefaultLayers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, DefaultLayers), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, Input), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
		{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "LayersParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
		{ "ToolTip", "name to be referenced when we want to find and set this parameter" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_ParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialAttributeLayers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::ClassParams = {
		&UMaterialExpressionMaterialAttributeLayers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionMaterialAttributeLayers, 3374916199);
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMaterialAttributeLayers>()
	{
		return UMaterialExpressionMaterialAttributeLayers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionMaterialAttributeLayers(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers, &UMaterialExpressionMaterialAttributeLayers::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionMaterialAttributeLayers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialAttributeLayers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
