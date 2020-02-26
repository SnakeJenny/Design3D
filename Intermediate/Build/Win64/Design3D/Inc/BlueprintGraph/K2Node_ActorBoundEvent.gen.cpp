// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Classes/K2Node_ActorBoundEvent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_ActorBoundEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ActorBoundEvent_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ActorBoundEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UK2Node_ActorBoundEvent::StaticRegisterNativesUK2Node_ActorBoundEvent()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_ActorBoundEvent_NoRegister()
	{
		return UK2Node_ActorBoundEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegateOwnerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DelegateOwnerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegatePropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DelegatePropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_ActorBoundEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_ActorBoundEvent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_ActorBoundEvent.h" },
		{ "ToolTip", "The event that this event is bound to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner = { "EventOwner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_ActorBoundEvent, EventOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_ActorBoundEvent.h" },
		{ "ToolTip", "Delegate property's owner class that this event is associated with" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass = { "DelegateOwnerClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_ActorBoundEvent, DelegateOwnerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_ActorBoundEvent.h" },
		{ "ToolTip", "Delegate property name that this event is associated with" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName = { "DelegatePropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_ActorBoundEvent, DelegatePropertyName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_EventOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegateOwnerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::NewProp_DelegatePropertyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_ActorBoundEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::ClassParams = {
		&UK2Node_ActorBoundEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_ActorBoundEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_ActorBoundEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_ActorBoundEvent, 915045641);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_ActorBoundEvent>()
	{
		return UK2Node_ActorBoundEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_ActorBoundEvent(Z_Construct_UClass_UK2Node_ActorBoundEvent, &UK2Node_ActorBoundEvent::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UK2Node_ActorBoundEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_ActorBoundEvent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_ActorBoundEvent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
