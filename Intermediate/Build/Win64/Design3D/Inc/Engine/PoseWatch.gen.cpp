// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PoseWatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseWatch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	void UPoseWatch::StaticRegisterNativesUPoseWatch()
	{
	}
	UClass* Z_Construct_UClass_UPoseWatch_NoRegister()
	{
		return UPoseWatch::StaticClass();
	}
	struct Z_Construct_UClass_UPoseWatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseWatchColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseWatchColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseWatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_PoseWatchColour_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_PoseWatchColour = { "PoseWatchColour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseWatch, PoseWatchColour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_PoseWatchColour_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_PoseWatchColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "Node that we are trying to watch" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseWatch, Node), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_PoseWatchColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseWatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatch_Statics::ClassParams = {
		&UPoseWatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseWatch_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseWatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoseWatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoseWatch, 842902844);
	template<> ENGINE_API UClass* StaticClass<UPoseWatch>()
	{
		return UPoseWatch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoseWatch(Z_Construct_UClass_UPoseWatch, &UPoseWatch::StaticClass, TEXT("/Script/Engine"), TEXT("UPoseWatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
