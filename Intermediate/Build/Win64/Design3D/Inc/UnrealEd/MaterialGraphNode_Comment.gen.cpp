// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/MaterialGraph/MaterialGraphNode_Comment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_Comment() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Comment_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Comment();
	UNREALED_API UClass* Z_Construct_UClass_UEdGraphNode_Comment();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
// End Cross Module References
	void UMaterialGraphNode_Comment::StaticRegisterNativesUMaterialGraphNode_Comment()
	{
	}
	UClass* Z_Construct_UClass_UMaterialGraphNode_Comment_NoRegister()
	{
		return UMaterialGraphNode_Comment::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Comment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialExpressionComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode_Comment,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphNode_Comment.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Comment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Comment.h" },
		{ "ToolTip", "Material Comment that this node represents" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment = { "MaterialExpressionComment", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialGraphNode_Comment, MaterialExpressionComment), Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_Comment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::ClassParams = {
		&UMaterialGraphNode_Comment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_Comment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialGraphNode_Comment, 1106021051);
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_Comment>()
	{
		return UMaterialGraphNode_Comment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialGraphNode_Comment(Z_Construct_UClass_UMaterialGraphNode_Comment, &UMaterialGraphNode_Comment::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UMaterialGraphNode_Comment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_Comment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
