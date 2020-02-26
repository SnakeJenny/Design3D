// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeAttenuation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeAttenuation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAttenuation();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
// End Cross Module References
	void USoundNodeAttenuation::StaticRegisterNativesUSoundNodeAttenuation()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeAttenuation_NoRegister()
	{
		return USoundNodeAttenuation::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeAttenuation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeAttenuation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAttenuation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Attenuation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeAttenuation.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAttenuation.h" },
		{ "ToolTip", "Defines how a sound's volume changes based on distance to the listener" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAttenuation.h" },
	};
#endif
	void Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((USoundNodeAttenuation*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USoundNodeAttenuation), &Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeAttenuation, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundNodeAttenuation, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeAttenuation_Statics::NewProp_AttenuationSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeAttenuation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeAttenuation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeAttenuation_Statics::ClassParams = {
		&USoundNodeAttenuation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeAttenuation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeAttenuation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeAttenuation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeAttenuation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeAttenuation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeAttenuation, 2980196713);
	template<> ENGINE_API UClass* StaticClass<USoundNodeAttenuation>()
	{
		return USoundNodeAttenuation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeAttenuation(Z_Construct_UClass_USoundNodeAttenuation, &USoundNodeAttenuation::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeAttenuation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeAttenuation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
