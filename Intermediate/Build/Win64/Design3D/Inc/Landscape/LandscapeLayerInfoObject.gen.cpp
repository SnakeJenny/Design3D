// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeLayerInfoObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeLayerInfoObject() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void ULandscapeLayerInfoObject::StaticRegisterNativesULandscapeLayerInfoObject()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister()
	{
		return ULandscapeLayerInfoObject::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeLayerInfoObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerUsageDebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerUsageDebugColor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReferencedFromLoadedData_MetaData[];
#endif
		static void NewProp_IsReferencedFromLoadedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReferencedFromLoadedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoWeightBlend_MetaData[];
#endif
		static void NewProp_bNoWeightBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoWeightBlend;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeLayerInfoObject.h" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "ToolTip", "The color to use for layer usage debug" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor = { "LayerUsageDebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerUsageDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit(void* Obj)
	{
		((ULandscapeLayerInfoObject*)Obj)->IsReferencedFromLoadedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData = { "IsReferencedFromLoadedData", nullptr, (EPropertyFlags)0x0010000c00002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit(void* Obj)
	{
		((ULandscapeLayerInfoObject*)Obj)->bNoWeightBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend = { "bNoWeightBlend", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, Hardness), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerName), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeLayerInfoObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams = {
		&ULandscapeLayerInfoObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeLayerInfoObject, 1728796609);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeLayerInfoObject>()
	{
		return ULandscapeLayerInfoObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeLayerInfoObject(Z_Construct_UClass_ULandscapeLayerInfoObject, &ULandscapeLayerInfoObject::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeLayerInfoObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeLayerInfoObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
