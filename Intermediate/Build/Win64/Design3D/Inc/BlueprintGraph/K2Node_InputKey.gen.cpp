// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_InputKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputKey() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputKey_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputKey();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister();
// End Cross Module References
	void UK2Node_InputKey::StaticRegisterNativesUK2Node_InputKey()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_InputKey_NoRegister()
	{
		return UK2Node_InputKey::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommand_MetaData[];
#endif
		static void NewProp_bCommand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[];
#endif
		static void NewProp_bShift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[];
#endif
		static void NewProp_bAlt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bControl_MetaData[];
#endif
		static void NewProp_bControl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bControl;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_InputKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputKey_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputKey.h" },
		{ "ModuleRelativePath", "Classes/K2Node_InputKey.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bCommand_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Classes/K2Node_InputKey.h" },
		{ "ToolTip", "Does this binding require the windows key on PC or the control key on Mac to be held" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bCommand_SetBit(void* Obj)
	{
		((UK2Node_InputKey*)Obj)->bCommand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bCommand = { "bCommand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputKey), &Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bCommand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bCommand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bShift_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Classes/K2Node_InputKey.h" },
		{ "ToolTip", "Does this binding require the shift key to be held" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bShift_SetBit(void* Obj)
	{
		((UK2Node_InputKey*)Obj)->bShift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputKey), &Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bShift_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bAlt_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Classes/K2Node_InputKey.h" },
		{ "ToolTip", "Does this binding require the alt key to be held" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bAlt_SetBit(void* Obj)
	{
		((UK2Node_InputKey*)Obj)->bAlt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputKey), &Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bAlt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bAlt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bControl_MetaData[] = {
		{ "Category", "Modifier" },
		{ "ModuleRelativePath", "Classes/K2Node_InputKey.h" },
		{ "ToolTip", "Does this binding require the control key on PC or the command key on Mac to be held" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bControl_SetBit(void* Obj)
	{
		((UK2Node_InputKey*)Obj)->bControl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bControl = { "bControl", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputKey), &Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bOverrideParentBinding_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/K2Node_InputKey.h" },
		{ "ToolTip", "Should any bindings to this event in parent classes be removed" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bOverrideParentBinding_SetBit(void* Obj)
	{
		((UK2Node_InputKey*)Obj)->bOverrideParentBinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bOverrideParentBinding = { "bOverrideParentBinding", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputKey), &Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bOverrideParentBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bOverrideParentBinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bOverrideParentBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/K2Node_InputKey.h" },
		{ "ToolTip", "Should the binding execute even when the game is paused" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((UK2Node_InputKey*)Obj)->bExecuteWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputKey), &Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bExecuteWhenPaused_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/K2Node_InputKey.h" },
		{ "ToolTip", "Prevents actors with lower priority from handling this input" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((UK2Node_InputKey*)Obj)->bConsumeInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_InputKey), &Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bConsumeInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/K2Node_InputKey.h" },
		{ "ToolTip", "The key that is bound" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_InputKey, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_InputKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_InputKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_InputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bAlt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bOverrideParentBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bExecuteWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_bConsumeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputKey_Statics::NewProp_InputKey,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_InputKey_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_InputKey, IK2Node_EventNodeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputKey>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputKey_Statics::ClassParams = {
		&UK2Node_InputKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_InputKey_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputKey_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputKey()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_InputKey_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_InputKey, 2864165689);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_InputKey>()
	{
		return UK2Node_InputKey::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_InputKey(Z_Construct_UClass_UK2Node_InputKey, &UK2Node_InputKey::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_InputKey"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputKey);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
