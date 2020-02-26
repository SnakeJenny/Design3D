// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInheritableComponentHandler() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentOverrideRecord();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentKey();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FComponentOverrideRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentOverrideRecord, Z_Construct_UPackage__Script_Engine(), TEXT("ComponentOverrideRecord"), sizeof(FComponentOverrideRecord), Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentOverrideRecord>()
{
	return FComponentOverrideRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentOverrideRecord(FComponentOverrideRecord::StaticStruct, TEXT("/Script/Engine"), TEXT("ComponentOverrideRecord"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFComponentOverrideRecord
{
	FScriptStruct_Engine_StaticRegisterNativesFComponentOverrideRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentOverrideRecord")),new UScriptStruct::TCppStructOps<FComponentOverrideRecord>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFComponentOverrideRecord;
	struct Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentOverrideRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData = { "CookedComponentInstancingData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentOverrideRecord, CookedComponentInstancingData), Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey = { "ComponentKey", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentOverrideRecord, ComponentKey), Z_Construct_UScriptStruct_FComponentKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate = { "ComponentTemplate", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentOverrideRecord, ComponentTemplate), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentOverrideRecord, ComponentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_CookedComponentInstancingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::NewProp_ComponentClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ComponentOverrideRecord",
		sizeof(FComponentOverrideRecord),
		alignof(FComponentOverrideRecord),
		Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentOverrideRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentOverrideRecord"), sizeof(FComponentOverrideRecord), Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentOverrideRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentOverrideRecord_Hash() { return 1294841796U; }
class UScriptStruct* FComponentKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FComponentKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentKey, Z_Construct_UPackage__Script_Engine(), TEXT("ComponentKey"), sizeof(FComponentKey), Get_Z_Construct_UScriptStruct_FComponentKey_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentKey>()
{
	return FComponentKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentKey(FComponentKey::StaticStruct, TEXT("/Script/Engine"), TEXT("ComponentKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFComponentKey
{
	FScriptStruct_Engine_StaticRegisterNativesFComponentKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentKey")),new UScriptStruct::TCppStructOps<FComponentKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFComponentKey;
	struct Z_Construct_UScriptStruct_FComponentKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssociatedGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SCSVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SCSVariableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OwnerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid = { "AssociatedGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentKey, AssociatedGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName = { "SCSVariableName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentKey, SCSVariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass = { "OwnerClass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComponentKey, OwnerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_AssociatedGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_SCSVariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentKey_Statics::NewProp_OwnerClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ComponentKey",
		sizeof(FComponentKey),
		alignof(FComponentKey),
		Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentKey"), sizeof(FComponentKey), Get_Z_Construct_UScriptStruct_FComponentKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentKey_Hash() { return 570450612U; }
	void UInheritableComponentHandler::StaticRegisterNativesUInheritableComponentHandler()
	{
	}
	UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister()
	{
		return UInheritableComponentHandler::StaticClass();
	}
	struct Z_Construct_UClass_UInheritableComponentHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnnecessaryComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnnecessaryComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnnecessaryComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Records;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInheritableComponentHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInheritableComponentHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/InheritableComponentHandler.h" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
		{ "ToolTip", "List of components that were marked unnecessary, need to keep these around so it doesn't regenerate them when a child asks for one" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents = { "UnnecessaryComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInheritableComponentHandler, UnnecessaryComponents), METADATA_PARAMS(Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_Inner = { "UnnecessaryComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/InheritableComponentHandler.h" },
		{ "ToolTip", "All component records" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInheritableComponentHandler, Records), METADATA_PARAMS(Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FComponentOverrideRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_UnnecessaryComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInheritableComponentHandler_Statics::NewProp_Records_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInheritableComponentHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInheritableComponentHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInheritableComponentHandler_Statics::ClassParams = {
		&UInheritableComponentHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInheritableComponentHandler_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInheritableComponentHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInheritableComponentHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInheritableComponentHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInheritableComponentHandler, 1425580445);
	template<> ENGINE_API UClass* StaticClass<UInheritableComponentHandler>()
	{
		return UInheritableComponentHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInheritableComponentHandler(Z_Construct_UClass_UInheritableComponentHandler, &UInheritableComponentHandler::StaticClass, TEXT("/Script/Engine"), TEXT("UInheritableComponentHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInheritableComponentHandler);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInheritableComponentHandler)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
