// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneBindingOverrides.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingOverrides() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FMovieSceneBindingOverrideData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBindingOverrideData"), sizeof(FMovieSceneBindingOverrideData), Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Hash());
	}
	return Singleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBindingOverrideData>()
{
	return FMovieSceneBindingOverrideData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneBindingOverrideData(FMovieSceneBindingOverrideData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneBindingOverrideData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBindingOverrideData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBindingOverrideData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneBindingOverrideData")),new UScriptStruct::TCppStructOps<FMovieSceneBindingOverrideData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneBindingOverrideData;
	struct Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverridesDefault_MetaData[];
#endif
		static void NewProp_bOverridesDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverridesDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindingId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Movie scene binding override data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBindingOverrideData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true)." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit(void* Obj)
	{
		((FMovieSceneBindingOverrideData*)Obj)->bOverridesDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault = { "bOverridesDefault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneBindingOverrideData), &Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Specifies the object to override the binding with." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneBindingOverrideData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Specifies the object binding to override." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId = { "ObjectBindingId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneBindingOverrideData, ObjectBindingId), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneBindingOverrideData",
		sizeof(FMovieSceneBindingOverrideData),
		alignof(FMovieSceneBindingOverrideData),
		Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneBindingOverrideData"), sizeof(FMovieSceneBindingOverrideData), Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Hash() { return 536930129U; }
	void UMovieSceneBindingOverrides::StaticRegisterNativesUMovieSceneBindingOverrides()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister()
	{
		return UMovieSceneBindingOverrides::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBindingOverrides_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BindingData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneBindingOverrides.h" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A one-to-many definition of movie scene object binding IDs to overridden objects that should be bound to that binding." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Binding Overrides" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "The actual binding data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData = { "BindingData", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneBindingOverrides, BindingData), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_Inner = { "BindingData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBindingOverrides>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::ClassParams = {
		&UMovieSceneBindingOverrides::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBindingOverrides()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneBindingOverrides, 525015015);
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBindingOverrides>()
	{
		return UMovieSceneBindingOverrides::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneBindingOverrides(Z_Construct_UClass_UMovieSceneBindingOverrides, &UMovieSceneBindingOverrides::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneBindingOverrides"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingOverrides);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
