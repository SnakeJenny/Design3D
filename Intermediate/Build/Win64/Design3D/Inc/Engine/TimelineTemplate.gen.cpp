// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TimelineTemplate.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineTemplate() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTPropertyTrack();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode();
// End Cross Module References
class UScriptStruct* FTTLinearColorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTLinearColorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTLinearColorTrack"), sizeof(FTTLinearColorTrack), Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTLinearColorTrack>()
{
	return FTTLinearColorTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTLinearColorTrack(FTTLinearColorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTLinearColorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTLinearColorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTLinearColorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTLinearColorTrack")),new UScriptStruct::TCppStructOps<FTTLinearColorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTLinearColorTrack;
	struct Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveLinearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveLinearColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one color interpolation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTLinearColorTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define color value over time" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor = { "CurveLinearColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTLinearColorTrack, CurveLinearColor), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTPropertyTrack,
		&NewStructOps,
		"TTLinearColorTrack",
		sizeof(FTTLinearColorTrack),
		alignof(FTTLinearColorTrack),
		Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTLinearColorTrack"), sizeof(FTTLinearColorTrack), Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_Hash() { return 1094262841U; }
class UScriptStruct* FTTVectorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTVectorTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTVectorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTVectorTrack"), sizeof(FTTVectorTrack), Get_Z_Construct_UScriptStruct_FTTVectorTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTVectorTrack>()
{
	return FTTVectorTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTVectorTrack(FTTVectorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTVectorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTVectorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTVectorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTVectorTrack")),new UScriptStruct::TCppStructOps<FTTVectorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTVectorTrack;
	struct Z_Construct_UScriptStruct_FTTVectorTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one vector interpolation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTVectorTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define vector value over time" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector = { "CurveVector", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTVectorTrack, CurveVector), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTVectorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTPropertyTrack,
		&NewStructOps,
		"TTVectorTrack",
		sizeof(FTTVectorTrack),
		alignof(FTTVectorTrack),
		Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTVectorTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTVectorTrack"), sizeof(FTTVectorTrack), Get_Z_Construct_UScriptStruct_FTTVectorTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTVectorTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTVectorTrack_Hash() { return 3203835501U; }
class UScriptStruct* FTTFloatTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTFloatTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTFloatTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTFloatTrack"), sizeof(FTTFloatTrack), Get_Z_Construct_UScriptStruct_FTTFloatTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTFloatTrack>()
{
	return FTTFloatTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTFloatTrack(FTTFloatTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTFloatTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTFloatTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTFloatTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTFloatTrack")),new UScriptStruct::TCppStructOps<FTTFloatTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTFloatTrack;
	struct Z_Construct_UScriptStruct_FTTFloatTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one float interpolation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTFloatTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define float value over time" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTFloatTrack, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTFloatTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTPropertyTrack,
		&NewStructOps,
		"TTFloatTrack",
		sizeof(FTTFloatTrack),
		alignof(FTTFloatTrack),
		Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTFloatTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTFloatTrack"), sizeof(FTTFloatTrack), Get_Z_Construct_UScriptStruct_FTTFloatTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTFloatTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTFloatTrack_Hash() { return 3025327330U; }
class UScriptStruct* FTTPropertyTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTPropertyTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTPropertyTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTPropertyTrack"), sizeof(FTTPropertyTrack), Get_Z_Construct_UScriptStruct_FTTPropertyTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTPropertyTrack>()
{
	return FTTPropertyTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTPropertyTrack(FTTPropertyTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTPropertyTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTPropertyTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTPropertyTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTPropertyTrack")),new UScriptStruct::TCppStructOps<FTTPropertyTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTPropertyTrack;
	struct Z_Construct_UScriptStruct_FTTPropertyTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTPropertyTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTPropertyTrack, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTTrackBase,
		&NewStructOps,
		"TTPropertyTrack",
		sizeof(FTTPropertyTrack),
		alignof(FTTPropertyTrack),
		Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTPropertyTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTPropertyTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTPropertyTrack"), sizeof(FTTPropertyTrack), Get_Z_Construct_UScriptStruct_FTTPropertyTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTPropertyTrack_Hash() { return 1547545238U; }
class UScriptStruct* FTTEventTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTEventTrack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTEventTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTEventTrack"), sizeof(FTTEventTrack), Get_Z_Construct_UScriptStruct_FTTEventTrack_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTEventTrack>()
{
	return FTTEventTrack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTEventTrack(FTTEventTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTEventTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTEventTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTEventTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTEventTrack")),new UScriptStruct::TCppStructOps<FTTEventTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTEventTrack;
	struct Z_Construct_UScriptStruct_FTTEventTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveKeys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one event track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTEventTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to store keys" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys = { "CurveKeys", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTEventTrack, CurveKeys), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTEventTrack, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTTrackBase,
		&NewStructOps,
		"TTEventTrack",
		sizeof(FTTEventTrack),
		alignof(FTTEventTrack),
		Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTEventTrack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTEventTrack"), sizeof(FTTEventTrack), Get_Z_Construct_UScriptStruct_FTTEventTrack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTEventTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTEventTrack_Hash() { return 3414171249U; }
class UScriptStruct* FTTTrackBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTTrackBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTTrackBase, Z_Construct_UPackage__Script_Engine(), TEXT("TTTrackBase"), sizeof(FTTTrackBase), Get_Z_Construct_UScriptStruct_FTTTrackBase_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTTrackBase>()
{
	return FTTTrackBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTTrackBase(FTTTrackBase::StaticStruct, TEXT("/Script/Engine"), TEXT("TTTrackBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTTrackBase
{
	FScriptStruct_Engine_StaticRegisterNativesFTTTrackBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTTrackBase")),new UScriptStruct::TCppStructOps<FTTTrackBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTTrackBase;
	struct Z_Construct_UScriptStruct_FTTTrackBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExternalCurve_MetaData[];
#endif
		static void NewProp_bIsExternalCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExternalCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTTrackBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Flag to identify internal/external curve" },
	};
#endif
	void Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_SetBit(void* Obj)
	{
		((FTTTrackBase*)Obj)->bIsExternalCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve = { "bIsExternalCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTTTrackBase), &Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Name of this track" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTTTrackBase, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TTTrackBase",
		sizeof(FTTTrackBase),
		alignof(FTTTrackBase),
		Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTTrackBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTTrackBase"), sizeof(FTTTrackBase), Get_Z_Construct_UScriptStruct_FTTTrackBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTTrackBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTTrackBase_Hash() { return 1276147633U; }
	void UTimelineTemplate::StaticRegisterNativesUTimelineTemplate()
	{
	}
	UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister()
	{
		return UTimelineTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UTimelineTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FinishedFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UpdateFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionPropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DirectionPropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimelineGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinearColorTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidatedAsWired_MetaData[];
#endif
		static void NewProp_bValidatedAsWired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidatedAsWired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicated_MetaData[];
#endif
		static void NewProp_bReplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LengthMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimelineTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TimelineTemplate.h" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName = { "FinishedFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, FinishedFunctionName), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName = { "UpdateFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, UpdateFunctionName), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName = { "DirectionPropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, DirectionPropertyName), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, VariableName), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid = { "TimelineGuid", nullptr, (EPropertyFlags)0x0010000000200000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, TimelineGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Metadata information for this timeline" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray = { "MetaDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, MetaDataArray), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_Inner = { "MetaDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of linear color interpolation tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks = { "LinearColorTracks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, LinearColorTracks), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_Inner = { "LinearColorTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTTLinearColorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of vector interpolation tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks = { "VectorTracks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, VectorTracks), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_Inner = { "VectorTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTTVectorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of float interpolation tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks = { "FloatTracks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, FloatTracks), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_Inner = { "FloatTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTTFloatTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of event tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks = { "EventTracks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, EventTracks), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_Inner = { "EventTracks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTTEventTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to ignore global time dilation" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Compiler Validated As Wired up" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bValidatedAsWired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired = { "bValidatedAsWired", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to loop" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bReplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated = { "bReplicated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to loop" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to auto-play" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "How we want the timeline to determine its own length (e.g. specified length, last keyframe)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode = { "LengthMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, LengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Length of this timeline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimelineTemplate, TimelineLength), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimelineTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimelineTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimelineTemplate_Statics::ClassParams = {
		&UTimelineTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimelineTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimelineTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimelineTemplate, 4229924477);
	template<> ENGINE_API UClass* StaticClass<UTimelineTemplate>()
	{
		return UTimelineTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimelineTemplate(Z_Construct_UClass_UTimelineTemplate, &UTimelineTemplate::StaticClass, TEXT("/Script/Engine"), TEXT("UTimelineTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineTemplate);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTimelineTemplate)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
