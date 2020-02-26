// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/EditorWorldExtension.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorWorldExtension() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorWorldExtensionActorData();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtension_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtension();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionCollection_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionCollection();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionManager_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionManager();
// End Cross Module References
class UScriptStruct* FEditorWorldExtensionActorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorWorldExtensionActorData"), sizeof(FEditorWorldExtensionActorData), Get_Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorWorldExtensionActorData>()
{
	return FEditorWorldExtensionActorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorWorldExtensionActorData(FEditorWorldExtensionActorData::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorWorldExtensionActorData"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorWorldExtensionActorData
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorWorldExtensionActorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorWorldExtensionActorData")),new UScriptStruct::TCppStructOps<FEditorWorldExtensionActorData>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorWorldExtensionActorData;
	struct Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidForPIE_MetaData[];
#endif
		static void NewProp_bValidForPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidForPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorWorldExtensionActorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_SetBit(void* Obj)
	{
		((FEditorWorldExtensionActorData*)Obj)->bValidForPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE = { "bValidForPIE", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEditorWorldExtensionActorData), &Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorWorldExtensionActorData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_bValidForPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::NewProp_Actor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorWorldExtensionActorData",
		sizeof(FEditorWorldExtensionActorData),
		alignof(FEditorWorldExtensionActorData),
		Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorWorldExtensionActorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorWorldExtensionActorData"), sizeof(FEditorWorldExtensionActorData), Get_Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorWorldExtensionActorData_Hash() { return 9072048U; }
	void UEditorWorldExtension::StaticRegisterNativesUEditorWorldExtension()
	{
	}
	UClass* Z_Construct_UClass_UEditorWorldExtension_NoRegister()
	{
		return UEditorWorldExtension::StaticClass();
	}
	struct Z_Construct_UClass_UEditorWorldExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtensionActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtensionActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtensionActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorWorldExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtension_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorWorldExtension.h" },
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors = { "ExtensionActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorWorldExtension, ExtensionActors), METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_Inner = { "ExtensionActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorWorldExtensionActorData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorWorldExtension_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWorldExtension_Statics::NewProp_ExtensionActors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorWorldExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorWorldExtension>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorWorldExtension_Statics::ClassParams = {
		&UEditorWorldExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorWorldExtension_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtension_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtension_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorWorldExtension()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorWorldExtension_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorWorldExtension, 1817909429);
	template<> UNREALED_API UClass* StaticClass<UEditorWorldExtension>()
	{
		return UEditorWorldExtension::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorWorldExtension(Z_Construct_UClass_UEditorWorldExtension, &UEditorWorldExtension::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorWorldExtension"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorWorldExtension);
	void UEditorWorldExtensionCollection::StaticRegisterNativesUEditorWorldExtensionCollection()
	{
	}
	UClass* Z_Construct_UClass_UEditorWorldExtensionCollection_NoRegister()
	{
		return UEditorWorldExtensionCollection::StaticClass();
	}
	struct Z_Construct_UClass_UEditorWorldExtensionCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorWorldExtension.h" },
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
		{ "ToolTip", "Holds a collection of UEditorExtension" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorWorldExtensionCollection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::ClassParams = {
		&UEditorWorldExtensionCollection::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorWorldExtensionCollection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorWorldExtensionCollection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorWorldExtensionCollection, 873999753);
	template<> UNREALED_API UClass* StaticClass<UEditorWorldExtensionCollection>()
	{
		return UEditorWorldExtensionCollection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorWorldExtensionCollection(Z_Construct_UClass_UEditorWorldExtensionCollection, &UEditorWorldExtensionCollection::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorWorldExtensionCollection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorWorldExtensionCollection);
	void UEditorWorldExtensionManager::StaticRegisterNativesUEditorWorldExtensionManager()
	{
	}
	UClass* Z_Construct_UClass_UEditorWorldExtensionManager_NoRegister()
	{
		return UEditorWorldExtensionManager::StaticClass();
	}
	struct Z_Construct_UClass_UEditorWorldExtensionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorWorldExtensionCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorWorldExtensionCollection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWorldExtensionCollection_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorWorldExtensionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtensionManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorWorldExtension.h" },
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
		{ "ToolTip", "Holds a map of extension collections paired with worlds" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorWorldExtension.h" },
		{ "ToolTip", "Map of all the editor world maps" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection = { "EditorWorldExtensionCollection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorWorldExtensionManager, EditorWorldExtensionCollection), METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_Inner = { "EditorWorldExtensionCollection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEditorWorldExtensionCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorWorldExtensionManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorWorldExtensionManager_Statics::NewProp_EditorWorldExtensionCollection_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorWorldExtensionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorWorldExtensionManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorWorldExtensionManager_Statics::ClassParams = {
		&UEditorWorldExtensionManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorWorldExtensionManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorWorldExtensionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorWorldExtensionManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorWorldExtensionManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorWorldExtensionManager, 3411750165);
	template<> UNREALED_API UClass* StaticClass<UEditorWorldExtensionManager>()
	{
		return UEditorWorldExtensionManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorWorldExtensionManager(Z_Construct_UClass_UEditorWorldExtensionManager, &UEditorWorldExtensionManager::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorWorldExtensionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorWorldExtensionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
