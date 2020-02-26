// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeEditor/Public/LandscapeEditorObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeEditorObject() {}
// Cross Module References
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditor();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_EColorChannel();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayer();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayerInfo();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoImportLayer();
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ULandscapeEditorObject_NoRegister();
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ULandscapeEditorObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintCustomBrush_NoRegister();
// End Cross Module References
	static UEnum* ELandscapeImportLayerError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeImportLayerError"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportLayerError>()
	{
		return ELandscapeImportLayerError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeImportLayerError(ELandscapeImportLayerError_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeImportLayerError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Hash() { return 3294385394U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeImportLayerError"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeImportLayerError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeImportLayerError::None", (int64)ELandscapeImportLayerError::None },
				{ "ELandscapeImportLayerError::MissingLayerInfo", (int64)ELandscapeImportLayerError::MissingLayerInfo },
				{ "ELandscapeImportLayerError::FileNotFound", (int64)ELandscapeImportLayerError::FileNotFound },
				{ "ELandscapeImportLayerError::FileSizeMismatch", (int64)ELandscapeImportLayerError::FileSizeMismatch },
				{ "ELandscapeImportLayerError::CorruptFile", (int64)ELandscapeImportLayerError::CorruptFile },
				{ "ELandscapeImportLayerError::ColorPng", (int64)ELandscapeImportLayerError::ColorPng },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeImportLayerError",
				"ELandscapeImportLayerError",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeImportHeightmapError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeImportHeightmapError"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportHeightmapError>()
	{
		return ELandscapeImportHeightmapError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeImportHeightmapError(ELandscapeImportHeightmapError_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeImportHeightmapError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Hash() { return 1970321342U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeImportHeightmapError"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeImportHeightmapError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeImportHeightmapError::None", (int64)ELandscapeImportHeightmapError::None },
				{ "ELandscapeImportHeightmapError::FileNotFound", (int64)ELandscapeImportHeightmapError::FileNotFound },
				{ "ELandscapeImportHeightmapError::InvalidSize", (int64)ELandscapeImportHeightmapError::InvalidSize },
				{ "ELandscapeImportHeightmapError::CorruptFile", (int64)ELandscapeImportHeightmapError::CorruptFile },
				{ "ELandscapeImportHeightmapError::ColorPng", (int64)ELandscapeImportHeightmapError::ColorPng },
				{ "ELandscapeImportHeightmapError::LowBitDepth", (int64)ELandscapeImportHeightmapError::LowBitDepth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeImportHeightmapError",
				"ELandscapeImportHeightmapError",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeMirrorOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeMirrorOperation"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeMirrorOperation>()
	{
		return ELandscapeMirrorOperation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeMirrorOperation(ELandscapeMirrorOperation_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeMirrorOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Hash() { return 584287501U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeMirrorOperation"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeMirrorOperation::MinusXToPlusX", (int64)ELandscapeMirrorOperation::MinusXToPlusX },
				{ "ELandscapeMirrorOperation::PlusXToMinusX", (int64)ELandscapeMirrorOperation::PlusXToMinusX },
				{ "ELandscapeMirrorOperation::MinusYToPlusY", (int64)ELandscapeMirrorOperation::MinusYToPlusY },
				{ "ELandscapeMirrorOperation::PlusYToMinusY", (int64)ELandscapeMirrorOperation::PlusYToMinusY },
				{ "ELandscapeMirrorOperation::RotateMinusXToPlusX", (int64)ELandscapeMirrorOperation::RotateMinusXToPlusX },
				{ "ELandscapeMirrorOperation::RotatePlusXToMinusX", (int64)ELandscapeMirrorOperation::RotatePlusXToMinusX },
				{ "ELandscapeMirrorOperation::RotateMinusYToPlusY", (int64)ELandscapeMirrorOperation::RotateMinusYToPlusY },
				{ "ELandscapeMirrorOperation::RotatePlusYToMinusY", (int64)ELandscapeMirrorOperation::RotatePlusYToMinusY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MinusXToPlusX.DisplayName", "-X to +X" },
				{ "MinusYToPlusY.DisplayName", "-Y to +Y" },
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
				{ "PlusXToMinusX.DisplayName", "+X to -X" },
				{ "PlusYToMinusY.DisplayName", "+Y to -Y" },
				{ "RotateMinusXToPlusX.DisplayName", "Rotate -X to +X" },
				{ "RotateMinusYToPlusY.DisplayName", "Rotate -Y to +Y" },
				{ "RotatePlusXToMinusX.DisplayName", "Rotate +X to -X" },
				{ "RotatePlusYToMinusY.DisplayName", "Rotate +Y to -Y" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeMirrorOperation",
				"ELandscapeMirrorOperation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EColorChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_EColorChannel, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("EColorChannel"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<EColorChannel::Type>()
	{
		return EColorChannel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EColorChannel(EColorChannel_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("EColorChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_EColorChannel_Hash() { return 2859979147U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_EColorChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EColorChannel"), 0, Get_Z_Construct_UEnum_LandscapeEditor_EColorChannel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EColorChannel::Red", (int64)EColorChannel::Red },
				{ "EColorChannel::Green", (int64)EColorChannel::Green },
				{ "EColorChannel::Blue", (int64)EColorChannel::Blue },
				{ "EColorChannel::Alpha", (int64)EColorChannel::Alpha },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"EColorChannel",
				"EColorChannel::Type",
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
	static UEnum* ELandscapeConvertMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeConvertMode"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeConvertMode>()
	{
		return ELandscapeConvertMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeConvertMode(ELandscapeConvertMode_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeConvertMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Hash() { return 4254394262U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeConvertMode"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeConvertMode::Invalid", (int64)ELandscapeConvertMode::Invalid },
				{ "ELandscapeConvertMode::Expand", (int64)ELandscapeConvertMode::Expand },
				{ "ELandscapeConvertMode::Clip", (int64)ELandscapeConvertMode::Clip },
				{ "ELandscapeConvertMode::Resample", (int64)ELandscapeConvertMode::Resample },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Clip.ToolTip", "Will floor the number of components for the new world size, which might reduce the world size compared to previous settings" },
				{ "Expand.ToolTip", "Will round up the number of components for the new world size, which might expand the world size compared to previous settings" },
				{ "Invalid.Hidden", "" },
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
				{ "Resample.ToolTip", "The landscape will have the same overall size in the world, and have the same number of components. Existing landscape geometry and layer data will be resampled to match the new resolution." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeConvertMode",
				"ELandscapeConvertMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeToolPasteMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolPasteMode"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolPasteMode>()
	{
		return ELandscapeToolPasteMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeToolPasteMode(ELandscapeToolPasteMode_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeToolPasteMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Hash() { return 926590549U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeToolPasteMode"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeToolPasteMode::Invalid", (int64)ELandscapeToolPasteMode::Invalid },
				{ "ELandscapeToolPasteMode::Both", (int64)ELandscapeToolPasteMode::Both },
				{ "ELandscapeToolPasteMode::Raise", (int64)ELandscapeToolPasteMode::Raise },
				{ "ELandscapeToolPasteMode::Lower", (int64)ELandscapeToolPasteMode::Lower },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Both.ToolTip", "Paste may both raise and lower values" },
				{ "Invalid.Hidden", "" },
				{ "Lower.ToolTip", "Paste may only lower values, places where the pasted data would be above the heightmap are left unchanged. Good for copy/pasting valleys or pits" },
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
				{ "Raise.ToolTip", "Paste may only raise values, places where the pasted data would be below the heightmap are left unchanged. Good for copy/pasting mountains" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeToolPasteMode",
				"ELandscapeToolPasteMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeToolNoiseMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolNoiseMode"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolNoiseMode>()
	{
		return ELandscapeToolNoiseMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeToolNoiseMode(ELandscapeToolNoiseMode_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeToolNoiseMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Hash() { return 1421818067U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeToolNoiseMode"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeToolNoiseMode::Invalid", (int64)ELandscapeToolNoiseMode::Invalid },
				{ "ELandscapeToolNoiseMode::Both", (int64)ELandscapeToolNoiseMode::Both },
				{ "ELandscapeToolNoiseMode::Add", (int64)ELandscapeToolNoiseMode::Add },
				{ "ELandscapeToolNoiseMode::Sub", (int64)ELandscapeToolNoiseMode::Sub },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.ToolTip", "Noise will only raise the heightmap" },
				{ "Both.ToolTip", "Noise will both raise and lower the heightmap" },
				{ "Invalid.Hidden", "" },
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
				{ "Sub.ToolTip", "Noise will only lower the heightmap" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeToolNoiseMode",
				"ELandscapeToolNoiseMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeToolHydroErosionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolHydroErosionMode"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolHydroErosionMode>()
	{
		return ELandscapeToolHydroErosionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeToolHydroErosionMode(ELandscapeToolHydroErosionMode_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeToolHydroErosionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Hash() { return 2125270482U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeToolHydroErosionMode"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeToolHydroErosionMode::Invalid", (int64)ELandscapeToolHydroErosionMode::Invalid },
				{ "ELandscapeToolHydroErosionMode::Both", (int64)ELandscapeToolHydroErosionMode::Both },
				{ "ELandscapeToolHydroErosionMode::Positive", (int64)ELandscapeToolHydroErosionMode::Positive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Both.ToolTip", "Rains in some places and not others, randomly" },
				{ "Invalid.Hidden", "" },
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
				{ "Positive.ToolTip", "Rain is applied to the entire area" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeToolHydroErosionMode",
				"ELandscapeToolHydroErosionMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeToolErosionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolErosionMode"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolErosionMode>()
	{
		return ELandscapeToolErosionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeToolErosionMode(ELandscapeToolErosionMode_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeToolErosionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Hash() { return 1062908846U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeToolErosionMode"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeToolErosionMode::Invalid", (int64)ELandscapeToolErosionMode::Invalid },
				{ "ELandscapeToolErosionMode::Both", (int64)ELandscapeToolErosionMode::Both },
				{ "ELandscapeToolErosionMode::Raise", (int64)ELandscapeToolErosionMode::Raise },
				{ "ELandscapeToolErosionMode::Lower", (int64)ELandscapeToolErosionMode::Lower },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Both.ToolTip", "Apply all erosion effects, both raising and lowering the heightmap" },
				{ "Invalid.Hidden", "" },
				{ "Lower.ToolTip", "Only applies erosion effects that result in lowering the heightmap" },
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
				{ "Raise.ToolTip", "Only applies erosion effects that result in raising the heightmap" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeToolErosionMode",
				"ELandscapeToolErosionMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeToolFlattenMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeToolFlattenMode"));
		}
		return Singleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeToolFlattenMode>()
	{
		return ELandscapeToolFlattenMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeToolFlattenMode(ELandscapeToolFlattenMode_StaticEnum, TEXT("/Script/LandscapeEditor"), TEXT("ELandscapeToolFlattenMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Hash() { return 2202260210U; }
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeToolFlattenMode"), 0, Get_Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELandscapeToolFlattenMode::Invalid", (int64)ELandscapeToolFlattenMode::Invalid },
				{ "ELandscapeToolFlattenMode::Both", (int64)ELandscapeToolFlattenMode::Both },
				{ "ELandscapeToolFlattenMode::Raise", (int64)ELandscapeToolFlattenMode::Raise },
				{ "ELandscapeToolFlattenMode::Lower", (int64)ELandscapeToolFlattenMode::Lower },
				{ "ELandscapeToolFlattenMode::Terrace", (int64)ELandscapeToolFlattenMode::Terrace },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Both.ToolTip", "Flatten may both raise and lower values" },
				{ "Invalid.Hidden", "" },
				{ "Lower.ToolTip", "Flatten may only lower values, values below the clicked point will be left unchanged" },
				{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
				{ "Raise.ToolTip", "Flatten may only raise values, values above the clicked point will be left unchanged" },
				{ "Terrace.ToolTip", "Flatten to specific terrace height intervals" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
				nullptr,
				"ELandscapeToolFlattenMode",
				"ELandscapeToolFlattenMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLandscapePatternBrushWorldSpaceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("LandscapePatternBrushWorldSpaceSettings"), sizeof(FLandscapePatternBrushWorldSpaceSettings), Get_Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Hash());
	}
	return Singleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FLandscapePatternBrushWorldSpaceSettings>()
{
	return FLandscapePatternBrushWorldSpaceSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings(FLandscapePatternBrushWorldSpaceSettings::StaticStruct, TEXT("/Script/LandscapeEditor"), TEXT("LandscapePatternBrushWorldSpaceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LandscapeEditor_StaticRegisterNativesFLandscapePatternBrushWorldSpaceSettings
{
	FScriptStruct_LandscapeEditor_StaticRegisterNativesFLandscapePatternBrushWorldSpaceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapePatternBrushWorldSpaceSettings")),new UScriptStruct::TCppStructOps<FLandscapePatternBrushWorldSpaceSettings>);
	}
} ScriptStruct_LandscapeEditor_StaticRegisterNativesFLandscapePatternBrushWorldSpaceSettings;
	struct Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepeatSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterTextureOnOrigin_MetaData[];
#endif
		static void NewProp_bCenterTextureOnOrigin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterTextureOnOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapePatternBrushWorldSpaceSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize_MetaData[] = {
		{ "Category", "World-Space" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize = { "RepeatSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapePatternBrushWorldSpaceSettings, RepeatSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_MetaData[] = {
		{ "Category", "World-Space" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "if true, the texture used for the pattern is centered on the PatternOrigin.\nif false, the corner of the texture is placed at the PatternOrigin" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_SetBit(void* Obj)
	{
		((FLandscapePatternBrushWorldSpaceSettings*)Obj)->bCenterTextureOnOrigin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin = { "bCenterTextureOnOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLandscapePatternBrushWorldSpaceSettings), &Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "World-Space" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapePatternBrushWorldSpaceSettings, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "World-Space" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapePatternBrushWorldSpaceSettings, Origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_RepeatSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_bCenterTextureOnOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::NewProp_Origin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		&NewStructOps,
		"LandscapePatternBrushWorldSpaceSettings",
		sizeof(FLandscapePatternBrushWorldSpaceSettings),
		alignof(FLandscapePatternBrushWorldSpaceSettings),
		Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapePatternBrushWorldSpaceSettings"), sizeof(FLandscapePatternBrushWorldSpaceSettings), Get_Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings_Hash() { return 241502602U; }
class UScriptStruct* FLandscapeImportLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeImportLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeImportLayer, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("LandscapeImportLayer"), sizeof(FLandscapeImportLayer), Get_Z_Construct_UScriptStruct_FLandscapeImportLayer_Hash());
	}
	return Singleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FLandscapeImportLayer>()
{
	return FLandscapeImportLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeImportLayer(FLandscapeImportLayer::StaticStruct, TEXT("/Script/LandscapeEditor"), TEXT("LandscapeImportLayer"), false, nullptr, nullptr);
static struct FScriptStruct_LandscapeEditor_StaticRegisterNativesFLandscapeImportLayer
{
	FScriptStruct_LandscapeEditor_StaticRegisterNativesFLandscapeImportLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeImportLayer")),new UScriptStruct::TCppStructOps<FLandscapeImportLayer>);
	}
} ScriptStruct_LandscapeEditor_StaticRegisterNativesFLandscapeImportLayer;
	struct Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImportResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailMIC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailMIC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeImportLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeImportLayer, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult = { "ImportResult", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeImportLayer, ImportResult), Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC = { "ThumbnailMIC", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeImportLayer, ThumbnailMIC), Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ImportResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::NewProp_ThumbnailMIC,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		Z_Construct_UScriptStruct_FLandscapeImportLayerInfo,
		&NewStructOps,
		"LandscapeImportLayer",
		sizeof(FLandscapeImportLayer),
		alignof(FLandscapeImportLayer),
		Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeImportLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeImportLayer"), sizeof(FLandscapeImportLayer), Get_Z_Construct_UScriptStruct_FLandscapeImportLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeImportLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeImportLayer_Hash() { return 168987968U; }
class UScriptStruct* FGizmoImportLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPEEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FGizmoImportLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoImportLayer, Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("GizmoImportLayer"), sizeof(FGizmoImportLayer), Get_Z_Construct_UScriptStruct_FGizmoImportLayer_Hash());
	}
	return Singleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FGizmoImportLayer>()
{
	return FGizmoImportLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGizmoImportLayer(FGizmoImportLayer::StaticStruct, TEXT("/Script/LandscapeEditor"), TEXT("GizmoImportLayer"), false, nullptr, nullptr);
static struct FScriptStruct_LandscapeEditor_StaticRegisterNativesFGizmoImportLayer
{
	FScriptStruct_LandscapeEditor_StaticRegisterNativesFGizmoImportLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GizmoImportLayer")),new UScriptStruct::TCppStructOps<FGizmoImportLayer>);
	}
} ScriptStruct_LandscapeEditor_StaticRegisterNativesFGizmoImportLayer;
	struct Z_Construct_UScriptStruct_FGizmoImportLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoImport_MetaData[];
#endif
		static void NewProp_bNoImport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoImport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LayerFilename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoImportLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_SetBit(void* Obj)
	{
		((FGizmoImportLayer*)Obj)->bNoImport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport = { "bNoImport", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGizmoImportLayer), &Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGizmoImportLayer, LayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename = { "LayerFilename", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGizmoImportLayer, LayerFilename), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_bNoImport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::NewProp_LayerFilename,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		&NewStructOps,
		"GizmoImportLayer",
		sizeof(FGizmoImportLayer),
		alignof(FGizmoImportLayer),
		Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoImportLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGizmoImportLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LandscapeEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GizmoImportLayer"), sizeof(FGizmoImportLayer), Get_Z_Construct_UScriptStruct_FGizmoImportLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGizmoImportLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGizmoImportLayer_Hash() { return 827298102U; }
	void ULandscapeEditorObject::StaticRegisterNativesULandscapeEditorObject()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeEditorObject_NoRegister()
	{
		return ULandscapeEditorObject::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeEditorObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowUnusedLayers_MetaData[];
#endif
		static void NewProp_ShowUnusedLayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowUnusedLayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetDisplayOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetDisplayOrder;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetDisplayOrder_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintingRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaintingRestriction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaintingRestriction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushComponentSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BrushComponentSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTextureData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlphaTextureData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AlphaTextureData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTextureSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AlphaTextureSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTextureSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AlphaTextureSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTextureChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AlphaTextureChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlphaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSpacePatternBrushSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSpacePatternBrushSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpacePatternBrush_MetaData[];
#endif
		static void NewProp_bUseWorldSpacePatternBrush_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpacePatternBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBrushPanV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaBrushPanV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBrushPanU_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaBrushPanU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBrushRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaBrushRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlphaBrushAutoRotate_MetaData[];
#endif
		static void NewProp_bAlphaBrushAutoRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlphaBrushAutoRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBrushScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaBrushScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseClayBrush_MetaData[];
#endif
		static void NewProp_bUseClayBrush_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseClayBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportLandscape_Layers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportLandscape_Layers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_AlphamapType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImportLandscape_AlphamapType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportLandscape_AlphamapType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImportLandscape_Data;
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ImportLandscape_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ImportLandscape_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ImportLandscape_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_HeightmapFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImportLandscape_HeightmapFilename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_HeightmapErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ImportLandscape_HeightmapErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportLandscape_HeightmapImportResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ImportLandscape_HeightmapImportResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ImportLandscape_HeightmapImportResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLandscape_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLandscape_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLandscape_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_ComponentCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLandscape_ComponentCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_SectionsPerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewLandscape_SectionsPerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_QuadsPerSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewLandscape_QuadsPerSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLandscape_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_NewLandscape_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResizeLandscape_ConvertMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResizeLandscape_ConvertMode;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ResizeLandscape_ConvertMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResizeLandscape_ComponentCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResizeLandscape_ComponentCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResizeLandscape_SectionsPerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResizeLandscape_SectionsPerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResizeLandscape_QuadsPerSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResizeLandscape_QuadsPerSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintCustomBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlueprintCustomBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorSmoothingWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MirrorSmoothingWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorOp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MirrorOp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorOp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MirrorPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoImportLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GizmoImportLayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GizmoImportLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoImportSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GizmoImportSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoHeightmapFilenameString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GizmoHeightmapFilenameString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothGizmoBrush_MetaData[];
#endif
		static void NewProp_bSmoothGizmoBrush_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothGizmoBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapGizmo_MetaData[];
#endif
		static void NewProp_bSnapGizmo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapGizmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyToAllTargets_MetaData[];
#endif
		static void NewProp_bApplyToAllTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PasteMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PasteMode;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_PasteMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNegativeMask_MetaData[];
#endif
		static void NewProp_bUseNegativeMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNegativeMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSelectedRegion_MetaData[];
#endif
		static void NewProp_bUseSelectedRegion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSelectedRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NoiseMode;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_NoiseMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HErosionDetailScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HErosionDetailScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHErosionDetailSmooth_MetaData[];
#endif
		static void NewProp_bHErosionDetailSmooth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHErosionDetailSmooth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainDistScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RainDistScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainDistMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RainDistMode;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_RainDistMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HErodeIterationNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HErodeIterationNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SedimentCapacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SedimentCapacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RainAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RainAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErosionNoiseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErosionNoiseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErosionNoiseMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErosionNoiseMode;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ErosionNoiseMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErodeIterationNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErodeIterationNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErodeSurfaceThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErodeSurfaceThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErodeThresh_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErodeThresh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DetailScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetailSmooth_MetaData[];
#endif
		static void NewProp_bDetailSmooth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetailSmooth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothFilterKernelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SmoothFilterKernelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RampSideFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RampSideFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RampWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RampWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlattenEyeDropperModeDesiredTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlattenEyeDropperModeDesiredTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlattenEyeDropperModeActivated_MetaData[];
#endif
		static void NewProp_bFlattenEyeDropperModeActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlattenEyeDropperModeActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerraceSmooth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TerraceSmooth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerraceInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TerraceInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFlattenTargetPreview_MetaData[];
#endif
		static void NewProp_bShowFlattenTargetPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFlattenTargetPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlattenTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlattenTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFlattenTarget_MetaData[];
#endif
		static void NewProp_bUseFlattenTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFlattenTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPickValuePerApply_MetaData[];
#endif
		static void NewProp_bPickValuePerApply_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPickValuePerApply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSlopeFlatten_MetaData[];
#endif
		static void NewProp_bUseSlopeFlatten_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSlopeFlatten;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlattenMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FlattenMode;
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_FlattenMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumValueRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumValueRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightTargetValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightTargetValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWeightTargetValue_MetaData[];
#endif
		static void NewProp_bUseWeightTargetValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWeightTargetValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToolStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeEditorObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeEditorObject.h" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_MetaData[] = {
		{ "Category", "Target Layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->ShowUnusedLayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers = { "ShowUnusedLayers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_MetaData[] = {
		{ "Category", "Target Layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "Display order of the targets" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder = { "TargetDisplayOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, TargetDisplayOrder), Z_Construct_UEnum_Landscape_ELandscapeLayerDisplayMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_MetaData[] = {
		{ "Category", "Target Layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Weightmap,Visibility" },
		{ "ToolTip", "Limits painting to only the components that already have the selected layer" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction = { "PaintingRestriction", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, PaintingRestriction), Z_Construct_UEnum_Landscape_ELandscapeLayerPaintingRestriction, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "128" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Brush Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Component" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "Number of components X/Y to affect at once. 1 means 1x1, 2 means 2x2, etc" },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize = { "BrushComponentSize", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, BrushComponentSize), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData = { "AlphaTextureData", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTextureData), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_Inner = { "AlphaTextureData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY = { "AlphaTextureSizeY", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTextureSizeY), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX = { "AlphaTextureSizeX", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTextureSizeX), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "DisplayName", "Texture Channel" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Alpha,BrushSet_Pattern" },
		{ "ToolTip", "Channel of Mask Texture to use" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel = { "AlphaTextureChannel", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTextureChannel), Z_Construct_UEnum_LandscapeEditor_EColorChannel, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Alpha,BrushSet_Pattern" },
		{ "ToolTip", "Mask texture to use" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture = { "AlphaTexture", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, AlphaTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "DisplayName", "World-Space Settings" },
		{ "EditCondition", "bUseWorldSpacePatternBrush" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings = { "WorldSpacePatternBrushSettings", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, WorldSpacePatternBrushSettings), Z_Construct_UScriptStruct_FLandscapePatternBrushWorldSpaceSettings, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "DisplayName", "Use World-Space" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseWorldSpacePatternBrush = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush = { "bUseWorldSpacePatternBrush", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Texture Pan V" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
		{ "ToolTip", "Vertically offsets the brush mask texture" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV = { "AlphaBrushPanV", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, AlphaBrushPanV), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Texture Pan U" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
		{ "ToolTip", "Horizontally offsets the brush mask texture" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU = { "AlphaBrushPanU", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, AlphaBrushPanU), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "DisplayName", "Texture Rotation" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Alpha,BrushSet_Pattern" },
		{ "ToolTip", "Rotates the brush mask texture" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation = { "AlphaBrushRotation", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, AlphaBrushRotation), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "DisplayName", "Auto-Rotate" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Alpha" },
		{ "ToolTip", "Rotate brush to follow mouse" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bAlphaBrushAutoRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate = { "bAlphaBrushAutoRotate", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0.005" },
		{ "DisplayName", "Texture Scale" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Pattern" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "Scale of the brush texture. A scale of 1.000 maps the brush texture to the landscape at a 1 pixel = 1 vertex size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale = { "AlphaBrushScale", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, AlphaBrushScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Circle,BrushSet_Alpha,BrushSet_Pattern" },
		{ "ShowForTools", "Sculpt" },
		{ "ToolTip", "Selects the Clay Brush painting mode" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseClayBrush = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush = { "bUseClayBrush", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Circle,BrushSet_Gizmo,BrushSet_Pattern" },
		{ "ToolTip", "The falloff at the edge of the brush, as a fraction of the brush's size. 0 = no falloff, 1 = all falloff" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff = { "BrushFalloff", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, BrushFalloff), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius_MetaData[] = {
		{ "Category", "Brush Settings" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Brush Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForBrushes", "BrushSet_Circle,BrushSet_Alpha,BrushSet_Pattern" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "The radius of the brush, in unreal units" },
		{ "UIMax", "8192" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, BrushRadius), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The landscape layers that will be created. Only layer names referenced in the material assigned above are shown here. Modify the material to add more layers." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers = { "ImportLandscape_Layers", nullptr, (EPropertyFlags)0x0010000400000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_Layers), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_Inner = { "ImportLandscape_Layers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeImportLayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Layer Alphamap Type" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "Whether the imported alpha maps are to be interpreted as \"layered\" or \"additive\" (UE4 uses additive internally)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType = { "ImportLandscape_AlphamapType", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_AlphamapType), Z_Construct_UEnum_Landscape_ELandscapeImportAlphamapType, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data = { "ImportLandscape_Data", nullptr, (EPropertyFlags)0x0040000400000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_Data), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_MetaData)) };
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_Inner = { "ImportLandscape_Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height = { "ImportLandscape_Height", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_Height), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width = { "ImportLandscape_Width", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_Width), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Heightmap File" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "Specify a height map file in 16-bit RAW or PNG format" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename = { "ImportLandscape_HeightmapFilename", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_HeightmapFilename), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage = { "ImportLandscape_HeightmapErrorMessage", nullptr, (EPropertyFlags)0x0010000400020001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_HeightmapErrorMessage), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult = { "ImportLandscape_HeightmapImportResult", nullptr, (EPropertyFlags)0x0010000400020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ImportLandscape_HeightmapImportResult), Z_Construct_UEnum_LandscapeEditor_ELandscapeImportResult, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The scale of the new landscape. This is the distance between each vertex on the landscape, defaulting to 100 units." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale = { "NewLandscape_Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Rotation" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The rotation of the new landscape" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation = { "NewLandscape_Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Location" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The location of the new landscape" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location = { "NewLandscape_Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Number of Components" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The number of components in the X and Y direction, determining the overall size of the landscape." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount = { "NewLandscape_ComponentCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_ComponentCount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Sections Per Component" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The number of sections in a single landscape component. This along with the section size determines the size of each landscape component. A component is the base unit of rendering and culling." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent = { "NewLandscape_SectionsPerComponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_SectionsPerComponent), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Section Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "The number of quads in a single landscape section. One section is the unit of LOD transition for landscape rendering." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection = { "NewLandscape_QuadsPerSection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_QuadsPerSection), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material_MetaData[] = {
		{ "Category", "New Landscape" },
		{ "DisplayName", "Material" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "NewLandscape" },
		{ "ToolTip", "Material initially applied to the landscape. Setting a material here exposes properties for setting up layer info based on the landscape blend nodes in the material." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material = { "NewLandscape_Material", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, NewLandscape_Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_MetaData[] = {
		{ "Category", "Change Component Size" },
		{ "DisplayName", "Resize Mode" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ResizeLandscape" },
		{ "ToolTip", "Determines how the new component size will be applied to the existing landscape geometry." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode = { "ResizeLandscape_ConvertMode", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ResizeLandscape_ConvertMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeConvertMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount_MetaData[] = {
		{ "Category", "Change Component Size" },
		{ "DisplayName", "Number of Components" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ResizeLandscape" },
		{ "ToolTip", "Number of components in resulting landscape" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount = { "ResizeLandscape_ComponentCount", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ResizeLandscape_ComponentCount), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent_MetaData[] = {
		{ "Category", "Change Component Size" },
		{ "DisplayName", "Sections Per Component" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ResizeLandscape" },
		{ "ToolTip", "Number of sections per landscape component" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent = { "ResizeLandscape_SectionsPerComponent", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ResizeLandscape_SectionsPerComponent), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection_MetaData[] = {
		{ "Category", "Change Component Size" },
		{ "DisplayName", "Section Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "ResizeLandscape" },
		{ "ToolTip", "Number of quads per landscape component section" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection = { "ResizeLandscape_QuadsPerSection", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ResizeLandscape_QuadsPerSection), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintCustomBrush_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Blueprint Brush" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "BPCustom" },
		{ "ToolTip", "BP Custom Tool" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintCustomBrush = { "BlueprintCustomBrush", nullptr, (EPropertyFlags)0x0014000000002001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, BlueprintCustomBrush), Z_Construct_UClass_ALandscapeBlueprintCustomBrush_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintCustomBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintCustomBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Smoothing Width" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Mirror" },
		{ "ToolTip", "Number of vertices either side of the mirror plane to smooth over" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth = { "MirrorSmoothingWidth", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, MirrorSmoothingWidth), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Operation" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Mirror" },
		{ "ToolTip", "Type of mirroring operation to perform e.g. \"Minus X To Plus X\" copies and flips the -X half of the landscape onto the +X half" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp = { "MirrorOp", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, MirrorOp), Z_Construct_UEnum_LandscapeEditor_ELandscapeMirrorOperation, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Mirror Point" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Mirror" },
		{ "ToolTip", "Location of the mirror plane, defaults to the center of the landscape. Doesn't normally need to be changed!" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint = { "MirrorPoint", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, MirrorPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers = { "GizmoImportLayers", nullptr, (EPropertyFlags)0x0010040400000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, GizmoImportLayers), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_Inner = { "GizmoImportLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGizmoImportLayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Heightmap Size" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize = { "GizmoImportSize", nullptr, (EPropertyFlags)0x0010040400000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, GizmoImportSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Heightmap" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString = { "GizmoHeightmapFilenameString", nullptr, (EPropertyFlags)0x0010040400000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, GizmoHeightmapFilenameString), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Use Smooth Gizmo Brush" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
		{ "ToolTip", "Smooths the edges of the gizmo data into the landscape. Without this, the edges of the pasted data will be sharp" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bSmoothGizmoBrush = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush = { "bSmoothGizmoBrush", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSnapGizmo_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Snap Gizmo to Landscape grid" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
		{ "ToolTip", "Makes sure the gizmo is snapped perfectly to the landscape so that the sample points line up, which makes copy/paste less blurry. Irrelevant if gizmo is scaled" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSnapGizmo_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bSnapGizmo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSnapGizmo = { "bSnapGizmo", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSnapGizmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSnapGizmo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSnapGizmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Gizmo copy/paste all layers" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
		{ "ToolTip", "If set, copies/pastes all layers, otherwise only copy/pastes the layer selected in the targets panel" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bApplyToAllTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets = { "bApplyToAllTargets", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "CopyPaste" },
		{ "ToolTip", "Whether to paste will only raise, only lower, or both" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode = { "PasteMode", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, PasteMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolPasteMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Negative Mask" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForMask", "" },
		{ "ShowForTools", "Mask" },
		{ "ToolTip", "If enabled, protects the selected region from changes\nIf disabled, only allows changes in the selected region" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseNegativeMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask = { "bUseNegativeMask", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Use Region as Mask" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForMask", "" },
		{ "ShowForTools", "Mask" },
		{ "ToolTip", "Uses selected region as a mask for other tools" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseSelectedRegion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion = { "bUseSelectedRegion", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Noise Scale" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Noise" },
		{ "ToolTip", "The size of the perlin noise filter used" },
		{ "UIMax", "256" },
		{ "UIMin", "1.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, NoiseScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Noise Mode" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Noise" },
		{ "ToolTip", "Whether to apply noise that raises, lowers, or both" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode = { "NoiseMode", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, NoiseMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolNoiseMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Detail Smooth" },
		{ "EditCondition", "bHErosionDetailSmooth" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "Larger detail smoothing values remove more details, while smaller values preserve more details" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale = { "HErosionDetailScale", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, HErosionDetailScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "If checked, performs a detail-preserving smooth to the erosion effect using the specified detail smoothing value" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bHErosionDetailSmooth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth = { "bHErosionDetailSmooth", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "The size of the noise filter for applying initial rain to the surface" },
		{ "UIMax", "256" },
		{ "UIMin", "1.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale = { "RainDistScale", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, RainDistScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Initial Rain Distribution" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "Initial Rain Distribution" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode = { "RainDistMode", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, RainDistMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolHydroErosionMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "300" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Iterations" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "Number of erosion iterations, more means more erosion but is slower" },
		{ "UIMax", "150" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum = { "HErodeIterationNum", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, HErodeIterationNum), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Sediment Cap." },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "The amount of sediment that the water can carry. Larger values will result in more erosion" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity = { "SedimentCapacity", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, SedimentCapacity), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "HydraErosion" },
		{ "ToolTip", "The amount of rain to apply to the surface. Larger values will result in more erosion" },
		{ "UIMax", "256" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount = { "RainAmount", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, RainAmount), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Noise Scale" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "The size of the perlin noise filter used" },
		{ "UIMax", "256" },
		{ "UIMin", "1.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale = { "ErosionNoiseScale", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ErosionNoiseScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Noise Mode" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "Whether to erode by lowering, raising, or both" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode = { "ErosionNoiseMode", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ErosionNoiseMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolErosionMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "300" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Iterations" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "Number of erosion iterations, more means more erosion but is slower" },
		{ "UIMax", "150" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum = { "ErodeIterationNum", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ErodeIterationNum), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "128" },
		{ "DisplayName", "Surface Thickness" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "The thickness of the surface for the layer weight erosion effect" },
		{ "UIMax", "512" },
		{ "UIMin", "128" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness = { "ErodeSurfaceThickness", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ErodeSurfaceThickness), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "256" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Threshold" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Erosion" },
		{ "ToolTip", "The minimum height difference necessary for the erosion effects to be applied. Smaller values will result in more erosion being applied" },
		{ "UIMax", "128" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh = { "ErodeThresh", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ErodeThresh), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Detail Smooth" },
		{ "EditCondition", "bDetailSmooth" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Smooth" },
		{ "ToolTip", "Larger detail smoothing values remove more details, while smaller values preserve more details" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale = { "DetailScale", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, DetailScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "If checked, performs a detail preserving smooth using the specified detail smoothing value" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bDetailSmooth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth = { "bDetailSmooth", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "31" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Filter Kernel Radius" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Smooth" },
		{ "ToolTip", "The radius smoothing is performed over\nHigher values smooth out bigger details, lower values only smooth out smaller details" },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize = { "SmoothFilterKernelSize", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, SmoothFilterKernelSize), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Side Falloff" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Ramp" },
		{ "ToolTip", "Falloff on side of ramp" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff = { "RampSideFalloff", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, RampSideFalloff), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Ramp" },
		{ "SliderExponent", "3" },
		{ "ToolTip", "Width of ramp" },
		{ "UIMax", "8192" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth = { "RampWidth", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, RampWidth), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget = { "FlattenEyeDropperModeDesiredTarget", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, FlattenEyeDropperModeDesiredTarget), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "Whether the Eye Dropper mode is activated" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bFlattenEyeDropperModeActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated = { "bFlattenEyeDropperModeActivated", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Terrace Smoothing" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Smoothing value for terrace flatten mode" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth = { "TerraceSmooth", nullptr, (EPropertyFlags)0x0010040400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, TerraceSmooth), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Terrace Interval" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Height of the terrace intervals in unreal units, for the terrace flatten mode" },
		{ "UIMax", "32768" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval = { "TerraceInterval", nullptr, (EPropertyFlags)0x0010040400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, TerraceInterval), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "DisplayName", "Show Preview Grid" },
		{ "EditCondition", "bUseFlattenTarget" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Whether to show the preview grid for the flatten target height" },
		{ "UIMax", "32768" },
		{ "UIMin", "-32768" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bShowFlattenTargetPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview = { "bShowFlattenTargetPreview", nullptr, (EPropertyFlags)0x0010040400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "EditCondition", "bUseFlattenTarget" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Target height to flatten towards (in Unreal Units)" },
		{ "UIMax", "32768" },
		{ "UIMin", "-32768" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget = { "FlattenTarget", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, FlattenTarget), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "Enable to flatten towards a target height" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseFlattenTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget = { "bUseFlattenTarget", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Constantly picks new values to flatten towards when dragging around, instead of only using the first clicked point" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bPickValuePerApply = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply = { "bPickValuePerApply", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTargetTypes", "Heightmap" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Flattens to the angle of the clicked point, instead of horizontal" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseSlopeFlatten = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten = { "bUseSlopeFlatten", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Flatten" },
		{ "ToolTip", "Whether to flatten by lowering, raising, both or terracing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode = { "FlattenMode", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, FlattenMode), Z_Construct_UEnum_LandscapeEditor_ELandscapeToolFlattenMode, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_MetaData)) };
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "I have no idea what this is for but it's used by the noise and erosion tools, and isn't exposed to the UI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius = { "MaximumValueRadius", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, MaximumValueRadius), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Use Target Value" },
		{ "EditCondition", "bUseWeightTargetValue" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Paint,Sculpt,Noise" },
		{ "ToolTip", "Enable to make tools blend towards a target value" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue = { "WeightTargetValue", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, WeightTargetValue), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ToolTip", "Enable to make tools blend towards a target value" },
	};
#endif
	void Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_SetBit(void* Obj)
	{
		((ULandscapeEditorObject*)Obj)->bUseWeightTargetValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue = { "bUseWeightTargetValue", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeEditorObject), &Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/LandscapeEditorObject.h" },
		{ "ShowForTools", "Paint,Sculpt,Smooth,Flatten,Erosion,HydraErosion,Noise,Mask,CopyPaste" },
		{ "ToolTip", "Strength of the tool. If you're using a pen/tablet with pressure-sensing, the pressure used affects the strength of the tool." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength = { "ToolStrength", nullptr, (EPropertyFlags)0x0010000400000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeEditorObject, ToolStrength), METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeEditorObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ShowUnusedLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TargetDisplayOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PaintingRestriction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushComponentSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTextureChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WorldSpacePatternBrushSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWorldSpacePatternBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushPanU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bAlphaBrushAutoRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_AlphaBrushScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseClayBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BrushRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Layers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_AlphamapType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ImportLandscape_HeightmapImportResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_ComponentCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_SectionsPerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_QuadsPerSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NewLandscape_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ConvertMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_ComponentCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_SectionsPerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ResizeLandscape_QuadsPerSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_BlueprintCustomBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorSmoothingWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorOp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MirrorPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoImportSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_GizmoHeightmapFilenameString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSmoothGizmoBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bSnapGizmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bApplyToAllTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_PasteMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseNegativeMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSelectedRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_NoiseMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErosionDetailScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bHErosionDetailSmooth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainDistMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_HErodeIterationNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SedimentCapacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RainAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErosionNoiseMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeIterationNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeSurfaceThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ErodeThresh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_DetailScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bDetailSmooth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_SmoothFilterKernelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampSideFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_RampWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenEyeDropperModeDesiredTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bFlattenEyeDropperModeActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceSmooth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_TerraceInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bShowFlattenTargetPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseFlattenTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bPickValuePerApply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseSlopeFlatten,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_FlattenMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_MaximumValueRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_WeightTargetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_bUseWeightTargetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeEditorObject_Statics::NewProp_ToolStrength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeEditorObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeEditorObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeEditorObject_Statics::ClassParams = {
		&ULandscapeEditorObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeEditorObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeEditorObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeEditorObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeEditorObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeEditorObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeEditorObject, 1170662772);
	template<> LANDSCAPEEDITOR_API UClass* StaticClass<ULandscapeEditorObject>()
	{
		return ULandscapeEditorObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeEditorObject(Z_Construct_UClass_ULandscapeEditorObject, &ULandscapeEditorObject::StaticClass, TEXT("/Script/LandscapeEditor"), TEXT("ULandscapeEditorObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeEditorObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
