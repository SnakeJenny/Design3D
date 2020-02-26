// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/UserDefinedEnum.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedEnum() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UUserDefinedEnum::StaticRegisterNativesUUserDefinedEnum()
	{
	}
	UClass* Z_Construct_UClass_UUserDefinedEnum_NoRegister()
	{
		return UUserDefinedEnum::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNameMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DisplayNameMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayNameMap_Key_KeyProp;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayNameMap_ValueProp;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EnumDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UniqueNameIndex;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnum,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedEnum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/UserDefinedEnum.h" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "An Enumeration is a list of named values." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
		{ "ToolTip", "De-facto display names for enum entries mapped against their raw enum name (UEnum::GetNameByIndex).\nTo sync DisplayNameMap use FEnumEditorUtils::EnsureAllDisplayNamesExist." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap = { "DisplayNameMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedEnum, DisplayNameMap), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_Key_KeyProp = { "DisplayNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_ValueProp = { "DisplayNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_EnumDescription_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Shows up in the content browser when the enum asset is hovered" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_EnumDescription = { "EnumDescription", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedEnum, EnumDescription), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_EnumDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_EnumDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_UniqueNameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserDefinedEnum.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_UniqueNameIndex = { "UniqueNameIndex", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserDefinedEnum, UniqueNameIndex), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_UniqueNameIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_UniqueNameIndex_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_DisplayNameMap_ValueProp,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_EnumDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedEnum_Statics::NewProp_UniqueNameIndex,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedEnum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedEnum_Statics::ClassParams = {
		&UUserDefinedEnum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserDefinedEnum_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnum_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedEnum_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedEnum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserDefinedEnum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserDefinedEnum, 1512335698);
	template<> ENGINE_API UClass* StaticClass<UUserDefinedEnum>()
	{
		return UUserDefinedEnum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedEnum(Z_Construct_UClass_UUserDefinedEnum, &UUserDefinedEnum::StaticClass, TEXT("/Script/Engine"), TEXT("UUserDefinedEnum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedEnum);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UUserDefinedEnum)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
