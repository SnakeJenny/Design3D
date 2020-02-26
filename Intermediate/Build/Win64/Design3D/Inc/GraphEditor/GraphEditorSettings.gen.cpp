// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GraphEditor/Public/GraphEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphEditorSettings() {}
// Cross Module References
	GRAPHEDITOR_API UEnum* Z_Construct_UEnum_GraphEditor_EGraphPanningMouseButton();
	UPackage* Z_Construct_UPackage__Script_GraphEditor();
	GRAPHEDITOR_API UClass* Z_Construct_UClass_UGraphEditorSettings_NoRegister();
	GRAPHEDITOR_API UClass* Z_Construct_UClass_UGraphEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintPinStyleType();
// End Cross Module References
	static UEnum* EGraphPanningMouseButton_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GraphEditor_EGraphPanningMouseButton, Z_Construct_UPackage__Script_GraphEditor(), TEXT("EGraphPanningMouseButton"));
		}
		return Singleton;
	}
	template<> GRAPHEDITOR_API UEnum* StaticEnum<EGraphPanningMouseButton>()
	{
		return EGraphPanningMouseButton_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGraphPanningMouseButton(EGraphPanningMouseButton_StaticEnum, TEXT("/Script/GraphEditor"), TEXT("EGraphPanningMouseButton"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GraphEditor_EGraphPanningMouseButton_Hash() { return 1288705105U; }
	UEnum* Z_Construct_UEnum_GraphEditor_EGraphPanningMouseButton()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GraphEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGraphPanningMouseButton"), 0, Get_Z_Construct_UEnum_GraphEditor_EGraphPanningMouseButton_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGraphPanningMouseButton::Right", (int64)EGraphPanningMouseButton::Right },
				{ "EGraphPanningMouseButton::Middle", (int64)EGraphPanningMouseButton::Middle },
				{ "EGraphPanningMouseButton::Both", (int64)EGraphPanningMouseButton::Both },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Both.DisplayName", "Right or Middle" },
				{ "Middle.DisplayName", "Middle" },
				{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
				{ "Right.DisplayName", "Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GraphEditor,
				nullptr,
				"EGraphPanningMouseButton",
				"EGraphPanningMouseButton",
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
	void UGraphEditorSettings::StaticRegisterNativesUGraphEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UGraphEditorSettings_NoRegister()
	{
		return UGraphEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGraphEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracePositionExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TracePositionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracePositionBonusPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TracePositionBonusPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceReleaseExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceReleaseExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceReleasePeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceReleasePeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceReleaseWireThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceReleaseWireThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceReleaseColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceReleaseColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceSustainHoldPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceSustainHoldPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceSustainWireThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceSustainWireThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceSustainColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceSustainColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDecayExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDecayExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDecayPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDecayPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceAttackHoldPeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceAttackHoldPeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceAttackWireThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceAttackWireThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceAttackColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceAttackColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultExecutionWireThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultExecutionWireThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDataWireThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultDataWireThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCommentNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCommentNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResultNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecSequenceNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecSequenceNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecBranchNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecBranchNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionTerminatorNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionTerminatorNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentFunctionCallNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentFunctionCallNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PureFunctionCallNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PureFunctionCallNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionCallNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunctionCallNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventNodeTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventNodeTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatorPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotatorPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WildcardPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WildcardPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StructPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfacePinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterfacePinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegatePinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DelegatePinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftClassPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoftClassPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoftObjectPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamePinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NamePinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int64PinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Int64PinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClassPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytePinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BytePinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BooleanPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BooleanPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecutionPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPinTypeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultPinTypeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineTangentFromVerticalDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackwardSplineTangentFromVerticalDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackwardSplineTangentFromHorizontalDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineVerticalDeltaRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackwardSplineVerticalDeltaRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardSplineHorizontalDeltaRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackwardSplineHorizontalDeltaRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineTangentFromVerticalDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardSplineTangentFromVerticalDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardSplineTangentFromHorizontalDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineVerticalDeltaRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardSplineVerticalDeltaRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardSplineHorizontalDeltaRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardSplineHorizontalDeltaRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineHoverTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineHoverTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatSplinesLikePins_MetaData[];
#endif
		static void NewProp_bTreatSplinesLikePins_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatSplinesLikePins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingTowardsNodeEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaddingTowardsNodeEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingLeftOfOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaddingLeftOfOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingRightOfInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaddingRightOfInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingBelowPin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaddingBelowPin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingAbovePin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaddingAbovePin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanningMouseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanningMouseButton;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanningMouseButton_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataPinStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataPinStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGraphEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GraphEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GraphEditorSettings.h" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Implements settings for the graph editor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionExponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionExponent = { "TracePositionExponent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TracePositionExponent), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionBonusPeriod_MetaData[] = {
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "How much of a bonus does an exec get for being near the top of the trace stack, and how does that fall off with position?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionBonusPeriod = { "TracePositionBonusPeriod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TracePositionBonusPeriod), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionBonusPeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionBonusPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseExponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseExponent = { "TraceReleaseExponent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceReleaseExponent), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleasePeriod_MetaData[] = {
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "How long does it take to fade from the sustain to the release color" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleasePeriod = { "TraceReleasePeriod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceReleasePeriod), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleasePeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleasePeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseWireThickness_MetaData[] = {
		{ "Category", "Tracing" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The thickness to drop down to during release / for unexecuted wires when debugging" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseWireThickness = { "TraceReleaseWireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceReleaseWireThickness), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseWireThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseWireThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseColor_MetaData[] = {
		{ "Category", "Tracing" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The color to fade to for execution wires on release" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseColor = { "TraceReleaseColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceReleaseColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainHoldPeriod_MetaData[] = {
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "How long is the sustain color fully visible" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainHoldPeriod = { "TraceSustainHoldPeriod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceSustainHoldPeriod), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainHoldPeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainHoldPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainWireThickness_MetaData[] = {
		{ "Category", "Tracing" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainWireThickness = { "TraceSustainWireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceSustainWireThickness), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainWireThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainWireThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainColor_MetaData[] = {
		{ "Category", "Tracing" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainColor = { "TraceSustainColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceSustainColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayExponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayExponent = { "TraceDecayExponent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceDecayExponent), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayPeriod_MetaData[] = {
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "How long does it take to fade from the attack to the sustain color" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayPeriod = { "TraceDecayPeriod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceDecayPeriod), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayPeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackHoldPeriod_MetaData[] = {
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "How long is the attack color fully visible" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackHoldPeriod = { "TraceAttackHoldPeriod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceAttackHoldPeriod), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackHoldPeriod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackHoldPeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackWireThickness_MetaData[] = {
		{ "Category", "Tracing" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackWireThickness = { "TraceAttackWireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceAttackWireThickness), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackWireThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackWireThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackColor_MetaData[] = {
		{ "Category", "Tracing" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The color to display execution wires that were just executed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackColor = { "TraceAttackColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TraceAttackColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultExecutionWireThickness_MetaData[] = {
		{ "Category", "Tracing" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The thickness of an execution wire when not debugging" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultExecutionWireThickness = { "DefaultExecutionWireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, DefaultExecutionWireThickness), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultExecutionWireThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultExecutionWireThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultDataWireThickness_MetaData[] = {
		{ "Category", "Tracing" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The thickness of a data wire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultDataWireThickness = { "DefaultDataWireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, DefaultDataWireThickness), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultDataWireThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultDataWireThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PreviewNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Preview node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PreviewNodeTitleColor = { "PreviewNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, PreviewNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PreviewNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PreviewNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultCommentNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Default Comment node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultCommentNodeTitleColor = { "DefaultCommentNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, DefaultCommentNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultCommentNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultCommentNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ResultNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Result node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ResultNodeTitleColor = { "ResultNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ResultNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ResultNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ResultNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecSequenceNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Exec Sequence node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecSequenceNodeTitleColor = { "ExecSequenceNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ExecSequenceNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecSequenceNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecSequenceNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecBranchNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Exec Branch node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecBranchNodeTitleColor = { "ExecBranchNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ExecBranchNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecBranchNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecBranchNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionTerminatorNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Function Terminator node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionTerminatorNodeTitleColor = { "FunctionTerminatorNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, FunctionTerminatorNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionTerminatorNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionTerminatorNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ParentFunctionCallNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Parent class function call node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ParentFunctionCallNodeTitleColor = { "ParentFunctionCallNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ParentFunctionCallNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ParentFunctionCallNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ParentFunctionCallNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PureFunctionCallNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Pure function call node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PureFunctionCallNodeTitleColor = { "PureFunctionCallNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, PureFunctionCallNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PureFunctionCallNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PureFunctionCallNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionCallNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "CallFunction node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionCallNodeTitleColor = { "FunctionCallNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, FunctionCallNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionCallNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionCallNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_EventNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Event node title color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_EventNodeTitleColor = { "EventNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, EventNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_EventNodeTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_EventNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IndexPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Index pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IndexPinTypeColor = { "IndexPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, IndexPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IndexPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IndexPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TransformPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Transform pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TransformPinTypeColor = { "TransformPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TransformPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TransformPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TransformPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_RotatorPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Rotator pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_RotatorPinTypeColor = { "RotatorPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, RotatorPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_RotatorPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_RotatorPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_VectorPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Vector pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_VectorPinTypeColor = { "VectorPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, VectorPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_VectorPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_VectorPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_WildcardPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Wildcard pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_WildcardPinTypeColor = { "WildcardPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, WildcardPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_WildcardPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_WildcardPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StructPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Struct pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StructPinTypeColor = { "StructPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, StructPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StructPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StructPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TextPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Text pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TextPinTypeColor = { "TextPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, TextPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TextPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TextPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StringPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "String pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StringPinTypeColor = { "StringPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, StringPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StringPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StringPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_InterfacePinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Interface pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_InterfacePinTypeColor = { "InterfacePinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, InterfacePinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_InterfacePinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_InterfacePinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ObjectPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Object pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ObjectPinTypeColor = { "ObjectPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ObjectPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ObjectPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ObjectPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DelegatePinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Delegate pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DelegatePinTypeColor = { "DelegatePinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, DelegatePinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DelegatePinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DelegatePinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftClassPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Asset Class pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftClassPinTypeColor = { "SoftClassPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, SoftClassPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftClassPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftClassPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftObjectPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Asset pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftObjectPinTypeColor = { "SoftObjectPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, SoftObjectPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftObjectPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftObjectPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_NamePinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Name pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_NamePinTypeColor = { "NamePinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, NamePinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_NamePinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_NamePinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FloatPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Floating-point pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FloatPinTypeColor = { "FloatPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, FloatPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FloatPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FloatPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_Int64PinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Integer64 pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_Int64PinTypeColor = { "Int64PinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, Int64PinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_Int64PinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_Int64PinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IntPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Integer pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IntPinTypeColor = { "IntPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, IntPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IntPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IntPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ClassPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Class pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ClassPinTypeColor = { "ClassPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ClassPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ClassPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ClassPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BytePinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Byte pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BytePinTypeColor = { "BytePinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, BytePinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BytePinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BytePinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BooleanPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Boolean pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BooleanPinTypeColor = { "BooleanPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, BooleanPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BooleanPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BooleanPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecutionPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Execution pin type color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecutionPinTypeColor = { "ExecutionPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ExecutionPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecutionPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecutionPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The default color is used only for types not specifically defined below.  Generally if it's seen, it means another type needs to be defined so that the wire in question can have an appropriate color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultPinTypeColor = { "DefaultPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, DefaultPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultPinTypeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta_MetaData[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The amount that the vertical delta affects the generated tangent handle of splines (when the wire is moving backwards)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta = { "BackwardSplineTangentFromVerticalDelta", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, BackwardSplineTangentFromVerticalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The amount that the horizontal delta affects the generated tangent handle of splines (when the wire is moving backwards)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta = { "BackwardSplineTangentFromHorizontalDelta", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, BackwardSplineTangentFromHorizontalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineVerticalDeltaRange_MetaData[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The maximum value to clamp the absolute value of the vertical distance between endpoints when calculating tangents (when the wire is moving backwards)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineVerticalDeltaRange = { "BackwardSplineVerticalDeltaRange", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, BackwardSplineVerticalDeltaRange), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineVerticalDeltaRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineVerticalDeltaRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineHorizontalDeltaRange_MetaData[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The maximum value to clamp the absolute value of the horizontal distance between endpoints when calculating tangents (when the wire is moving backwards)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineHorizontalDeltaRange = { "BackwardSplineHorizontalDeltaRange", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, BackwardSplineHorizontalDeltaRange), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineHorizontalDeltaRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineHorizontalDeltaRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta_MetaData[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The amount that the vertical delta affects the generated tangent handle of splines (when the wire is moving forward)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta = { "ForwardSplineTangentFromVerticalDelta", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ForwardSplineTangentFromVerticalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The amount that the horizontal delta affects the generated tangent handle of splines (when the wire is moving forward)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta = { "ForwardSplineTangentFromHorizontalDelta", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ForwardSplineTangentFromHorizontalDelta), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineVerticalDeltaRange_MetaData[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The maximum value to clamp the absolute value of the vertical distance between endpoints when calculating tangents (when the wire is moving forward)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineVerticalDeltaRange = { "ForwardSplineVerticalDeltaRange", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ForwardSplineVerticalDeltaRange), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineVerticalDeltaRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineVerticalDeltaRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineHorizontalDeltaRange_MetaData[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The maximum value to clamp the absolute value of the horizontal distance between endpoints when calculating tangents (when the wire is moving forward)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineHorizontalDeltaRange = { "ForwardSplineHorizontalDeltaRange", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, ForwardSplineHorizontalDeltaRange), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineHorizontalDeltaRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineHorizontalDeltaRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SplineHoverTolerance_MetaData[] = {
		{ "Category", "Splines" },
		{ "EditCondition", "bTreatSplinesLikePins" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The distance threshold controlling how close the mouse has to be to the spline in order to trigger a hover response" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SplineHoverTolerance = { "SplineHoverTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, SplineHoverTolerance), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SplineHoverTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SplineHoverTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_bTreatSplinesLikePins_MetaData[] = {
		{ "Category", "Splines" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "If enabled, allows splines to be Alt+Clicked to break them or Ctrl+Dragged to move them as if these actions were taking place on the associated pin." },
	};
#endif
	void Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_bTreatSplinesLikePins_SetBit(void* Obj)
	{
		((UGraphEditorSettings*)Obj)->bTreatSplinesLikePins = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_bTreatSplinesLikePins = { "bTreatSplinesLikePins", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGraphEditorSettings), &Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_bTreatSplinesLikePins_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_bTreatSplinesLikePins_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_bTreatSplinesLikePins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingTowardsNodeEdge_MetaData[] = {
		{ "Category", "GeneralStyle" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The amount of padding towards the node edge (defaults to 10, can be negative to make pins overlap or stick out of a node" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingTowardsNodeEdge = { "PaddingTowardsNodeEdge", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, PaddingTowardsNodeEdge), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingTowardsNodeEdge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingTowardsNodeEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingLeftOfOutput_MetaData[] = {
		{ "Category", "GeneralStyle" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The amount of horizontal padding towards the center of a node on an output pin (defaults to 10)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingLeftOfOutput = { "PaddingLeftOfOutput", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, PaddingLeftOfOutput), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingLeftOfOutput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingLeftOfOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingRightOfInput_MetaData[] = {
		{ "Category", "GeneralStyle" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The amount of horizontal padding towards the center of a node on an input pin (defaults to 10)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingRightOfInput = { "PaddingRightOfInput", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, PaddingRightOfInput), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingRightOfInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingRightOfInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingBelowPin_MetaData[] = {
		{ "Category", "GeneralStyle" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The amount of padding below a pin (defaults to 4)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingBelowPin = { "PaddingBelowPin", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, PaddingBelowPin), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingBelowPin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingBelowPin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingAbovePin_MetaData[] = {
		{ "Category", "GeneralStyle" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The amount of padding above a pin (defaults to 4)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingAbovePin = { "PaddingAbovePin", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, PaddingAbovePin), METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingAbovePin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingAbovePin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PanningMouseButton_MetaData[] = {
		{ "Category", "GeneralStyle" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "Switch between using the right and middle mouse button for panning (defaults to right)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PanningMouseButton = { "PanningMouseButton", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, PanningMouseButton), Z_Construct_UEnum_GraphEditor_EGraphPanningMouseButton, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PanningMouseButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PanningMouseButton_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PanningMouseButton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DataPinStyle_MetaData[] = {
		{ "Category", "GeneralStyle" },
		{ "ModuleRelativePath", "Public/GraphEditorSettings.h" },
		{ "ToolTip", "The visual styling to use for graph editor pins (in Blueprints, materials, etc...)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DataPinStyle = { "DataPinStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGraphEditorSettings, DataPinStyle), Z_Construct_UEnum_Engine_EBlueprintPinStyleType, METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DataPinStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DataPinStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGraphEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TracePositionBonusPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleasePeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseWireThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceReleaseColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainHoldPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainWireThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceSustainColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceDecayPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackHoldPeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackWireThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TraceAttackColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultExecutionWireThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultDataWireThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PreviewNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultCommentNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ResultNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecSequenceNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecBranchNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionTerminatorNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ParentFunctionCallNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PureFunctionCallNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FunctionCallNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_EventNodeTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IndexPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TransformPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_RotatorPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_VectorPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_WildcardPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StructPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_TextPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_StringPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_InterfacePinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ObjectPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DelegatePinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftClassPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SoftObjectPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_NamePinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_FloatPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_Int64PinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_IntPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ClassPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BytePinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BooleanPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ExecutionPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DefaultPinTypeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromVerticalDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineTangentFromHorizontalDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineVerticalDeltaRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_BackwardSplineHorizontalDeltaRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromVerticalDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineTangentFromHorizontalDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineVerticalDeltaRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_ForwardSplineHorizontalDeltaRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_SplineHoverTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_bTreatSplinesLikePins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingTowardsNodeEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingLeftOfOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingRightOfInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingBelowPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PaddingAbovePin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PanningMouseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_PanningMouseButton_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGraphEditorSettings_Statics::NewProp_DataPinStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGraphEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGraphEditorSettings_Statics::ClassParams = {
		&UGraphEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGraphEditorSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGraphEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGraphEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGraphEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGraphEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGraphEditorSettings, 3186188668);
	template<> GRAPHEDITOR_API UClass* StaticClass<UGraphEditorSettings>()
	{
		return UGraphEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGraphEditorSettings(Z_Construct_UClass_UGraphEditorSettings, &UGraphEditorSettings::StaticClass, TEXT("/Script/GraphEditor"), TEXT("UGraphEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
