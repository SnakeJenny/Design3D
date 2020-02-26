// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ChildConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChildConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChildConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildConnection();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
// End Cross Module References
	void UChildConnection::StaticRegisterNativesUChildConnection()
	{
	}
	UClass* Z_Construct_UClass_UChildConnection_NoRegister()
	{
		return UChildConnection::StaticClass();
	}
	struct Z_Construct_UClass_UChildConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChildConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ChildConnection.h" },
		{ "ModuleRelativePath", "Classes/Engine/ChildConnection.h" },
		{ "ToolTip", "Represents a secondary split screen connection that reroutes calls to the parent connection." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChildConnection_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ChildConnection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChildConnection_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChildConnection, Parent), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChildConnection_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChildConnection_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChildConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChildConnection_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChildConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChildConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChildConnection_Statics::ClassParams = {
		&UChildConnection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChildConnection_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UChildConnection_Statics::PropPointers),
		0,
		0x000800ACu,
		METADATA_PARAMS(Z_Construct_UClass_UChildConnection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChildConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChildConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChildConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChildConnection, 697824373);
	template<> ENGINE_API UClass* StaticClass<UChildConnection>()
	{
		return UChildConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChildConnection(Z_Construct_UClass_UChildConnection, &UChildConnection::StaticClass, TEXT("/Script/Engine"), TEXT("UChildConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChildConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
