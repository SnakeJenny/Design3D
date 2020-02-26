// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimStateNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateNode() {}
// Cross Module References
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_EAnimStateType();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	static UEnum* EAnimStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_EAnimStateType, Z_Construct_UPackage__Script_AnimGraph(), TEXT("EAnimStateType"));
		}
		return Singleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<EAnimStateType>()
	{
		return EAnimStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimStateType(EAnimStateType_StaticEnum, TEXT("/Script/AnimGraph"), TEXT("EAnimStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraph_EAnimStateType_Hash() { return 885582926U; }
	UEnum* Z_Construct_UEnum_AnimGraph_EAnimStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimStateType"), 0, Get_Z_Construct_UEnum_AnimGraph_EAnimStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AST_SingleAnimation", (int64)AST_SingleAnimation },
				{ "AST_BlendGraph", (int64)AST_BlendGraph },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AST_BlendGraph.DisplayName", "Blend graph" },
				{ "AST_SingleAnimation.DisplayName", "Single animation" },
				{ "ModuleRelativePath", "Classes/AnimStateNode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
				nullptr,
				"EAnimStateType",
				"EAnimStateType",
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
	void UAnimStateNode::StaticRegisterNativesUAnimStateNode()
	{
	}
	UClass* Z_Construct_UClass_UAnimStateNode_NoRegister()
	{
		return UAnimStateNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysResetOnEntry_MetaData[];
#endif
		static void NewProp_bAlwaysResetOnEntry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysResetOnEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateFullyBlended_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateFullyBlended;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateEntered_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateEntered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimStateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateNode.h" },
		{ "ModuleRelativePath", "Classes/AnimStateNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/AnimStateNode.h" },
		{ "ToolTip", "Whether or not this state will ALWAYS reset it's state on reentry, regardless of remaining weight" },
	};
#endif
	void Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_SetBit(void* Obj)
	{
		((UAnimStateNode*)Obj)->bAlwaysResetOnEntry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry = { "bAlwaysResetOnEntry", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimStateNode), &Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/AnimStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended = { "StateFullyBlended", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateNode, StateFullyBlended), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/AnimStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft = { "StateLeft", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateNode, StateLeft), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/AnimStateNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered = { "StateEntered", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateNode, StateEntered), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateNode.h" },
		{ "ToolTip", "The type of the contents of this state" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateNode, StateType), Z_Construct_UEnum_AnimGraph_EAnimStateType, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimStateNode.h" },
		{ "ToolTip", "The animation graph for this state" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimStateNode, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimStateNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateNode_Statics::ClassParams = {
		&UAnimStateNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimStateNode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimStateNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimStateNode, 3051158230);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateNode>()
	{
		return UAnimStateNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimStateNode(Z_Construct_UClass_UAnimStateNode, &UAnimStateNode::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimStateNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
