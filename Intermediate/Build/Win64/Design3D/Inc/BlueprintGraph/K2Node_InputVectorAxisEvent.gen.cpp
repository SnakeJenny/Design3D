// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_InputVectorAxisEvent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputVectorAxisEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputVectorAxisEvent_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputVectorAxisEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputAxisKeyEvent();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_InputVectorAxisEvent::StaticRegisterNativesUK2Node_InputVectorAxisEvent()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_InputVectorAxisEvent_NoRegister()
	{
		return UK2Node_InputVectorAxisEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_InputAxisKeyEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputVectorAxisEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_InputVectorAxisEvent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputVectorAxisEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::ClassParams = {
		&UK2Node_InputVectorAxisEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputVectorAxisEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_InputVectorAxisEvent, 391786276);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_InputVectorAxisEvent>()
	{
		return UK2Node_InputVectorAxisEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_InputVectorAxisEvent(Z_Construct_UClass_UK2Node_InputVectorAxisEvent, &UK2Node_InputVectorAxisEvent::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_InputVectorAxisEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputVectorAxisEvent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_InputVectorAxisEvent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
