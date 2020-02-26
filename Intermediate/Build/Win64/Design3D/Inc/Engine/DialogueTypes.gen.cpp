// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/DialogueTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
// End Cross Module References
	static UEnum* EGrammaticalNumber_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGrammaticalNumber, Z_Construct_UPackage__Script_Engine(), TEXT("EGrammaticalNumber"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EGrammaticalNumber::Type>()
	{
		return EGrammaticalNumber_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrammaticalNumber(EGrammaticalNumber_StaticEnum, TEXT("/Script/Engine"), TEXT("EGrammaticalNumber"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EGrammaticalNumber_Hash() { return 4285341490U; }
	UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrammaticalNumber"), 0, Get_Z_Construct_UEnum_Engine_EGrammaticalNumber_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrammaticalNumber::Singular", (int64)EGrammaticalNumber::Singular },
				{ "EGrammaticalNumber::Plural", (int64)EGrammaticalNumber::Plural },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
				{ "Plural.DisplayName", "Plural" },
				{ "Singular.DisplayName", "Singular" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EGrammaticalNumber",
				"EGrammaticalNumber::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGrammaticalGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGrammaticalGender, Z_Construct_UPackage__Script_Engine(), TEXT("EGrammaticalGender"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EGrammaticalGender::Type>()
	{
		return EGrammaticalGender_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrammaticalGender(EGrammaticalGender_StaticEnum, TEXT("/Script/Engine"), TEXT("EGrammaticalGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EGrammaticalGender_Hash() { return 610651765U; }
	UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrammaticalGender"), 0, Get_Z_Construct_UEnum_Engine_EGrammaticalGender_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrammaticalGender::Neuter", (int64)EGrammaticalGender::Neuter },
				{ "EGrammaticalGender::Masculine", (int64)EGrammaticalGender::Masculine },
				{ "EGrammaticalGender::Feminine", (int64)EGrammaticalGender::Feminine },
				{ "EGrammaticalGender::Mixed", (int64)EGrammaticalGender::Mixed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Feminine.DisplayName", "Feminine" },
				{ "Masculine.DisplayName", "Masculine" },
				{ "Mixed.DisplayName", "Mixed" },
				{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
				{ "Neuter.DisplayName", "Neuter" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EGrammaticalGender",
				"EGrammaticalGender::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDialogueWaveParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueWaveParameter, Z_Construct_UPackage__Script_Engine(), TEXT("DialogueWaveParameter"), sizeof(FDialogueWaveParameter), Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDialogueWaveParameter>()
{
	return FDialogueWaveParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueWaveParameter(FDialogueWaveParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("DialogueWaveParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDialogueWaveParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFDialogueWaveParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueWaveParameter")),new UScriptStruct::TCppStructOps<FDialogueWaveParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDialogueWaveParameter;
	struct Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueWaveParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "DialogueWaveParameter" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The context to use for the dialogue wave." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueWaveParameter, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave_MetaData[] = {
		{ "Category", "DialogueWaveParameter" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The dialogue wave to play." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave = { "DialogueWave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueWaveParameter, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DialogueWaveParameter",
		sizeof(FDialogueWaveParameter),
		alignof(FDialogueWaveParameter),
		Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueWaveParameter"), sizeof(FDialogueWaveParameter), Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueWaveParameter_Hash() { return 2729769271U; }
class UScriptStruct* FDialogueContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDialogueContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueContext, Z_Construct_UPackage__Script_Engine(), TEXT("DialogueContext"), sizeof(FDialogueContext), Get_Z_Construct_UScriptStruct_FDialogueContext_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDialogueContext>()
{
	return FDialogueContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogueContext(FDialogueContext::StaticStruct, TEXT("/Script/Engine"), TEXT("DialogueContext"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDialogueContext
{
	FScriptStruct_Engine_StaticRegisterNativesFDialogueContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogueContext")),new UScriptStruct::TCppStructOps<FDialogueContext>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDialogueContext;
	struct Z_Construct_UScriptStruct_FDialogueContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Speaker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "DialogueContext" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The people being spoken to." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueContext, Targets), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker_MetaData[] = {
		{ "Category", "DialogueContext" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The person speaking the dialogue." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogueContext, Speaker), Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DialogueContext",
		sizeof(FDialogueContext),
		alignof(FDialogueContext),
		Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContext_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogueContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogueContext"), sizeof(FDialogueContext), Get_Z_Construct_UScriptStruct_FDialogueContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogueContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogueContext_Hash() { return 109134382U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
