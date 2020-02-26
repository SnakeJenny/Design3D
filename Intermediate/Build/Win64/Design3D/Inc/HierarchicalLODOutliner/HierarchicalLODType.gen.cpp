// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HierarchicalLODOutliner/Private/HierarchicalLODType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalLODType() {}
// Cross Module References
	HIERARCHICALLODOUTLINER_API UEnum* Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType();
	UPackage* Z_Construct_UPackage__Script_HierarchicalLODOutliner();
// End Cross Module References
	static UEnum* EHierarchicalLODActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType, Z_Construct_UPackage__Script_HierarchicalLODOutliner(), TEXT("EHierarchicalLODActionType"));
		}
		return Singleton;
	}
	template<> HIERARCHICALLODOUTLINER_API UEnum* StaticEnum<EHierarchicalLODActionType>()
	{
		return EHierarchicalLODActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHierarchicalLODActionType(EHierarchicalLODActionType_StaticEnum, TEXT("/Script/HierarchicalLODOutliner"), TEXT("EHierarchicalLODActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Hash() { return 565415680U; }
	UEnum* Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HierarchicalLODOutliner();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHierarchicalLODActionType"), 0, Get_Z_Construct_UEnum_HierarchicalLODOutliner_EHierarchicalLODActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHierarchicalLODActionType::InvalidAction", (int64)EHierarchicalLODActionType::InvalidAction },
				{ "EHierarchicalLODActionType::CreateCluster", (int64)EHierarchicalLODActionType::CreateCluster },
				{ "EHierarchicalLODActionType::AddActorToCluster", (int64)EHierarchicalLODActionType::AddActorToCluster },
				{ "EHierarchicalLODActionType::MoveActorToCluster", (int64)EHierarchicalLODActionType::MoveActorToCluster },
				{ "EHierarchicalLODActionType::RemoveActorFromCluster", (int64)EHierarchicalLODActionType::RemoveActorFromCluster },
				{ "EHierarchicalLODActionType::MergeClusters", (int64)EHierarchicalLODActionType::MergeClusters },
				{ "EHierarchicalLODActionType::ChildCluster", (int64)EHierarchicalLODActionType::ChildCluster },
				{ "EHierarchicalLODActionType::MAX", (int64)EHierarchicalLODActionType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/HierarchicalLODType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HierarchicalLODOutliner,
				nullptr,
				"EHierarchicalLODActionType",
				"EHierarchicalLODActionType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
