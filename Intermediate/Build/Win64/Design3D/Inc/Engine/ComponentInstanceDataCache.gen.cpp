// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/ComponentInstanceDataCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentInstanceDataCache() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData();
// End Cross Module References
	static UEnum* EComponentCreationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EComponentCreationMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EComponentCreationMethod"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EComponentCreationMethod>()
	{
		return EComponentCreationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EComponentCreationMethod(EComponentCreationMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EComponentCreationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EComponentCreationMethod_Hash() { return 785277431U; }
	UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EComponentCreationMethod"), 0, Get_Z_Construct_UEnum_Engine_EComponentCreationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EComponentCreationMethod::Native", (int64)EComponentCreationMethod::Native },
				{ "EComponentCreationMethod::SimpleConstructionScript", (int64)EComponentCreationMethod::SimpleConstructionScript },
				{ "EComponentCreationMethod::UserConstructionScript", (int64)EComponentCreationMethod::UserConstructionScript },
				{ "EComponentCreationMethod::Instance", (int64)EComponentCreationMethod::Instance },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Instance.ToolTip", "A component added to a single Actor instance via the Component section of the Actor's details panel." },
				{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
				{ "Native.ToolTip", "A component that is part of a native class." },
				{ "SimpleConstructionScript.ToolTip", "A component that is created from a template defined in the Components section of the Blueprint." },
				{ "UserConstructionScript.ToolTip", "A dynamically created component, either from the UserConstructionScript or from a Add Component node in a Blueprint event graph." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EComponentCreationMethod",
				"EComponentCreationMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FActorComponentInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActorComponentInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentInstanceData"), sizeof(FActorComponentInstanceData), Get_Z_Construct_UScriptStruct_FActorComponentInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorComponentInstanceData>()
{
	return FActorComponentInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorComponentInstanceData(FActorComponentInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("ActorComponentInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActorComponentInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFActorComponentInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorComponentInstanceData")),new UScriptStruct::TCppStructOps<FActorComponentInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActorComponentInstanceData;
	struct Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReferencedNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReferencedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuplicatedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DuplicatedObjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DuplicatedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SavedProperties;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SavedProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponentTypeSerializedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceComponentTypeSerializedIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponentCreationMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceComponentCreationMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceComponentCreationMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponentTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponentTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Base class for component instance cached data of a particular type." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Referenced names in component instance saved properties" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames = { "ReferencedNames", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, ReferencedNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_Inner = { "ReferencedNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Referenced objects in component instance saved properties" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, ReferencedObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Duplicated objects created when saving component instance properties" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects = { "DuplicatedObjects", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, DuplicatedObjects), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_Inner = { "DuplicatedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties = { "SavedProperties", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, SavedProperties), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_Inner = { "SavedProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "The index of the source component in its owner's serialized array\n      when filtered to just that component type" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex = { "SourceComponentTypeSerializedIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTypeSerializedIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "The method that was used to create the source component" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod = { "SourceComponentCreationMethod", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentCreationMethod), Z_Construct_UEnum_Engine_EComponentCreationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "The template used to create the source component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate = { "SourceComponentTemplate", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActorComponentInstanceData",
		sizeof(FActorComponentInstanceData),
		alignof(FActorComponentInstanceData),
		Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorComponentInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorComponentInstanceData"), sizeof(FActorComponentInstanceData), Get_Z_Construct_UScriptStruct_FActorComponentInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorComponentInstanceData_Hash() { return 1038052161U; }
class UScriptStruct* FActorComponentDuplicatedObjectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData, Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentDuplicatedObjectData"), sizeof(FActorComponentDuplicatedObjectData), Get_Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorComponentDuplicatedObjectData>()
{
	return FActorComponentDuplicatedObjectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorComponentDuplicatedObjectData(FActorComponentDuplicatedObjectData::StaticStruct, TEXT("/Script/Engine"), TEXT("ActorComponentDuplicatedObjectData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFActorComponentDuplicatedObjectData
{
	FScriptStruct_Engine_StaticRegisterNativesFActorComponentDuplicatedObjectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorComponentDuplicatedObjectData")),new UScriptStruct::TCppStructOps<FActorComponentDuplicatedObjectData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFActorComponentDuplicatedObjectData;
	struct Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentDuplicatedObjectData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActorComponentDuplicatedObjectData",
		sizeof(FActorComponentDuplicatedObjectData),
		alignof(FActorComponentDuplicatedObjectData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorComponentDuplicatedObjectData"), sizeof(FActorComponentDuplicatedObjectData), Get_Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Hash() { return 877313363U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
