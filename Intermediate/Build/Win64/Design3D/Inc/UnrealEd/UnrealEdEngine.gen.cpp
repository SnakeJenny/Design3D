// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Editor/UnrealEdEngine.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEdEngine() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EWriteDisallowedWarningState();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPackageNotifyState();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateMapInfo();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FClassMoveInfo();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
	UNREALED_API UClass* Z_Construct_UClass_UEditorEngine();
	UNREALED_API UClass* Z_Construct_UClass_UCookOnTheFlyServer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAutoReimportManager_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdOptions_NoRegister();
// End Cross Module References
	static UEnum* EWriteDisallowedWarningState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EWriteDisallowedWarningState, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EWriteDisallowedWarningState"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EWriteDisallowedWarningState>()
	{
		return EWriteDisallowedWarningState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWriteDisallowedWarningState(EWriteDisallowedWarningState_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EWriteDisallowedWarningState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EWriteDisallowedWarningState_Hash() { return 3512910541U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EWriteDisallowedWarningState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWriteDisallowedWarningState"), 0, Get_Z_Construct_UEnum_UnrealEd_EWriteDisallowedWarningState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WDWS_PendingWarn", (int64)WDWS_PendingWarn },
				{ "WDWS_Warned", (int64)WDWS_Warned },
				{ "WDWS_WarningUnnecessary", (int64)WDWS_WarningUnnecessary },
				{ "WDWS_MAX", (int64)WDWS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
				{ "WDWS_PendingWarn.ToolTip", "The user needs to be warned about the package." },
				{ "WDWS_Warned.ToolTip", "The user has been warned about the package." },
				{ "WDWS_WarningUnnecessary.ToolTip", "Warning for the package unnecessary." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EWriteDisallowedWarningState",
				"EWriteDisallowedWarningState",
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
	static UEnum* EPackageNotifyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPackageNotifyState, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPackageNotifyState"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPackageNotifyState>()
	{
		return EPackageNotifyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPackageNotifyState(EPackageNotifyState_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("EPackageNotifyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Hash() { return 4186777761U; }
	UEnum* Z_Construct_UEnum_UnrealEd_EPackageNotifyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPackageNotifyState"), 0, Get_Z_Construct_UEnum_UnrealEd_EPackageNotifyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NS_Updating", (int64)NS_Updating },
				{ "NS_BalloonPrompted", (int64)NS_BalloonPrompted },
				{ "NS_DialogPrompted", (int64)NS_DialogPrompted },
				{ "NS_PendingPrompt", (int64)NS_PendingPrompt },
				{ "NS_PendingWarning", (int64)NS_PendingWarning },
				{ "NS_MAX", (int64)NS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
				{ "NS_BalloonPrompted.ToolTip", "The user has been prompted with the balloon taskbar message." },
				{ "NS_DialogPrompted.ToolTip", "The user responded to the balloon task bar message and got the modal prompt to checkout dialog and responded to it." },
				{ "NS_PendingPrompt.ToolTip", "The package has been marked dirty and is pending a balloon prompt." },
				{ "NS_PendingWarning.ToolTip", "The package has been marked dirty but cannot be checked out, and is pending a modal warning dialog." },
				{ "NS_Updating.ToolTip", "Updating the source control state of the package" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"EPackageNotifyState",
				"EPackageNotifyState",
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
class UScriptStruct* FTemplateMapInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FTemplateMapInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateMapInfo, Z_Construct_UPackage__Script_UnrealEd(), TEXT("TemplateMapInfo"), sizeof(FTemplateMapInfo), Get_Z_Construct_UScriptStruct_FTemplateMapInfo_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FTemplateMapInfo>()
{
	return FTemplateMapInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTemplateMapInfo(FTemplateMapInfo::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("TemplateMapInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFTemplateMapInfo
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFTemplateMapInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TemplateMapInfo")),new UScriptStruct::TCppStructOps<FTemplateMapInfo>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFTemplateMapInfo;
	struct Z_Construct_UScriptStruct_FTemplateMapInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Used during asset renaming/duplication to specify class-specific package/group targets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateMapInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "The object path to the template map" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateMapInfo, Map), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "The Texture2D associated with this map template" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTemplateMapInfo, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"TemplateMapInfo",
		sizeof(FTemplateMapInfo),
		alignof(FTemplateMapInfo),
		Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateMapInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTemplateMapInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TemplateMapInfo"), sizeof(FTemplateMapInfo), Get_Z_Construct_UScriptStruct_FTemplateMapInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTemplateMapInfo_Hash() { return 1490041553U; }
class UScriptStruct* FClassMoveInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FClassMoveInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassMoveInfo, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ClassMoveInfo"), sizeof(FClassMoveInfo), Get_Z_Construct_UScriptStruct_FClassMoveInfo_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FClassMoveInfo>()
{
	return FClassMoveInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClassMoveInfo(FClassMoveInfo::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("ClassMoveInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFClassMoveInfo
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFClassMoveInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClassMoveInfo")),new UScriptStruct::TCppStructOps<FClassMoveInfo>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFClassMoveInfo;
	struct Z_Construct_UScriptStruct_FClassMoveInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Used during asset renaming/duplication to specify class-specific package/group targets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassMoveInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "If true, this info is applied when moving/duplicating assets." },
	};
#endif
	void Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FClassMoveInfo*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FClassMoveInfo), &Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "The target group info which assets of this type are moved/duplicated." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassMoveInfo, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "The target package info which assets of this type are moved/duplicated." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassMoveInfo, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "The type of asset this MoveInfo applies to." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClassMoveInfo, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassMoveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassMoveInfo_Statics::NewProp_ClassName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassMoveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ClassMoveInfo",
		sizeof(FClassMoveInfo),
		alignof(FClassMoveInfo),
		Z_Construct_UScriptStruct_FClassMoveInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClassMoveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassMoveInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClassMoveInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClassMoveInfo"), sizeof(FClassMoveInfo), Get_Z_Construct_UScriptStruct_FClassMoveInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClassMoveInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClassMoveInfo_Hash() { return 3317271996U; }
	void UUnrealEdEngine::StaticRegisterNativesUUnrealEdEngine()
	{
	}
	UClass* Z_Construct_UClass_UUnrealEdEngine_NoRegister()
	{
		return UUnrealEdEngine::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealEdEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CookServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateMapInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TemplateMapInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateMapInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedSpriteCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedSpriteCategories;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SortedSpriteCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedWarningForWritePermission_MetaData[];
#endif
		static void NewProp_bNeedWarningForWritePermission_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedWarningForWritePermission;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedWarningForPkgEngineVer_MetaData[];
#endif
		static void NewProp_bNeedWarningForPkgEngineVer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedWarningForPkgEngineVer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLODParentActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLODParentActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagesToBeFullyLoadedAtStartup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagesToBeFullyLoadedAtStartup;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackagesToBeFullyLoadedAtStartup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationCompressionAlgorithms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationCompressionAlgorithms;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationCompressionAlgorithms_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCueCopyPasteBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCueCopyPasteBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatineeCopyPasteBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MatineeCopyPasteBuffer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatineeCopyPasteBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialCopyPasteBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialCopyPasteBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoReimportManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AutoReimportManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorOptionsInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorOptionsInst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealEdEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/UnrealEdEngine.h" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Cooker server incase we want to cook ont he side while editing..." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer = { "CookServer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, CookServer), Z_Construct_UClass_UCookOnTheFlyServer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "List of info for all known template maps" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos = { "TemplateMapInfos", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, TemplateMapInfos), METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_Inner = { "TemplateMapInfos", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTemplateMapInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Array of sorted, localized editor sprite categories" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories = { "SortedSpriteCategories", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, SortedSpriteCategories_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_Inner = { "SortedSpriteCategories", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForWritePermission_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Whether the user needs to be prompted about a package being saved when the user does not have permission to write the file" },
	};
#endif
	void Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForWritePermission_SetBit(void* Obj)
	{
		((UUnrealEdEngine*)Obj)->bNeedWarningForWritePermission = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForWritePermission = { "bNeedWarningForWritePermission", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UUnrealEdEngine), &Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForWritePermission_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForWritePermission_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForWritePermission_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Whether the user needs to be prompted about a package being saved with an engine version newer than the current one or not" },
	};
#endif
	void Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_SetBit(void* Obj)
	{
		((UUnrealEdEngine*)Obj)->bNeedWarningForPkgEngineVer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer = { "bNeedWarningForPkgEngineVer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UUnrealEdEngine), &Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Current target for LOD parenting operations (actors will use this as the replacement)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor = { "CurrentLODParentActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, CurrentLODParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Array of packages to be fully loaded at Editor startup." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup = { "PackagesToBeFullyLoadedAtStartup", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, PackagesToBeFullyLoadedAtStartup), METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_Inner = { "PackagesToBeFullyLoadedAtStartup", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Global list of instanced animation compression algorithms." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms = { "AnimationCompressionAlgorithms", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, AnimationCompressionAlgorithms), METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_Inner = { "AnimationCompressionAlgorithms", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimCompress_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "A buffer for implementing sound cue nodes copy/paste." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer = { "SoundCueCopyPasteBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, SoundCueCopyPasteBuffer), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MatineeCopyPasteBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "A buffer for implementing matinee track/group copy/paste." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MatineeCopyPasteBuffer = { "MatineeCopyPasteBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, MatineeCopyPasteBuffer), METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MatineeCopyPasteBuffer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MatineeCopyPasteBuffer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MatineeCopyPasteBuffer_Inner = { "MatineeCopyPasteBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "A buffer for implementing material expression copy/paste." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer = { "MaterialCopyPasteBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, MaterialCopyPasteBuffer), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Manager responsible for configuring auto reimport" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager = { "AutoReimportManager", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, AutoReimportManager), Z_Construct_UClass_UAutoReimportManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdEngine.h" },
		{ "ToolTip", "Global instance of the editor options class." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst = { "EditorOptionsInst", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdEngine, EditorOptionsInst), Z_Construct_UClass_UUnrealEdOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnrealEdEngine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CookServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_TemplateMapInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SortedSpriteCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForWritePermission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_bNeedWarningForPkgEngineVer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_CurrentLODParentActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_PackagesToBeFullyLoadedAtStartup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AnimationCompressionAlgorithms_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_SoundCueCopyPasteBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MatineeCopyPasteBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MatineeCopyPasteBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_MaterialCopyPasteBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_AutoReimportManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdEngine_Statics::NewProp_EditorOptionsInst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealEdEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEdEngine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEdEngine_Statics::ClassParams = {
		&UUnrealEdEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnrealEdEngine_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::PropPointers),
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealEdEngine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealEdEngine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealEdEngine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealEdEngine, 1212405455);
	template<> UNREALED_API UClass* StaticClass<UUnrealEdEngine>()
	{
		return UUnrealEdEngine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealEdEngine(Z_Construct_UClass_UUnrealEdEngine, &UUnrealEdEngine::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UUnrealEdEngine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEdEngine);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UUnrealEdEngine)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
