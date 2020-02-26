// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_TunnelBoundary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_TunnelBoundary() {}
// Cross Module References
	BLUEPRINTGRAPH_API UEnum* Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TunnelBoundary_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TunnelBoundary();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
// End Cross Module References
	static UEnum* ETunnelBoundaryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("ETunnelBoundaryType"));
		}
		return Singleton;
	}
	template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<ETunnelBoundaryType>()
	{
		return ETunnelBoundaryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETunnelBoundaryType(ETunnelBoundaryType_StaticEnum, TEXT("/Script/BlueprintGraph"), TEXT("ETunnelBoundaryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Hash() { return 2093280696U; }
	UEnum* Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETunnelBoundaryType"), 0, Get_Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETunnelBoundaryType::Unknown", (int64)ETunnelBoundaryType::Unknown },
				{ "ETunnelBoundaryType::EntrySite", (int64)ETunnelBoundaryType::EntrySite },
				{ "ETunnelBoundaryType::InputSite", (int64)ETunnelBoundaryType::InputSite },
				{ "ETunnelBoundaryType::OutputSite", (int64)ETunnelBoundaryType::OutputSite },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/K2Node_TunnelBoundary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGraph,
				nullptr,
				"ETunnelBoundaryType",
				"ETunnelBoundaryType",
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
	void UK2Node_TunnelBoundary::StaticRegisterNativesUK2Node_TunnelBoundary()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_TunnelBoundary_NoRegister()
	{
		return UK2Node_TunnelBoundary::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_TunnelBoundary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TunnelBoundaryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TunnelBoundaryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TunnelBoundaryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BaseName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_TunnelBoundary.h" },
		{ "ModuleRelativePath", "Classes/K2Node_TunnelBoundary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_TunnelBoundary.h" },
		{ "ToolTip", "Node Type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType = { "TunnelBoundaryType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_TunnelBoundary, TunnelBoundaryType), Z_Construct_UEnum_BlueprintGraph_ETunnelBoundaryType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_TunnelBoundary.h" },
		{ "ToolTip", "Base Name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_TunnelBoundary, BaseName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_TunnelBoundaryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::NewProp_BaseName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_TunnelBoundary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::ClassParams = {
		&UK2Node_TunnelBoundary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_TunnelBoundary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_TunnelBoundary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_TunnelBoundary, 2238597877);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_TunnelBoundary>()
	{
		return UK2Node_TunnelBoundary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_TunnelBoundary(Z_Construct_UClass_UK2Node_TunnelBoundary, &UK2Node_TunnelBoundary::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_TunnelBoundary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_TunnelBoundary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
