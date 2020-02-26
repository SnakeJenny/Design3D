// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Public/EditorLevelUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorLevelUtils() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLevelUtils_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLevelUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel();
	UNREALED_API UFunction* Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
// End Cross Module References
	static UEnum* ELevelVisibilityDirtyMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode, Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELevelVisibilityDirtyMode"));
		}
		return Singleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELevelVisibilityDirtyMode>()
	{
		return ELevelVisibilityDirtyMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelVisibilityDirtyMode(ELevelVisibilityDirtyMode_StaticEnum, TEXT("/Script/UnrealEd"), TEXT("ELevelVisibilityDirtyMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Hash() { return 1783904175U; }
	UEnum* Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelVisibilityDirtyMode"), 0, Get_Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelVisibilityDirtyMode::ModifyOnChange", (int64)ELevelVisibilityDirtyMode::ModifyOnChange },
				{ "ELevelVisibilityDirtyMode::DontModify", (int64)ELevelVisibilityDirtyMode::DontModify },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DontModify.ToolTip", "Use when code is causing the visibility change." },
				{ "ModifyOnChange.ToolTip", "Use when the user is causing the visibility change.  Will update transaction state and mark the package dirty." },
				{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
				nullptr,
				"ELevelVisibilityDirtyMode",
				"ELevelVisibilityDirtyMode",
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
	void UEditorLevelUtils::StaticRegisterNativesUEditorLevelUtils()
	{
		UClass* Class = UEditorLevelUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewStreamingLevel", &UEditorLevelUtils::execCreateNewStreamingLevel },
			{ "MakeLevelCurrent", &UEditorLevelUtils::execMakeLevelCurrent },
			{ "MoveActorsToLevel", &UEditorLevelUtils::execMoveActorsToLevel },
			{ "MoveSelectedActorsToLevel", &UEditorLevelUtils::execMoveSelectedActorsToLevel },
			{ "SetLevelVisibility", &UEditorLevelUtils::execSetLevelVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics
	{
		struct EditorLevelUtils_eventCreateNewStreamingLevel_Parms
		{
			TSubclassOf<ULevelStreaming>  LevelStreamingClass;
			FString NewLevelPath;
			bool bMoveSelectedActorsIntoNewLevel;
			ULevelStreaming* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bMoveSelectedActorsIntoNewLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveSelectedActorsIntoNewLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLevelPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewLevelPath;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LevelStreamingClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventCreateNewStreamingLevel_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_bMoveSelectedActorsIntoNewLevel_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventCreateNewStreamingLevel_Parms*)Obj)->bMoveSelectedActorsIntoNewLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_bMoveSelectedActorsIntoNewLevel = { "bMoveSelectedActorsIntoNewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelUtils_eventCreateNewStreamingLevel_Parms), &Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_bMoveSelectedActorsIntoNewLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath = { "NewLevelPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventCreateNewStreamingLevel_Parms, NewLevelPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_LevelStreamingClass = { "LevelStreamingClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventCreateNewStreamingLevel_Parms, LevelStreamingClass), Z_Construct_UClass_ULevelStreaming_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_bMoveSelectedActorsIntoNewLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_LevelStreamingClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "CPP_Default_bMoveSelectedActorsIntoNewLevel", "false" },
		{ "CPP_Default_NewLevelPath", "" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Creates a new streaming level in the current world\n\n@param       LevelStreamingClass                                     The streaming class type instead to use for the level.\n@param       NewLevelPath                                            Optional path to the level package path format (\"e.g /Game/MyLevel\").  If empty, the user will be prompted during the save process.\n@param       bMoveSelectedActorsIntoNewLevel         If true, move any selected actors into the new level.\n\n@return      Returns the newly created level, or NULL on failure" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "CreateNewStreamingLevel", sizeof(EditorLevelUtils_eventCreateNewStreamingLevel_Parms), Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics
	{
		struct EditorLevelUtils_eventMakeLevelCurrent_Parms
		{
			ULevelStreaming* InStreamingLevel;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InStreamingLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::NewProp_InStreamingLevel = { "InStreamingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventMakeLevelCurrent_Parms, InStreamingLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::NewProp_InStreamingLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Makes the specified streaming level the current level for editing.\nThe current level is where actors are spawned to when calling SpawnActor\n\n@return      true    If a level was removed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "MakeLevelCurrent", sizeof(EditorLevelUtils_eventMakeLevelCurrent_Parms), Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics
	{
		struct EditorLevelUtils_eventMoveActorsToLevel_Parms
		{
			TArray<AActor*> ActorsToMove;
			ULevelStreaming* DestStreamingLevel;
			bool bWarnAboutReferences;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bWarnAboutReferences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutReferences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestStreamingLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToMove;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToMove_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventMoveActorsToLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutReferences_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventMoveActorsToLevel_Parms*)Obj)->bWarnAboutReferences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutReferences = { "bWarnAboutReferences", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelUtils_eventMoveActorsToLevel_Parms), &Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutReferences_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_DestStreamingLevel = { "DestStreamingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventMoveActorsToLevel_Parms, DestStreamingLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove = { "ActorsToMove", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventMoveActorsToLevel_Parms, ActorsToMove), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_Inner = { "ActorsToMove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_DestStreamingLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "CPP_Default_bWarnAboutReferences", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Moves the specified list of actors to the specified streaming level. The new actors will be selected\n\n@param       ActorsToMove                    List of actors to move\n@param       DestStreamingLevel              The destination streaming level of the current world to move the actors to\n@param       bWarnAboutReferences    Whether or not to show a modal warning about referenced actors that may no longer function after being moved\n@return                                                      The number of actors that were successfully moved to the new level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "MoveActorsToLevel", sizeof(EditorLevelUtils_eventMoveActorsToLevel_Parms), Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics
	{
		struct EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms
		{
			ULevelStreaming* DestLevel;
			bool bWarnAboutReferences;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bWarnAboutReferences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutReferences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_bWarnAboutReferences_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms*)Obj)->bWarnAboutReferences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_bWarnAboutReferences = { "bWarnAboutReferences", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms), &Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_bWarnAboutReferences_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_DestLevel = { "DestLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms, DestLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_bWarnAboutReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_DestLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "CPP_Default_bWarnAboutReferences", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Moves the currently selected actors to the specified streaming level. The new actors will be selected\n\n@param       DestStreamingLevel              The destination streaming level of the current world to move the actors to\n@param       bWarnAboutReferences    Whether or not to show a modal warning about referenced actors that may no longer function after being moved\n@return                                                      The number of actors that were successfully moved to the new level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "MoveSelectedActorsToLevel", sizeof(EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms), Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics
	{
		struct EditorLevelUtils_eventSetLevelVisibility_Parms
		{
			ULevel* Level;
			bool bShouldBeVisible;
			bool bForceLayersVisible;
			ELevelVisibilityDirtyMode ModifyMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModifyMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModifyMode_Underlying;
		static void NewProp_bForceLayersVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceLayersVisible;
		static void NewProp_bShouldBeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode = { "ModifyMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventSetLevelVisibility_Parms, ModifyMode), Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventSetLevelVisibility_Parms*)Obj)->bForceLayersVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible = { "bForceLayersVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelUtils_eventSetLevelVisibility_Parms), &Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventSetLevelVisibility_Parms*)Obj)->bShouldBeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditorLevelUtils_eventSetLevelVisibility_Parms), &Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditorLevelUtils_eventSetLevelVisibility_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_ModifyMode", "ModifyOnChange" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Sets a level's visibility in the editor.\n\n@param       Level                                   The level to modify.\n@param       bShouldBeVisible                The level's new visibility state.\n@param       bForceLayersVisible             If true and the level is visible, force the level's layers to be visible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "SetLevelVisibility", sizeof(EditorLevelUtils_eventSetLevelVisibility_Parms), Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditorLevelUtils_NoRegister()
	{
		return UEditorLevelUtils::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLevelUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLevelUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorLevelUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel, "CreateNewStreamingLevel" }, // 1196969168
		{ &Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent, "MakeLevelCurrent" }, // 1875124411
		{ &Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel, "MoveActorsToLevel" }, // 3947808818
		{ &Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel, "MoveSelectedActorsToLevel" }, // 335318525
		{ &Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility, "SetLevelVisibility" }, // 2367177561
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLevelUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorLevelUtils.h" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLevelUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLevelUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorLevelUtils_Statics::ClassParams = {
		&UEditorLevelUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorLevelUtils_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditorLevelUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLevelUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorLevelUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorLevelUtils, 3158021178);
	template<> UNREALED_API UClass* StaticClass<UEditorLevelUtils>()
	{
		return UEditorLevelUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorLevelUtils(Z_Construct_UClass_UEditorLevelUtils, &UEditorLevelUtils::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UEditorLevelUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLevelUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
