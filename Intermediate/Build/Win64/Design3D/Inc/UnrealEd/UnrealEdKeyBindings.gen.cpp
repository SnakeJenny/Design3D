// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Preferences/UnrealEdKeyBindings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEdKeyBindings() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorKeyBinding();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdKeyBindings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FEditorKeyBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALED_API uint32 Get_Z_Construct_UScriptStruct_FEditorKeyBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorKeyBinding, Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorKeyBinding"), sizeof(FEditorKeyBinding), Get_Z_Construct_UScriptStruct_FEditorKeyBinding_Hash());
	}
	return Singleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorKeyBinding>()
{
	return FEditorKeyBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorKeyBinding(FEditorKeyBinding::StaticStruct, TEXT("/Script/UnrealEd"), TEXT("EditorKeyBinding"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealEd_StaticRegisterNativesFEditorKeyBinding
{
	FScriptStruct_UnrealEd_StaticRegisterNativesFEditorKeyBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorKeyBinding")),new UScriptStruct::TCppStructOps<FEditorKeyBinding>);
	}
} ScriptStruct_UnrealEd_StaticRegisterNativesFEditorKeyBinding;
	struct Z_Construct_UScriptStruct_FEditorKeyBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CommandName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShiftDown_MetaData[];
#endif
		static void NewProp_bShiftDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShiftDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAltDown_MetaData[];
#endif
		static void NewProp_bAltDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAltDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCtrlDown_MetaData[];
#endif
		static void NewProp_bCtrlDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCtrlDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
		{ "ToolTip", "An editor hotkey binding to a parameterless exec." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorKeyBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorKeyBinding, CommandName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditorKeyBinding, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_SetBit(void* Obj)
	{
		((FEditorKeyBinding*)Obj)->bShiftDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown = { "bShiftDown", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEditorKeyBinding), &Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_SetBit(void* Obj)
	{
		((FEditorKeyBinding*)Obj)->bAltDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown = { "bAltDown", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEditorKeyBinding), &Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_SetBit(void* Obj)
	{
		((FEditorKeyBinding*)Obj)->bCtrlDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown = { "bCtrlDown", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FEditorKeyBinding), &Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorKeyBinding",
		sizeof(FEditorKeyBinding),
		alignof(FEditorKeyBinding),
		Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorKeyBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorKeyBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealEd();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorKeyBinding"), sizeof(FEditorKeyBinding), Get_Z_Construct_UScriptStruct_FEditorKeyBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorKeyBinding_Hash() { return 1696702399U; }
	void UUnrealEdKeyBindings::StaticRegisterNativesUUnrealEdKeyBindings()
	{
	}
	UClass* Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister()
	{
		return UUnrealEdKeyBindings::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealEdKeyBindings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyBindings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealEdKeyBindings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdKeyBindings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Preferences/UnrealEdKeyBindings.h" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
		{ "ToolTip", "Array of keybindings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings = { "KeyBindings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealEdKeyBindings, KeyBindings), METADATA_PARAMS(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_Inner = { "KeyBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditorKeyBinding, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnrealEdKeyBindings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealEdKeyBindings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEdKeyBindings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEdKeyBindings_Statics::ClassParams = {
		&UUnrealEdKeyBindings::StaticClass,
		"EditorKeyBindings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnrealEdKeyBindings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealEdKeyBindings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealEdKeyBindings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealEdKeyBindings, 2241227552);
	template<> UNREALED_API UClass* StaticClass<UUnrealEdKeyBindings>()
	{
		return UUnrealEdKeyBindings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealEdKeyBindings(Z_Construct_UClass_UUnrealEdKeyBindings, &UUnrealEdKeyBindings::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UUnrealEdKeyBindings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEdKeyBindings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
