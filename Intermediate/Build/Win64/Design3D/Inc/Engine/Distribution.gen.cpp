// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/Distribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistribution() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_DistributionParamMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* DistributionParamMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_DistributionParamMode, Z_Construct_UPackage__Script_Engine(), TEXT("DistributionParamMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<DistributionParamMode>()
	{
		return DistributionParamMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DistributionParamMode(DistributionParamMode_StaticEnum, TEXT("/Script/Engine"), TEXT("DistributionParamMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_DistributionParamMode_Hash() { return 3281076313U; }
	UEnum* Z_Construct_UEnum_Engine_DistributionParamMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DistributionParamMode"), 0, Get_Z_Construct_UEnum_Engine_DistributionParamMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DPM_Normal", (int64)DPM_Normal },
				{ "DPM_Abs", (int64)DPM_Abs },
				{ "DPM_Direct", (int64)DPM_Direct },
				{ "DPM_MAX", (int64)DPM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"DistributionParamMode",
				"DistributionParamMode",
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
	struct Z_Construct_UScriptStruct_FRawDistribution_Statics
	{
		struct FDistributionLookupTable
		{
			uint8 Op;
			uint8 EntryCount;
			uint8 EntryStride;
			uint8 SubEntryStride;
			float TimeScale;
			float TimeBias;
			TArray<float> Values;
			uint8 LockFlag;
		};

		struct FRawDistribution
		{
			FDistributionLookupTable Table;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistribution_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
		{ "ToolTip", "Base class for raw (baked out) Distribution type" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistribution_Statics::NewProp_Table,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"RawDistribution",
		sizeof(FRawDistribution),
		alignof(FRawDistribution),
		Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistribution_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawDistribution"), sizeof(Z_Construct_UScriptStruct_FRawDistribution_Statics::FRawDistribution), Get_Z_Construct_UScriptStruct_FRawDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawDistribution_Hash() { return 1406652521U; }
	struct Z_Construct_UScriptStruct_FDistributionLookupTable_Statics
	{
		struct FDistributionLookupTable
		{
			uint8 Op;
			uint8 EntryCount;
			uint8 EntryStride;
			uint8 SubEntryStride;
			float TimeScale;
			float TimeBias;
			TArray<float> Values;
			uint8 LockFlag;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubEntryStride_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubEntryStride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryStride_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryStride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EntryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Op_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Op;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
		{ "ToolTip", "Lookup table for distributions." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag = { "LockFlag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistributionLookupTable, LockFlag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistributionLookupTable, Values), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias = { "TimeBias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistributionLookupTable, TimeBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistributionLookupTable, TimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride = { "SubEntryStride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistributionLookupTable, SubEntryStride), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride = { "EntryStride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistributionLookupTable, EntryStride), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistributionLookupTable, EntryCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op = { "Op", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistributionLookupTable, Op), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_LockFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_SubEntryStride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryStride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_EntryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::NewProp_Op,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"DistributionLookupTable",
		sizeof(FDistributionLookupTable),
		alignof(FDistributionLookupTable),
		Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDistributionLookupTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DistributionLookupTable"), sizeof(Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::FDistributionLookupTable), Get_Z_Construct_UScriptStruct_FDistributionLookupTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDistributionLookupTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDistributionLookupTable_Hash() { return 452793564U; }
	void UDistribution::StaticRegisterNativesUDistribution()
	{
	}
	UClass* Z_Construct_UClass_UDistribution_NoRegister()
	{
		return UDistribution::StaticClass();
	}
	struct Z_Construct_UClass_UDistribution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistribution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistribution_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Distributions/Distribution.h" },
		{ "ModuleRelativePath", "Classes/Distributions/Distribution.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistribution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistribution>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistribution_Statics::ClassParams = {
		&UDistribution::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x002830A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDistribution_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistribution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistribution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistribution_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistribution, 925631468);
	template<> ENGINE_API UClass* StaticClass<UDistribution>()
	{
		return UDistribution::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistribution(Z_Construct_UClass_UDistribution, &UDistribution::StaticClass, TEXT("/Script/Engine"), TEXT("UDistribution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistribution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
