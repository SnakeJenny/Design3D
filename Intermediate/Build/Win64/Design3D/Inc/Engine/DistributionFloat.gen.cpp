// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionFloat.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloat() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistribution();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDistributionLookupTable();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistribution();
// End Cross Module References
class UScriptStruct* FRawDistributionFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRawDistributionFloat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawDistributionFloat, Z_Construct_UPackage__Script_Engine(), TEXT("RawDistributionFloat"), sizeof(FRawDistributionFloat), Get_Z_Construct_UScriptStruct_FRawDistributionFloat_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRawDistributionFloat>()
{
	return FRawDistributionFloat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawDistributionFloat(FRawDistributionFloat::StaticStruct, TEXT("/Script/Engine"), TEXT("RawDistributionFloat"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRawDistributionFloat
{
	FScriptStruct_Engine_StaticRegisterNativesFRawDistributionFloat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawDistributionFloat")),new UScriptStruct::TCppStructOps<FRawDistributionFloat>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRawDistributionFloat;
	struct Z_Construct_UScriptStruct_FRawDistributionFloat_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawDistributionFloat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution_MetaData[] = {
		{ "Category", "RawDistributionFloat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0010000002080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawDistributionFloat, Distribution), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawDistributionFloat, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRawDistributionFloat, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_Distribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::NewProp_MinValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRawDistribution,
		&NewStructOps,
		"RawDistributionFloat",
		sizeof(FRawDistributionFloat),
		alignof(FRawDistributionFloat),
		Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawDistributionFloat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawDistributionFloat"), sizeof(FRawDistributionFloat), Get_Z_Construct_UScriptStruct_FRawDistributionFloat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawDistributionFloat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawDistributionFloat_Hash() { return 3117093293U; }
	struct Z_Construct_UScriptStruct_FFloatDistribution_Statics
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

		struct FFloatDistribution
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatDistribution_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
		{ "ToolTip", "Type-safe floating point distribution." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatDistribution, Table), Z_Construct_UScriptStruct_FDistributionLookupTable, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatDistribution_Statics::NewProp_Table,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"FloatDistribution",
		sizeof(FFloatDistribution),
		alignof(FFloatDistribution),
		Z_Construct_UScriptStruct_FFloatDistribution_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatDistribution_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloatDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FloatDistribution"), sizeof(Z_Construct_UScriptStruct_FFloatDistribution_Statics::FFloatDistribution), Get_Z_Construct_UScriptStruct_FFloatDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloatDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloatDistribution_Hash() { return 315049022U; }
	void UDistributionFloat::StaticRegisterNativesUDistributionFloat()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloat_NoRegister()
	{
		return UDistributionFloat::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloat_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeBaked_MetaData[];
#endif
		static void NewProp_bCanBeBaked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeBaked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistribution,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloat_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Distributions/DistributionFloat.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFStructuredArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
	};
#endif
	void Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_SetBit(void* Obj)
	{
		((UDistributionFloat*)Obj)->bBakedDataSuccesfully = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully = { "bBakedDataSuccesfully", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionFloat), &Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_MetaData[] = {
		{ "Category", "Baked" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloat.h" },
		{ "ToolTip", "Can this variable be baked out to a FRawDistribution? Should be true 99% of the time" },
	};
#endif
	void Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_SetBit(void* Obj)
	{
		((UDistributionFloat*)Obj)->bCanBeBaked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked = { "bCanBeBaked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDistributionFloat), &Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bBakedDataSuccesfully,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloat_Statics::NewProp_bCanBeBaked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloat_Statics::ClassParams = {
		&UDistributionFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionFloat_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDistributionFloat_Statics::PropPointers),
		0,
		0x003030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionFloat, 235138575);
	template<> ENGINE_API UClass* StaticClass<UDistributionFloat>()
	{
		return UDistributionFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloat(Z_Construct_UClass_UDistributionFloat, &UDistributionFloat::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloat);
	IMPLEMENT_FARCHIVE_SERIALIZER(UDistributionFloat)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
