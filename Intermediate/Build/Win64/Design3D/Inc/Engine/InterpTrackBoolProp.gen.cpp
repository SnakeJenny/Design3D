// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackBoolProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackBoolProp() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoolTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackBoolProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackBoolProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
class UScriptStruct* FBoolTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoolTrackKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("BoolTrackKey"), sizeof(FBoolTrackKey), Get_Z_Construct_UScriptStruct_FBoolTrackKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoolTrackKey>()
{
	return FBoolTrackKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoolTrackKey(FBoolTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("BoolTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoolTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFBoolTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoolTrackKey")),new UScriptStruct::TCppStructOps<FBoolTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoolTrackKey;
	struct Z_Construct_UScriptStruct_FBoolTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
		{ "ToolTip", "Information for one event in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "BoolTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FBoolTrackKey*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBoolTrackKey), &Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoolTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoolTrackKey",
		sizeof(FBoolTrackKey),
		alignof(FBoolTrackKey),
		Z_Construct_UScriptStruct_FBoolTrackKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoolTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoolTrackKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoolTrackKey"), sizeof(FBoolTrackKey), Get_Z_Construct_UScriptStruct_FBoolTrackKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoolTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoolTrackKey_Hash() { return 3743705710U; }
	void UInterpTrackBoolProp::StaticRegisterNativesUInterpTrackBoolProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackBoolProp_NoRegister()
	{
		return UInterpTrackBoolProp::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackBoolProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoolTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolTrack_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackBoolProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackBoolProp_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Bool Property Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackBoolProp.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "InterpTrackBoolProp" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
		{ "ToolTip", "Name of property in Group  AActor  which this track will modify over time." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackBoolProp, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
		{ "ToolTip", "Array of booleans to set." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack = { "BoolTrack", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackBoolProp, BoolTrack), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_Inner = { "BoolTrack", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoolTrackKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackBoolProp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackBoolProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackBoolProp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackBoolProp_Statics::ClassParams = {
		&UInterpTrackBoolProp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackBoolProp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpTrackBoolProp_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackBoolProp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackBoolProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackBoolProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackBoolProp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackBoolProp, 3437018025);
	template<> ENGINE_API UClass* StaticClass<UInterpTrackBoolProp>()
	{
		return UInterpTrackBoolProp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackBoolProp(Z_Construct_UClass_UInterpTrackBoolProp, &UInterpTrackBoolProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackBoolProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackBoolProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
