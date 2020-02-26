// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_BlendListByEnum.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_BlendListByEnum() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendListByEnum();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendListBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
// End Cross Module References
	void UAnimGraphNode_BlendListByEnum::StaticRegisterNativesUAnimGraphNode_BlendListByEnum()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_NoRegister()
	{
		return UAnimGraphNode_BlendListByEnum::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleEnumEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisibleEnumEntries;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VisibleEnumEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundEnum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_BlendListBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_BlendListByEnum.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_BlendListByEnum.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_VisibleEnumEntries_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimGraphNode_BlendListByEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_VisibleEnumEntries = { "VisibleEnumEntries", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_BlendListByEnum, VisibleEnumEntries), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_VisibleEnumEntries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_VisibleEnumEntries_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_VisibleEnumEntries_Inner = { "VisibleEnumEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_BoundEnum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimGraphNode_BlendListByEnum.h" },
		{ "ToolTip", "Name of the enum being switched on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_BoundEnum = { "BoundEnum", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_BlendListByEnum, BoundEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_BoundEnum_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_BoundEnum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_BlendListByEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_BlendListByEnum, Node), Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_VisibleEnumEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_VisibleEnumEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_BoundEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::NewProp_Node,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimGraphNode_BlendListByEnum, INodeDependingOnEnumInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_BlendListByEnum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::ClassParams = {
		&UAnimGraphNode_BlendListByEnum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendListByEnum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_BlendListByEnum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_BlendListByEnum, 4026578874);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_BlendListByEnum>()
	{
		return UAnimGraphNode_BlendListByEnum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_BlendListByEnum(Z_Construct_UClass_UAnimGraphNode_BlendListByEnum, &UAnimGraphNode_BlendListByEnum::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_BlendListByEnum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_BlendListByEnum);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_BlendListByEnum)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
