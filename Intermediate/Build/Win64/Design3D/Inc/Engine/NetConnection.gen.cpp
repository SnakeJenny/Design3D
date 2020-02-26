// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/NetConnection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimulatedClientNetConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimulatedClientNetConnection();
// End Cross Module References
	void UNetConnection::StaticRegisterNativesUNetConnection()
	{
	}
	UClass* Z_Construct_UClass_UNetConnection_NoRegister()
	{
		return UNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_UNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelsToTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelsToTick;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChannelsToTick_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReceiveTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_LastReceiveTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalAck_MetaData[];
#endif
		static void NewProp_InternalAck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InternalAck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPacket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentTemporaries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SentTemporaries;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SentTemporaries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OpenChannels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PackageMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageMapClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PackageMapClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Driver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Driver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/NetConnection.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "The channels that need ticking. This will be a subset of OpenChannels, only including\nchannels that need to process either dormancy or queued bunches. Should be a significant\noptimization over ticking and calling virtual functions on the potentially hundreds of\nOpenChannels every frame." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick = { "ChannelsToTick", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, ChannelsToTick), METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick_Inner = { "ChannelsToTick", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_LastReceiveTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Internal." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_LastReceiveTime = { "LastReceiveTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, LastReceiveTime), METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_LastReceiveTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_LastReceiveTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_PlayerId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Net id of remote player on this connection. Only valid on client connections (server side)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_PlayerId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Maximum packet size." },
	};
#endif
	void Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck_SetBit(void* Obj)
	{
		((UNetConnection*)Obj)->InternalAck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck = { "InternalAck", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNetConnection), &Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_MaxPacket_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_MaxPacket = { "MaxPacket", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, MaxPacket), METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_MaxPacket_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_MaxPacket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_OwningActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Reference to controlling actor (usually PlayerController)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_OwningActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_OwningActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_ViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "The actor that is currently being viewed/controlled by the owning controller" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_ViewTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_ViewTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "This actor is bNetTemporary, which means it should never be replicated after it's initial packet is complete" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries = { "SentTemporaries", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, SentTemporaries), METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries_Inner = { "SentTemporaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels = { "OpenChannels", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, OpenChannels), METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels_Inner = { "OpenChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UChannel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Package map between local and remote. (negotiates net serialization)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMap = { "PackageMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, PackageMap), Z_Construct_UClass_UPackageMap, METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMapClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "The class name for the PackageMap to be loaded" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMapClass = { "PackageMapClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, PackageMapClass), Z_Construct_UClass_UPackageMap, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMapClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMapClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_Driver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "Owning net driver" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, Driver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_Driver_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_Driver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnection_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "child connections for secondary viewports" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetConnection, Children), METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::NewProp_Children_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNetConnection_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UChildConnection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_ChannelsToTick_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_LastReceiveTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_InternalAck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_MaxPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_OwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_ViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_SentTemporaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_OpenChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_PackageMapClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_Driver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetConnection_Statics::NewProp_Children_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetConnection_Statics::ClassParams = {
		&UNetConnection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetConnection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::PropPointers),
		0,
		0x000800ADu,
		METADATA_PARAMS(Z_Construct_UClass_UNetConnection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNetConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetConnection, 845375255);
	template<> ENGINE_API UClass* StaticClass<UNetConnection>()
	{
		return UNetConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetConnection(Z_Construct_UClass_UNetConnection, &UNetConnection::StaticClass, TEXT("/Script/Engine"), TEXT("UNetConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetConnection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNetConnection)
	void USimulatedClientNetConnection::StaticRegisterNativesUSimulatedClientNetConnection()
	{
	}
	UClass* Z_Construct_UClass_USimulatedClientNetConnection_NoRegister()
	{
		return USimulatedClientNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_USimulatedClientNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimulatedClientNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulatedClientNetConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/NetConnection.h" },
		{ "ModuleRelativePath", "Classes/Engine/NetConnection.h" },
		{ "ToolTip", "A fake connection that will absorb traffic and auto ack every packet. Useful for testing scaling. Use net.SimulateConnections command to add at runtime." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimulatedClientNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimulatedClientNetConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimulatedClientNetConnection_Statics::ClassParams = {
		&USimulatedClientNetConnection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_USimulatedClientNetConnection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USimulatedClientNetConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimulatedClientNetConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimulatedClientNetConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimulatedClientNetConnection, 1474184954);
	template<> ENGINE_API UClass* StaticClass<USimulatedClientNetConnection>()
	{
		return USimulatedClientNetConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimulatedClientNetConnection(Z_Construct_UClass_USimulatedClientNetConnection, &USimulatedClientNetConnection::StaticClass, TEXT("/Script/Engine"), TEXT("USimulatedClientNetConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimulatedClientNetConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
