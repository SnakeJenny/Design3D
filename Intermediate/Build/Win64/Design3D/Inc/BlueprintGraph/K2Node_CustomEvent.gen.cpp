// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_CustomEvent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CustomEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_CustomEvent::StaticRegisterNativesUK2Node_CustomEvent()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister()
	{
		return UK2Node_CustomEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CustomEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCallInEditor_MetaData[];
#endif
		static void NewProp_bCallInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallInEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CustomEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CustomEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_CustomEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_CustomEvent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_CustomEvent.h" },
		{ "ToolTip", "Specifies that the event can be triggered in Editor" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_SetBit(void* Obj)
	{
		((UK2Node_CustomEvent*)Obj)->bCallInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor = { "bCallInEditor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK2Node_CustomEvent), &Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_CustomEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CustomEvent_Statics::NewProp_bCallInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CustomEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CustomEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CustomEvent_Statics::ClassParams = {
		&UK2Node_CustomEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_CustomEvent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomEvent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CustomEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_CustomEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CustomEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_CustomEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_CustomEvent, 3436504855);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_CustomEvent>()
	{
		return UK2Node_CustomEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_CustomEvent(Z_Construct_UClass_UK2Node_CustomEvent, &UK2Node_CustomEvent::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_CustomEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CustomEvent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_CustomEvent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
