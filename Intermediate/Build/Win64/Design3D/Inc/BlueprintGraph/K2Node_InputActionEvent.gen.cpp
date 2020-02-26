// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_InputActionEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputActionEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputActionEvent_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputActionEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
// End Cross Module References
	void UK2Node_InputActionEvent::StaticRegisterNativesUK2Node_InputActionEvent()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_InputActionEvent_NoRegister()
	{
		return UK2Node_InputActionEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputActionEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideParentBinding_MetaData[];
#endif
		static void NewProp_bOverrideParentBinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideParentBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[];
#endif
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_InputActionEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputActionEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_SetBit(void* Obj)
	{
		((UK2Node_InputActionEvent*)Obj)->bOverrideParentBinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding = { "bOverrideParentBinding", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputActionEvent), &Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((UK2Node_InputActionEvent*)Obj)->bExecuteWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputActionEvent), &Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((UK2Node_InputActionEvent*)Obj)->bConsumeInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputActionEvent), &Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_InputActionEvent, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName = { "InputActionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_InputActionEvent, InputActionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_InputActionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputActionEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputActionEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::ClassParams = {
		&UK2Node_InputActionEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_InputActionEvent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputActionEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_InputActionEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_InputActionEvent, 293407825);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_InputActionEvent>()
	{
		return UK2Node_InputActionEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_InputActionEvent(Z_Construct_UClass_UK2Node_InputActionEvent, &UK2Node_InputActionEvent::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_InputActionEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputActionEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
