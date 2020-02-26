// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Animation/EditorAnimBaseObj.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorAnimBaseObj() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorAnimBaseObj::StaticRegisterNativesUEditorAnimBaseObj()
	{
	}
	UClass* Z_Construct_UClass_UEditorAnimBaseObj_NoRegister()
	{
		return UEditorAnimBaseObj::StaticClass();
	}
	struct Z_Construct_UClass_UEditorAnimBaseObj_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorAnimBaseObj_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorAnimBaseObj_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/EditorAnimBaseObj.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorAnimBaseObj.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorAnimBaseObj_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorAnimBaseObj>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorAnimBaseObj_Statics::ClassParams = {
		&UEditorAnimBaseObj::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorAnimBaseObj_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorAnimBaseObj_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorAnimBaseObj()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorAnimBaseObj_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorAnimBaseObj, 1324604463);
	template<> UNREALED_API UClass* StaticClass<UEditorAnimBaseObj>()
	{
		return UEditorAnimBaseObj::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorAnimBaseObj(Z_Construct_UClass_UEditorAnimBaseObj, &UEditorAnimBaseObj::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorAnimBaseObj"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorAnimBaseObj);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
