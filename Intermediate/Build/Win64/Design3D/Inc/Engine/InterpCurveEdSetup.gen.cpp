// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/InterpCurveEdSetup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpCurveEdSetup() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveEdTab();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveEdEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FCurveEdTab::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveEdTab_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveEdTab, Z_Construct_UPackage__Script_Engine(), TEXT("CurveEdTab"), sizeof(FCurveEdTab), Get_Z_Construct_UScriptStruct_FCurveEdTab_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveEdTab>()
{
	return FCurveEdTab::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveEdTab(FCurveEdTab::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveEdTab"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveEdTab
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveEdTab()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurveEdTab")),new UScriptStruct::TCppStructOps<FCurveEdTab>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveEdTab;
	struct Z_Construct_UScriptStruct_FCurveEdTab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewEndOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewEndOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewStartOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewStartOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewEndInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewEndInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewStartInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewStartInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Curves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TabName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveEdTab>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput = { "ViewEndOutput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdTab, ViewEndOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput = { "ViewStartOutput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdTab, ViewStartOutput), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput = { "ViewEndInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdTab, ViewEndInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
		{ "ToolTip", "Remember the view setting for each tab." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput = { "ViewStartInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdTab, ViewStartInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdTab, Curves), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCurveEdEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdTab, TabName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewEndInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_ViewStartInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_Curves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdTab_Statics::NewProp_TabName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveEdTab_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveEdTab",
		sizeof(FCurveEdTab),
		alignof(FCurveEdTab),
		Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdTab_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdTab_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveEdTab()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveEdTab_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveEdTab"), sizeof(FCurveEdTab), Get_Z_Construct_UScriptStruct_FCurveEdTab_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurveEdTab_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveEdTab_Hash() { return 1452035031U; }
class UScriptStruct* FCurveEdEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveEdEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveEdEntry, Z_Construct_UPackage__Script_Engine(), TEXT("CurveEdEntry"), sizeof(FCurveEdEntry), Get_Z_Construct_UScriptStruct_FCurveEdEntry_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveEdEntry>()
{
	return FCurveEdEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveEdEntry(FCurveEdEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveEdEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveEdEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveEdEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurveEdEntry")),new UScriptStruct::TCppStructOps<FCurveEdEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveEdEntry;
	struct Z_Construct_UScriptStruct_FCurveEdEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampHigh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampHigh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampLow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClampLow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFloatingPointColorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bFloatingPointColorCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bColorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bColorCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bHideCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurveColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
		{ "ToolTip", "Information about a particule curve being viewed.\nProperty could be an FInterpCurve, a DistributionFloat or a DistributionVector" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveEdEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh = { "ClampHigh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdEntry, ClampHigh), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow = { "ClampLow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdEntry, ClampLow), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp = { "bClamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdEntry, bClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve = { "bFloatingPointColorCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdEntry, bFloatingPointColorCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve = { "bColorCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdEntry, bColorCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve = { "bHideCurve", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdEntry, bHideCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdEntry, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor = { "CurveColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdEntry, CurveColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject = { "CurveObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurveEdEntry, CurveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampHigh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_ClampLow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bFloatingPointColorCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bColorCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_bHideCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEdEntry_Statics::NewProp_CurveObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveEdEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveEdEntry",
		sizeof(FCurveEdEntry),
		alignof(FCurveEdEntry),
		Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEdEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveEdEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveEdEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveEdEntry"), sizeof(FCurveEdEntry), Get_Z_Construct_UScriptStruct_FCurveEdEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurveEdEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveEdEntry_Hash() { return 3653550562U; }
	void UInterpCurveEdSetup::StaticRegisterNativesUInterpCurveEdSetup()
	{
	}
	UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister()
	{
		return UInterpCurveEdSetup::StaticClass();
	}
	struct Z_Construct_UClass_UInterpCurveEdSetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTab_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveTab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tabs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tabs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tabs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpCurveEdSetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpCurveEdSetup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InterpCurveEdSetup.h" },
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab = { "ActiveTab", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpCurveEdSetup, ActiveTab), METADATA_PARAMS(Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InterpCurveEdSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs = { "Tabs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpCurveEdSetup, Tabs), METADATA_PARAMS(Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_Inner = { "Tabs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCurveEdTab, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_ActiveTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpCurveEdSetup_Statics::NewProp_Tabs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpCurveEdSetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpCurveEdSetup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpCurveEdSetup_Statics::ClassParams = {
		&UInterpCurveEdSetup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpCurveEdSetup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpCurveEdSetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpCurveEdSetup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpCurveEdSetup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpCurveEdSetup, 2014830553);
	template<> ENGINE_API UClass* StaticClass<UInterpCurveEdSetup>()
	{
		return UInterpCurveEdSetup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpCurveEdSetup(Z_Construct_UClass_UInterpCurveEdSetup, &UInterpCurveEdSetup::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpCurveEdSetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpCurveEdSetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
