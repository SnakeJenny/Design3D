// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Commandlets/Commandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UCommandlet::StaticRegisterNativesUCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UCommandlet_NoRegister()
	{
		return UCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowProgress_MetaData[];
#endif
		static void NewProp_ShowProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowErrorCount_MetaData[];
#endif
		static void NewProp_ShowErrorCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowErrorCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogToConsole_MetaData[];
#endif
		static void NewProp_LogToConsole_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LogToConsole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEditor_MetaData[];
#endif
		static void NewProp_IsEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsClient_MetaData[];
#endif
		static void NewProp_IsClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsServer_MetaData[];
#endif
		static void NewProp_IsServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpParamDescriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HelpParamDescriptions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpParamDescriptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpParamNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HelpParamNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpParamNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpWebLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpWebLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpUsage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HelpDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HelpDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/Commandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to show cooking progress on tick" },
	};
#endif
	void Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress_SetBit(void* Obj)
	{
		((UCommandlet*)Obj)->ShowProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress = { "ShowProgress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to show standard error and warning count on exit" },
	};
#endif
	void Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount_SetBit(void* Obj)
	{
		((UCommandlet*)Obj)->ShowErrorCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount = { "ShowErrorCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to redirect standard log to the console" },
	};
#endif
	void Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole_SetBit(void* Obj)
	{
		((UCommandlet*)Obj)->LogToConsole = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole = { "LogToConsole", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
	};
#endif
	void Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor_SetBit(void* Obj)
	{
		((UCommandlet*)Obj)->IsEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor = { "IsEditor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
	};
#endif
	void Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient_SetBit(void* Obj)
	{
		((UCommandlet*)Obj)->IsClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient = { "IsClient", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Whether to load objects required in server, client, and editor context.  If IsEditor is set to false, then a\nUGameEngine (or whatever the value of /Script/Engine.Engine.GameEngine is) will be created for the commandlet instead\nof a UEditorEngine (or /Script/Engine.Engine.EditorEngine), unless the commandlet overrides the CreateCustomEngine method." },
	};
#endif
	void Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer_SetBit(void* Obj)
	{
		((UCommandlet*)Obj)->IsServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer = { "IsServer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UCommandlet), &Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "The description of the parameter" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions = { "HelpParamDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandlet, HelpParamDescriptions), METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions_Inner = { "HelpParamDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "The name of the parameter the commandlet takes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames = { "HelpParamNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandlet, HelpParamNames), METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames_Inner = { "HelpParamNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpWebLink_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Hyperlink for more info" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpWebLink = { "HelpWebLink", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandlet, HelpWebLink), METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpWebLink_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpWebLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpUsage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Usage template to show for \"ucc help\"" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpUsage = { "HelpUsage", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandlet, HelpUsage), METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpUsage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpUsage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Commandlets/Commandlet.h" },
		{ "ToolTip", "Description of the commandlet's purpose" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpDescription = { "HelpDescription", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCommandlet, HelpDescription), METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommandlet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_ShowErrorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_LogToConsole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_IsEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_IsClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_IsServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamDescriptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpParamNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpWebLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommandlet_Statics::NewProp_HelpDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommandlet_Statics::ClassParams = {
		&UCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommandlet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::PropPointers),
		0,
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommandlet, 141813988);
	template<> ENGINE_API UClass* StaticClass<UCommandlet>()
	{
		return UCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommandlet(Z_Construct_UClass_UCommandlet, &UCommandlet::StaticClass, TEXT("/Script/Engine"), TEXT("UCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
