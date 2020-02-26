// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/UserDefinedStruct.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedStruct() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EUserDefinedStructureStatus();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EUserDefinedStructureStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EUserDefinedStructureStatus, Z_Construct_UPackage__Script_Engine(), TEXT("EUserDefinedStructureStatus"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EUserDefinedStructureStatus>()
	{
		return EUserDefinedStructureStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUserDefinedStructureStatus(EUserDefinedStructureStatus_StaticEnum, TEXT("/Script/Engine"), TEXT("EUserDefinedStructureStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Hash() { return 863403007U; }
	UEnum* Z_Construct_UEnum_Engine_EUserDefinedStructureStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUserDefinedStructureStatus"), 0, Get_Z_Construct_UEnum_Engine_EUserDefinedStructureStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "UDSS_UpToDate", (int64)UDSS_UpToDate },
				{ "UDSS_Dirty", (int64)UDSS_Dirty },
				{ "UDSS_Error", (int64)UDSS_Error },
				{ "UDSS_Duplicate", (int64)UDSS_Duplicate },
				{ "UDSS_MAX", (int64)UDSS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
				{ "UDSS_Dirty.ToolTip", "Struct has been modified but not recompiled." },
				{ "UDSS_Duplicate.ToolTip", "Struct is a duplicate, the original one was changed." },
				{ "UDSS_Error.ToolTip", "Struct tried but failed to be compiled." },
				{ "UDSS_UpToDate.ToolTip", "Struct is in an unknown state." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EUserDefinedStructureStatus",
				"EUserDefinedStructureStatus",
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
	void UUserDefinedStruct::StaticRegisterNativesUUserDefinedStruct()
	{
	}
	UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister()
	{
		return UUserDefinedStruct::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PrimaryStruct;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/UserDefinedStruct.h" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
		{ "SerializeToFStructuredArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
		{ "ToolTip", "Uniquely identifies this specific user struct" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedStruct, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
		{ "ToolTip", "Status of this struct, outside of the editor it is assumed to always be UpToDate" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedStruct, Status), Z_Construct_UEnum_Engine_EUserDefinedStructureStatus, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedStruct, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedStruct, ErrorMessage), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedStruct.h" },
		{ "ToolTip", "The original struct, when current struct isn't a temporary duplicate, the field should be null" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct = { "PrimaryStruct", nullptr, (EPropertyFlags)0x0014000800002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedStruct, PrimaryStruct), Z_Construct_UClass_UUserDefinedStruct_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_Status,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_EditorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedStruct_Statics::NewProp_PrimaryStruct,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedStruct>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedStruct_Statics::ClassParams = {
		&UUserDefinedStruct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedStruct_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedStruct()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserDefinedStruct_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserDefinedStruct, 3188009536);
	template<> ENGINE_API UClass* StaticClass<UUserDefinedStruct>()
	{
		return UUserDefinedStruct::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedStruct(Z_Construct_UClass_UUserDefinedStruct, &UUserDefinedStruct::StaticClass, TEXT("/Script/Engine"), TEXT("UUserDefinedStruct"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedStruct);
	IMPLEMENT_FARCHIVE_SERIALIZER(UUserDefinedStruct)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
