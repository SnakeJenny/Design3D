// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionVector.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVector() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector4Distribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorDistribution();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution();
// End Cross Module References
	static UEnum* EDistributionVectorMirrorFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags, Z_Construct_UPackage__Script_Engine(), TEXT("EDistributionVectorMirrorFlags"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDistributionVectorMirrorFlags>()
	{
		return EDistributionVectorMirrorFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDistributionVectorMirrorFlags(EDistributionVectorMirrorFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("EDistributionVectorMirrorFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Hash() { return 94789481U; }
	UEnum* Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDistributionVectorMirrorFlags"), 0, Get_Z_Construct_UEnum_Engine_EDistributionVectorMirrorFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDVMF_Same", (int64)EDVMF_Same },
				{ "EDVMF_Different", (int64)EDVMF_Different },
				{ "EDVMF_Mirror", (int64)EDVMF_Mirror },
				{ "EDVMF_MAX", (int64)EDVMF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EDVMF_Different.DisplayName", "Different" },
				{ "EDVMF_Mirror.DisplayName", "Mirror" },
				{ "EDVMF_Same.DisplayName", "Same" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDistributionVectorMirrorFlags",
				"EDistributionVectorMirrorFlags",
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
	static UEnum* EDistributionVectorLockFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, Z_Construct_UPackage__Script_Engine(), TEXT("EDistributionVectorLockFlags"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDistributionVectorLockFlags>()
	{
		return EDistributionVectorLockFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDistributionVectorLockFlags(EDistributionVectorLockFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("EDistributionVectorLockFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Hash() { return 2047515736U; }
	UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDistributionVectorLockFlags"), 0, Get_Z_Construct_UEnum_Engine_EDistributionVectorLockFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDVLF_None", (int64)EDVLF_None },
				{ "EDVLF_XY", (int64)EDVLF_XY },
				{ "EDVLF_XZ", (int64)EDVLF_XZ },
				{ "EDVLF_YZ", (int64)EDVLF_YZ },
				{ "EDVLF_XYZ", (int64)EDVLF_XYZ },
				{ "EDVLF_MAX", (int64)EDVLF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EDVLF_None.DisplayName", "None" },
				{ "EDVLF_XY.DisplayName", "XY" },
				{ "EDVLF_XYZ.DisplayName", "XYZ" },
				{ "EDVLF_XZ.DisplayName", "XZ" },
				{ "EDVLF_YZ.DisplayName", "YZ" },
				{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDistributionVectorLockFlags",
				"EDistributionVectorLockFlags",
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
class UScriptStruct* FRawDistributionVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRawDistributionVector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawDistributionVector, Z_Construct_UPackage__Script_Engine(), TEXT("RawDistributionVector"), sizeof(FRawDistributionVector), Get_Z_Construct_UScriptStruct_FRawDistributionVector_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRawDistributionVector>()
{
	return FRawDistributionVector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawDistributionVector(FRawDistributionVector::StaticStruct, TEXT("/Script/Engine"), TEXT("RawDistributionVector"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRawDistributionVector
{
	FScriptStruct_Engine_StaticRegisterNativesFRawDistributionVector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawDistributionVector")),new UScriptStruct::TCppStructOps<FRawDistributionVector>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRawDistributionVector;
	struct Z_Construct_UScriptStruct_FRawDistributionVector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Distribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValueVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxValueVec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValueVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinValueVec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawDistributionVector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution_MetaData[] = {
		{ "Category", "RawDistributionVector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0010000002080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawDistributionVector, Distribution), Z_Construct_UClass_UDistributionVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec = { "MaxValueVec", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawDistributionVector, MaxValueVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec = { "MinValueVec", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawDistributionVector, MinValueVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawDistributionVector, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawDistributionVector, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_Distribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValueVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValueVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionVector_Statics::NewProp_MinValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawDistributionVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRawDistribution,
		&NewStructOps,
		"RawDistributionVector",
		sizeof(FRawDistributionVector),
		alignof(FRawDistributionVector),
		Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawDistributionVector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawDistributionVector"), sizeof(FRawDistributionVector), Get_Z_Construct_UScriptStruct_FRawDistributionVector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawDistributionVector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawDistributionVector_Hash() { return 2114752767U; }
	struct Z_Construct_UScriptStruct_FVector4Distribution_Statics
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

		struct FVector4Distribution
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector4Distribution_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Type-safe 4-vector distribution." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVector4Distribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector4Distribution_Statics::NewProp_Table,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector4Distribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"Vector4Distribution",
		sizeof(FVector4Distribution),
		alignof(FVector4Distribution),
		Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4Distribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVector4Distribution_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVector4Distribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVector4Distribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVector4Distribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vector4Distribution"), sizeof(Z_Construct_UScriptStruct_FVector4Distribution_Statics::FVector4Distribution), Get_Z_Construct_UScriptStruct_FVector4Distribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector4Distribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVector4Distribution_Hash() { return 3414400896U; }
	struct Z_Construct_UScriptStruct_FVectorDistribution_Statics
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

		struct FVectorDistribution
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorDistribution_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Type-safe vector distribution." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVectorDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorDistribution_Statics::NewProp_Table,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"VectorDistribution",
		sizeof(FVectorDistribution),
		alignof(FVectorDistribution),
		Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorDistribution_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorDistribution"), sizeof(Z_Construct_UScriptStruct_FVectorDistribution_Statics::FVectorDistribution), Get_Z_Construct_UScriptStruct_FVectorDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorDistribution_Hash() { return 4276390430U; }
	void UDistributionVector::StaticRegisterNativesUDistributionVector()
	{
	}
	UClass* Z_Construct_UClass_UDistributionVector_NoRegister()
	{
		return UDistributionVector::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBakedDataSuccesfully_MetaData[];
#endif
		static void NewProp_bBakedDataSuccesfully_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBakedDataSuccesfully;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[];
#endif
		static void NewProp_bIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeBaked_MetaData[];
#endif
		static void NewProp_bCanBeBaked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeBaked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistribution,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Distributions/DistributionVector.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFStructuredArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
	};
#endif
	void Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_SetBit(void* Obj)
	{
		((UDistributionVector*)Obj)->bBakedDataSuccesfully = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully = { "bBakedDataSuccesfully", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVector), &Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Set internally when the distribution is updated so that that FRawDistribution can know to update itself" },
	};
#endif
	void Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_SetBit(void* Obj)
	{
		((UDistributionVector*)Obj)->bIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVector), &Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_MetaData[] = {
		{ "Category", "Baked" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVector.h" },
		{ "ToolTip", "Can this variable be baked out to a FRawDistribution? Should be true 99% of the time" },
	};
#endif
	void Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_SetBit(void* Obj)
	{
		((UDistributionVector*)Obj)->bCanBeBaked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked = { "bCanBeBaked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionVector), &Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVector_Statics::NewProp_bBakedDataSuccesfully,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVector_Statics::NewProp_bIsDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVector_Statics::NewProp_bCanBeBaked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVector_Statics::ClassParams = {
		&UDistributionVector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionVector_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::PropPointers),
		0,
		0x003030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionVector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionVector, 4216977850);
	template<> ENGINE_API UClass* StaticClass<UDistributionVector>()
	{
		return UDistributionVector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionVector(Z_Construct_UClass_UDistributionVector, &UDistributionVector::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVector);
	IMPLEMENT_FARCHIVE_SERIALIZER(UDistributionVector)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
