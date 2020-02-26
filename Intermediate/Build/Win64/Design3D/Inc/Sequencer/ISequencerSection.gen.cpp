// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/Public/ISequencerSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISequencerSection() {}
// Cross Module References
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	static UEnum* ESequencerSectionResizeMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode, Z_Construct_UPackage__Script_Sequencer(), TEXT("ESequencerSectionResizeMode"));
		}
		return Singleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<ESequencerSectionResizeMode>()
	{
		return ESequencerSectionResizeMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESequencerSectionResizeMode(ESequencerSectionResizeMode_StaticEnum, TEXT("/Script/Sequencer"), TEXT("ESequencerSectionResizeMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Hash() { return 2985477714U; }
	UEnum* Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sequencer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESequencerSectionResizeMode"), 0, Get_Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SSRM_LeadingEdge", (int64)SSRM_LeadingEdge },
				{ "SSRM_TrailingEdge", (int64)SSRM_TrailingEdge },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ISequencerSection.h" },
				{ "ToolTip", "Enumerates which edge is being resized" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
				nullptr,
				"ESequencerSectionResizeMode",
				"ESequencerSectionResizeMode",
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
