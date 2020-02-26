// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Animation/EditorAnimCurveBoneLinks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAnimCurveBoneLinks() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimCurveBoneLinks_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimCurveBoneLinks();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
// End Cross Module References
	void UEditorAnimCurveBoneLinks::StaticRegisterNativesUEditorAnimCurveBoneLinks()
	{
	}
	UClass* Z_Construct_UClass_UEditorAnimCurveBoneLinks_NoRegister()
	{
		return UEditorAnimCurveBoneLinks::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectedBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectedBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/EditorAnimCurveBoneLinks.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCurveBoneLinks.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCurveBoneLinks.h" },
		{ "ToolTip", "Max (Lowest) LOD to evaluate to curve.\nSince LOD goes from 0 to high number, we call it Max.\nFor example, if you have 3 LODs (0, 1, 2), and if you want this to work until LOD 1, type 1.\nThen the curve will be evaluated until LOD1, but not for LOD 2\nDefault value is 255" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD = { "MaxLOD", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorAnimCurveBoneLinks, MaxLOD), nullptr, METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_MetaData[] = {
		{ "Category", "Bones" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCurveBoneLinks.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones = { "ConnectedBones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorAnimCurveBoneLinks, ConnectedBones), METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_Inner = { "ConnectedBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName_MetaData[] = {
		{ "Category", "CurveName" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCurveBoneLinks.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorAnimCurveBoneLinks, CurveName), Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_MaxLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_ConnectedBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::NewProp_CurveName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAnimCurveBoneLinks>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::ClassParams = {
		&UEditorAnimCurveBoneLinks::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAnimCurveBoneLinks()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorAnimCurveBoneLinks_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorAnimCurveBoneLinks, 2955052645);
	template<> UNREALED_API UClass* StaticClass<UEditorAnimCurveBoneLinks>()
	{
		return UEditorAnimCurveBoneLinks::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorAnimCurveBoneLinks(Z_Construct_UClass_UEditorAnimCurveBoneLinks, &UEditorAnimCurveBoneLinks::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorAnimCurveBoneLinks"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAnimCurveBoneLinks);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
