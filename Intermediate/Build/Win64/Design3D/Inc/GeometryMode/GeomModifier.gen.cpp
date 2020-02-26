// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryMode/Classes/GeomModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
	ENGINE_API UClass* Z_Construct_UClass_UPolys_NoRegister();
// End Cross Module References
	void UGeomModifier::StaticRegisterNativesUGeomModifier()
	{
	}
	UClass* Z_Construct_UClass_UGeomModifier_NoRegister()
	{
		return UGeomModifier::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedPolys_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedPolys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingPivotOffsetUpdate_MetaData[];
#endif
		static void NewProp_bPendingPivotOffsetUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingPivotOffsetUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPushButton_MetaData[];
#endif
		static void NewProp_bPushButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPushButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "Stored state of polys in case the brush state needs to be restroed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys = { "CachedPolys", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier, CachedPolys), Z_Construct_UClass_UPolys_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "If true, the pivot offset should be updated when the modification ends" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_SetBit(void* Obj)
	{
		((UGeomModifier*)Obj)->bPendingPivotOffsetUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate = { "bPendingPivotOffsetUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGeomModifier), &Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_MetaData[] = {
		{ "Category", "GeomModifier" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "true if the modifier has been initialized.\nThis is useful for interpreting user input and mouse drags correctly." },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((UGeomModifier*)Obj)->bInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGeomModifier), &Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_MetaData[] = {
		{ "Category", "GeomModifier" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "If true, this modifier should be displayed as a push button instead of a radio button" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_SetBit(void* Obj)
	{
		((UGeomModifier*)Obj)->bPushButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton = { "bPushButton", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UGeomModifier), &Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "GeomModifier" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "The tooltip to be displayed for this modifier" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier, Tooltip), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "GeomModifier" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "A human readable name for this modifier (appears on buttons, menus, etc)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGeomModifier, Description), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Statics::ClassParams = {
		&UGeomModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeomModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeomModifier, 1907980413);
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier>()
	{
		return UGeomModifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeomModifier(Z_Construct_UClass_UGeomModifier, &UGeomModifier::StaticClass, TEXT("/Script/GeometryMode"), TEXT("UGeomModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
