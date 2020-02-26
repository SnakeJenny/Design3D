// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/EdGraph/EdGraphPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphPin() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintPinStyleType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinContainerType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphTerminalType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphPin_Deprecated();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
// End Cross Module References
	static UEnum* EBlueprintPinStyleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlueprintPinStyleType, Z_Construct_UPackage__Script_Engine(), TEXT("EBlueprintPinStyleType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlueprintPinStyleType>()
	{
		return EBlueprintPinStyleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintPinStyleType(EBlueprintPinStyleType_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlueprintPinStyleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Hash() { return 695551236U; }
	UEnum* Z_Construct_UEnum_Engine_EBlueprintPinStyleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintPinStyleType"), 0, Get_Z_Construct_UEnum_Engine_EBlueprintPinStyleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BPST_Original", (int64)BPST_Original },
				{ "BPST_VariantA", (int64)BPST_VariantA },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BPST_Original.DisplayName", "Circles, Grid, Diamond" },
				{ "BPST_VariantA.DisplayName", "Directional Circles" },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EBlueprintPinStyleType",
				"EBlueprintPinStyleType",
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
class UScriptStruct* FEdGraphPinReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinReference, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphPinReference"), sizeof(FEdGraphPinReference), Get_Z_Construct_UScriptStruct_FEdGraphPinReference_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphPinReference>()
{
	return FEdGraphPinReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphPinReference(FEdGraphPinReference::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphPinReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphPinReference
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphPinReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphPinReference")),new UScriptStruct::TCppStructOps<FEdGraphPinReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphPinReference;
	struct Z_Construct_UScriptStruct_FEdGraphPinReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OwningNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphPinReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The pin's unique ID. Updated at Set and Save time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphPinReference, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The node that owns the pin referred to by this struct. Updated at Set and Save time." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode = { "OwningNode", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphPinReference, OwningNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_PinId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::NewProp_OwningNode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EdGraphPinReference",
		sizeof(FEdGraphPinReference),
		alignof(FEdGraphPinReference),
		Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphPinReference"), sizeof(FEdGraphPinReference), Get_Z_Construct_UScriptStruct_FEdGraphPinReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphPinReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinReference_Hash() { return 204584079U; }
class UScriptStruct* FEdGraphPinType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinType, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphPinType"), sizeof(FEdGraphPinType), Get_Z_Construct_UScriptStruct_FEdGraphPinType_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEdGraphPinType>()
{
	return FEdGraphPinType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphPinType(FEdGraphPinType::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphPinType"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphPinType
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphPinType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphPinType")),new UScriptStruct::TCppStructOps<FEdGraphPinType>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphPinType;
	struct Z_Construct_UScriptStruct_FEdGraphPinType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWeakPointer_MetaData[];
#endif
		static void NewProp_bIsWeakPointer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeakPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsConst_MetaData[];
#endif
		static void NewProp_bIsConst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsConst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReference_MetaData[];
#endif
		static void NewProp_bIsReference_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReference;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryMemberReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinSubCategoryMemberReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinSubCategoryObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PinSubCategoryObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinSubCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinSubCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PinCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Struct used to define the type of information carried on this pin" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphPinType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this is a weak reference" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bIsWeakPointer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer = { "bIsWeakPointer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this pin is a immutable const value" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bIsConst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst = { "bIsConst", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Whether or not this pin is a value passed by reference or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bIsReference = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference = { "bIsReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "UE_DEPRECATED(4.17) Whether or not this pin represents an array of values" },
	};
#endif
	void Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((FEdGraphPinType*)Obj)->bIsArray_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEdGraphPinType), &Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphPinType, ContainerType), Z_Construct_UEnum_Engine_EPinContainerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Data used to determine value types when bIsMap is true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType = { "PinValueType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphPinType, PinValueType), Z_Construct_UScriptStruct_FEdGraphTerminalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Sub-category member reference" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference = { "PinSubCategoryMemberReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphPinType, PinSubCategoryMemberReference), Z_Construct_UScriptStruct_FSimpleMemberReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Sub-category object" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject = { "PinSubCategoryObject", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphPinType, PinSubCategoryObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Sub-category of pin type" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory = { "PinSubCategory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphPinType, PinSubCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Category of pin type" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEdGraphPinType, PinCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsWeakPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsConst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_bIsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_ContainerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryMemberReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategoryObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinSubCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphPinType_Statics::NewProp_PinCategory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphPinType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EdGraphPinType",
		sizeof(FEdGraphPinType),
		alignof(FEdGraphPinType),
		Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphPinType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphPinType"), sizeof(FEdGraphPinType), Get_Z_Construct_UScriptStruct_FEdGraphPinType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphPinType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphPinType_Hash() { return 3411552162U; }
class UScriptStruct* FSimpleMemberReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSimpleMemberReference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleMemberReference, Z_Construct_UPackage__Script_Engine(), TEXT("SimpleMemberReference"), sizeof(FSimpleMemberReference), Get_Z_Construct_UScriptStruct_FSimpleMemberReference_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSimpleMemberReference>()
{
	return FSimpleMemberReference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleMemberReference(FSimpleMemberReference::StaticStruct, TEXT("/Script/Engine"), TEXT("SimpleMemberReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSimpleMemberReference
{
	FScriptStruct_Engine_StaticRegisterNativesFSimpleMemberReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleMemberReference")),new UScriptStruct::TCppStructOps<FSimpleMemberReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSimpleMemberReference;
	struct Z_Construct_UScriptStruct_FSimpleMemberReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MemberName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MemberParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleMemberReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The Guid of the member" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleMemberReference, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Name of the member" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleMemberReference, MemberName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Most often the Class that this member is defined in. Could be a UPackage\nif it is a native delegate signature function (declared globally)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent = { "MemberParent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleMemberReference, MemberParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::NewProp_MemberParent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SimpleMemberReference",
		sizeof(FSimpleMemberReference),
		alignof(FSimpleMemberReference),
		Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleMemberReference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleMemberReference"), sizeof(FSimpleMemberReference), Get_Z_Construct_UScriptStruct_FSimpleMemberReference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleMemberReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleMemberReference_Hash() { return 3443974982U; }
	void UEdGraphPin_Deprecated::StaticRegisterNativesUEdGraphPin_Deprecated()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister()
	{
		return UEdGraphPin_Deprecated::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphPin_Deprecated_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersistentGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayAsMutableRef_MetaData[];
#endif
		static void NewProp_bDisplayAsMutableRef_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayAsMutableRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdvancedView_MetaData[];
#endif
		static void NewProp_bAdvancedView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdvancedView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDiffing_MetaData[];
#endif
		static void NewProp_bIsDiffing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDiffing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultValueIsIgnored_MetaData[];
#endif
		static void NewProp_bDefaultValueIsIgnored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultValueIsIgnored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultValueIsReadOnly_MetaData[];
#endif
		static void NewProp_bDefaultValueIsReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultValueIsReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotConnectable_MetaData[];
#endif
		static void NewProp_bNotConnectable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotConnectable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencePassThroughConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencePassThroughConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentPin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentPin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubPins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubPins;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubPins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinkedTo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinkedTo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTextValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultTextValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutogeneratedDefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AutogeneratedDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinToolTip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinToolTip;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinFriendlyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PinFriendlyName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PinName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphPin.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Pin name could be changed, so whenever possible it's good to have a persistent GUID identifying Pin to reconstruct Node seamlessly" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid = { "PersistentGuid", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PersistentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the pin is displayed as ref" },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bDisplayAsMutableRef = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef = { "bDisplayAsMutableRef", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the pin may be hidden by user" },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bAdvancedView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView = { "bAdvancedView", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bIsDiffing_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, this pin is the focus of a diff" },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bIsDiffing_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bIsDiffing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bIsDiffing = { "bIsDiffing", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bIsDiffing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bIsDiffing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bIsDiffing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the default value on this pin is ignored and should not be set" },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bDefaultValueIsIgnored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored = { "bDefaultValueIsIgnored", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, the default value of this connector is fixed and cannot be modified by the user (it's visible for reference only)" },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bDefaultValueIsReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly = { "bDefaultValueIsReadOnly", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, this connector is unconnectable, and present only to allow the editing of the default text." },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bNotConnectable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable = { "bNotConnectable", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If true, this connector is currently hidden." },
	};
#endif
	void Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((UEdGraphPin_Deprecated*)Obj)->bHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEdGraphPin_Deprecated), &Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Pin that this pin uses for passing through reference connection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection = { "ReferencePassThroughConnection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, ReferencePassThroughConnection), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The pin that was split and generated this pin" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin = { "ParentPin", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, ParentPin), Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The pins created when a pin is split and hidden" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins = { "SubPins", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, SubPins), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_Inner = { "SubPins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Set of pins that we are linked to" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo = { "LinkedTo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, LinkedTo), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_Inner = { "LinkedTo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEdGraphPin_Deprecated_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If the default value for this pin should be an FText, it is stored here." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue = { "DefaultTextValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultTextValue), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "If the default value for this pin should be an object, we store a pointer to it" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject = { "DefaultObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Initial default value (the autogenerated value, to identify if the user has modified the value), stored as a string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue = { "AutogeneratedDefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, AutogeneratedDefaultValue), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Default value for this pin (used if the pin has no connections), stored as a string" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The type of information carried on this pin" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Direction of flow of this pin (input or output)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, Direction), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "The tool-tip describing this pin's purpose" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip = { "PinToolTip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinToolTip), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Used as the display name if set" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName = { "PinFriendlyName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinFriendlyName), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphPin.h" },
		{ "ToolTip", "Name of this pin" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEdGraphPin_Deprecated, PinName), METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PersistentGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDisplayAsMutableRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bAdvancedView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bIsDiffing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsIgnored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bDefaultValueIsReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bNotConnectable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_bHidden,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ReferencePassThroughConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_ParentPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_SubPins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_LinkedTo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultTextValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_AutogeneratedDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinToolTip,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinFriendlyName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::NewProp_PinName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphPin_Deprecated>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::ClassParams = {
		&UEdGraphPin_Deprecated::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphPin_Deprecated()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraphPin_Deprecated_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphPin_Deprecated, 1108169471);
	template<> ENGINE_API UClass* StaticClass<UEdGraphPin_Deprecated>()
	{
		return UEdGraphPin_Deprecated::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphPin_Deprecated(Z_Construct_UClass_UEdGraphPin_Deprecated, &UEdGraphPin_Deprecated::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraphPin_Deprecated"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphPin_Deprecated);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
