// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackAttenuation() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FForceFeedbackAttenuationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackAttenuationSettings"), sizeof(FForceFeedbackAttenuationSettings), Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackAttenuationSettings>()
{
	return FForceFeedbackAttenuationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceFeedbackAttenuationSettings(FForceFeedbackAttenuationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ForceFeedbackAttenuationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackAttenuationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFForceFeedbackAttenuationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceFeedbackAttenuationSettings")),new UScriptStruct::TCppStructOps<FForceFeedbackAttenuationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFForceFeedbackAttenuationSettings;
	struct Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
		{ "ToolTip", "The struct for defining the properties used when determining attenuation for a force feedback effect" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackAttenuationSettings>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBaseAttenuationSettings,
		&NewStructOps,
		"ForceFeedbackAttenuationSettings",
		sizeof(FForceFeedbackAttenuationSettings),
		alignof(FForceFeedbackAttenuationSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceFeedbackAttenuationSettings"), sizeof(FForceFeedbackAttenuationSettings), Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings_Hash() { return 3377999575U; }
	void UForceFeedbackAttenuation::StaticRegisterNativesUForceFeedbackAttenuation()
	{
	}
	UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister()
	{
		return UForceFeedbackAttenuation::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackAttenuation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attenuation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackAttenuation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackAttenuation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GameFramework/ForceFeedbackAttenuation.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
		{ "ToolTip", "Wrapper class that can be created as an asset for force feedback attenuation properties which allows reuse\nof the properties for multiple attenuation components" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackAttenuation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackAttenuation, Attenuation), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackAttenuation_Statics::NewProp_Attenuation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackAttenuation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackAttenuation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackAttenuation_Statics::ClassParams = {
		&UForceFeedbackAttenuation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackAttenuation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackAttenuation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForceFeedbackAttenuation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceFeedbackAttenuation, 3637575710);
	template<> ENGINE_API UClass* StaticClass<UForceFeedbackAttenuation>()
	{
		return UForceFeedbackAttenuation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceFeedbackAttenuation(Z_Construct_UClass_UForceFeedbackAttenuation, &UForceFeedbackAttenuation::StaticClass, TEXT("/Script/Engine"), TEXT("UForceFeedbackAttenuation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackAttenuation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
