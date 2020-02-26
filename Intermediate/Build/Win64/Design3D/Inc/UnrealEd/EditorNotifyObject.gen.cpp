// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Animation/EditorNotifyObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorNotifyObject() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorNotifyObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorNotifyObject();
	UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
// End Cross Module References
	void UEditorNotifyObject::StaticRegisterNativesUEditorNotifyObject()
	{
	}
	UClass* Z_Construct_UClass_UEditorNotifyObject_NoRegister()
	{
		return UEditorNotifyObject::StaticClass();
	}
	struct Z_Construct_UClass_UEditorNotifyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorNotifyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorAnimBaseObj,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorNotifyObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/EditorNotifyObject.h" },
		{ "ModuleRelativePath", "Classes/Animation/EditorNotifyObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorNotifyObject_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Classes/Animation/EditorNotifyObject.h" },
		{ "ToolTip", "The notify event to modify" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorNotifyObject_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorNotifyObject, Event), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UEditorNotifyObject_Statics::NewProp_Event_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorNotifyObject_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorNotifyObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorNotifyObject_Statics::NewProp_Event,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorNotifyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorNotifyObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorNotifyObject_Statics::ClassParams = {
		&UEditorNotifyObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorNotifyObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorNotifyObject_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorNotifyObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorNotifyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorNotifyObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorNotifyObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorNotifyObject, 2432685156);
	template<> UNREALED_API UClass* StaticClass<UEditorNotifyObject>()
	{
		return UEditorNotifyObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorNotifyObject(Z_Construct_UClass_UEditorNotifyObject, &UEditorNotifyObject::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorNotifyObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorNotifyObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
