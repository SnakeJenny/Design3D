// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_EditablePinBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_EditablePinBase() {}
// Cross Module References
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FUserPinInfo();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
// End Cross Module References
class UScriptStruct* FKismetUserDeclaredFunctionMetadata::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("KismetUserDeclaredFunctionMetadata"), sizeof(FKismetUserDeclaredFunctionMetadata), Get_Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FKismetUserDeclaredFunctionMetadata>()
{
	return FKismetUserDeclaredFunctionMetadata::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKismetUserDeclaredFunctionMetadata(FKismetUserDeclaredFunctionMetadata::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("KismetUserDeclaredFunctionMetadata"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFKismetUserDeclaredFunctionMetadata
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFKismetUserDeclaredFunctionMetadata()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KismetUserDeclaredFunctionMetadata")),new UScriptStruct::TCppStructOps<FKismetUserDeclaredFunctionMetadata>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFKismetUserDeclaredFunctionMetadata;
	struct Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasLatentFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_HasLatentFunctions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallInEditor_MetaData[];
#endif
		static void NewProp_bCallInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompactNodeTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CompactNodeTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ToolTip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "This structure describes metadata associated with a user declared function or macro\nIt will be turned into regular metadata during compilation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKismetUserDeclaredFunctionMetadata>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "Cached value for whether or not the graph has latent functions, positive for TRUE, zero for FALSE, and INDEX_None for undetermined" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions = { "HasLatentFunctions", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, HasLatentFunctions), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_SetBit(void* Obj)
	{
		((FKismetUserDeclaredFunctionMetadata*)Obj)->bCallInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor = { "bCallInEditor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKismetUserDeclaredFunctionMetadata), &Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor = { "InstanceTitleColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, InstanceTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle = { "CompactNodeTitle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, CompactNodeTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, Keywords), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKismetUserDeclaredFunctionMetadata, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_HasLatentFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_bCallInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_InstanceTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_CompactNodeTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Keywords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::NewProp_ToolTip,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"KismetUserDeclaredFunctionMetadata",
		sizeof(FKismetUserDeclaredFunctionMetadata),
		alignof(FKismetUserDeclaredFunctionMetadata),
		Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KismetUserDeclaredFunctionMetadata"), sizeof(FKismetUserDeclaredFunctionMetadata), Get_Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKismetUserDeclaredFunctionMetadata_Hash() { return 3070608266U; }
class UScriptStruct* FUserPinInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUEPRINTGRAPH_API uint32 Get_Z_Construct_UScriptStruct_FUserPinInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserPinInfo, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("UserPinInfo"), sizeof(FUserPinInfo), Get_Z_Construct_UScriptStruct_FUserPinInfo_Hash());
	}
	return Singleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FUserPinInfo>()
{
	return FUserPinInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserPinInfo(FUserPinInfo::StaticStruct, TEXT("/Script/BlueprintGraph"), TEXT("UserPinInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BlueprintGraph_StaticRegisterNativesFUserPinInfo
{
	FScriptStruct_BlueprintGraph_StaticRegisterNativesFUserPinInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserPinInfo")),new UScriptStruct::TCppStructOps<FUserPinInfo>);
	}
} ScriptStruct_BlueprintGraph_StaticRegisterNativesFUserPinInfo;
	struct Z_Construct_UScriptStruct_FUserPinInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinDefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredPinDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DesiredPinDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserPinInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "The default value of the pin" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue = { "PinDefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserPinInfo, PinDefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "Desired direction for the pin. The direction will be forced to work with the node if necessary" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection = { "DesiredPinDirection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserPinInfo, DesiredPinDirection), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "Type info for the pin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserPinInfo, PinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "The name of the pin, as defined by the user" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserPinInfo, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserPinInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_DesiredPinDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPinInfo_Statics::NewProp_PinName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserPinInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"UserPinInfo",
		sizeof(FUserPinInfo),
		alignof(FUserPinInfo),
		Z_Construct_UScriptStruct_FUserPinInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPinInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPinInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserPinInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserPinInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserPinInfo"), sizeof(FUserPinInfo), Get_Z_Construct_UScriptStruct_FUserPinInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserPinInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserPinInfo_Hash() { return 495779040U; }
	void UK2Node_EditablePinBase::StaticRegisterNativesUK2Node_EditablePinBase()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_EditablePinBase_NoRegister()
	{
		return UK2Node_EditablePinBase::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EditablePinBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEditable_MetaData[];
#endif
		static void NewProp_bIsEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEditable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EditablePinBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EditablePinBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_EditablePinBase.h" },
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_EditablePinBase.h" },
		{ "ToolTip", "Whether or not this entry node should be user-editable with the function editor" },
	};
#endif
	void Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_SetBit(void* Obj)
	{
		((UK2Node_EditablePinBase*)Obj)->bIsEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable = { "bIsEditable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_EditablePinBase), &Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EditablePinBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EditablePinBase_Statics::NewProp_bIsEditable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EditablePinBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EditablePinBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EditablePinBase_Statics::ClassParams = {
		&UK2Node_EditablePinBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EditablePinBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_EditablePinBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_EditablePinBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_EditablePinBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_EditablePinBase, 311255545);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_EditablePinBase>()
	{
		return UK2Node_EditablePinBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_EditablePinBase(Z_Construct_UClass_UK2Node_EditablePinBase, &UK2Node_EditablePinBase::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_EditablePinBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EditablePinBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_EditablePinBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
