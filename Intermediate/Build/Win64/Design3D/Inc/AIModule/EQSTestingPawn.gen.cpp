// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EQSTestingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSTestingPawn() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_AEQSTestingPawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AEQSTestingPawn();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSRenderingComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
// End Cross Module References
	static UEnum* EEnvQueryHightlightMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryHightlightMode"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryHightlightMode>()
	{
		return EEnvQueryHightlightMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnvQueryHightlightMode(EEnvQueryHightlightMode_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEnvQueryHightlightMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Hash() { return 3568575362U; }
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnvQueryHightlightMode"), 0, Get_Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnvQueryHightlightMode::All", (int64)EEnvQueryHightlightMode::All },
				{ "EEnvQueryHightlightMode::Best5Pct", (int64)EEnvQueryHightlightMode::Best5Pct },
				{ "EEnvQueryHightlightMode::Best25Pct", (int64)EEnvQueryHightlightMode::Best25Pct },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Best25Pct.DisplayName", "Best 25%" },
				{ "Best5Pct.DisplayName", "Best 5%" },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EEnvQueryHightlightMode",
				"EEnvQueryHightlightMode",
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
	void AEQSTestingPawn::StaticRegisterNativesAEQSTestingPawn()
	{
	}
	UClass* Z_Construct_UClass_AEQSTestingPawn_NoRegister()
	{
		return AEQSTestingPawn::StaticClass();
	}
	struct Z_Construct_UClass_AEQSTestingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdRenderComp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavAgentProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavAgentProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickDuringGame_MetaData[];
#endif
		static void NewProp_bTickDuringGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickDuringGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInGame_MetaData[];
#endif
		static void NewProp_bShouldBeVisibleInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReRunQueryOnlyOnFinishedMove_MetaData[];
#endif
		static void NewProp_bReRunQueryOnlyOnFinishedMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReRunQueryOnlyOnFinishedMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawFailedItems_MetaData[];
#endif
		static void NewProp_bDrawFailedItems_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawFailedItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawLabels_MetaData[];
#endif
		static void NewProp_bDrawLabels_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepToDebugDraw_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepToDebugDraw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimitPerStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimitPerStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryParams;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEQSTestingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Mesh Animation Clothing Physics Rendering Lighting Activation CharacterMovement AgentPhysics Avoidance MovementComponent Velocity Shape Camera Input Layers SkeletalMesh Optimization Pawn Replication Actor Navigation" },
		{ "IncludePath", "EnvironmentQuery/EQSTestingPawn.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
		{ "ToolTip", "this class is abstract even though it's perfectly functional on its own.\n   The reason is to stop it from showing as valid player pawn type when configuring\n   project's game mode." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
		{ "ToolTip", "Editor Preview" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp = { "EdRenderComp", nullptr, (EPropertyFlags)0x0040000800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQSTestingPawn, EdRenderComp), Z_Construct_UClass_UEQSRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties = { "NavAgentProperties", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQSTestingPawn, NavAgentProperties), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode = { "QueryingMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQSTestingPawn, QueryingMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bTickDuringGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame = { "bTickDuringGame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bShouldBeVisibleInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame = { "bShouldBeVisibleInGame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bReRunQueryOnlyOnFinishedMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove = { "bReRunQueryOnlyOnFinishedMove", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bDrawFailedItems = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems = { "bDrawFailedItems", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bDrawLabels = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels = { "bDrawLabels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQSTestingPawn, HighlightMode), Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw = { "StepToDebugDraw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQSTestingPawn, StepToDebugDraw), METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep = { "TimeLimitPerStep", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQSTestingPawn, TimeLimitPerStep), METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig = { "QueryConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQSTestingPawn, QueryConfig), METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_Inner = { "QueryConfig", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_MetaData[] = {
		{ "Category", "EQS" },
		{ "DisplayName", "QueryParams_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
		{ "ToolTip", "optional parameters for query" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQSTestingPawn, QueryParams), METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_Inner = { "QueryParams", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnvNamedValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEQSTestingPawn, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEQSTestingPawn_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEQSTestingPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister, (int32)VTABLE_OFFSET(AEQSTestingPawn, IEQSQueryResultSourceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEQSTestingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEQSTestingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEQSTestingPawn_Statics::ClassParams = {
		&AEQSTestingPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEQSTestingPawn_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEQSTestingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEQSTestingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEQSTestingPawn, 2812747082);
	template<> AIMODULE_API UClass* StaticClass<AEQSTestingPawn>()
	{
		return AEQSTestingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEQSTestingPawn(Z_Construct_UClass_AEQSTestingPawn, &AEQSTestingPawn::StaticClass, TEXT("/Script/AIModule"), TEXT("AEQSTestingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEQSTestingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
