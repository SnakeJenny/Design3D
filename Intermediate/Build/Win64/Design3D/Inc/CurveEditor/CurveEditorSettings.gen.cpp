// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CurveEditor/Public/CurveEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorSettings() {}
// Cross Module References
	CURVEEDITOR_API UEnum* Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorSettings_NoRegister();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECurveEditorTangentVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility, Z_Construct_UPackage__Script_CurveEditor(), TEXT("ECurveEditorTangentVisibility"));
		}
		return Singleton;
	}
	template<> CURVEEDITOR_API UEnum* StaticEnum<ECurveEditorTangentVisibility::Type>()
	{
		return ECurveEditorTangentVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECurveEditorTangentVisibility(ECurveEditorTangentVisibility_StaticEnum, TEXT("/Script/CurveEditor"), TEXT("ECurveEditorTangentVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Hash() { return 47170970U; }
	UEnum* Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CurveEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECurveEditorTangentVisibility"), 0, Get_Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECurveEditorTangentVisibility::AllTangents", (int64)ECurveEditorTangentVisibility::AllTangents },
				{ "ECurveEditorTangentVisibility::SelectedKeys", (int64)ECurveEditorTangentVisibility::SelectedKeys },
				{ "ECurveEditorTangentVisibility::NoTangents", (int64)ECurveEditorTangentVisibility::NoTangents },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllTangents.ToolTip", "All tangents should be visible." },
				{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
				{ "NoTangents.ToolTip", "Don't display tangents." },
				{ "SelectedKeys.ToolTip", "Only tangents from selected keys should be visible." },
				{ "ToolTip", "Defines visibility states for the tangents in the curve editor." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CurveEditor,
				nullptr,
				"ECurveEditorTangentVisibility",
				"ECurveEditorTangentVisibility::Type",
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
	void UCurveEditorSettings::StaticRegisterNativesUCurveEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UCurveEditorSettings_NoRegister()
	{
		return UCurveEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowCurveEditorCurveToolTips_MetaData[];
#endif
		static void NewProp_bShowCurveEditorCurveToolTips_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowCurveEditorCurveToolTips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoFrameCurveEditor_MetaData[];
#endif
		static void NewProp_bAutoFrameCurveEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoFrameCurveEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CurveEditorSettings.h" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
		{ "ToolTip", "Serializable options for curve editor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility = { "TangentVisibility", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCurveEditorSettings, TangentVisibility), Z_Construct_UEnum_CurveEditor_ECurveEditorTangentVisibility, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_SetBit(void* Obj)
	{
		((UCurveEditorSettings*)Obj)->bShowCurveEditorCurveToolTips = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips = { "bShowCurveEditorCurveToolTips", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCurveEditorSettings), &Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_MetaData[] = {
		{ "Category", "Curve Editor" },
		{ "ModuleRelativePath", "Public/CurveEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_SetBit(void* Obj)
	{
		((UCurveEditorSettings*)Obj)->bAutoFrameCurveEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor = { "bAutoFrameCurveEditor", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCurveEditorSettings), &Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_TangentVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bShowCurveEditorCurveToolTips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorSettings_Statics::NewProp_bAutoFrameCurveEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorSettings_Statics::ClassParams = {
		&UCurveEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveEditorSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveEditorSettings, 2737928407);
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorSettings>()
	{
		return UCurveEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveEditorSettings(Z_Construct_UClass_UCurveEditorSettings, &UCurveEditorSettings::StaticClass, TEXT("/Script/CurveEditor"), TEXT("UCurveEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
