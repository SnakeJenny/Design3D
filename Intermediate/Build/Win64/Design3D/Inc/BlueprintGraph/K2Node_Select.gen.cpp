// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_Select.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Select() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Select_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Select();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
// End Cross Module References
	void UK2Node_Select::StaticRegisterNativesUK2Node_Select()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_Select_NoRegister()
	{
		return UK2Node_Select::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Select_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReconstructNode_MetaData[];
#endif
		static void NewProp_bReconstructNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReconstructNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumEntryFriendlyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnumEntryFriendlyNames;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EnumEntryFriendlyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnumEntries;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EnumEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexPinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexPinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOptionPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOptionPins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Select_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Select.h" },
		{ "Keywords", "Ternary Select" },
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "Whether we need to reconstruct the node after the pins have changed" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_SetBit(void* Obj)
	{
		((UK2Node_Select*)Obj)->bReconstructNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode = { "bReconstructNode", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Select), &Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "List of the current entries in the enum (Pin Friendly Names)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames = { "EnumEntryFriendlyNames", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Select, EnumEntryFriendlyNames), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_Inner = { "EnumEntryFriendlyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "List of the current entries in the enum (Pin Names)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries = { "EnumEntries", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Select, EnumEntries), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_Inner = { "EnumEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "Name of the enum being switched on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Select, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "The pin type of the index pin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType = { "IndexPinType", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Select, IndexPinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Select.h" },
		{ "ToolTip", "The number of selectable options this node currently has" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins = { "NumOptionPins", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Select, NumOptionPins), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Select_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_bReconstructNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntryFriendlyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_EnumEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_Enum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_IndexPinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Select_Statics::NewProp_NumOptionPins,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_Select_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_Select, INodeDependingOnEnumInterface), false },
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_Select, IK2Node_AddPinInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Select_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Select>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Select_Statics::ClassParams = {
		&UK2Node_Select::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Select_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Select_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Select_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Select()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_Select_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_Select, 338458164);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Select>()
	{
		return UK2Node_Select::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_Select(Z_Construct_UClass_UK2Node_Select, &UK2Node_Select::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_Select"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Select);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
