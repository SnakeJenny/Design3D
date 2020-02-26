// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Commands/UICommandInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUICommandInfo() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static UEnum* EMultipleKeyBindingIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex, Z_Construct_UPackage__Script_Slate(), TEXT("EMultipleKeyBindingIndex"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EMultipleKeyBindingIndex>()
	{
		return EMultipleKeyBindingIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMultipleKeyBindingIndex(EMultipleKeyBindingIndex_StaticEnum, TEXT("/Script/Slate"), TEXT("EMultipleKeyBindingIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Hash() { return 556730312U; }
	UEnum* Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMultipleKeyBindingIndex"), 0, Get_Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMultipleKeyBindingIndex::Primary", (int64)EMultipleKeyBindingIndex::Primary },
				{ "EMultipleKeyBindingIndex::Secondary", (int64)EMultipleKeyBindingIndex::Secondary },
				{ "EMultipleKeyBindingIndex::NumChords", (int64)EMultipleKeyBindingIndex::NumChords },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Framework/Commands/UICommandInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EMultipleKeyBindingIndex",
				"EMultipleKeyBindingIndex",
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
