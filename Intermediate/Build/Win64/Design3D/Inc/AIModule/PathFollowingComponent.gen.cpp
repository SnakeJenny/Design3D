// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/PathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFollowingComponent() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingAction();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPathFollowingComponent_OnActorBump();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister();
// End Cross Module References
	static UEnum* EPathFollowingRequestResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingRequestResult"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingRequestResult::Type>()
	{
		return EPathFollowingRequestResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPathFollowingRequestResult(EPathFollowingRequestResult_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPathFollowingRequestResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Hash() { return 3522219081U; }
	UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPathFollowingRequestResult"), 0, Get_Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPathFollowingRequestResult::Failed", (int64)EPathFollowingRequestResult::Failed },
				{ "EPathFollowingRequestResult::AlreadyAtGoal", (int64)EPathFollowingRequestResult::AlreadyAtGoal },
				{ "EPathFollowingRequestResult::RequestSuccessful", (int64)EPathFollowingRequestResult::RequestSuccessful },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPathFollowingRequestResult",
				"EPathFollowingRequestResult::Type",
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
	static UEnum* EPathFollowingAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingAction, Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingAction"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingAction::Type>()
	{
		return EPathFollowingAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPathFollowingAction(EPathFollowingAction_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPathFollowingAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPathFollowingAction_Hash() { return 349393653U; }
	UEnum* Z_Construct_UEnum_AIModule_EPathFollowingAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPathFollowingAction"), 0, Get_Z_Construct_UEnum_AIModule_EPathFollowingAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPathFollowingAction::Error", (int64)EPathFollowingAction::Error },
				{ "EPathFollowingAction::NoMove", (int64)EPathFollowingAction::NoMove },
				{ "EPathFollowingAction::DirectMove", (int64)EPathFollowingAction::DirectMove },
				{ "EPathFollowingAction::PartialPath", (int64)EPathFollowingAction::PartialPath },
				{ "EPathFollowingAction::PathToGoal", (int64)EPathFollowingAction::PathToGoal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
				{ "ToolTip", "DEPRECATED, will be removed with GetPathActionType function" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPathFollowingAction",
				"EPathFollowingAction::Type",
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
	static UEnum* EPathFollowingResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingResult, Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingResult"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingResult::Type>()
	{
		return EPathFollowingResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPathFollowingResult(EPathFollowingResult_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPathFollowingResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPathFollowingResult_Hash() { return 3574230648U; }
	UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPathFollowingResult"), 0, Get_Z_Construct_UEnum_AIModule_EPathFollowingResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPathFollowingResult::Success", (int64)EPathFollowingResult::Success },
				{ "EPathFollowingResult::Blocked", (int64)EPathFollowingResult::Blocked },
				{ "EPathFollowingResult::OffPath", (int64)EPathFollowingResult::OffPath },
				{ "EPathFollowingResult::Aborted", (int64)EPathFollowingResult::Aborted },
				{ "EPathFollowingResult::Skipped_DEPRECATED", (int64)EPathFollowingResult::Skipped_DEPRECATED },
				{ "EPathFollowingResult::Invalid", (int64)EPathFollowingResult::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.ToolTip", "Aborted and stopped (failure)" },
				{ "Blocked.ToolTip", "Movement was blocked" },
				{ "BlueprintType", "true" },
				{ "Invalid.ToolTip", "Request was invalid" },
				{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
				{ "OffPath.ToolTip", "Agent is not on path" },
				{ "Skipped_DEPRECATED.Hidden", "" },
				{ "Skipped_DEPRECATED.ToolTip", "DEPRECATED, use Aborted result instead" },
				{ "Success.ToolTip", "Reached destination" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPathFollowingResult",
				"EPathFollowingResult::Type",
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
	static UEnum* EPathFollowingStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingStatus, Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingStatus"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingStatus::Type>()
	{
		return EPathFollowingStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPathFollowingStatus(EPathFollowingStatus_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPathFollowingStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPathFollowingStatus_Hash() { return 117653584U; }
	UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPathFollowingStatus"), 0, Get_Z_Construct_UEnum_AIModule_EPathFollowingStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPathFollowingStatus::Idle", (int64)EPathFollowingStatus::Idle },
				{ "EPathFollowingStatus::Waiting", (int64)EPathFollowingStatus::Waiting },
				{ "EPathFollowingStatus::Paused", (int64)EPathFollowingStatus::Paused },
				{ "EPathFollowingStatus::Moving", (int64)EPathFollowingStatus::Moving },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Idle.ToolTip", "No requests" },
				{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
				{ "Moving.ToolTip", "Following path" },
				{ "Paused.ToolTip", "Request paused, will continue after ResumeMove()" },
				{ "Waiting.ToolTip", "Request with incomplete path, will start after UpdateMove()" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EPathFollowingStatus",
				"EPathFollowingStatus::Type",
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
	void UPathFollowingComponent::StaticRegisterNativesUPathFollowingComponent()
	{
		UClass* Class = UPathFollowingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPathActionType", &UPathFollowingComponent::execGetPathActionType },
			{ "GetPathDestination", &UPathFollowingComponent::execGetPathDestination },
			{ "OnActorBump", &UPathFollowingComponent::execOnActorBump },
			{ "OnNavDataRegistered", &UPathFollowingComponent::execOnNavDataRegistered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics
	{
		struct PathFollowingComponent_eventGetPathActionType_Parms
		{
			TEnumAsByte<EPathFollowingAction::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFollowingComponent_eventGetPathActionType_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PathFollowing" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is now deprecated, please use AIController.GetMoveStatus instead" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "GetPathActionType", sizeof(PathFollowingComponent_eventGetPathActionType_Parms), Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics
	{
		struct PathFollowingComponent_eventGetPathDestination_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFollowingComponent_eventGetPathDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PathFollowing" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is now deprecated, please use AIController.GetImmediateMoveDestination instead" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "GetPathDestination", sizeof(PathFollowingComponent_eventGetPathDestination_Parms), Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics
	{
		struct PathFollowingComponent_eventOnActorBump_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_SelfActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "called when moving agent collides with another actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "OnActorBump", sizeof(PathFollowingComponent_eventOnActorBump_Parms), Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPathFollowingComponent_OnActorBump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics
	{
		struct PathFollowingComponent_eventOnNavDataRegistered_Parms
		{
			ANavigationData* NavData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnNavDataRegistered_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::NewProp_NavData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "called when NavigationSystem registers new navigation data type while this component\n    instance has empty MyNavData. This is usually the case for AI agents hand-placed\n    on levels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "OnNavDataRegistered", sizeof(PathFollowingComponent_eventOnNavDataRegistered_Parms), Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister()
	{
		return UPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyNavData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPathFollowingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType, "GetPathActionType" }, // 3333667284
		{ &Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination, "GetPathDestination" }, // 143127423
		{ &Z_Construct_UFunction_UPathFollowingComponent_OnActorBump, "OnActorBump" }, // 1601107419
		{ &Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered, "OnNavDataRegistered" }, // 137777187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/PathFollowingComponent.h" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "navigation data for agent described in movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData = { "MyNavData", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathFollowingComponent, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "associated movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPathFollowingComponent, MovementComp), Z_Construct_UClass_UNavMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPathFollowingComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIResourceInterface_NoRegister, (int32)VTABLE_OFFSET(UPathFollowingComponent, IAIResourceInterface), false },
			{ Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister, (int32)VTABLE_OFFSET(UPathFollowingComponent, IPathFollowingAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathFollowingComponent_Statics::ClassParams = {
		&UPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPathFollowingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathFollowingComponent, 2538610105);
	template<> AIMODULE_API UClass* StaticClass<UPathFollowingComponent>()
	{
		return UPathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathFollowingComponent(Z_Construct_UClass_UPathFollowingComponent, &UPathFollowingComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
