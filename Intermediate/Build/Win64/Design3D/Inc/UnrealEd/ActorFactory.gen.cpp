// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/ActorFactories/ActorFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UActorFactory::StaticRegisterNativesUActorFactory()
	{
	}
	UClass* Z_Construct_UClass_UActorFactory_NoRegister()
	{
		return UActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSurfaceOrientation_MetaData[];
#endif
		static void NewProp_bUseSurfaceOrientation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSurfaceOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInEditorQuickMenu_MetaData[];
#endif
		static void NewProp_bShowInEditorQuickMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInEditorQuickMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewActorClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewActorClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MenuPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactory.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "Translation applied to the spawn position." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset = { "SpawnPositionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorFactory, SpawnPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
	};
#endif
	void Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_SetBit(void* Obj)
	{
		((UActorFactory*)Obj)->bUseSurfaceOrientation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation = { "bUseSurfaceOrientation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UActorFactory), &Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "Whether to appear in the editor add actor quick menu" },
	};
#endif
	void Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_SetBit(void* Obj)
	{
		((UActorFactory*)Obj)->bShowInEditorQuickMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu = { "bShowInEditorQuickMenu", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UActorFactory), &Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "AActor  subclass this ActorFactory creates." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass = { "NewActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorFactory, NewActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "name of actor subclass this actorfactory creates - dynamically loaded.  Overrides NewActorClass." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName = { "NewActorClassName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorFactory, NewActorClassName), METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "Indicates how far up the menu item should be. The higher the number, the higher up the list." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority = { "MenuPriority", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorFactory, MenuPriority), METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactory.h" },
		{ "ToolTip", "Name used as basis for 'New Actor' menu." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorFactory, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_SpawnPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_bUseSurfaceOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_bShowInEditorQuickMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_NewActorClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_MenuPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorFactory_Statics::NewProp_DisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorFactory_Statics::ClassParams = {
		&UActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorFactory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::PropPointers),
		0,
		0x001030ADu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorFactory, 1899488970);
	template<> UNREALED_API UClass* StaticClass<UActorFactory>()
	{
		return UActorFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorFactory(Z_Construct_UClass_UActorFactory, &UActorFactory::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UActorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
