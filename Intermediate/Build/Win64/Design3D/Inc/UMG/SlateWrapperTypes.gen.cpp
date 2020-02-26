// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/SlateWrapperTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWrapperTypes() {}
// Cross Module References
	UMG_API UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateSizeRule();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
// End Cross Module References
	static UEnum* EVirtualKeyboardType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EVirtualKeyboardType, Z_Construct_UPackage__Script_UMG(), TEXT("EVirtualKeyboardType"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<EVirtualKeyboardType::Type>()
	{
		return EVirtualKeyboardType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVirtualKeyboardType(EVirtualKeyboardType_StaticEnum, TEXT("/Script/UMG"), TEXT("EVirtualKeyboardType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EVirtualKeyboardType_Hash() { return 3841656045U; }
	UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVirtualKeyboardType"), 0, Get_Z_Construct_UEnum_UMG_EVirtualKeyboardType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVirtualKeyboardType::Default", (int64)EVirtualKeyboardType::Default },
				{ "EVirtualKeyboardType::Number", (int64)EVirtualKeyboardType::Number },
				{ "EVirtualKeyboardType::Web", (int64)EVirtualKeyboardType::Web },
				{ "EVirtualKeyboardType::Email", (int64)EVirtualKeyboardType::Email },
				{ "EVirtualKeyboardType::Password", (int64)EVirtualKeyboardType::Password },
				{ "EVirtualKeyboardType::AlphaNumeric", (int64)EVirtualKeyboardType::AlphaNumeric },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"EVirtualKeyboardType",
				"EVirtualKeyboardType::Type",
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
	static UEnum* ESlateSizeRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_ESlateSizeRule, Z_Construct_UPackage__Script_UMG(), TEXT("ESlateSizeRule"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<ESlateSizeRule::Type>()
	{
		return ESlateSizeRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateSizeRule(ESlateSizeRule_StaticEnum, TEXT("/Script/UMG"), TEXT("ESlateSizeRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_ESlateSizeRule_Hash() { return 3836284703U; }
	UEnum* Z_Construct_UEnum_UMG_ESlateSizeRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateSizeRule"), 0, Get_Z_Construct_UEnum_UMG_ESlateSizeRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateSizeRule::Automatic", (int64)ESlateSizeRule::Automatic },
				{ "ESlateSizeRule::Fill", (int64)ESlateSizeRule::Fill },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Automatic.ToolTip", "Only requests as much room as it needs based on the widgets desired size." },
				{ "BlueprintType", "true" },
				{ "Fill.ToolTip", "Greedily attempts to fill all available room based on the percentage value 0..1" },
				{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
				{ "ToolTip", "The sizing options of UWidgets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"ESlateSizeRule",
				"ESlateSizeRule::Type",
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
	static UEnum* ESlateVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_ESlateVisibility, Z_Construct_UPackage__Script_UMG(), TEXT("ESlateVisibility"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<ESlateVisibility>()
	{
		return ESlateVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateVisibility(ESlateVisibility_StaticEnum, TEXT("/Script/UMG"), TEXT("ESlateVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_ESlateVisibility_Hash() { return 2646288487U; }
	UEnum* Z_Construct_UEnum_UMG_ESlateVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateVisibility"), 0, Get_Z_Construct_UEnum_UMG_ESlateVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateVisibility::Visible", (int64)ESlateVisibility::Visible },
				{ "ESlateVisibility::Collapsed", (int64)ESlateVisibility::Collapsed },
				{ "ESlateVisibility::Hidden", (int64)ESlateVisibility::Hidden },
				{ "ESlateVisibility::HitTestInvisible", (int64)ESlateVisibility::HitTestInvisible },
				{ "ESlateVisibility::SelfHitTestInvisible", (int64)ESlateVisibility::SelfHitTestInvisible },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Collapsed.ToolTip", "Not visible and takes up no space in the layout; can never be clicked on because it takes up no space." },
				{ "Hidden.ToolTip", "Not visible, but occupies layout space. Not interactive for obvious reasons." },
				{ "HitTestInvisible.ToolTip", "Visible to the user, but only as art. The cursors hit tests will never see this widget." },
				{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
				{ "SelfHitTestInvisible.ToolTip", "Same as HitTestInvisible, but doesn't apply to child widgets." },
				{ "ToolTip", "Is an entity visible?" },
				{ "Visible.ToolTip", "Default widget visibility - visible and can interact with the cursor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"ESlateVisibility",
				"ESlateVisibility",
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
class UScriptStruct* FSlateChildSize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateChildSize, Z_Construct_UPackage__Script_UMG(), TEXT("SlateChildSize"), sizeof(FSlateChildSize), Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FSlateChildSize>()
{
	return FSlateChildSize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlateChildSize(FSlateChildSize::StaticStruct, TEXT("/Script/UMG"), TEXT("SlateChildSize"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFSlateChildSize
{
	FScriptStruct_UMG_StaticRegisterNativesFSlateChildSize()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlateChildSize")),new UScriptStruct::TCppStructOps<FSlateChildSize>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFSlateChildSize;
	struct Z_Construct_UScriptStruct_FSlateChildSize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SizeRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateChildSize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "A struct exposing size param related properties to UMG." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateChildSize>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "The sizing rule of the content." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule = { "SizeRule", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateChildSize, SizeRule), Z_Construct_UEnum_UMG_ESlateSizeRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "The parameter of the size rule." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlateChildSize, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateChildSize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"SlateChildSize",
		sizeof(FSlateChildSize),
		alignof(FSlateChildSize),
		Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateChildSize_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlateChildSize"), sizeof(FSlateChildSize), Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlateChildSize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlateChildSize_Hash() { return 2563906277U; }
class UScriptStruct* FEventReply::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FEventReply_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventReply, Z_Construct_UPackage__Script_UMG(), TEXT("EventReply"), sizeof(FEventReply), Get_Z_Construct_UScriptStruct_FEventReply_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FEventReply>()
{
	return FEventReply::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventReply(FEventReply::StaticStruct, TEXT("/Script/UMG"), TEXT("EventReply"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFEventReply
{
	FScriptStruct_UMG_StaticRegisterNativesFEventReply()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventReply")),new UScriptStruct::TCppStructOps<FEventReply>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFEventReply;
	struct Z_Construct_UScriptStruct_FEventReply_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventReply_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "Allows users to handle events and return information to the underlying UI layer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventReply>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"EventReply",
		sizeof(FEventReply),
		alignof(FEventReply),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventReply_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventReply()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventReply_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventReply"), sizeof(FEventReply), Get_Z_Construct_UScriptStruct_FEventReply_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventReply_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventReply_Hash() { return 4214286378U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
