// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_Timeline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Timeline() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Timeline_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Timeline();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UK2Node_Timeline::StaticRegisterNativesUK2Node_Timeline()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_Timeline_NoRegister()
	{
		return UK2Node_Timeline::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Timeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimelineGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TimelineName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Timeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Timeline.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "If the timeline should ignore global time dilation" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UK2Node_Timeline*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Timeline), &Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "If the timeline is set to replicate" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_SetBit(void* Obj)
	{
		((UK2Node_Timeline*)Obj)->bReplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated = { "bReplicated", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Timeline), &Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "If the timeline is set to loop" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UK2Node_Timeline*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Timeline), &Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "Unique ID for the template we use, required to indentify the timeline after a paste" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid = { "TimelineGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Timeline, TimelineGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "If the timeline is set to autoplay" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UK2Node_Timeline*)Obj)->bAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Timeline), &Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Timeline.h" },
		{ "ToolTip", "The name of the timeline. Used to name ONLY the member variable (Component). To obtain the name of timeline template use UTimelineTemplate::TimelineVariableNameToTemplateName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName = { "TimelineName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Timeline, TimelineName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Timeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bIgnoreTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bReplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Timeline_Statics::NewProp_TimelineName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Timeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Timeline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Timeline_Statics::ClassParams = {
		&UK2Node_Timeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Timeline_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Timeline_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Timeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Timeline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_Timeline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_Timeline, 1481137927);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Timeline>()
	{
		return UK2Node_Timeline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_Timeline(Z_Construct_UClass_UK2Node_Timeline, &UK2Node_Timeline::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_Timeline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Timeline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
