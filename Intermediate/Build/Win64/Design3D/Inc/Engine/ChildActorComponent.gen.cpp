// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ChildActorComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChildActorComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChildActorComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChildActorAttachedActorInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UChildActorComponent_SetChildActorClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FChildActorComponentInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChildActorComponentInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("ChildActorComponentInstanceData"), sizeof(FChildActorComponentInstanceData), Get_Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChildActorComponentInstanceData>()
{
	return FChildActorComponentInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChildActorComponentInstanceData(FChildActorComponentInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("ChildActorComponentInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFChildActorComponentInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFChildActorComponentInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChildActorComponentInstanceData")),new UScriptStruct::TCppStructOps<FChildActorComponentInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFChildActorComponentInstanceData;
	struct Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachedActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChildActorName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChildActorComponentInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors = { "AttachedActors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChildActorComponentInstanceData, AttachedActors), METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_Inner = { "AttachedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChildActorAttachedActorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ToolTip", "The name of the spawned child actor so it (attempts to) remain constant across construction script reruns" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName = { "ChildActorName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChildActorComponentInstanceData, ChildActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_AttachedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::NewProp_ChildActorName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"ChildActorComponentInstanceData",
		sizeof(FChildActorComponentInstanceData),
		alignof(FChildActorComponentInstanceData),
		Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChildActorComponentInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChildActorComponentInstanceData"), sizeof(FChildActorComponentInstanceData), Get_Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Hash() { return 2920003232U; }
class UScriptStruct* FChildActorAttachedActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("ChildActorAttachedActorInfo"), sizeof(FChildActorAttachedActorInfo), Get_Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FChildActorAttachedActorInfo>()
{
	return FChildActorAttachedActorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChildActorAttachedActorInfo(FChildActorAttachedActorInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("ChildActorAttachedActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFChildActorAttachedActorInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFChildActorAttachedActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChildActorAttachedActorInfo")),new UScriptStruct::TCppStructOps<FChildActorAttachedActorInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFChildActorAttachedActorInfo;
	struct Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChildActorAttachedActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChildActorAttachedActorInfo, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChildActorAttachedActorInfo, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChildActorAttachedActorInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::NewProp_Actor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ChildActorAttachedActorInfo",
		sizeof(FChildActorAttachedActorInfo),
		alignof(FChildActorAttachedActorInfo),
		Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChildActorAttachedActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChildActorAttachedActorInfo"), sizeof(FChildActorAttachedActorInfo), Get_Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Hash() { return 426249934U; }
	void UChildActorComponent::StaticRegisterNativesUChildActorComponent()
	{
		UClass* Class = UChildActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetChildActorClass", &UChildActorComponent::execSetChildActorClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics
	{
		struct ChildActorComponent_eventSetChildActorClass_Parms
		{
			TSubclassOf<AActor>  InClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChildActorComponent_eventSetChildActorClass_Parms, InClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChildActorComponent" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChildActorComponent, nullptr, "SetChildActorClass", sizeof(ChildActorComponent_eventSetChildActorClass_Parms), Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChildActorComponent_SetChildActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChildActorComponent_SetChildActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChildActorComponent_NoRegister()
	{
		return UChildActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UChildActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActorTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildActorTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChildActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChildActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChildActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChildActorComponent_SetChildActorClass, "SetChildActorClass" }, // 3644738053
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ChildActorComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A component that spawns an Actor when registered, and destroys it when unregistered." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate_MetaData[] = {
		{ "Category", "ChildActorComponent" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ShowInnerProperties", "" },
		{ "ToolTip", "Property to point to the template child actor for details panel purposes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate = { "ChildActorTemplate", nullptr, (EPropertyFlags)0x0040000000230001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChildActorComponent, ChildActorTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ChildActorComponent" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "ToolTip", "The actor that we spawned and own" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor = { "ChildActor", nullptr, (EPropertyFlags)0x0040c00000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChildActorComponent, ChildActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ChildActorComponent" },
		{ "ForceRebuildProperty", "ChildActorTemplate" },
		{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
		{ "OnlyPlaceable", "" },
		{ "ToolTip", "The class of Actor to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass = { "ChildActorClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChildActorComponent, ChildActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChildActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildActorComponent_Statics::NewProp_ChildActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChildActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChildActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChildActorComponent_Statics::ClassParams = {
		&UChildActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChildActorComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChildActorComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChildActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChildActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChildActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChildActorComponent, 4206180227);
	template<> ENGINE_API UClass* StaticClass<UChildActorComponent>()
	{
		return UChildActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChildActorComponent(Z_Construct_UClass_UChildActorComponent, &UChildActorComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UChildActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChildActorComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChildActorComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
