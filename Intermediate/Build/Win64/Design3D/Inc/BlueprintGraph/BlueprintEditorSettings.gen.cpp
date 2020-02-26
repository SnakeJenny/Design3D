// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGraph/Public/BlueprintEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintEditorSettings() {}
// Cross Module References
	BLUEPRINTGRAPH_API UEnum* Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEditorSettings_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPEditorBookmarkNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* ESaveOnCompile_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile, Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("ESaveOnCompile"));
		}
		return Singleton;
	}
	template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<ESaveOnCompile>()
	{
		return ESaveOnCompile_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveOnCompile(ESaveOnCompile_StaticEnum, TEXT("/Script/BlueprintGraph"), TEXT("ESaveOnCompile"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Hash() { return 1983515864U; }
	UEnum* Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BlueprintGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveOnCompile"), 0, Get_Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SoC_Never", (int64)SoC_Never },
				{ "SoC_SuccessOnly", (int64)SoC_SuccessOnly },
				{ "SoC_Always", (int64)SoC_Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
				{ "SoC_Always.DisplayName", "Always" },
				{ "SoC_Never.DisplayName", "Never" },
				{ "SoC_SuccessOnly.DisplayName", "On Success Only" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGraph,
				nullptr,
				"ESaveOnCompile",
				"ESaveOnCompile",
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
	void UBlueprintEditorSettings::StaticRegisterNativesUBlueprintEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintEditorSettings_NoRegister()
	{
		return UBlueprintEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTemplateCacheCapMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NodeTemplateCacheCapMB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompileEventDisplayThresholdMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompileEventDisplayThresholdMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDetailedCompileResults_MetaData[];
#endif
		static void NewProp_bShowDetailedCompileResults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDetailedCompileResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlueprintNodeUniqueNames_MetaData[];
#endif
		static void NewProp_bBlueprintNodeUniqueNames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlueprintNodeUniqueNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowActionMenuItemSignatures_MetaData[];
#endif
		static void NewProp_bShowActionMenuItemSignatures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowActionMenuItemSignatures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowExplicitImpureNodeDisabling_MetaData[];
#endif
		static void NewProp_bAllowExplicitImpureNodeDisabling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowExplicitImpureNodeDisabling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJumpToNodeErrors_MetaData[];
#endif
		static void NewProp_bJumpToNodeErrors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJumpToNodeErrors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveOnCompile_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveOnCompile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphEditorQuickJumps_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GraphEditorQuickJumps;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GraphEditorQuickJumps_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphEditorQuickJumps_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_MetaData[];
#endif
		static void NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBookmarksForCurrentDocumentOnlyInTab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeCommentNodesInBookmarksTab_MetaData[];
#endif
		static void NewProp_bIncludeCommentNodesInBookmarksTab_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeCommentNodesInBookmarksTab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BookmarkNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BookmarkNodes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BookmarkNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bookmarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Bookmarks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bookmarks_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bookmarks_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNavigateToNativeFunctionsFromCallNodes_MetaData[];
#endif
		static void NewProp_bNavigateToNativeFunctionsFromCallNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNavigateToNativeFunctionsFromCallNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHostFindInBlueprintsInGlobalTab_MetaData[];
#endif
		static void NewProp_bHostFindInBlueprintsInGlobalTab_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHostFindInBlueprintsInGlobalTab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideConstructionScriptComponentsInDetailsView_MetaData[];
#endif
		static void NewProp_bHideConstructionScriptComponentsInDetailsView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideConstructionScriptComponentsInDetailsView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnDefaultBlueprintNodes_MetaData[];
#endif
		static void NewProp_bSpawnDefaultBlueprintNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnDefaultBlueprintNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowEmptySections_MetaData[];
#endif
		static void NewProp_bShowEmptySections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowEmptySections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInheritedVariables_MetaData[];
#endif
		static void NewProp_bShowInheritedVariables_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInheritedVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowViewportOnSimulate_MetaData[];
#endif
		static void NewProp_bShowViewportOnSimulate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowViewportOnSimulate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCastObjectConnections_MetaData[];
#endif
		static void NewProp_bAutoCastObjectConnections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCastObjectConnections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFavorPureCastNodes_MetaData[];
#endif
		static void NewProp_bFavorPureCastNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFavorPureCastNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlattenFavoritesMenus_MetaData[];
#endif
		static void NewProp_bFlattenFavoritesMenus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlattenFavoritesMenus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompactCallOnMemberNodes_MetaData[];
#endif
		static void NewProp_bCompactCallOnMemberNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompactCallOnMemberNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowContextualFavorites_MetaData[];
#endif
		static void NewProp_bShowContextualFavorites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowContextualFavorites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExposeAllMemberComponentFunctions_MetaData[];
#endif
		static void NewProp_bExposeAllMemberComponentFunctions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExposeAllMemberComponentFunctions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSplitContextTargetSettings_MetaData[];
#endif
		static void NewProp_bSplitContextTargetSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSplitContextTargetSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGraphInstructionText_MetaData[];
#endif
		static void NewProp_bShowGraphInstructionText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGraphInstructionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawMidpointArrowsInBlueprints_MetaData[];
#endif
		static void NewProp_bDrawMidpointArrowsInBlueprints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawMidpointArrowsInBlueprints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintEditorSettings.h" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Node-Template Cache Cap (MB)" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "The node template cache is used to speed up blueprint menuing. This determines the peak data size for that cache." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB = { "NodeTemplateCacheCapMB", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEditorSettings, NodeTemplateCacheCapMB), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Compile Event Results Threshold (ms)" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Minimum event time threshold used as a filter when additional details are enabled for display in the Compiler Results tab. A value of zero means that all events will be included in the final summary." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs = { "CompileEventDisplayThresholdMs", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEditorSettings, CompileEventDisplayThresholdMs), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, additional details will be displayed in the Compiler Results tab after compiling a blueprint." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowDetailedCompileResults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults = { "bShowDetailedCompileResults", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_MetaData[] = {
		{ "Category", "DeveloperTools" },
		{ "DisplayName", "Display Unique Names for Blueprint Nodes" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, blueprint nodes in the event graph will display with unique names rather than their display name." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bBlueprintNodeUniqueNames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames = { "bBlueprintNodeUniqueNames", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_MetaData[] = {
		{ "Category", "DeveloperTools" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, tooltips on action menu items will show the associated action's signature id (can be used to setup custom favorites menus)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowActionMenuItemSignatures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures = { "bShowActionMenuItemSignatures", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, nodes can be explicitly disabled via context menu when right-clicking on impure nodes in the Blueprint editor. Disabled nodes will not be compiled, but also will not break existing connections." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bAllowExplicitImpureNodeDisabling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling = { "bAllowExplicitImpureNodeDisabling", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "When enabled, if a blueprint has compiler errors, then the graph will jump and focus on the first node generating an error" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bJumpToNodeErrors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors = { "bJumpToNodeErrors", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Determines when to save Blueprints post-compile" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile = { "SaveOnCompile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEditorSettings, SaveOnCompile), Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Blueprint graph editor \"Quick Jump\" command bindings" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps = { "GraphEditorQuickJumps", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEditorSettings, GraphEditorQuickJumps), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_Key_KeyProp = { "GraphEditorQuickJumps_Key", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_ValueProp = { "GraphEditorQuickJumps", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, only the bookmarks for the current document will be shown in the Bookmarks tab." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowBookmarksForCurrentDocumentOnlyInTab = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab = { "bShowBookmarksForCurrentDocumentOnlyInTab", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, comment nodes will be included in the tree view display in the Bookmarks tab." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bIncludeCommentNodesInBookmarksTab = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab = { "bIncludeCommentNodesInBookmarksTab", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Blueprint bookmark nodes (for display)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes = { "BookmarkNodes", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEditorSettings, BookmarkNodes), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_Inner = { "BookmarkNodes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBPEditorBookmarkNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Blueprint bookmark database" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks = { "Bookmarks", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlueprintEditorSettings, Bookmarks), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_Key_KeyProp = { "Bookmarks_Key", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_ValueProp = { "Bookmarks", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_MetaData[] = {
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set double clicking on a call function node will jump to the native source definition:" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bNavigateToNativeFunctionsFromCallNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes = { "bNavigateToNativeFunctionsFromCallNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_MetaData[] = {
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set, the global Find in Blueprints command (CTRL-SHIFT-F) will be hosted in a standalone tab. This tab can remain open after the Blueprint Editor context is closed." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bHostFindInBlueprintsInGlobalTab = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab = { "bHostFindInBlueprintsInGlobalTab", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_MetaData[] = {
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set will exclude components added in a Blueprint class Construction Script from the component details view" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bHideConstructionScriptComponentsInDetailsView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView = { "bHideConstructionScriptComponentsInDetailsView", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_MetaData[] = {
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set will spawn default nodes in new Blueprints" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bSpawnDefaultBlueprintNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes = { "bSpawnDefaultBlueprintNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set we'll show empty sections in the My Blueprint view." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowEmptySections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections = { "bShowEmptySections", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set we'll show the inherited variables in the My Blueprint view." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowInheritedVariables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables = { "bShowInheritedVariables", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_MetaData[] = {
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If true will show the viewport tab when simulate is clicked." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowViewportOnSimulate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate = { "bShowViewportOnSimulate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_MetaData[] = {
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then you'll be able to directly connect arbitrary object pins together (a pure cast node will be injected automatically)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bAutoCastObjectConnections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections = { "bAutoCastObjectConnections", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_MetaData[] = {
		{ "Category", "Experimental" },
		{ "DisplayName", "Default to Using Pure Cast Nodes" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then placed cast nodes will default to their \"pure\" form (meaning: without execution pins)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bFavorPureCastNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes = { "bFavorPureCastNodes", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_MetaData[] = {
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then your Blueprint favorites will be uncategorized, leaving you with less nested categories to sort through." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bFlattenFavoritesMenus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus = { "bFlattenFavoritesMenus", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_MetaData[] = {
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then call-on-member actions will be spawned as a single node (instead of a GetMember + FunctionCall node)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bCompactCallOnMemberNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes = { "bCompactCallOnMemberNodes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_MetaData[] = {
		{ "Category", "Workflow" },
		{ "DisplayName", "Context Menu: Show Favorites Section" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then a separate section with your Blueprint favorites will be pined to the top of the context menu." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowContextualFavorites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites = { "bShowContextualFavorites", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_MetaData[] = {
		{ "Category", "Workflow" },
		{ "DisplayName", "Context Menu: Expose All Sub-Component Functions" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then ALL component functions are exposed to the context menu (when the contextual target is a component owner). Ignores \"ExposeFunctionCategories\" metadata for components." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bExposeAllMemberComponentFunctions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions = { "bExposeAllMemberComponentFunctions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_MetaData[] = {
		{ "Category", "Workflow" },
		{ "DisplayName", "Context Menu: Divide Context Target Preferences" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, we'll save off your chosen target setting based off of the context (allowing you to have different preferences based off what you're operating on)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bSplitContextTargetSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings = { "bSplitContextTargetSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_MetaData[] = {
		{ "Category", "VisualStyle" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Determines if lightweight tutorial text shows up at the top of empty blueprint graphs" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowGraphInstructionText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText = { "bShowGraphInstructionText", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_MetaData[] = {
		{ "Category", "VisualStyle" },
		{ "DisplayName", "Draw midpoint arrows in Blueprints" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Should arrows indicating data/execution flow be drawn halfway along wires?" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bDrawMidpointArrowsInBlueprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints = { "bDrawMidpointArrowsInBlueprints", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::ClassParams = {
		&UBlueprintEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintEditorSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintEditorSettings, 2535960830);
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintEditorSettings>()
	{
		return UBlueprintEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintEditorSettings(Z_Construct_UClass_UBlueprintEditorSettings, &UBlueprintEditorSettings::StaticClass, TEXT("/Script/BlueprintGraph"), TEXT("UBlueprintEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
