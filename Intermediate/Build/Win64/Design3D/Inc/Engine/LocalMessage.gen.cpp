// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/LocalMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalMessage() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClientReceiveData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FClientReceiveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClientReceiveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientReceiveData, Z_Construct_UPackage__Script_Engine(), TEXT("ClientReceiveData"), sizeof(FClientReceiveData), Get_Z_Construct_UScriptStruct_FClientReceiveData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClientReceiveData>()
{
	return FClientReceiveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientReceiveData(FClientReceiveData::StaticStruct, TEXT("/Script/Engine"), TEXT("ClientReceiveData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClientReceiveData
{
	FScriptStruct_Engine_StaticRegisterNativesFClientReceiveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClientReceiveData")),new UScriptStruct::TCppStructOps<FClientReceiveData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClientReceiveData;
	struct Z_Construct_UScriptStruct_FClientReceiveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelatedPlayerState_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelatedPlayerState_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelatedPlayerState_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelatedPlayerState_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MessageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
		{ "ToolTip", "Handles the many pieces of data passed into Client Receive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientReceiveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReceiveData, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2 = { "RelatedPlayerState_2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReceiveData, RelatedPlayerState_2), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1 = { "RelatedPlayerState_1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReceiveData, RelatedPlayerState_1), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReceiveData, MessageString), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex = { "MessageIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReceiveData, MessageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReceiveData, MessageType), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC = { "LocalPC", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReceiveData, LocalPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientReceiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClientReceiveData",
		sizeof(FClientReceiveData),
		alignof(FClientReceiveData),
		Z_Construct_UScriptStruct_FClientReceiveData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientReceiveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientReceiveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientReceiveData"), sizeof(FClientReceiveData), Get_Z_Construct_UScriptStruct_FClientReceiveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientReceiveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientReceiveData_Hash() { return 718882265U; }
	void ULocalMessage::StaticRegisterNativesULocalMessage()
	{
	}
	UClass* Z_Construct_UClass_ULocalMessage_NoRegister()
	{
		return ULocalMessage::StaticClass();
	}
	struct Z_Construct_UClass_ULocalMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/LocalMessage.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalMessage_Statics::ClassParams = {
		&ULocalMessage::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalMessage, 927427845);
	template<> ENGINE_API UClass* StaticClass<ULocalMessage>()
	{
		return ULocalMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalMessage(Z_Construct_UClass_ULocalMessage, &ULocalMessage::StaticClass, TEXT("/Script/Engine"), TEXT("ULocalMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
