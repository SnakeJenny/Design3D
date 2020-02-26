// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMGEditor/Classes/K2Node_WidgetAnimationEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_WidgetAnimationEvent() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_WidgetAnimationEvent_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_WidgetAnimationEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetAnimationEvent();
// End Cross Module References
	void UK2Node_WidgetAnimationEvent::StaticRegisterNativesUK2Node_WidgetAnimationEvent()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_WidgetAnimationEvent_NoRegister()
	{
		return UK2Node_WidgetAnimationEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceWidgetBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceWidgetBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UserTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationPropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationPropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_WidgetAnimationEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint = { "SourceWidgetBlueprint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_WidgetAnimationEvent, SourceWidgetBlueprint), Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
		{ "ToolTip", "Binds this to a specific user action." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_WidgetAnimationEvent, UserTag), METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
		{ "ToolTip", "Name of property in Blueprint class that pointer to component we want to bind to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName = { "AnimationPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_WidgetAnimationEvent, AnimationPropertyName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_WidgetAnimationEvent.h" },
		{ "ToolTip", "The action to bind to." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK2Node_WidgetAnimationEvent, Action), Z_Construct_UEnum_UMG_EWidgetAnimationEvent, METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_SourceWidgetBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_UserTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_AnimationPropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::NewProp_Action_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_WidgetAnimationEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::ClassParams = {
		&UK2Node_WidgetAnimationEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_WidgetAnimationEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_WidgetAnimationEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_WidgetAnimationEvent, 3011463807);
	template<> UMGEDITOR_API UClass* StaticClass<UK2Node_WidgetAnimationEvent>()
	{
		return UK2Node_WidgetAnimationEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_WidgetAnimationEvent(Z_Construct_UClass_UK2Node_WidgetAnimationEvent, &UK2Node_WidgetAnimationEvent::StaticClass, TEXT("/Script/UMGEditor"), TEXT("UK2Node_WidgetAnimationEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_WidgetAnimationEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
