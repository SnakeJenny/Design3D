// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/LineBatchComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLineBatchComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBatchedPoint();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBatchedLine();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
// End Cross Module References
class UScriptStruct* FBatchedPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBatchedPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchedPoint, Z_Construct_UPackage__Script_Engine(), TEXT("BatchedPoint"), sizeof(FBatchedPoint), Get_Z_Construct_UScriptStruct_FBatchedPoint_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBatchedPoint>()
{
	return FBatchedPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBatchedPoint(FBatchedPoint::StaticStruct, TEXT("/Script/Engine"), TEXT("BatchedPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBatchedPoint
{
	FScriptStruct_Engine_StaticRegisterNativesFBatchedPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BatchedPoint")),new UScriptStruct::TCppStructOps<FBatchedPoint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBatchedPoint;
	struct Z_Construct_UScriptStruct_FBatchedPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchedPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedPoint, DepthPriority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime = { "RemainingLifeTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedPoint, RemainingLifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedPoint, PointSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedPoint, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedPoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBatchedPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_DepthPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_RemainingLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_PointSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedPoint_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBatchedPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BatchedPoint",
		sizeof(FBatchedPoint),
		alignof(FBatchedPoint),
		Z_Construct_UScriptStruct_FBatchedPoint_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedPoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBatchedPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBatchedPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BatchedPoint"), sizeof(FBatchedPoint), Get_Z_Construct_UScriptStruct_FBatchedPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBatchedPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBatchedPoint_Hash() { return 2857609623U; }
class UScriptStruct* FBatchedLine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBatchedLine_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchedLine, Z_Construct_UPackage__Script_Engine(), TEXT("BatchedLine"), sizeof(FBatchedLine), Get_Z_Construct_UScriptStruct_FBatchedLine_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBatchedLine>()
{
	return FBatchedLine::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBatchedLine(FBatchedLine::StaticStruct, TEXT("/Script/Engine"), TEXT("BatchedLine"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBatchedLine
{
	FScriptStruct_Engine_StaticRegisterNativesFBatchedLine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BatchedLine")),new UScriptStruct::TCppStructOps<FBatchedLine>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBatchedLine;
	struct Z_Construct_UScriptStruct_FBatchedLine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBatchedLine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchedLine>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedLine, DepthPriority), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime = { "RemainingLifeTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedLine, RemainingLifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedLine, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedLine, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedLine, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBatchedLine, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBatchedLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_DepthPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_RemainingLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchedLine_Statics::NewProp_Start,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBatchedLine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BatchedLine",
		sizeof(FBatchedLine),
		alignof(FBatchedLine),
		Z_Construct_UScriptStruct_FBatchedLine_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBatchedLine_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchedLine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBatchedLine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBatchedLine_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BatchedLine"), sizeof(FBatchedLine), Get_Z_Construct_UScriptStruct_FBatchedLine_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBatchedLine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBatchedLine_Hash() { return 1932921050U; }
	void ULineBatchComponent::StaticRegisterNativesULineBatchComponent()
	{
	}
	UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister()
	{
		return ULineBatchComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULineBatchComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULineBatchComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULineBatchComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Components/LineBatchComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LineBatchComponent.h" },
		{ "ToolTip", "The line batch component buffers and draws lines (and some other line-based shapes) in a scene.\n    This can be useful for debug drawing, but is not very performant for runtime use." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULineBatchComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULineBatchComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULineBatchComponent_Statics::ClassParams = {
		&ULineBatchComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULineBatchComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULineBatchComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULineBatchComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULineBatchComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULineBatchComponent, 915086573);
	template<> ENGINE_API UClass* StaticClass<ULineBatchComponent>()
	{
		return ULineBatchComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULineBatchComponent(Z_Construct_UClass_ULineBatchComponent, &ULineBatchComponent::StaticClass, TEXT("/Script/Engine"), TEXT("ULineBatchComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULineBatchComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
