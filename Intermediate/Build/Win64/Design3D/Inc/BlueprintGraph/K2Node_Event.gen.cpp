// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_Event.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_Event() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister();
// End Cross Module References
	void UK2Node_Event::StaticRegisterNativesUK2Node_Event()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_Event_NoRegister()
	{
		return UK2Node_Event::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_Event_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FunctionFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomFunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CustomFunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInternalEvent_MetaData[];
#endif
		static void NewProp_bInternalEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInternalEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFunction_MetaData[];
#endif
		static void NewProp_bOverrideFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventSignatureClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EventSignatureClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventSignatureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventSignatureName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_Event_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_EditablePinBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_Event.h" },
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "Additional function flags to apply to this function" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags = { "FunctionFlags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Event, FunctionFlags), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "If this is not an override, allow user to specify a name for the function created by this entry point" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName = { "CustomFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Event, CustomFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "If true, this event is internal machinery, and should not be marked BlueprintCallable" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_SetBit(void* Obj)
	{
		((UK2Node_Event*)Obj)->bInternalEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent = { "bInternalEvent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Event), &Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "If true, we are actually overriding this function, not making a new event with a signature that matches" },
	};
#endif
	void Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_SetBit(void* Obj)
	{
		((UK2Node_Event*)Obj)->bOverrideFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction = { "bOverrideFunction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UK2Node_Event), &Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "Reference for the function this event is linked to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Event, EventReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "Class that the function signature is from." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass = { "EventSignatureClass", nullptr, (EPropertyFlags)0x0014000020000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Event, EventSignatureClass_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_Event.h" },
		{ "ToolTip", "Name of function signature that this event implements" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName = { "EventSignatureName", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_Event, EventSignatureName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_Event_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_FunctionFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_CustomFunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bInternalEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_bOverrideFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_Event_Statics::NewProp_EventSignatureName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_Event_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_Event, IK2Node_EventNodeInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_Event_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_Event>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_Event_Statics::ClassParams = {
		&UK2Node_Event::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_Event_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_Event_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_Event_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_Event()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_Event_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_Event, 3163185784);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_Event>()
	{
		return UK2Node_Event::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_Event(Z_Construct_UClass_UK2Node_Event, &UK2Node_Event::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_Event"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_Event);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_Event)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
