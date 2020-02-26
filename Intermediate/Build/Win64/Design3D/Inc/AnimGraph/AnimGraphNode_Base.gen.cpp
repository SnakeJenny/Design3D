// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/Classes/AnimGraphNode_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_Base() {}
// Cross Module References
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_EBlueprintUsage();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
// End Cross Module References
	static UEnum* EBlueprintUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_EBlueprintUsage, Z_Construct_UPackage__Script_AnimGraph(), TEXT("EBlueprintUsage"));
		}
		return Singleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<EBlueprintUsage>()
	{
		return EBlueprintUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlueprintUsage(EBlueprintUsage_StaticEnum, TEXT("/Script/AnimGraph"), TEXT("EBlueprintUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Hash() { return 1626747264U; }
	UEnum* Z_Construct_UEnum_AnimGraph_EBlueprintUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlueprintUsage"), 0, Get_Z_Construct_UEnum_AnimGraph_EBlueprintUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBlueprintUsage::NoProperties", (int64)EBlueprintUsage::NoProperties },
				{ "EBlueprintUsage::DoesNotUseBlueprint", (int64)EBlueprintUsage::DoesNotUseBlueprint },
				{ "EBlueprintUsage::UsesBlueprint", (int64)EBlueprintUsage::UsesBlueprint },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/AnimGraphNode_Base.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
				nullptr,
				"EBlueprintUsage",
				"EBlueprintUsage",
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
	void UAnimGraphNode_Base::StaticRegisterNativesUAnimGraphNode_Base()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister()
	{
		return UAnimGraphNode_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlueprintUsage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlueprintUsage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPinForProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowPinForProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShowPinForProperties_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_Base.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_Base.h" },
		{ "ToolTip", "This is the base class for any animation graph nodes that generate or consume an animation pose in\nthe animation blend graph.\n\nAny concrete implementations will be paired with a runtime graph node derived from FAnimNode_Base" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnimGraphNode_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage = { "BlueprintUsage", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_Base, BlueprintUsage), Z_Construct_UEnum_AnimGraph_EBlueprintUsage, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_MetaData[] = {
		{ "Category", "PinOptions" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_Base, ShowPinForProperties), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_Inner = { "ShowPinForProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOptionalPinFromProperty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_BlueprintUsage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Base_Statics::NewProp_ShowPinForProperties_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_Base_Statics::ClassParams = {
		&UAnimGraphNode_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_Base_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_Base, 3662520964);
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_Base>()
	{
		return UAnimGraphNode_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_Base(Z_Construct_UClass_UAnimGraphNode_Base, &UAnimGraphNode_Base::StaticClass, TEXT("/Script/AnimGraph"), TEXT("UAnimGraphNode_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
