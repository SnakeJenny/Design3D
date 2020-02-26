// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/UserDefinedStructure/UserDefinedStructEditorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedStructEditorData() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FStructVariableDescription();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinContainerType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UNREALED_API UClass* Z_Construct_UClass_UUserDefinedStructEditorData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUserDefinedStructEditorData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FStructVariableDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FStructVariableDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructVariableDescription, Z_Construct_UPackage__Script_UnrealEd(), TEXT("StructVariableDescription"), sizeof(FStructVariableDescription), Get_Z_Construct_UScriptStruct_FStructVariableDescription_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FStructVariableDescription>()
{
	return FStructVariableDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructVariableDescription(FStructVariableDescription::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("StructVariableDescription"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFStructVariableDescription
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFStructVariableDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructVariableDescription")),new UScriptStruct::TCppStructOps<FStructVariableDescription>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFStructVariableDescription;
	struct Z_Construct_UScriptStruct_FStructVariableDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable3dWidget_MetaData[];
#endif
		static void NewProp_bEnable3dWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable3dWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiLineText_MetaData[];
#endif
		static void NewProp_bEnableMultiLineText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiLineText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDontEditoOnInstance_MetaData[];
#endif
		static void NewProp_bDontEditoOnInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDontEditoOnInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvalidMember_MetaData[];
#endif
		static void NewProp_bInvalidMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvalidMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMap_MetaData[];
#endif
		static void NewProp_bIsMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSet_MetaData[];
#endif
		static void NewProp_bIsSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinValueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinValueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubCategoryObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SubCategoryObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VarGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructVariableDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, ToolTip), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "CurrentDefaultValue stores the actual default value, after the DefaultValue was changed, and before the struct was recompiled" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue = { "CurrentDefaultValue", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, CurrentDefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bEnable3dWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget = { "bEnable3dWidget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bEnableMultiLineText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText = { "bEnableMultiLineText", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditoOnInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditoOnInstance_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bDontEditoOnInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditoOnInstance = { "bDontEditoOnInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditoOnInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditoOnInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditoOnInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bInvalidMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember = { "bInvalidMember", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "UE_DEPRECATED(4.17)" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bIsMap_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap = { "bIsMap", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "UE_DEPRECATED(4.17)" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bIsSet_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet = { "bIsSet", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "UE_DEPRECATED(4.17)" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((FStructVariableDescription*)Obj)->bIsArray_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStructVariableDescription), &Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, ContainerType), Z_Construct_UEnum_Engine_EPinContainerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType = { "PinValueType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, PinValueType), Z_Construct_UScriptStruct_FEdGraphTerminalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject = { "SubCategoryObject", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, SubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory = { "SubCategory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, SubCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "TYPE DATA" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid = { "VarGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, VarGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructVariableDescription, VarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructVariableDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ToolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_CurrentDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnable3dWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bEnableMultiLineText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bDontEditoOnInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bInvalidMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_bIsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_ContainerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_PinValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategoryObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_SubCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_FriendlyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructVariableDescription_Statics::NewProp_VarName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructVariableDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"StructVariableDescription",
		sizeof(FStructVariableDescription),
		alignof(FStructVariableDescription),
		Z_Construct_UScriptStruct_FStructVariableDescription_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructVariableDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructVariableDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructVariableDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructVariableDescription"), sizeof(FStructVariableDescription), Get_Z_Construct_UScriptStruct_FStructVariableDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructVariableDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructVariableDescription_Hash() { return 908005440U; }
	void UUserDefinedStructEditorData::StaticRegisterNativesUUserDefinedStructEditorData()
	{
	}
	UClass* Z_Construct_UClass_UUserDefinedStructEditorData_NoRegister()
	{
		return UUserDefinedStructEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedStructEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToolTip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariablesDescriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VariablesDescriptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariablesDescriptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UniqueNameId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedStructEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStructEditorData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedStructEditorData, ToolTip), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions = { "VariablesDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedStructEditorData, VariablesDescriptions), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_Inner = { "VariablesDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStructVariableDescription, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/UserDefinedStructure/UserDefinedStructEditorData.h" },
		{ "ToolTip", "the property is used to generate an uniqe name id for member variable" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId = { "UniqueNameId", nullptr, (EPropertyFlags)0x0040000400000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedStructEditorData, UniqueNameId), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedStructEditorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_ToolTip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_VariablesDescriptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStructEditorData_Statics::NewProp_UniqueNameId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedStructEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedStructEditorData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedStructEditorData_Statics::ClassParams = {
		&UUserDefinedStructEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserDefinedStructEditorData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStructEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedStructEditorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserDefinedStructEditorData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserDefinedStructEditorData, 435280807);
	template<> UNREALED_API UClass* StaticClass<UUserDefinedStructEditorData>()
	{
		return UUserDefinedStructEditorData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedStructEditorData(Z_Construct_UClass_UUserDefinedStructEditorData, &UUserDefinedStructEditorData::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UUserDefinedStructEditorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedStructEditorData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
