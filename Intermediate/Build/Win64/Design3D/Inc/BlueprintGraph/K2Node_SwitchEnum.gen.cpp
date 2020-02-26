// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_SwitchEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SwitchEnum() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchEnum_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_SwitchEnum();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
// End Cross Module References
	void UK2Node_SwitchEnum::StaticRegisterNativesUK2Node_SwitchEnum()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_SwitchEnum_NoRegister()
	{
		return UK2Node_SwitchEnum::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SwitchEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumFriendlyNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnumFriendlyNames;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EnumFriendlyNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnumEntries;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EnumEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SwitchEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchEnum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_SwitchEnum.h" },
		{ "ModuleRelativePath", "Classes/K2Node_SwitchEnum.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumFriendlyNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_SwitchEnum.h" },
		{ "ToolTip", "List of the current entries in the enum" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumFriendlyNames = { "EnumFriendlyNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_SwitchEnum, EnumFriendlyNames), METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumFriendlyNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumFriendlyNames_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumFriendlyNames_Inner = { "EnumFriendlyNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumEntries_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_SwitchEnum.h" },
		{ "ToolTip", "List of the current entries in the enum" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumEntries = { "EnumEntries", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_SwitchEnum, EnumEntries), METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumEntries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumEntries_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumEntries_Inner = { "EnumEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_SwitchEnum.h" },
		{ "ToolTip", "Name of the enum being switched on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_SwitchEnum, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_Enum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_Enum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_SwitchEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumFriendlyNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumFriendlyNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_EnumEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SwitchEnum_Statics::NewProp_Enum,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_SwitchEnum_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_SwitchEnum, INodeDependingOnEnumInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SwitchEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SwitchEnum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SwitchEnum_Statics::ClassParams = {
		&UK2Node_SwitchEnum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_SwitchEnum_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchEnum_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SwitchEnum_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_SwitchEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SwitchEnum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_SwitchEnum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_SwitchEnum, 445647988);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_SwitchEnum>()
	{
		return UK2Node_SwitchEnum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_SwitchEnum(Z_Construct_UClass_UK2Node_SwitchEnum, &UK2Node_SwitchEnum::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_SwitchEnum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SwitchEnum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
