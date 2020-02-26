// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PinnedCommandList/Private/PinnedCommandListSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePinnedCommandListSettings() {}
// Cross Module References
	PINNEDCOMMANDLIST_API UEnum* Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType();
	UPackage* Z_Construct_UPackage__Script_PinnedCommandList();
	PINNEDCOMMANDLIST_API UScriptStruct* Z_Construct_UScriptStruct_FPinnedCommandListContext();
	PINNEDCOMMANDLIST_API UScriptStruct* Z_Construct_UScriptStruct_FPinnedCommandListCommand();
	PINNEDCOMMANDLIST_API UClass* Z_Construct_UClass_UPinnedCommandListSettings_NoRegister();
	PINNEDCOMMANDLIST_API UClass* Z_Construct_UClass_UPinnedCommandListSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EPinnedCommandListType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType, Z_Construct_UPackage__Script_PinnedCommandList(), TEXT("EPinnedCommandListType"));
		}
		return Singleton;
	}
	template<> PINNEDCOMMANDLIST_API UEnum* StaticEnum<EPinnedCommandListType>()
	{
		return EPinnedCommandListType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPinnedCommandListType(EPinnedCommandListType_StaticEnum, TEXT("/Script/PinnedCommandList"), TEXT("EPinnedCommandListType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Hash() { return 3442714769U; }
	UEnum* Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PinnedCommandList();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPinnedCommandListType"), 0, Get_Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPinnedCommandListType::Command", (int64)EPinnedCommandListType::Command },
				{ "EPinnedCommandListType::CustomWidget", (int64)EPinnedCommandListType::CustomWidget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Command.ToolTip", "A simple command" },
				{ "CustomWidget.ToolTip", "A registered custom widget" },
				{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PinnedCommandList,
				nullptr,
				"EPinnedCommandListType",
				"EPinnedCommandListType",
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
class UScriptStruct* FPinnedCommandListContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PINNEDCOMMANDLIST_API uint32 Get_Z_Construct_UScriptStruct_FPinnedCommandListContext_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPinnedCommandListContext, Z_Construct_UPackage__Script_PinnedCommandList(), TEXT("PinnedCommandListContext"), sizeof(FPinnedCommandListContext), Get_Z_Construct_UScriptStruct_FPinnedCommandListContext_Hash());
	}
	return Singleton;
}
template<> PINNEDCOMMANDLIST_API UScriptStruct* StaticStruct<FPinnedCommandListContext>()
{
	return FPinnedCommandListContext::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPinnedCommandListContext(FPinnedCommandListContext::StaticStruct, TEXT("/Script/PinnedCommandList"), TEXT("PinnedCommandListContext"), false, nullptr, nullptr);
static struct FScriptStruct_PinnedCommandList_StaticRegisterNativesFPinnedCommandListContext
{
	FScriptStruct_PinnedCommandList_StaticRegisterNativesFPinnedCommandListContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PinnedCommandListContext")),new UScriptStruct::TCppStructOps<FPinnedCommandListContext>);
	}
} ScriptStruct_PinnedCommandList_StaticRegisterNativesFPinnedCommandListContext;
	struct Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "A pinned command list context, allowing us to persist a set of pinned commands" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPinnedCommandListContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_MetaData[] = {
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "The commands to display" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPinnedCommandListContext, Commands), METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPinnedCommandListCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "The name of the context that this command list is displayed within" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPinnedCommandListContext, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PinnedCommandList,
		nullptr,
		&NewStructOps,
		"PinnedCommandListContext",
		sizeof(FPinnedCommandListContext),
		alignof(FPinnedCommandListContext),
		Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPinnedCommandListContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPinnedCommandListContext_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PinnedCommandList();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PinnedCommandListContext"), sizeof(FPinnedCommandListContext), Get_Z_Construct_UScriptStruct_FPinnedCommandListContext_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPinnedCommandListContext_Hash() { return 3461698147U; }
class UScriptStruct* FPinnedCommandListCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PINNEDCOMMANDLIST_API uint32 Get_Z_Construct_UScriptStruct_FPinnedCommandListCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPinnedCommandListCommand, Z_Construct_UPackage__Script_PinnedCommandList(), TEXT("PinnedCommandListCommand"), sizeof(FPinnedCommandListCommand), Get_Z_Construct_UScriptStruct_FPinnedCommandListCommand_Hash());
	}
	return Singleton;
}
template<> PINNEDCOMMANDLIST_API UScriptStruct* StaticStruct<FPinnedCommandListCommand>()
{
	return FPinnedCommandListCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPinnedCommandListCommand(FPinnedCommandListCommand::StaticStruct, TEXT("/Script/PinnedCommandList"), TEXT("PinnedCommandListCommand"), false, nullptr, nullptr);
static struct FScriptStruct_PinnedCommandList_StaticRegisterNativesFPinnedCommandListCommand
{
	FScriptStruct_PinnedCommandList_StaticRegisterNativesFPinnedCommandListCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PinnedCommandListCommand")),new UScriptStruct::TCppStructOps<FPinnedCommandListCommand>);
	}
} ScriptStruct_PinnedCommandList_StaticRegisterNativesFPinnedCommandListCommand;
	struct Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Binding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "A command and its context" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPinnedCommandListCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "What type of command this is" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPinnedCommandListCommand, Type), Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding_MetaData[] = {
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "The name of the command binding if this is a command" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPinnedCommandListCommand, Binding), METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "The name of the command" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPinnedCommandListCommand, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PinnedCommandList,
		nullptr,
		&NewStructOps,
		"PinnedCommandListCommand",
		sizeof(FPinnedCommandListCommand),
		alignof(FPinnedCommandListCommand),
		Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPinnedCommandListCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPinnedCommandListCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PinnedCommandList();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PinnedCommandListCommand"), sizeof(FPinnedCommandListCommand), Get_Z_Construct_UScriptStruct_FPinnedCommandListCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPinnedCommandListCommand_Hash() { return 3889512193U; }
	void UPinnedCommandListSettings::StaticRegisterNativesUPinnedCommandListSettings()
	{
	}
	UClass* Z_Construct_UClass_UPinnedCommandListSettings_NoRegister()
	{
		return UPinnedCommandListSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPinnedCommandListSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Contexts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Contexts_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPinnedCommandListSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PinnedCommandList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPinnedCommandListSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PinnedCommandListSettings.h" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "A persistent set of pinned commands" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_MetaData[] = {
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "Persistent pinned command contexts" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPinnedCommandListSettings, Contexts), METADATA_PARAMS(Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_Inner = { "Contexts", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPinnedCommandListContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPinnedCommandListSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPinnedCommandListSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPinnedCommandListSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPinnedCommandListSettings_Statics::ClassParams = {
		&UPinnedCommandListSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPinnedCommandListSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPinnedCommandListSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPinnedCommandListSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPinnedCommandListSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPinnedCommandListSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPinnedCommandListSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPinnedCommandListSettings, 4083787845);
	template<> PINNEDCOMMANDLIST_API UClass* StaticClass<UPinnedCommandListSettings>()
	{
		return UPinnedCommandListSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPinnedCommandListSettings(Z_Construct_UClass_UPinnedCommandListSettings, &UPinnedCommandListSettings::StaticClass, TEXT("/Script/PinnedCommandList"), TEXT("UPinnedCommandListSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPinnedCommandListSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
