// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimInstanceProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceProxy() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugItemType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQueuedDrawDebugItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EDrawDebugItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDrawDebugItemType, Z_Construct_UPackage__Script_Engine(), TEXT("EDrawDebugItemType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDrawDebugItemType::Type>()
	{
		return EDrawDebugItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDrawDebugItemType(EDrawDebugItemType_StaticEnum, TEXT("/Script/Engine"), TEXT("EDrawDebugItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDrawDebugItemType_Hash() { return 2792028678U; }
	UEnum* Z_Construct_UEnum_Engine_EDrawDebugItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDrawDebugItemType"), 0, Get_Z_Construct_UEnum_Engine_EDrawDebugItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDrawDebugItemType::DirectionalArrow", (int64)EDrawDebugItemType::DirectionalArrow },
				{ "EDrawDebugItemType::Sphere", (int64)EDrawDebugItemType::Sphere },
				{ "EDrawDebugItemType::Line", (int64)EDrawDebugItemType::Line },
				{ "EDrawDebugItemType::OnScreenMessage", (int64)EDrawDebugItemType::OnScreenMessage },
				{ "EDrawDebugItemType::CoordinateSystem", (int64)EDrawDebugItemType::CoordinateSystem },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDrawDebugItemType",
				"EDrawDebugItemType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceProxy, Z_Construct_UPackage__Script_Engine(), TEXT("AnimInstanceProxy"), sizeof(FAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimInstanceProxy>()
{
	return FAnimInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimInstanceProxy(FAnimInstanceProxy::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimInstanceProxy
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimInstanceProxy")),new UScriptStruct::TCppStructOps<FAnimInstanceProxy>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimInstanceProxy;
	struct Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Native Variables" },
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
		{ "ToolTip", "Proxy object passed around during animation tree update in lieu of a UAnimInstance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimInstanceProxy",
		sizeof(FAnimInstanceProxy),
		alignof(FAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimInstanceProxy"), sizeof(FAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimInstanceProxy_Hash() { return 46949913U; }
class UScriptStruct* FQueuedDrawDebugItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueuedDrawDebugItem, Z_Construct_UPackage__Script_Engine(), TEXT("QueuedDrawDebugItem"), sizeof(FQueuedDrawDebugItem), Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQueuedDrawDebugItem>()
{
	return FQueuedDrawDebugItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQueuedDrawDebugItem(FQueuedDrawDebugItem::StaticStruct, TEXT("/Script/Engine"), TEXT("QueuedDrawDebugItem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFQueuedDrawDebugItem
{
	FScriptStruct_Engine_StaticRegisterNativesFQueuedDrawDebugItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QueuedDrawDebugItem")),new UScriptStruct::TCppStructOps<FQueuedDrawDebugItem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFQueuedDrawDebugItem;
	struct Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistentLines_MetaData[];
#endif
		static void NewProp_bPersistentLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistentLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueuedDrawDebugItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, TextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, LifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_SetBit(void* Obj)
	{
		((FQueuedDrawDebugItem*)Obj)->bPersistentLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines = { "bPersistentLines", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQueuedDrawDebugItem), &Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Segments), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc = { "EndLoc", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, EndLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc = { "StartLoc", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, ItemType), Z_Construct_UEnum_Engine_EDrawDebugItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"QueuedDrawDebugItem",
		sizeof(FQueuedDrawDebugItem),
		alignof(FQueuedDrawDebugItem),
		Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueuedDrawDebugItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QueuedDrawDebugItem"), sizeof(FQueuedDrawDebugItem), Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Hash() { return 1644146577U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
