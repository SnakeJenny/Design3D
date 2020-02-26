// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialFunctionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInterface() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialFunctionUsage();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EMaterialFunctionUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialFunctionUsage, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialFunctionUsage"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialFunctionUsage>()
	{
		return EMaterialFunctionUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialFunctionUsage(EMaterialFunctionUsage_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialFunctionUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Hash() { return 1610048269U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialFunctionUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialFunctionUsage"), 0, Get_Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Default", (int64)Default },
				{ "MaterialLayer", (int64)MaterialLayer },
				{ "MaterialLayerBlend", (int64)MaterialLayerBlend },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
				{ "ToolTip", "Usage set on a material function determines feature compatibility and validation." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialFunctionUsage",
				"EMaterialFunctionUsage",
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
	void UMaterialFunctionInterface::StaticRegisterNativesUMaterialFunctionInterface()
	{
	}
	UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister()
	{
		return UMaterialFunctionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedOutputTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CombinedOutputTypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CombinedInputTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CombinedInputTypes;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctionUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialFunctionUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object" },
		{ "IncludePath", "Materials/MaterialFunctionInterface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "A Material Function is a collection of material expressions that can be reused in different materials" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInterface, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes = { "CombinedOutputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInterface, CombinedOutputTypes), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes = { "CombinedInputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInterface, CombinedInputTypes), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "The intended usage of this function, required for material layers." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage = { "MaterialFunctionUsage", nullptr, (EPropertyFlags)0x0020090000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInterface, MaterialFunctionUsage), Z_Construct_UEnum_Engine_EMaterialFunctionUsage, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "Used by materials using this function to know when to recompile." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000200000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialFunctionInterface, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::ClassParams = {
		&UMaterialFunctionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialFunctionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialFunctionInterface, 4266412673);
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionInterface>()
	{
		return UMaterialFunctionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialFunctionInterface(Z_Construct_UClass_UMaterialFunctionInterface, &UMaterialFunctionInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialFunctionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
