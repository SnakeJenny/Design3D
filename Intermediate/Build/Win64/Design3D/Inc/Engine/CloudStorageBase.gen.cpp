// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/CloudStorageBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudStorageBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECloudStorageDelegate();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCloudStorageBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCloudStorageBase();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
// End Cross Module References
	static UEnum* ECloudStorageDelegate_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECloudStorageDelegate, Z_Construct_UPackage__Script_Engine(), TEXT("ECloudStorageDelegate"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECloudStorageDelegate>()
	{
		return ECloudStorageDelegate_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECloudStorageDelegate(ECloudStorageDelegate_StaticEnum, TEXT("/Script/Engine"), TEXT("ECloudStorageDelegate"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECloudStorageDelegate_Hash() { return 1499318988U; }
	UEnum* Z_Construct_UEnum_Engine_ECloudStorageDelegate()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECloudStorageDelegate"), 0, Get_Z_Construct_UEnum_Engine_ECloudStorageDelegate_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CSD_KeyValueReadComplete", (int64)CSD_KeyValueReadComplete },
				{ "CSD_KeyValueWriteComplete", (int64)CSD_KeyValueWriteComplete },
				{ "CSD_ValueChanged", (int64)CSD_ValueChanged },
				{ "CSD_DocumentQueryComplete", (int64)CSD_DocumentQueryComplete },
				{ "CSD_DocumentReadComplete", (int64)CSD_DocumentReadComplete },
				{ "CSD_DocumentWriteComplete", (int64)CSD_DocumentWriteComplete },
				{ "CSD_DocumentConflictDetected", (int64)CSD_DocumentConflictDetected },
				{ "CSD_MAX", (int64)CSD_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CSD_DocumentConflictDetected.ToolTip", "Desc: Called when multiple machines have updated the document, and script needs to determine which one to use, via the Resolve functions." },
				{ "CSD_KeyValueReadComplete.ToolTip", "@todo: Fill in the result descriptions for these guys (and the other PI subclasses)" },
				{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
				{ "ToolTip", "All the types of delegate callbacks that a CloudStorage subclass may receive from C++" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ECloudStorageDelegate",
				"ECloudStorageDelegate",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCloudStorageBase::StaticRegisterNativesUCloudStorageBase()
	{
	}
	UClass* Z_Construct_UClass_UCloudStorageBase_NoRegister()
	{
		return UCloudStorageBase::StaticClass();
	}
	struct Z_Construct_UClass_UCloudStorageBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressDelegateCalls_MetaData[];
#endif
		static void NewProp_bSuppressDelegateCalls_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressDelegateCalls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalCloudFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalCloudFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalCloudFiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCloudStorageBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCloudStorageBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/CloudStorageBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "Base class for the various platform interface classes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "If true, delegate callbacks should be skipped." },
	};
#endif
	void Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_SetBit(void* Obj)
	{
		((UCloudStorageBase*)Obj)->bSuppressDelegateCalls = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls = { "bSuppressDelegateCalls", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCloudStorageBase), &Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/CloudStorageBase.h" },
		{ "ToolTip", "When using local storage (aka \"cloud emulation\"), this maintains a list of the file paths." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles = { "LocalCloudFiles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCloudStorageBase, LocalCloudFiles), METADATA_PARAMS(Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_Inner = { "LocalCloudFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_bSuppressDelegateCalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCloudStorageBase_Statics::NewProp_LocalCloudFiles_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCloudStorageBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCloudStorageBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCloudStorageBase_Statics::ClassParams = {
		&UCloudStorageBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCloudStorageBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCloudStorageBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCloudStorageBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCloudStorageBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCloudStorageBase, 393394782);
	template<> ENGINE_API UClass* StaticClass<UCloudStorageBase>()
	{
		return UCloudStorageBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCloudStorageBase(Z_Construct_UClass_UCloudStorageBase, &UCloudStorageBase::StaticClass, TEXT("/Script/Engine"), TEXT("UCloudStorageBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCloudStorageBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
