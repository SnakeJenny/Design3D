// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node() {}
// Cross Module References
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
// End Cross Module References
class UScriptStruct* FOptionalPinFromProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FOptionalPinFromProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptionalPinFromProperty, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("OptionalPinFromProperty"), sizeof(FOptionalPinFromProperty), Get_Z_Construct_UScriptStruct_FOptionalPinFromProperty_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FOptionalPinFromProperty>()
{
	return FOptionalPinFromProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOptionalPinFromProperty(FOptionalPinFromProperty::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("OptionalPinFromProperty"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFOptionalPinFromProperty
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFOptionalPinFromProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OptionalPinFromProperty")),new UScriptStruct::TCppStructOps<FOptionalPinFromProperty>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFOptionalPinFromProperty;
	struct Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOverridePinVisible_MetaData[];
#endif
		static void NewProp_bIsOverridePinVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOverridePinVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSetValuePinVisible_MetaData[];
#endif
		static void NewProp_bIsSetValuePinVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSetValuePinVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOverrideEnabled_MetaData[];
#endif
		static void NewProp_bIsOverrideEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOverrideEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMarkedForAdvancedDisplay_MetaData[];
#endif
		static void NewProp_bIsMarkedForAdvancedDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMarkedForAdvancedDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasOverridePin_MetaData[];
#endif
		static void NewProp_bHasOverridePin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasOverridePin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPropertyIsCustomized_MetaData[];
#endif
		static void NewProp_bPropertyIsCustomized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPropertyIsCustomized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanToggleVisibility_MetaData[];
#endif
		static void NewProp_bCanToggleVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanToggleVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPin_MetaData[];
#endif
		static void NewProp_bShowPin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PropertyTooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyFriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PropertyFriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptionalPinFromProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
		{ "ToolTip", "TRUE if the override pin is visible" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bIsOverridePinVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible = { "bIsOverridePinVisible", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
		{ "ToolTip", "TRUE if the override value should be set through this pin" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bIsSetValuePinVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible = { "bIsSetValuePinVisible", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
		{ "ToolTip", "TRUE if the override value is enabled for use" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bIsOverrideEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled = { "bIsOverrideEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bIsMarkedForAdvancedDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay = { "bIsMarkedForAdvancedDisplay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bHasOverridePin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin = { "bHasOverridePin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bPropertyIsCustomized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized = { "bPropertyIsCustomized", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bCanToggleVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility = { "bCanToggleVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_SetBit(void* Obj)
	{
		((FOptionalPinFromProperty*)Obj)->bShowPin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin = { "bShowPin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FOptionalPinFromProperty), &Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOptionalPinFromProperty, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip = { "PropertyTooltip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOptionalPinFromProperty, PropertyTooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName = { "PropertyFriendlyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOptionalPinFromProperty, PropertyFriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "OptionalPin" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOptionalPinFromProperty, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverridePinVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsSetValuePinVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsOverrideEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bIsMarkedForAdvancedDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bHasOverridePin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bPropertyIsCustomized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bCanToggleVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_bShowPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyTooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyFriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::NewProp_PropertyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"OptionalPinFromProperty",
		sizeof(FOptionalPinFromProperty),
		alignof(FOptionalPinFromProperty),
		Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOptionalPinFromProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OptionalPinFromProperty"), sizeof(FOptionalPinFromProperty), Get_Z_Construct_UScriptStruct_FOptionalPinFromProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOptionalPinFromProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOptionalPinFromProperty_Hash() { return 1853359077U; }
	void UK2Node::StaticRegisterNativesUK2Node()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_NoRegister()
	{
		return UK2Node::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node.h" },
		{ "ModuleRelativePath", "Classes/K2Node.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Abstract base class of all blueprint graph nodes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Statics::ClassParams = {
		&UK2Node::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node, 1203149289);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node>()
	{
		return UK2Node::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node(Z_Construct_UClass_UK2Node, &UK2Node::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
