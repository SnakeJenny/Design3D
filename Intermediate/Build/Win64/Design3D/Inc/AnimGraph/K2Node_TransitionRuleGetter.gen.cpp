// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/K2Node_TransitionRuleGetter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_TransitionRuleGetter() {}
// Cross Module References
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_ETransitionGetter();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_TransitionRuleGetter_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_TransitionRuleGetter();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister();
// End Cross Module References
	static UEnum* ETransitionGetter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_ETransitionGetter, Z_Construct_UPackage__Script_AnimGraph(), TEXT("ETransitionGetter"));
		}
		return Singleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<ETransitionGetter::Type>()
	{
		return ETransitionGetter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransitionGetter(ETransitionGetter_StaticEnum, TEXT("/Script/AnimGraph"), TEXT("ETransitionGetter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraph_ETransitionGetter_Hash() { return 2989323555U; }
	UEnum* Z_Construct_UEnum_AnimGraph_ETransitionGetter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransitionGetter"), 0, Get_Z_Construct_UEnum_AnimGraph_ETransitionGetter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransitionGetter::AnimationAsset_GetCurrentTime", (int64)ETransitionGetter::AnimationAsset_GetCurrentTime },
				{ "ETransitionGetter::AnimationAsset_GetLength", (int64)ETransitionGetter::AnimationAsset_GetLength },
				{ "ETransitionGetter::AnimationAsset_GetCurrentTimeFraction", (int64)ETransitionGetter::AnimationAsset_GetCurrentTimeFraction },
				{ "ETransitionGetter::AnimationAsset_GetTimeFromEnd", (int64)ETransitionGetter::AnimationAsset_GetTimeFromEnd },
				{ "ETransitionGetter::AnimationAsset_GetTimeFromEndFraction", (int64)ETransitionGetter::AnimationAsset_GetTimeFromEndFraction },
				{ "ETransitionGetter::CurrentState_ElapsedTime", (int64)ETransitionGetter::CurrentState_ElapsedTime },
				{ "ETransitionGetter::CurrentState_GetBlendWeight", (int64)ETransitionGetter::CurrentState_GetBlendWeight },
				{ "ETransitionGetter::CurrentTransitionDuration", (int64)ETransitionGetter::CurrentTransitionDuration },
				{ "ETransitionGetter::ArbitraryState_GetBlendWeight", (int64)ETransitionGetter::ArbitraryState_GetBlendWeight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/K2Node_TransitionRuleGetter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
				nullptr,
				"ETransitionGetter",
				"ETransitionGetter::Type",
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
	void UK2Node_TransitionRuleGetter::StaticRegisterNativesUK2Node_TransitionRuleGetter()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_TransitionRuleGetter_NoRegister()
	{
		return UK2Node_TransitionRuleGetter::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedStateNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedStateNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedAnimAssetPlayerNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedAnimAssetPlayerNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GetterType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_TransitionRuleGetter.h" },
		{ "ModuleRelativePath", "Classes/K2Node_TransitionRuleGetter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_TransitionRuleGetter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode = { "AssociatedStateNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_TransitionRuleGetter, AssociatedStateNode), Z_Construct_UClass_UAnimStateNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_TransitionRuleGetter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode = { "AssociatedAnimAssetPlayerNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_TransitionRuleGetter, AssociatedAnimAssetPlayerNode), Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_TransitionRuleGetter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType = { "GetterType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_TransitionRuleGetter, GetterType), Z_Construct_UEnum_AnimGraph_ETransitionGetter, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedStateNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_AssociatedAnimAssetPlayerNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::NewProp_GetterType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_TransitionRuleGetter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::ClassParams = {
		&UK2Node_TransitionRuleGetter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_TransitionRuleGetter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_TransitionRuleGetter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_TransitionRuleGetter, 1524827015);
	template<> ANIMGRAPH_API UClass* StaticClass<UK2Node_TransitionRuleGetter>()
	{
		return UK2Node_TransitionRuleGetter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_TransitionRuleGetter(Z_Construct_UClass_UK2Node_TransitionRuleGetter, &UK2Node_TransitionRuleGetter::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UK2Node_TransitionRuleGetter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_TransitionRuleGetter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
