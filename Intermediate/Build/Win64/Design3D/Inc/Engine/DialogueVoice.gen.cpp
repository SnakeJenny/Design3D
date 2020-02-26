// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/DialogueVoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueVoice() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender();
// End Cross Module References
	void UDialogueVoice::StaticRegisterNativesUDialogueVoice()
	{
	}
	UClass* Z_Construct_UClass_UDialogueVoice_NoRegister()
	{
		return UDialogueVoice::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueVoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizationGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizationGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plurality_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Plurality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueVoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueVoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/DialogueVoice.h" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID = { "LocalizationGUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueVoice, LocalizationGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality_MetaData[] = {
		{ "Category", "DialogueVoice" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality = { "Plurality", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueVoice, Plurality), Z_Construct_UEnum_Engine_EGrammaticalNumber, METADATA_PARAMS(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "DialogueVoice" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010010000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueVoice, Gender), Z_Construct_UEnum_Engine_EGrammaticalGender, METADATA_PARAMS(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueVoice_Statics::NewProp_LocalizationGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Plurality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueVoice_Statics::NewProp_Gender,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueVoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueVoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueVoice_Statics::ClassParams = {
		&UDialogueVoice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDialogueVoice_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueVoice_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogueVoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueVoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueVoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueVoice, 2370310798);
	template<> ENGINE_API UClass* StaticClass<UDialogueVoice>()
	{
		return UDialogueVoice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueVoice(Z_Construct_UClass_UDialogueVoice, &UDialogueVoice::StaticClass, TEXT("/Script/Engine"), TEXT("UDialogueVoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueVoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
