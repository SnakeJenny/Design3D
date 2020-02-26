// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Animation/EditorAnimCompositeSegment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAnimCompositeSegment() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimCompositeSegment_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimCompositeSegment();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment();
// End Cross Module References
	void UEditorAnimCompositeSegment::StaticRegisterNativesUEditorAnimCompositeSegment()
	{
	}
	UClass* Z_Construct_UClass_UEditorAnimCompositeSegment_NoRegister()
	{
		return UEditorAnimCompositeSegment::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAnimCompositeSegment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSegment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSegment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorAnimBaseObj,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "Animation/EditorAnimCompositeSegment.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCompositeSegment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment_MetaData[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimCompositeSegment.h" },
		{ "ToolTip", "Default blend in time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment = { "AnimSegment", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorAnimCompositeSegment, AnimSegment), Z_Construct_UScriptStruct_FAnimSegment, METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::NewProp_AnimSegment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAnimCompositeSegment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::ClassParams = {
		&UEditorAnimCompositeSegment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAnimCompositeSegment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorAnimCompositeSegment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorAnimCompositeSegment, 3978143906);
	template<> UNREALED_API UClass* StaticClass<UEditorAnimCompositeSegment>()
	{
		return UEditorAnimCompositeSegment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorAnimCompositeSegment(Z_Construct_UClass_UEditorAnimCompositeSegment, &UEditorAnimCompositeSegment::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorAnimCompositeSegment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAnimCompositeSegment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
