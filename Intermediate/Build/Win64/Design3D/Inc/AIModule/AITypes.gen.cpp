// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/AITypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITypes() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EGenericAICheck();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAILockSource();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionEventType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionAbortState();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_FAIDistanceType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIOptionFlag();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIMoveRequest();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
// End Cross Module References
	static UEnum* EGenericAICheck_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EGenericAICheck, Z_Construct_UPackage__Script_AIModule(), TEXT("EGenericAICheck"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EGenericAICheck>()
	{
		return EGenericAICheck_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGenericAICheck(EGenericAICheck_StaticEnum, TEXT("/Script/AIModule"), TEXT("EGenericAICheck"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EGenericAICheck_Hash() { return 909289610U; }
	UEnum* Z_Construct_UEnum_AIModule_EGenericAICheck()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGenericAICheck"), 0, Get_Z_Construct_UEnum_AIModule_EGenericAICheck_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGenericAICheck::Less", (int64)EGenericAICheck::Less },
				{ "EGenericAICheck::LessOrEqual", (int64)EGenericAICheck::LessOrEqual },
				{ "EGenericAICheck::Equal", (int64)EGenericAICheck::Equal },
				{ "EGenericAICheck::NotEqual", (int64)EGenericAICheck::NotEqual },
				{ "EGenericAICheck::GreaterOrEqual", (int64)EGenericAICheck::GreaterOrEqual },
				{ "EGenericAICheck::Greater", (int64)EGenericAICheck::Greater },
				{ "EGenericAICheck::IsTrue", (int64)EGenericAICheck::IsTrue },
				{ "EGenericAICheck::MAX", (int64)EGenericAICheck::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MAX.Hidden", "" },
				{ "ModuleRelativePath", "Classes/AITypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EGenericAICheck",
				"EGenericAICheck",
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
	static UEnum* EAILockSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAILockSource, Z_Construct_UPackage__Script_AIModule(), TEXT("EAILockSource"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAILockSource::Type>()
	{
		return EAILockSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAILockSource(EAILockSource_StaticEnum, TEXT("/Script/AIModule"), TEXT("EAILockSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EAILockSource_Hash() { return 3141786232U; }
	UEnum* Z_Construct_UEnum_AIModule_EAILockSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAILockSource"), 0, Get_Z_Construct_UEnum_AIModule_EAILockSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAILockSource::Animation", (int64)EAILockSource::Animation },
				{ "EAILockSource::Logic", (int64)EAILockSource::Logic },
				{ "EAILockSource::Script", (int64)EAILockSource::Script },
				{ "EAILockSource::Gameplay", (int64)EAILockSource::Gameplay },
				{ "EAILockSource::MAX", (int64)EAILockSource::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MAX.Hidden", "" },
				{ "ModuleRelativePath", "Classes/AITypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EAILockSource",
				"EAILockSource::Type",
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
	static UEnum* EAIRequestPriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAIRequestPriority, Z_Construct_UPackage__Script_AIModule(), TEXT("EAIRequestPriority"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAIRequestPriority::Type>()
	{
		return EAIRequestPriority_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIRequestPriority(EAIRequestPriority_StaticEnum, TEXT("/Script/AIModule"), TEXT("EAIRequestPriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EAIRequestPriority_Hash() { return 487295585U; }
	UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIRequestPriority"), 0, Get_Z_Construct_UEnum_AIModule_EAIRequestPriority_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIRequestPriority::SoftScript", (int64)EAIRequestPriority::SoftScript },
				{ "EAIRequestPriority::Logic", (int64)EAIRequestPriority::Logic },
				{ "EAIRequestPriority::HardScript", (int64)EAIRequestPriority::HardScript },
				{ "EAIRequestPriority::Reaction", (int64)EAIRequestPriority::Reaction },
				{ "EAIRequestPriority::Ultimate", (int64)EAIRequestPriority::Ultimate },
				{ "EAIRequestPriority::MAX", (int64)EAIRequestPriority::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HardScript.ToolTip", "Actions LDs really want AI to perform." },
				{ "Logic.ToolTip", "Actions AI wants to do due to its internal logic." },
				{ "MAX.Hidden", "" },
				{ "ModuleRelativePath", "Classes/AITypes.h" },
				{ "Reaction.ToolTip", "Actions being result of game-world mechanics, like hit reactions, death, falling, etc. In general things not depending on what AI's thinking." },
				{ "SoftScript.ToolTip", "Actions requested by Level Designers by placing AI-hinting elements on the map." },
				{ "Ultimate.ToolTip", "Ultimate priority, to be used with caution, makes AI perform given action regardless of anything else (for example disabled reactions)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EAIRequestPriority",
				"EAIRequestPriority::Type",
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
	static UEnum* EPawnActionEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionEventType, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionEventType"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPawnActionEventType::Type>()
	{
		return EPawnActionEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnActionEventType(EPawnActionEventType_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPawnActionEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPawnActionEventType_Hash() { return 1536663857U; }
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnActionEventType"), 0, Get_Z_Construct_UEnum_AIModule_EPawnActionEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnActionEventType::Invalid", (int64)EPawnActionEventType::Invalid },
				{ "EPawnActionEventType::FailedToStart", (int64)EPawnActionEventType::FailedToStart },
				{ "EPawnActionEventType::InstantAbort", (int64)EPawnActionEventType::InstantAbort },
				{ "EPawnActionEventType::FinishedAborting", (int64)EPawnActionEventType::FinishedAborting },
				{ "EPawnActionEventType::FinishedExecution", (int64)EPawnActionEventType::FinishedExecution },
				{ "EPawnActionEventType::Push", (int64)EPawnActionEventType::Push },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AITypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPawnActionEventType",
				"EPawnActionEventType::Type",
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
	static UEnum* EPawnActionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionResult, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionResult"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPawnActionResult::Type>()
	{
		return EPawnActionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnActionResult(EPawnActionResult_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPawnActionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPawnActionResult_Hash() { return 3686796360U; }
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnActionResult"), 0, Get_Z_Construct_UEnum_AIModule_EPawnActionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnActionResult::NotStarted", (int64)EPawnActionResult::NotStarted },
				{ "EPawnActionResult::InProgress", (int64)EPawnActionResult::InProgress },
				{ "EPawnActionResult::Success", (int64)EPawnActionResult::Success },
				{ "EPawnActionResult::Failed", (int64)EPawnActionResult::Failed },
				{ "EPawnActionResult::Aborted", (int64)EPawnActionResult::Aborted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AITypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPawnActionResult",
				"EPawnActionResult::Type",
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
	static UEnum* EPawnActionAbortState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionAbortState, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionAbortState"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPawnActionAbortState::Type>()
	{
		return EPawnActionAbortState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnActionAbortState(EPawnActionAbortState_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPawnActionAbortState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPawnActionAbortState_Hash() { return 2518828218U; }
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionAbortState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnActionAbortState"), 0, Get_Z_Construct_UEnum_AIModule_EPawnActionAbortState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnActionAbortState::NeverStarted", (int64)EPawnActionAbortState::NeverStarted },
				{ "EPawnActionAbortState::NotBeingAborted", (int64)EPawnActionAbortState::NotBeingAborted },
				{ "EPawnActionAbortState::MarkPendingAbort", (int64)EPawnActionAbortState::MarkPendingAbort },
				{ "EPawnActionAbortState::LatentAbortInProgress", (int64)EPawnActionAbortState::LatentAbortInProgress },
				{ "EPawnActionAbortState::AbortDone", (int64)EPawnActionAbortState::AbortDone },
				{ "EPawnActionAbortState::MAX", (int64)EPawnActionAbortState::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MarkPendingAbort.ToolTip", "This means waiting for child to abort before aborting self." },
				{ "MAX.Hidden", "" },
				{ "ModuleRelativePath", "Classes/AITypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPawnActionAbortState",
				"EPawnActionAbortState::Type",
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
	static UEnum* FAIDistanceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_FAIDistanceType, Z_Construct_UPackage__Script_AIModule(), TEXT("FAIDistanceType"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<FAIDistanceType>()
	{
		return FAIDistanceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FAIDistanceType(FAIDistanceType_StaticEnum, TEXT("/Script/AIModule"), TEXT("FAIDistanceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_FAIDistanceType_Hash() { return 995687106U; }
	UEnum* Z_Construct_UEnum_AIModule_FAIDistanceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FAIDistanceType"), 0, Get_Z_Construct_UEnum_AIModule_FAIDistanceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FAIDistanceType::Distance3D", (int64)FAIDistanceType::Distance3D },
				{ "FAIDistanceType::Distance2D", (int64)FAIDistanceType::Distance2D },
				{ "FAIDistanceType::DistanceZ", (int64)FAIDistanceType::DistanceZ },
				{ "FAIDistanceType::MAX", (int64)FAIDistanceType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MAX.Hidden", "" },
				{ "ModuleRelativePath", "Classes/AITypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"FAIDistanceType",
				"FAIDistanceType",
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
	static UEnum* EAIOptionFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAIOptionFlag, Z_Construct_UPackage__Script_AIModule(), TEXT("EAIOptionFlag"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAIOptionFlag::Type>()
	{
		return EAIOptionFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIOptionFlag(EAIOptionFlag_StaticEnum, TEXT("/Script/AIModule"), TEXT("EAIOptionFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EAIOptionFlag_Hash() { return 568088466U; }
	UEnum* Z_Construct_UEnum_AIModule_EAIOptionFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIOptionFlag"), 0, Get_Z_Construct_UEnum_AIModule_EAIOptionFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIOptionFlag::Default", (int64)EAIOptionFlag::Default },
				{ "EAIOptionFlag::Enable", (int64)EAIOptionFlag::Enable },
				{ "EAIOptionFlag::Disable", (int64)EAIOptionFlag::Disable },
				{ "EAIOptionFlag::MAX", (int64)EAIOptionFlag::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Disable.DisplayName", "No" },
				{ "Disable.ToolTip", "UHT was complaining when tried to use True as value instead of Enable" },
				{ "Enable.DisplayName", "Yes" },
				{ "MAX.Hidden", "" },
				{ "ModuleRelativePath", "Classes/AITypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EAIOptionFlag",
				"EAIOptionFlag::Type",
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
class UScriptStruct* FAIMoveRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIMoveRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIMoveRequest, Z_Construct_UPackage__Script_AIModule(), TEXT("AIMoveRequest"), sizeof(FAIMoveRequest), Get_Z_Construct_UScriptStruct_FAIMoveRequest_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIMoveRequest>()
{
	return FAIMoveRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIMoveRequest(FAIMoveRequest::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIMoveRequest"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIMoveRequest
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIMoveRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIMoveRequest")),new UScriptStruct::TCppStructOps<FAIMoveRequest>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIMoveRequest;
	struct Z_Construct_UScriptStruct_FAIMoveRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMoveRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIMoveRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AITypes.h" },
		{ "ToolTip", "move goal: actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIMoveRequest, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIMoveRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIMoveRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIMoveRequest",
		sizeof(FAIMoveRequest),
		alignof(FAIMoveRequest),
		Z_Construct_UScriptStruct_FAIMoveRequest_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIMoveRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIMoveRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIMoveRequest"), sizeof(FAIMoveRequest), Get_Z_Construct_UScriptStruct_FAIMoveRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIMoveRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIMoveRequest_Hash() { return 1671586822U; }
class UScriptStruct* FAIRequestID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIRequestID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIRequestID, Z_Construct_UPackage__Script_AIModule(), TEXT("AIRequestID"), sizeof(FAIRequestID), Get_Z_Construct_UScriptStruct_FAIRequestID_Hash());
	}
	return Singleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIRequestID>()
{
	return FAIRequestID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIRequestID(FAIRequestID::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIRequestID"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIRequestID
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIRequestID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIRequestID")),new UScriptStruct::TCppStructOps<FAIRequestID>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIRequestID;
	struct Z_Construct_UScriptStruct_FAIRequestID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRequestID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIRequestID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIRequestID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIRequestID, RequestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIRequestID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIRequestID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIRequestID",
		sizeof(FAIRequestID),
		alignof(FAIRequestID),
		Z_Construct_UScriptStruct_FAIRequestID_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRequestID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRequestID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRequestID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIRequestID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIRequestID"), sizeof(FAIRequestID), Get_Z_Construct_UScriptStruct_FAIRequestID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIRequestID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIRequestID_Hash() { return 582516807U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
