// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AIPerceptionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionTypes() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAISenseNotifyType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EAISenseNotifyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAISenseNotifyType, Z_Construct_UPackage__Script_AIModule(), TEXT("EAISenseNotifyType"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAISenseNotifyType>()
	{
		return EAISenseNotifyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAISenseNotifyType(EAISenseNotifyType_StaticEnum, TEXT("/Script/AIModule"), TEXT("EAISenseNotifyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EAISenseNotifyType_Hash() { return 3227271757U; }
	UEnum* Z_Construct_UEnum_AIModule_EAISenseNotifyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAISenseNotifyType"), 0, Get_Z_Construct_UEnum_AIModule_EAISenseNotifyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAISenseNotifyType::OnEveryPerception", (int64)EAISenseNotifyType::OnEveryPerception },
				{ "EAISenseNotifyType::OnPerceptionChange", (int64)EAISenseNotifyType::OnPerceptionChange },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
				{ "OnEveryPerception.ToolTip", "Continuous update whenever target is perceived." },
				{ "OnPerceptionChange.ToolTip", "From \"visible\" to \"not visible\" or vice versa." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EAISenseNotifyType",
				"EAISenseNotifyType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAISenseAffiliationFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISenseAffiliationFilter, Z_Construct_UPackage__Script_AIModule(), TEXT("AISenseAffiliationFilter"), sizeof(FAISenseAffiliationFilter), Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAISenseAffiliationFilter>()
{
	return FAISenseAffiliationFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISenseAffiliationFilter(FAISenseAffiliationFilter::StaticStruct, TEXT("/Script/AIModule"), TEXT("AISenseAffiliationFilter"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAISenseAffiliationFilter
{
	FScriptStruct_AIModule_StaticRegisterNativesFAISenseAffiliationFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AISenseAffiliationFilter")),new UScriptStruct::TCppStructOps<FAISenseAffiliationFilter>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAISenseAffiliationFilter;
	struct Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectFriendlies_MetaData[];
#endif
		static void NewProp_bDetectFriendlies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectFriendlies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectNeutrals_MetaData[];
#endif
		static void NewProp_bDetectNeutrals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectNeutrals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetectEnemies_MetaData[];
#endif
		static void NewProp_bDetectEnemies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetectEnemies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISenseAffiliationFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies_SetBit(void* Obj)
	{
		((FAISenseAffiliationFilter*)Obj)->bDetectFriendlies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies = { "bDetectFriendlies", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAISenseAffiliationFilter), &Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals_SetBit(void* Obj)
	{
		((FAISenseAffiliationFilter*)Obj)->bDetectNeutrals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals = { "bDetectNeutrals", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAISenseAffiliationFilter), &Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies_SetBit(void* Obj)
	{
		((FAISenseAffiliationFilter*)Obj)->bDetectEnemies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies = { "bDetectEnemies", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAISenseAffiliationFilter), &Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectFriendlies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectNeutrals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::NewProp_bDetectEnemies,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AISenseAffiliationFilter",
		sizeof(FAISenseAffiliationFilter),
		alignof(FAISenseAffiliationFilter),
		Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISenseAffiliationFilter"), sizeof(FAISenseAffiliationFilter), Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Hash() { return 1932042562U; }
class UScriptStruct* FAIStimulus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIStimulus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIStimulus, Z_Construct_UPackage__Script_AIModule(), TEXT("AIStimulus"), sizeof(FAIStimulus), Get_Z_Construct_UScriptStruct_FAIStimulus_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIStimulus>()
{
	return FAIStimulus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIStimulus(FAIStimulus::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIStimulus"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIStimulus
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIStimulus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIStimulus")),new UScriptStruct::TCppStructOps<FAIStimulus>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIStimulus;
	struct Z_Construct_UScriptStruct_FAIStimulus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccessfullySensed_MetaData[];
#endif
		static void NewProp_bSuccessfullySensed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccessfullySensed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiverLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReceiverLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StimulusLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StimulusLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpirationAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Age;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStimulus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIStimulus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIStimulus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed_SetBit(void* Obj)
	{
		((FAIStimulus*)Obj)->bSuccessfullySensed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed = { "bSuccessfullySensed", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAIStimulus), &Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStimulus, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ReceiverLocation_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ReceiverLocation = { "ReceiverLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStimulus, ReceiverLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ReceiverLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ReceiverLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_StimulusLocation_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_StimulusLocation = { "StimulusLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStimulus, StimulusLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_StimulusLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_StimulusLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStimulus, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Strength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ExpirationAge_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ExpirationAge = { "ExpirationAge", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStimulus, ExpirationAge), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ExpirationAge_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ExpirationAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Age_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStimulus, Age), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Age_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Age_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIStimulus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_bSuccessfullySensed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ReceiverLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_StimulusLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_ExpirationAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStimulus_Statics::NewProp_Age,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIStimulus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIStimulus",
		sizeof(FAIStimulus),
		alignof(FAIStimulus),
		Z_Construct_UScriptStruct_FAIStimulus_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStimulus_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStimulus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIStimulus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIStimulus"), sizeof(FAIStimulus), Get_Z_Construct_UScriptStruct_FAIStimulus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIStimulus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIStimulus_Hash() { return 3067848689U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
