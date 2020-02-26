// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/StaticMeshSocket.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshSocket() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UStaticMeshSocket::StaticRegisterNativesUStaticMeshSocket()
	{
	}
	UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister()
	{
		return UStaticMeshSocket::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSocketCreatedAtImport_MetaData[];
#endif
		static void NewProp_bSocketCreatedAtImport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSocketCreatedAtImport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewStaticMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Actor" },
		{ "IncludePath", "Engine/StaticMeshSocket.h" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
		{ "ToolTip", "Weather the socket was imported with the asset or create in the editor. Importer will remove/modify only imported socket and will not touch any editor created socket." },
	};
#endif
	void Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_SetBit(void* Obj)
	{
		((UStaticMeshSocket*)Obj)->bSocketCreatedAtImport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport = { "bSocketCreatedAtImport", nullptr, (EPropertyFlags)0x0010040800020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStaticMeshSocket), &Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh = { "PreviewStaticMesh", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSocket, PreviewStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSocket, Tag), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSocket, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSocket, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSocket, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "StaticMeshSocket" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
		{ "ToolTip", "Defines a named attachment location on the UStaticMesh.\nThese are set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the StaticMeshComponent.\nThe Outer of a StaticMeshSocket should always be the UStaticMesh." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStaticMeshSocket, SocketName), METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshSocket_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_bSocketCreatedAtImport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_PreviewStaticMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_RelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshSocket_Statics::NewProp_SocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshSocket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshSocket_Statics::ClassParams = {
		&UStaticMeshSocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaticMeshSocket_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshSocket_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStaticMeshSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshSocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStaticMeshSocket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStaticMeshSocket, 3402432651);
	template<> ENGINE_API UClass* StaticClass<UStaticMeshSocket>()
	{
		return UStaticMeshSocket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshSocket(Z_Construct_UClass_UStaticMeshSocket, &UStaticMeshSocket::StaticClass, TEXT("/Script/Engine"), TEXT("UStaticMeshSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshSocket);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMeshSocket)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
