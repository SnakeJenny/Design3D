// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Editor/EditorEngine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorEngine() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPasteTo();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionStateOfLevel();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FCopySelectedInfo();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FPIELoginInfo();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FSlatePlayInEditorInfo();
	UNREALED_API UClass* Z_Construct_UClass_UEditorEngine_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorEngine();
	ENGINE_API UClass* Z_Construct_UClass_UEngine();
	UNREALED_API UClass* Z_Construct_UClass_UActorGroupingUtils_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTransactor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
// End Cross Module References
	static UEnum* EPasteTo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPasteTo, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPasteTo"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPasteTo>()
	{
		return EPasteTo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPasteTo(EPasteTo_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPasteTo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPasteTo_Hash() { return 2278339300U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPasteTo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPasteTo"), 0, Get_Z_Construct_UEnum_UnrealEd_EPasteTo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PT_OriginalLocation", (int64)PT_OriginalLocation },
				{ "PT_Here", (int64)PT_Here },
				{ "PT_WorldOrigin", (int64)PT_WorldOrigin },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPasteTo",
				"EPasteTo",
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
	static UEnum* EMapSetBrushFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EMapSetBrushFlags"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EMapSetBrushFlags>()
	{
		return EMapSetBrushFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMapSetBrushFlags(EMapSetBrushFlags_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EMapSetBrushFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Hash() { return 3174894145U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMapSetBrushFlags"), 0, Get_Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MSB_BrushColor", (int64)MSB_BrushColor },
				{ "MSB_Group", (int64)MSB_Group },
				{ "MSB_PolyFlags", (int64)MSB_PolyFlags },
				{ "MSB_BrushType", (int64)MSB_BrushType },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
				{ "MSB_BrushColor.ToolTip", "Set brush color." },
				{ "MSB_BrushType.ToolTip", "Set CSG operation." },
				{ "MSB_Group.ToolTip", "Set group." },
				{ "MSB_PolyFlags.ToolTip", "Set poly flags." },
				{ "ToolTip", "Things to set in mapSetBrush." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EMapSetBrushFlags",
				"EMapSetBrushFlags",
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
class UScriptStruct* FSelectionStateOfLevel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FSelectionStateOfLevel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectionStateOfLevel, Z_Construct_UPackage__Script_UnrealEd(), TEXT("SelectionStateOfLevel"), sizeof(FSelectionStateOfLevel), Get_Z_Construct_UScriptStruct_FSelectionStateOfLevel_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FSelectionStateOfLevel>()
{
	return FSelectionStateOfLevel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSelectionStateOfLevel(FSelectionStateOfLevel::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("SelectionStateOfLevel"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFSelectionStateOfLevel
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFSelectionStateOfLevel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SelectionStateOfLevel")),new UScriptStruct::TCppStructOps<FSelectionStateOfLevel>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFSelectionStateOfLevel;
	struct Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedComponents;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedActors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Represents the current selection state of a level (its selected actors and components) from a given point in a time, in a way that can be safely restored later even if the level is reloaded" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectionStateOfLevel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Path names of all the selected components" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents = { "SelectedComponents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectionStateOfLevel, SelectedComponents), METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_Inner = { "SelectedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Path names of all the selected actors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors = { "SelectedActors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectionStateOfLevel, SelectedActors), METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_Inner = { "SelectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"SelectionStateOfLevel",
		sizeof(FSelectionStateOfLevel),
		alignof(FSelectionStateOfLevel),
		Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSelectionStateOfLevel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSelectionStateOfLevel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SelectionStateOfLevel"), sizeof(FSelectionStateOfLevel), Get_Z_Construct_UScriptStruct_FSelectionStateOfLevel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSelectionStateOfLevel_Hash() { return 1719300662U; }
class UScriptStruct* FCopySelectedInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FCopySelectedInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCopySelectedInfo, Z_Construct_UPackage__Script_UnrealEd(), TEXT("CopySelectedInfo"), sizeof(FCopySelectedInfo), Get_Z_Construct_UScriptStruct_FCopySelectedInfo_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FCopySelectedInfo>()
{
	return FCopySelectedInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCopySelectedInfo(FCopySelectedInfo::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("CopySelectedInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFCopySelectedInfo
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFCopySelectedInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CopySelectedInfo")),new UScriptStruct::TCppStructOps<FCopySelectedInfo>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFCopySelectedInfo;
	struct Z_Construct_UScriptStruct_FCopySelectedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCopySelectedInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"CopySelectedInfo",
		sizeof(FCopySelectedInfo),
		alignof(FCopySelectedInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCopySelectedInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCopySelectedInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CopySelectedInfo"), sizeof(FCopySelectedInfo), Get_Z_Construct_UScriptStruct_FCopySelectedInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCopySelectedInfo_Hash() { return 2434732016U; }
class UScriptStruct* FPIELoginInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FPIELoginInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIELoginInfo, Z_Construct_UPackage__Script_UnrealEd(), TEXT("PIELoginInfo"), sizeof(FPIELoginInfo), Get_Z_Construct_UScriptStruct_FPIELoginInfo_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FPIELoginInfo>()
{
	return FPIELoginInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIELoginInfo(FPIELoginInfo::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("PIELoginInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFPIELoginInfo
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFPIELoginInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIELoginInfo")),new UScriptStruct::TCppStructOps<FPIELoginInfo>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFPIELoginInfo;
	struct Z_Construct_UScriptStruct_FPIELoginInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Data structure for storing PIE login credentials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIELoginInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Credentials of the user logging in (password or auth token)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIELoginInfo, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Id of the user logging in (email, display name, facebook id, etc)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIELoginInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIELoginInfo, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIELoginInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginInfo_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIELoginInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"PIELoginInfo",
		sizeof(FPIELoginInfo),
		alignof(FPIELoginInfo),
		Z_Construct_UScriptStruct_FPIELoginInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIELoginInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIELoginInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIELoginInfo"), sizeof(FPIELoginInfo), Get_Z_Construct_UScriptStruct_FPIELoginInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIELoginInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIELoginInfo_Hash() { return 3926667014U; }
class UScriptStruct* FSlatePlayInEditorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlatePlayInEditorInfo, Z_Construct_UPackage__Script_UnrealEd(), TEXT("SlatePlayInEditorInfo"), sizeof(FSlatePlayInEditorInfo), Get_Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FSlatePlayInEditorInfo>()
{
	return FSlatePlayInEditorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlatePlayInEditorInfo(FSlatePlayInEditorInfo::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("SlatePlayInEditorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFSlatePlayInEditorInfo
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFSlatePlayInEditorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlatePlayInEditorInfo")),new UScriptStruct::TCppStructOps<FSlatePlayInEditorInfo>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFSlatePlayInEditorInfo;
	struct Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlatePlayInEditorInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"SlatePlayInEditorInfo",
		sizeof(FSlatePlayInEditorInfo),
		alignof(FSlatePlayInEditorInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlatePlayInEditorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlatePlayInEditorInfo"), sizeof(FSlatePlayInEditorInfo), Get_Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlatePlayInEditorInfo_Hash() { return 536019151U; }
	void UEditorEngine::StaticRegisterNativesUEditorEngine()
	{
	}
	UClass* Z_Construct_UClass_UEditorEngine_NoRegister()
	{
		return UEditorEngine::StaticClass();
	}
	struct Z_Construct_UClass_UEditorEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorGroupingUtils_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorGroupingUtils;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorGroupingUtilsClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorGroupingUtilsClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorWorldExtensionsManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWorldExtensionsManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrushBuilders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BrushBuilders;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrushBuilders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawParticleHelpers_MetaData[];
#endif
		static void NewProp_bDrawParticleHelpers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawParticleHelpers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawSocketsInGMode_MetaData[];
#endif
		static void NewProp_bDrawSocketsInGMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawSocketsInGMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCameraAlignEmitterDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomCameraAlignEmitterDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomCameraAlignEmitter_MetaData[];
#endif
		static void NewProp_bCustomCameraAlignEmitter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomCameraAlignEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPreviewMesh_MetaData[];
#endif
		static void NewProp_bShowPreviewMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPreviewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewMeshIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScratchRenderTarget256_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScratchRenderTarget256;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScratchRenderTarget512_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScratchRenderTarget512;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScratchRenderTarget1024_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScratchRenderTarget1024;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScratchRenderTarget2048_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScratchRenderTarget2048;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserEditedPlayWorldURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserEditedPlayWorldURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInEditorViewportIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayInEditorViewportIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildPlayDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BuildPlayDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobilePreviewPortrait_MetaData[];
#endif
		static void NewProp_bMobilePreviewPortrait_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobilePreviewPortrait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayWorldDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPlayWorldDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayWorldDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayWorldDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsThatWereSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsThatWereSelected;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ActorsThatWereSelected_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFromHerePlayerStartClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayFromHerePlayerStartClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyUndoRedoSelectionChange_MetaData[];
#endif
		static void NewProp_bNotifyUndoRedoSelectionChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyUndoRedoSelectionChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSquelchTransactionNotification_MetaData[];
#endif
		static void NewProp_bSquelchTransactionNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSquelchTransactionNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSimulatingInEditor_MetaData[];
#endif
		static void NewProp_bIsSimulatingInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSimulatingInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVRPreviewForPlayWorld_MetaData[];
#endif
		static void NewProp_bUseVRPreviewForPlayWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVRPreviewForPlayWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMobilePreviewForPlayWorld_MetaData[];
#endif
		static void NewProp_bUseMobilePreviewForPlayWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMobilePreviewForPlayWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPlayWorldPlacement_MetaData[];
#endif
		static void NewProp_bHasPlayWorldPlacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPlayWorldPlacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequestEndPlayMapQueued_MetaData[];
#endif
		static void NewProp_bRequestEndPlayMapQueued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequestEndPlayMapQueued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMultiplePIEWorlds_MetaData[];
#endif
		static void NewProp_bAllowMultiplePIEWorlds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMultiplePIEWorlds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSimulateInEditorQueued_MetaData[];
#endif
		static void NewProp_bIsSimulateInEditorQueued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSimulateInEditorQueued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsToggleBetweenPIEandSIEQueued_MetaData[];
#endif
		static void NewProp_bIsToggleBetweenPIEandSIEQueued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsToggleBetweenPIEandSIEQueued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayWorldQueued_MetaData[];
#endif
		static void NewProp_bIsPlayWorldQueued_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayWorldQueued;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayWorldRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayWorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayWorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InEditorGameURLOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InEditorGameURLOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserOpenedFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserOpenedFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorFactories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorFactories;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorFactories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightMapExportClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeightMapExportClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLODLocking_MetaData[];
#endif
		static void NewProp_bEnableLODLocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLODLocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSocketSnapping_MetaData[];
#endif
		static void NewProp_bEnableSocketSnapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSocketSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowBrushMarkerPolys_MetaData[];
#endif
		static void NewProp_bShowBrushMarkerPolys_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBrushMarkerPolys;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCommandLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameCommandLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GodMode_MetaData[];
#endif
		static void NewProp_GodMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GodMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAxisIndicator_MetaData[];
#endif
		static void NewProp_UseAxisIndicator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAxisIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSizingBox_MetaData[];
#endif
		static void NewProp_UseSizingBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSizingBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetailMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MouseMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClickPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClickLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnsnappedClickLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnsnappedClickLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ClickFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsImportingT3D_MetaData[];
#endif
		static void NewProp_IsImportingT3D_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsImportingT3D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFastRebuild_MetaData[];
#endif
		static void NewProp_bFastRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFastRebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCylinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorCylinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorCube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorCube;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bad_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trans_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversionTempModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConversionTempModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TempModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/EditorEngine.h" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Engine that drives the Editor.\nSeparate from UGameEngine because it may have much different functionality than desired for an instance of a game itself." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils = { "ActorGroupingUtils", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ActorGroupingUtils), Z_Construct_UClass_UActorGroupingUtils_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "MetaClass", "ActorGroupingUtils" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName = { "ActorGroupingUtilsClassName", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ActorGroupingUtilsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Manager that holds all extensions paired with a world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager = { "EditorWorldExtensionsManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, EditorWorldExtensionsManager), Z_Construct_UClass_UEditorWorldExtensionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Brush builders that have been created in the editor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders = { "BrushBuilders", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, BrushBuilders), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_Inner = { "BrushBuilders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBrushBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, then draw particle debug helpers in editor viewports" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bDrawParticleHelpers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers = { "bDrawParticleHelpers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, then draw sockets when socket snapping is enabled in 'g' mode" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bDrawSocketsInGMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode = { "bDrawSocketsInGMode", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The distance to place the camera from an emitter actor when custom zooming is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance = { "CustomCameraAlignEmitterDistance", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, CustomCameraAlignEmitterDistance), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If \"Camera Align\" emitter handling uses a custom zoom or not" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bCustomCameraAlignEmitter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter = { "bCustomCameraAlignEmitter", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "When true, the preview mesh mode is activated." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bShowPreviewMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh = { "bShowPreviewMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The index of the mesh to use from the list of preview meshes." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex = { "PreviewMeshIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PreviewMeshIndex), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "A mesh component used to preview in editor without spawning a static mesh actor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp = { "PreviewMeshComp", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PreviewMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256 = { "ScratchRenderTarget256", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ScratchRenderTarget256), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512 = { "ScratchRenderTarget512", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ScratchRenderTarget512), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024 = { "ScratchRenderTarget1024", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ScratchRenderTarget1024), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Temporary render target that can be used by the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048 = { "ScratchRenderTarget2048", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ScratchRenderTarget2048), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Play world url string edited by a user." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL = { "UserEditedPlayWorldURL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, UserEditedPlayWorldURL), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "When set to anything other than -1, indicates a specific In-Editor viewport index that PIE should use" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex = { "PlayInEditorViewportIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PlayInEditorViewportIndex), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Currently targeted device for mobile previewer." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice = { "BuildPlayDevice", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, BuildPlayDevice), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Mobile preview settings for what orientation to default to" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bMobilePreviewPortrait = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait = { "bMobilePreviewPortrait", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The current play world destination (I.E console).  -1 means no current play world destination, 0 or more is an index into the GConsoleSupportContainer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination = { "CurrentPlayWorldDestination", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, CurrentPlayWorldDestination), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Where did the person want to play? Where to play the game - -1 means in editor, 0 or more is an index into the GConsoleSupportContainer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination = { "PlayWorldDestination", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PlayWorldDestination), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "When Simulating In Editor, an array of all actors that were selected when it began" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected = { "ActorsThatWereSelected", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ActorsThatWereSelected), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_Inner = { "ActorsThatWereSelected", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "When Simulating In Editor, a pointer to the original (non-simulating) editor world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld = { "EditorWorld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, EditorWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The PlayerStart class used when spawning the player at the current camera location." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass = { "PlayFromHerePlayerStartClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PlayFromHerePlayerStartClass), Z_Construct_UClass_ANavigationObjectBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we should force a selection change notification during an undo/redo" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bNotifyUndoRedoSelectionChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange = { "bNotifyUndoRedoSelectionChange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we should not display notifications about undo/redo" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bSquelchTransactionNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification = { "bSquelchTransactionNotification", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we're Simulating In Editor, as opposed to Playing In Editor.  In this mode, simulation takes place right the level editing environment" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bIsSimulatingInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor = { "bIsSimulatingInEditor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True to enable VR preview mode when launching the game from the editor on PC platform" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bUseVRPreviewForPlayWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld = { "bUseVRPreviewForPlayWorld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True to enable mobile preview mode when launching the game from the editor on PC platform" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bUseMobilePreviewForPlayWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld = { "bUseMobilePreviewForPlayWorld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Did the request include the optional location and rotation?" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bHasPlayWorldPlacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement = { "bHasPlayWorldPlacement", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if there is a pending end play map queued" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bRequestEndPlayMapQueued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued = { "bRequestEndPlayMapQueued", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Allows multipel PIE worlds under a single instance. If false, you can only do multiple UE4 processes for pie networking" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bAllowMultiplePIEWorlds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds = { "bAllowMultiplePIEWorlds", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we are requesting to start a simulation-in-editor session" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bIsSimulateInEditorQueued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued = { "bIsSimulateInEditorQueued", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Has a request to toggle between PIE and SIE been made?" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bIsToggleBetweenPIEandSIEQueued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued = { "bIsToggleBetweenPIEandSIEQueued", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Has a request for \"Play From Here\" been made?" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bIsPlayWorldQueued = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued = { "bIsPlayWorldQueued", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "An optional rotation for the starting location for \"Play From Here\"" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation = { "PlayWorldRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PlayWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "An optional location for the starting location for \"Play From Here\"" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation = { "PlayWorldLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PlayWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "A pointer to a UWorld that is the duplicated/saved-loaded to be played in with \"Play From Here\"" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld = { "PlayWorld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PlayWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Additional per-user/per-game options set in the .ini file. Should be in the form \"?option1=X?option2?option3=Y\"" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions = { "InEditorGameURLOptions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, InEditorGameURLOptions), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The name of the file currently being opened in the editor. \"\" if no file is being opened." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile = { "UserOpenedFile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, UserOpenedFile), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Array of actor factories created at editor startup and used by context menu etc." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories = { "ActorFactories", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ActorFactories), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_Inner = { "ActorFactories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UActorFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName = { "HeightMapExportClassName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, HeightMapExportClassName), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, same type views will be camera tied, and ortho views will use perspective view for LOD parenting" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bEnableLODLocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking = { "bEnableLODLocking", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, socket snapping is enabled in the main level viewports." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bEnableSocketSnapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping = { "bEnableSocketSnapping", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, show translucent marker polygons on the builder brush and volumes." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bShowBrushMarkerPolys = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys = { "bShowBrushMarkerPolys", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine = { "GameCommandLine", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, GameCommandLine), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->GodMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode = { "GodMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->UseAxisIndicator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator = { "UseAxisIndicator", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Advanced." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->UseSizingBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox = { "UseSizingBox", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Setting for the detail mode to show in the editor viewports" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode = { "DetailMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, DetailMode), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement = { "MouseMovement", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, MouseMovement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane = { "ClickPlane", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ClickPlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation = { "ClickLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ClickLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation = { "UnsnappedClickLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, UnsnappedClickLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext = { "ParentContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ParentContext), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Other variables." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags = { "ClickFlags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ClickFlags), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->IsImportingT3D = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D = { "IsImportingT3D", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Toggles." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bFastRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild = { "bFastRebuild", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder = { "EditorCylinder", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, EditorCylinder), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane = { "EditorPlane", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, EditorPlane), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere = { "EditorSphere", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, EditorSphere), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Used in UnrealEd for showing materials" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube = { "EditorCube", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, EditorCube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent = { "PreviewAudioComponent", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PreviewAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue = { "PreviewSoundCue", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, PreviewSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Font used by Canvas-based editors" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont = { "EditorFont", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, EditorFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Textures." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad = { "Bad", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, Bad), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans = { "Trans", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, Trans), Z_Construct_UClass_UTransactor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel = { "ConversionTempModel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, ConversionTempModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Objects." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel = { "TempModel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorEngine, TempModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorEngine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorEngine_Statics::ClassParams = {
		&UEditorEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorEngine_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::PropPointers),
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorEngine, 1385031011);
	template<> UNREALED_API UClass* StaticClass<UEditorEngine>()
	{
		return UEditorEngine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorEngine(Z_Construct_UClass_UEditorEngine, &UEditorEngine::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorEngine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
