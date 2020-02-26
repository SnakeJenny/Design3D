// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEQSNormalizationType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryTestClamping();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreEquation();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestScoreOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestFilterOperator();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestPurpose();
// End Cross Module References
	static UEnum* EEQSNormalizationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEQSNormalizationType, Z_Construct_UPackage__Script_AIModule(), TEXT("EEQSNormalizationType"));
		}
		return Singleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEQSNormalizationType>()
	{
		return EEQSNormalizationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEQSNormalizationType(EEQSNormalizationType_StaticEnum, TEXT("/Script/AIModule"), TEXT("EEQSNormalizationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EEQSNormalizationType_Hash() { return 4036263059U; }
	UEnum* Z_Construct_UEnum_AIModule_EEQSNormalizationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEQSNormalizationType"), 0, Get_Z_Construct_UEnum_AIModule_EEQSNormalizationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEQSNormalizationType::Absolute", (int64)EEQSNormalizationType::Absolute },
				{ "EEQSNormalizationType::RelativeToScores", (int64)EEQSNormalizationType::RelativeToScores },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Absolute.ToolTip", "Use 0 as the base of normalization range." },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
				{ "RelativeToScores.ToolTip", "Use lowest item score as the base of normalization range." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				nullptr,
				"EEQSNormalizationType",
				"EEQSNormalizationType",
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
	void UEnvQueryTest::StaticRegisterNativesUEnvQueryTest()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister()
	{
		return UEnvQueryTest::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorkOnFloatValues_MetaData[];
#endif
		static void NewProp_bWorkOnFloatValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorkOnFloatValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefineReferenceValue_MetaData[];
#endif
		static void NewProp_bDefineReferenceValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefineReferenceValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferenceValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoringFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoringFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreClampMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoreClampMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreClampMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScoreClampMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NormalizationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NormalizationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMaxType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClampMaxType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClampMinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoringEquation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScoringEquation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValueMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatValueMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValueMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatValueMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleContextScoreOp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultipleContextScoreOp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultipleContextFilterOp_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultipleContextFilterOp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPurpose_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TestPurpose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TestOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryTest.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "When set, test operates on float values (e.g. distance, with AtLeast, UpTo conditions),\notherwise it will accept bool values (e.g. visibility, with Equals condition)" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_SetBit(void* Obj)
	{
		((UEnvQueryTest*)Obj)->bWorkOnFloatValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues = { "bWorkOnFloatValues", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEnvQueryTest), &Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_MetaData[] = {
		{ "Category", "Score" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "When set to true enables usage of ReferenceValue. It's false by default" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_SetBit(void* Obj)
	{
		((UEnvQueryTest*)Obj)->bDefineReferenceValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue = { "bDefineReferenceValue", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnvQueryTest), &Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue_MetaData[] = {
		{ "Category", "Score" },
		{ "EditCondition", "bDefineReferenceValue" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "When specified gets used to normalize test's results in such a way that the closer a value is to ReferenceValue\n    the higher normalized result it will produce. Value farthest from ReferenceValue will be normalized\n    to 0, and all the other values in between will get normalized linearly with the distance to ReferenceValue." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue = { "ReferenceValue", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, ReferenceValue), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor_MetaData[] = {
		{ "Category", "Score" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "The weight (factor) by which to multiply the normalized score after the scoring equation is applied." },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor = { "ScoringFactor", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, ScoringFactor), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Maximum value to use to normalize the raw test value before applying scoring formula." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax = { "ScoreClampMax", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, ScoreClampMax), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Minimum value to use to normalize the raw test value before applying scoring formula." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin = { "ScoreClampMin", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, ScoreClampMin), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Specifies how to determine value span used to normalize scores" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType = { "NormalizationType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, NormalizationType), Z_Construct_UEnum_AIModule_EEQSNormalizationType, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "How should the upper bound for normalization of the raw test value before applying the scoring formula be determined?\n          Should it use the highest value found (tested), the upper threshold for filtering, or a separate specified normalization maximum?" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType = { "ClampMaxType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, ClampMaxType), Z_Construct_UEnum_AIModule_EEnvQueryTestClamping, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "How should the lower bound for normalization of the raw test value before applying the scoring formula be determined?\n          Should it use the lowest value found (tested), the lower threshold for filtering, or a separate specified normalization minimum?" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType = { "ClampMinType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, ClampMinType), Z_Construct_UEnum_AIModule_EEnvQueryTestClamping, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "The shape of the curve equation to apply to the normalized score before multiplying by factor." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation = { "ScoringEquation", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, ScoringEquation), Z_Construct_UEnum_AIModule_EEnvTestScoreEquation, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Maximum limit (inclusive) of valid values for the raw test value. Higher values will be discarded as invalid." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax = { "FloatValueMax", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, FloatValueMax), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Minimum limit (inclusive) of valid values for the raw test value. Lower values will be discarded as invalid." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin = { "FloatValueMin", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, FloatValueMin), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Desired boolean value of the test for scoring to occur or filtering test to pass." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010008000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, BoolValue), Z_Construct_UScriptStruct_FAIDataProviderBoolValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Does this test filter out results that are below a lower limit, above an upper limit, or both?  Or does it just look for a matching value?" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, FilterType), Z_Construct_UEnum_AIModule_EEnvTestFilterType, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Determines scoring operator when context returns multiple items" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp = { "MultipleContextScoreOp", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, MultipleContextScoreOp), Z_Construct_UEnum_AIModule_EEnvTestScoreOperator, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Determines filtering operator when context returns multiple items" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp = { "MultipleContextFilterOp", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, MultipleContextFilterOp), Z_Construct_UEnum_AIModule_EEnvTestFilterOperator, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Optional comment or explanation about what this test is for.  Useful when the purpose of tests may not be clear,\nespecially when there are multiple tests of the same type." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment = { "TestComment", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, TestComment), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "The purpose of this test.  Should it be used for filtering possible results, scoring them, or both?" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose = { "TestPurpose", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, TestPurpose), Z_Construct_UEnum_AIModule_EEnvTestPurpose, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryTest.h" },
		{ "ToolTip", "Number of test as defined in data asset" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder = { "TestOrder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest, TestOrder), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bWorkOnFloatValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_bDefineReferenceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ReferenceValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoreClampMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_NormalizationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMaxType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ClampMinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_ScoringEquation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FloatValueMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_BoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_FilterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextScoreOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_MultipleContextFilterOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestPurpose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Statics::NewProp_TestOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Statics::ClassParams = {
		&UEnvQueryTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest, 3200439268);
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest>()
	{
		return UEnvQueryTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest(Z_Construct_UClass_UEnvQueryTest, &UEnvQueryTest::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
