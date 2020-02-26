// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/EdGraph/EdGraphNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENodeEnabledState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENodeAdvancedPins();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENodeTitleType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinContainerType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
// End Cross Module References
	static UEnum* ENodeEnabledState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENodeEnabledState, Z_Construct_UPackage__Script_Engine(), TEXT("ENodeEnabledState"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENodeEnabledState>()
	{
		return ENodeEnabledState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENodeEnabledState(ENodeEnabledState_StaticEnum, TEXT("/Script/Engine"), TEXT("ENodeEnabledState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENodeEnabledState_Hash() { return 145654842U; }
	UEnum* Z_Construct_UEnum_Engine_ENodeEnabledState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENodeEnabledState"), 0, Get_Z_Construct_UEnum_Engine_ENodeEnabledState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENodeEnabledState::Enabled", (int64)ENodeEnabledState::Enabled },
				{ "ENodeEnabledState::Disabled", (int64)ENodeEnabledState::Disabled },
				{ "ENodeEnabledState::DevelopmentOnly", (int64)ENodeEnabledState::DevelopmentOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DevelopmentOnly.ToolTip", "Node is enabled for development only." },
				{ "Disabled.ToolTip", "Node is disabled." },
				{ "Enabled.ToolTip", "Node is enabled." },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Enum to indicate a node's enabled state." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENodeEnabledState",
				"ENodeEnabledState",
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
	static UEnum* ENodeAdvancedPins_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENodeAdvancedPins, Z_Construct_UPackage__Script_Engine(), TEXT("ENodeAdvancedPins"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENodeAdvancedPins::Type>()
	{
		return ENodeAdvancedPins_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENodeAdvancedPins(ENodeAdvancedPins_StaticEnum, TEXT("/Script/Engine"), TEXT("ENodeAdvancedPins"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENodeAdvancedPins_Hash() { return 3767705774U; }
	UEnum* Z_Construct_UEnum_Engine_ENodeAdvancedPins()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENodeAdvancedPins"), 0, Get_Z_Construct_UEnum_Engine_ENodeAdvancedPins_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENodeAdvancedPins::NoPins", (int64)ENodeAdvancedPins::NoPins },
				{ "ENodeAdvancedPins::Shown", (int64)ENodeAdvancedPins::Shown },
				{ "ENodeAdvancedPins::Hidden", (int64)ENodeAdvancedPins::Hidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Hidden.ToolTip", "There are some advanced pins, and they are hidden." },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "NoPins.ToolTip", "No advanced pins." },
				{ "Shown.ToolTip", "There are some advanced pins, and they are shown." },
				{ "ToolTip", "Enum to indicate if a node has advanced-display-pins, and whether they are shown." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENodeAdvancedPins",
				"ENodeAdvancedPins::Type",
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
	static UEnum* ENodeTitleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENodeTitleType, Z_Construct_UPackage__Script_Engine(), TEXT("ENodeTitleType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENodeTitleType::Type>()
	{
		return ENodeTitleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENodeTitleType(ENodeTitleType_StaticEnum, TEXT("/Script/Engine"), TEXT("ENodeTitleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENodeTitleType_Hash() { return 614842380U; }
	UEnum* Z_Construct_UEnum_Engine_ENodeTitleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENodeTitleType"), 0, Get_Z_Construct_UEnum_Engine_ENodeTitleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENodeTitleType::FullTitle", (int64)ENodeTitleType::FullTitle },
				{ "ENodeTitleType::ListView", (int64)ENodeTitleType::ListView },
				{ "ENodeTitleType::EditableTitle", (int64)ENodeTitleType::EditableTitle },
				{ "ENodeTitleType::MenuTitle", (int64)ENodeTitleType::MenuTitle },
				{ "ENodeTitleType::MAX_TitleTypes", (int64)ENodeTitleType::MAX_TitleTypes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EditableTitle.ToolTip", "Returns the editable title (which might not be a title at all)." },
				{ "FullTitle.ToolTip", "The full title, may be multiple lines." },
				{ "ListView.ToolTip", "More concise, single line title." },
				{ "MenuTitle.ToolTip", "Menu Title for context menus to be displayed in context menus referencing the node." },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Enum to indicate what sort of title we want." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ENodeTitleType",
				"ENodeTitleType::Type",
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
	static UEnum* EPinContainerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPinContainerType, Z_Construct_UPackage__Script_Engine(), TEXT("EPinContainerType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPinContainerType>()
	{
		return EPinContainerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPinContainerType(EPinContainerType_StaticEnum, TEXT("/Script/Engine"), TEXT("EPinContainerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPinContainerType_Hash() { return 2922365946U; }
	UEnum* Z_Construct_UEnum_Engine_EPinContainerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPinContainerType"), 0, Get_Z_Construct_UEnum_Engine_EPinContainerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPinContainerType::None", (int64)EPinContainerType::None },
				{ "EPinContainerType::Array", (int64)EPinContainerType::Array },
				{ "EPinContainerType::Set", (int64)EPinContainerType::Set },
				{ "EPinContainerType::Map", (int64)EPinContainerType::Map },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Enum used to define what container type a pin represents." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EPinContainerType",
				"EPinContainerType",
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
	static UEnum* EEdGraphPinDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEdGraphPinDirection, Z_Construct_UPackage__Script_Engine(), TEXT("EEdGraphPinDirection"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEdGraphPinDirection>()
	{
		return EEdGraphPinDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEdGraphPinDirection(EEdGraphPinDirection_StaticEnum, TEXT("/Script/Engine"), TEXT("EEdGraphPinDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEdGraphPinDirection_Hash() { return 2319662459U; }
	UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEdGraphPinDirection"), 0, Get_Z_Construct_UEnum_Engine_EEdGraphPinDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGPD_Input", (int64)EGPD_Input },
				{ "EGPD_Output", (int64)EGPD_Output },
				{ "EGPD_MAX", (int64)EGPD_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
				{ "ToolTip", "Enum used to define which way data flows into or out of this pin." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EEdGraphPinDirection",
				"EEdGraphPinDirection",
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
class UScriptStruct* FEdGraphTerminalType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphTerminalType, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphTerminalType"), sizeof(FEdGraphTerminalType), Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphTerminalType>()
{
	return FEdGraphTerminalType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphTerminalType(FEdGraphTerminalType::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphTerminalType"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphTerminalType
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphTerminalType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphTerminalType")),new UScriptStruct::TCppStructOps<FEdGraphTerminalType>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphTerminalType;
	struct Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTerminalIsWeakPointer_MetaData[];
#endif
		static void NewProp_bTerminalIsWeakPointer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTerminalIsWeakPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTerminalIsConst_MetaData[];
#endif
		static void NewProp_bTerminalIsConst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTerminalIsConst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminalSubCategoryObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TerminalSubCategoryObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminalSubCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TerminalSubCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminalCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TerminalCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Struct used to define information for terminal types, e.g. types that can be contained\nby a container. Currently can represent strong/weak references to a type (only UObjects),\na structure, or a primitive. Support for \"Container of Containers\" is done by wrapping\na structure, rather than implicitly defining names for containers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphTerminalType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Whether or not this is a weak reference" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer_SetBit(void* Obj)
	{
		((FEdGraphTerminalType*)Obj)->bTerminalIsWeakPointer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer = { "bTerminalIsWeakPointer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEdGraphTerminalType), &Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Whether or not this pin is a immutable const value" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst_SetBit(void* Obj)
	{
		((FEdGraphTerminalType*)Obj)->bTerminalIsConst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst = { "bTerminalIsConst", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEdGraphTerminalType), &Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategoryObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Sub-category object" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategoryObject = { "TerminalSubCategoryObject", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphTerminalType, TerminalSubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategoryObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategoryObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategory_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Sub-category" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategory = { "TerminalSubCategory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphTerminalType, TerminalSubCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalCategory_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Category" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalCategory = { "TerminalCategory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphTerminalType, TerminalCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsWeakPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_bTerminalIsConst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategoryObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalSubCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::NewProp_TerminalCategory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EdGraphTerminalType",
		sizeof(FEdGraphTerminalType),
		alignof(FEdGraphTerminalType),
		Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphTerminalType"), sizeof(FEdGraphTerminalType), Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphTerminalType_Hash() { return 117361815U; }
	void UEdGraphNode::StaticRegisterNativesUEdGraphNode()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphNode_NoRegister()
	{
		return UEdGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeComment;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeUpgradeMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NodeUpgradeMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRenameNode_MetaData[];
#endif
		static void NewProp_bCanRenameNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRenameNode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleMakeVisible_MetaData[];
#endif
		static void NewProp_bCommentBubbleMakeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleMakeVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_MetaData[];
#endif
		static void NewProp_bCommentBubbleVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommentBubblePinned_MetaData[];
#endif
		static void NewProp_bCommentBubblePinned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommentBubblePinned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCompilerMessage_MetaData[];
#endif
		static void NewProp_bHasCompilerMessage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCompilerMessage;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanResizeNode_MetaData[];
#endif
		static void NewProp_bCanResizeNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanResizeNode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNodeEnabled_MetaData[];
#endif
		static void NewProp_bIsNodeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNodeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUserSetEnabledState_MetaData[];
#endif
		static void NewProp_bUserSetEnabledState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUserSetEnabledState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayAsDisabled_MetaData[];
#endif
		static void NewProp_bDisplayAsDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayAsDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnabledState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnabledState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnabledState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedPinDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdvancedPinDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodePosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodePosY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodePosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodePosX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeprecatedPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeprecatedPins;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeprecatedPins_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphNode.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "GUID to uniquely identify this node, to facilitate diffing versions of this graph" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Error/Warning description" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, ErrorMsg), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorMsg_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Flag to store node specific compile error/warning" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, ErrorType), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeComment_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Comment string that is drawn on the node" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeComment = { "NodeComment", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, NodeComment), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeComment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeComment_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeUpgradeMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Note for a node that lingers until saved" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeUpgradeMessage = { "NodeUpgradeMessage", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, NodeUpgradeMessage), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeUpgradeMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeUpgradeMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "If true, this node can be renamed in the editor" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode_SetBit(void* Obj)
	{
		((UEdGraphNode*)Obj)->bCanRenameNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode = { "bCanRenameNode", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Make comment bubble visible" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible_SetBit(void* Obj)
	{
		((UEdGraphNode*)Obj)->bCommentBubbleMakeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible = { "bCommentBubbleMakeVisible", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Comment bubble visibility" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible_SetBit(void* Obj)
	{
		((UEdGraphNode*)Obj)->bCommentBubbleVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible = { "bCommentBubbleVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Comment bubble pinned state" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned_SetBit(void* Obj)
	{
		((UEdGraphNode*)Obj)->bCommentBubblePinned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned = { "bCommentBubblePinned", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Flag to check for compile error/warning" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage_SetBit(void* Obj)
	{
		((UEdGraphNode*)Obj)->bHasCompilerMessage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage = { "bHasCompilerMessage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "If true, this node can be resized and should be drawn with a resize handle" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode_SetBit(void* Obj)
	{
		((UEdGraphNode*)Obj)->bCanResizeNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode = { "bCanResizeNode", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "(DEPRECATED) FALSE if the node is a disabled, which eliminates it from being compiled" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled_SetBit(void* Obj)
	{
		((UEdGraphNode*)Obj)->bIsNodeEnabled_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled = { "bIsNodeEnabled", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Indicates whether or not the user explicitly set the enabled state" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState_SetBit(void* Obj)
	{
		((UEdGraphNode*)Obj)->bUserSetEnabledState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState = { "bUserSetEnabledState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled_SetBit(void* Obj)
	{
		((UEdGraphNode*)Obj)->bDisplayAsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled = { "bDisplayAsDisabled", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphNode), &Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Indicates in what state the node is enabled, which may eliminate it from being compiled" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState = { "EnabledState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, EnabledState), Z_Construct_UEnum_Engine_ENodeEnabledState, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_AdvancedPinDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Enum to indicate if a node has advanced-display-pins, and if they are shown" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_AdvancedPinDisplay = { "AdvancedPinDisplay", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, AdvancedPinDisplay), Z_Construct_UEnum_Engine_ENodeAdvancedPins, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_AdvancedPinDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_AdvancedPinDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Height of node in the editor; only used when the node can be resized" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeHeight = { "NodeHeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, NodeHeight), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Width of node in the editor; only used when the node can be resized" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeWidth = { "NodeWidth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, NodeWidth), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "Y position of node in the editor" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosY = { "NodePosY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, NodePosY), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "X position of node in the editor" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosX = { "NodePosX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, NodePosX), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphNode.h" },
		{ "ToolTip", "List of connector pins" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins = { "DeprecatedPins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphNode, DeprecatedPins), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins_Inner = { "DeprecatedPins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeComment,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeUpgradeMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanRenameNode,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleMakeVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubbleVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCommentBubblePinned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bHasCompilerMessage,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bCanResizeNode,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bIsNodeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bUserSetEnabledState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_bDisplayAsDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_EnabledState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_AdvancedPinDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodeWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_NodePosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Statics::NewProp_DeprecatedPins_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_Statics::ClassParams = {
		&UEdGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraphNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphNode, 1585051380);
	template<> ENGINE_API UClass* StaticClass<UEdGraphNode>()
	{
		return UEdGraphNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphNode(Z_Construct_UClass_UEdGraphNode, &UEdGraphNode::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraphNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEdGraphNode)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
