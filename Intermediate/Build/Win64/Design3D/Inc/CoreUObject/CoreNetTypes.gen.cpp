// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUObject/Public/UObject/CoreNetTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreNetTypes() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELifetimeCondition();
	UPackage* Z_Construct_UPackage__Script_CoreUObject();
// End Cross Module References
	static UEnum* ELifetimeCondition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoreUObject_ELifetimeCondition, Z_Construct_UPackage__Script_CoreUObject(), TEXT("ELifetimeCondition"));
		}
		return Singleton;
	}
	template<> COREUOBJECT_API UEnum* StaticEnum<ELifetimeCondition>()
	{
		return ELifetimeCondition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELifetimeCondition(ELifetimeCondition_StaticEnum, TEXT("/Script/CoreUObject"), TEXT("ELifetimeCondition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoreUObject_ELifetimeCondition_Hash() { return 3553087388U; }
	UEnum* Z_Construct_UEnum_CoreUObject_ELifetimeCondition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoreUObject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELifetimeCondition"), 0, Get_Z_Construct_UEnum_CoreUObject_ELifetimeCondition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "COND_None", (int64)COND_None },
				{ "COND_InitialOnly", (int64)COND_InitialOnly },
				{ "COND_OwnerOnly", (int64)COND_OwnerOnly },
				{ "COND_SkipOwner", (int64)COND_SkipOwner },
				{ "COND_SimulatedOnly", (int64)COND_SimulatedOnly },
				{ "COND_AutonomousOnly", (int64)COND_AutonomousOnly },
				{ "COND_SimulatedOrPhysics", (int64)COND_SimulatedOrPhysics },
				{ "COND_InitialOrOwner", (int64)COND_InitialOrOwner },
				{ "COND_Custom", (int64)COND_Custom },
				{ "COND_ReplayOrOwner", (int64)COND_ReplayOrOwner },
				{ "COND_ReplayOnly", (int64)COND_ReplayOnly },
				{ "COND_SimulatedOnlyNoReplay", (int64)COND_SimulatedOnlyNoReplay },
				{ "COND_SimulatedOrPhysicsNoReplay", (int64)COND_SimulatedOrPhysicsNoReplay },
				{ "COND_SkipReplay", (int64)COND_SkipReplay },
				{ "COND_Max", (int64)COND_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COND_AutonomousOnly.DisplayName", "Autonomous Only" },
				{ "COND_AutonomousOnly.ToolTip", "This property will only send to simulated actors" },
				{ "COND_Custom.DisplayName", "Custom" },
				{ "COND_Custom.ToolTip", "This property will send on the initial packet, or to the actors owner" },
				{ "COND_InitialOnly.DisplayName", "Initial Only" },
				{ "COND_InitialOnly.ToolTip", "This property has no condition, and will send anytime it changes" },
				{ "COND_InitialOrOwner.DisplayName", "Initial Or Owner" },
				{ "COND_InitialOrOwner.ToolTip", "This property will send to simulated OR bRepPhysics actors" },
				{ "COND_Max.Hidden", "" },
				{ "COND_Max.ToolTip", "This property will not send to the replay connection" },
				{ "COND_None.DisplayName", "None" },
				{ "COND_OwnerOnly.DisplayName", "Owner Only" },
				{ "COND_OwnerOnly.ToolTip", "This property will only attempt to send on the initial bunch" },
				{ "COND_ReplayOnly.DisplayName", "Replay Only" },
				{ "COND_ReplayOnly.ToolTip", "This property will only send to the replay connection, or to the actors owner" },
				{ "COND_ReplayOrOwner.DisplayName", "Replay Or Owner" },
				{ "COND_ReplayOrOwner.ToolTip", "This property has no particular condition, but wants the ability to toggle on/off via SetCustomIsActiveOverride" },
				{ "COND_SimulatedOnly.DisplayName", "Simulated Only" },
				{ "COND_SimulatedOnly.ToolTip", "This property send to every connection EXCEPT the owner" },
				{ "COND_SimulatedOnlyNoReplay.DisplayName", "Simulated Only No Replay" },
				{ "COND_SimulatedOnlyNoReplay.ToolTip", "This property will only send to the replay connection" },
				{ "COND_SimulatedOrPhysics.DisplayName", "Simulated Or Physics" },
				{ "COND_SimulatedOrPhysics.ToolTip", "This property will only send to autonomous actors" },
				{ "COND_SimulatedOrPhysicsNoReplay.DisplayName", "Simulated Or Physics No Replay" },
				{ "COND_SimulatedOrPhysicsNoReplay.ToolTip", "This property will send to actors only, but not to replay connections" },
				{ "COND_SkipOwner.DisplayName", "Skip Owner" },
				{ "COND_SkipOwner.ToolTip", "This property will only send to the actor's owner" },
				{ "COND_SkipReplay.DisplayName", "Skip Replay" },
				{ "COND_SkipReplay.ToolTip", "This property will send to simulated Or bRepPhysics actors, but not to replay connections" },
				{ "ModuleRelativePath", "Public/UObject/CoreNetTypes.h" },
				{ "ToolTip", "Secondary condition to check before considering the replication of a lifetime property." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoreUObject,
				nullptr,
				"ELifetimeCondition",
				"ELifetimeCondition",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
