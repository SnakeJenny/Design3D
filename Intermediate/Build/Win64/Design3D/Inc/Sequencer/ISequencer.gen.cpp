// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/Public/ISequencer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISequencer() {}
// Cross Module References
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EKeyGroupMode();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EAllowEditsMode();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EAutoChangeMode();
// End Cross Module References
	static UEnum* EKeyGroupMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_EKeyGroupMode, Z_Construct_UPackage__Script_Sequencer(), TEXT("EKeyGroupMode"));
		}
		return Singleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<EKeyGroupMode>()
	{
		return EKeyGroupMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKeyGroupMode(EKeyGroupMode_StaticEnum, TEXT("/Script/Sequencer"), TEXT("EKeyGroupMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sequencer_EKeyGroupMode_Hash() { return 600026302U; }
	UEnum* Z_Construct_UEnum_Sequencer_EKeyGroupMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sequencer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKeyGroupMode"), 0, Get_Z_Construct_UEnum_Sequencer_EKeyGroupMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKeyGroupMode::KeyChanged", (int64)EKeyGroupMode::KeyChanged },
				{ "EKeyGroupMode::KeyGroup", (int64)EKeyGroupMode::KeyGroup },
				{ "EKeyGroupMode::KeyAll", (int64)EKeyGroupMode::KeyAll },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "KeyAll.ToolTip", "Key All (translation, rotation, scale) when one changes" },
				{ "KeyChanged.ToolTip", "Key just changed channel" },
				{ "KeyGroup.ToolTip", "Key just one, the parent translation, rotation or scale, when one changes" },
				{ "ModuleRelativePath", "Public/ISequencer.h" },
				{ "ToolTip", "Defines set key gruops mode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
				nullptr,
				"EKeyGroupMode",
				"EKeyGroupMode",
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
	static UEnum* EAllowEditsMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_EAllowEditsMode, Z_Construct_UPackage__Script_Sequencer(), TEXT("EAllowEditsMode"));
		}
		return Singleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<EAllowEditsMode>()
	{
		return EAllowEditsMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAllowEditsMode(EAllowEditsMode_StaticEnum, TEXT("/Script/Sequencer"), TEXT("EAllowEditsMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sequencer_EAllowEditsMode_Hash() { return 1800485117U; }
	UEnum* Z_Construct_UEnum_Sequencer_EAllowEditsMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sequencer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAllowEditsMode"), 0, Get_Z_Construct_UEnum_Sequencer_EAllowEditsMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAllowEditsMode::AllEdits", (int64)EAllowEditsMode::AllEdits },
				{ "EAllowEditsMode::AllowSequencerEditsOnly", (int64)EAllowEditsMode::AllowSequencerEditsOnly },
				{ "EAllowEditsMode::AllowLevelEditsOnly", (int64)EAllowEditsMode::AllowLevelEditsOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllEdits.ToolTip", "Allow all edits." },
				{ "AllowLevelEditsOnly.ToolTip", "Allow edits to go to level only" },
				{ "AllowSequencerEditsOnly.ToolTip", "Allow edits to go to sequencer only." },
				{ "ModuleRelativePath", "Public/ISequencer.h" },
				{ "ToolTip", "Defines allow edits mode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
				nullptr,
				"EAllowEditsMode",
				"EAllowEditsMode",
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
	static UEnum* EAutoChangeMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_EAutoChangeMode, Z_Construct_UPackage__Script_Sequencer(), TEXT("EAutoChangeMode"));
		}
		return Singleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<EAutoChangeMode>()
	{
		return EAutoChangeMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoChangeMode(EAutoChangeMode_StaticEnum, TEXT("/Script/Sequencer"), TEXT("EAutoChangeMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sequencer_EAutoChangeMode_Hash() { return 1647928492U; }
	UEnum* Z_Construct_UEnum_Sequencer_EAutoChangeMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sequencer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoChangeMode"), 0, Get_Z_Construct_UEnum_Sequencer_EAutoChangeMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutoChangeMode::AutoKey", (int64)EAutoChangeMode::AutoKey },
				{ "EAutoChangeMode::AutoTrack", (int64)EAutoChangeMode::AutoTrack },
				{ "EAutoChangeMode::All", (int64)EAutoChangeMode::All },
				{ "EAutoChangeMode::None", (int64)EAutoChangeMode::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.ToolTip", "Create a key and a track when a property changes." },
				{ "AutoKey.ToolTip", "Create a key when a property changes." },
				{ "AutoTrack.ToolTip", "Create a track when a property changes." },
				{ "ModuleRelativePath", "Public/ISequencer.h" },
				{ "None.ToolTip", "Do nothing" },
				{ "ToolTip", "Defines auto change modes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
				nullptr,
				"EAutoChangeMode",
				"EAutoChangeMode",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
