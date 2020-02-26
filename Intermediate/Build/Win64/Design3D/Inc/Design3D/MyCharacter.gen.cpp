// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Design3D/MyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FFOVBox();
	UPackage* Z_Construct_UPackage__Script_Design3D();
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FRect();
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FRangeAixs();
	DESIGN3D_API UScriptStruct* Z_Construct_UScriptStruct_FParameter();
	DESIGN3D_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	DESIGN3D_API UClass* Z_Construct_UClass_AMyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
// End Cross Module References
class UScriptStruct* FFOVBox::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FFOVBox_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFOVBox, Z_Construct_UPackage__Script_Design3D(), TEXT("FOVBox"), sizeof(FFOVBox), Get_Z_Construct_UScriptStruct_FFOVBox_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FFOVBox>()
{
	return FFOVBox::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFOVBox(FFOVBox::StaticStruct, TEXT("/Script/Design3D"), TEXT("FOVBox"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFFOVBox
{
	FScriptStruct_Design3D_StaticRegisterNativesFFOVBox()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FOVBox")),new UScriptStruct::TCppStructOps<FFOVBox>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFFOVBox;
	struct Z_Construct_UScriptStruct_FFOVBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOVBox_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFOVBox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFOVBox>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFOVBox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"FOVBox",
		sizeof(FFOVBox),
		alignof(FFOVBox),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFOVBox_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFOVBox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFOVBox()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFOVBox_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FOVBox"), sizeof(FFOVBox), Get_Z_Construct_UScriptStruct_FFOVBox_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFOVBox_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFOVBox_Hash() { return 1089003059U; }
class UScriptStruct* FRect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FRect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRect, Z_Construct_UPackage__Script_Design3D(), TEXT("Rect"), sizeof(FRect), Get_Z_Construct_UScriptStruct_FRect_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FRect>()
{
	return FRect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRect(FRect::StaticStruct, TEXT("/Script/Design3D"), TEXT("Rect"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFRect
{
	FScriptStruct_Design3D_StaticRegisterNativesFRect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Rect")),new UScriptStruct::TCppStructOps<FRect>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFRect;
	struct Z_Construct_UScriptStruct_FRect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRect>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"Rect",
		sizeof(FRect),
		alignof(FRect),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Rect"), sizeof(FRect), Get_Z_Construct_UScriptStruct_FRect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRect_Hash() { return 1692498691U; }
class UScriptStruct* FRangeAixs::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FRangeAixs_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRangeAixs, Z_Construct_UPackage__Script_Design3D(), TEXT("RangeAixs"), sizeof(FRangeAixs), Get_Z_Construct_UScriptStruct_FRangeAixs_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FRangeAixs>()
{
	return FRangeAixs::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRangeAixs(FRangeAixs::StaticStruct, TEXT("/Script/Design3D"), TEXT("RangeAixs"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFRangeAixs
{
	FScriptStruct_Design3D_StaticRegisterNativesFRangeAixs()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RangeAixs")),new UScriptStruct::TCppStructOps<FRangeAixs>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFRangeAixs;
	struct Z_Construct_UScriptStruct_FRangeAixs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRangeAixs_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRangeAixs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRangeAixs>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRangeAixs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"RangeAixs",
		sizeof(FRangeAixs),
		alignof(FRangeAixs),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRangeAixs_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeAixs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRangeAixs()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRangeAixs_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RangeAixs"), sizeof(FRangeAixs), Get_Z_Construct_UScriptStruct_FRangeAixs_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRangeAixs_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRangeAixs_Hash() { return 3313540676U; }
class UScriptStruct* FParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DESIGN3D_API uint32 Get_Z_Construct_UScriptStruct_FParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameter, Z_Construct_UPackage__Script_Design3D(), TEXT("Parameter"), sizeof(FParameter), Get_Z_Construct_UScriptStruct_FParameter_Hash());
	}
	return Singleton;
}
template<> DESIGN3D_API UScriptStruct* StaticStruct<FParameter>()
{
	return FParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParameter(FParameter::StaticStruct, TEXT("/Script/Design3D"), TEXT("Parameter"), false, nullptr, nullptr);
static struct FScriptStruct_Design3D_StaticRegisterNativesFParameter
{
	FScriptStruct_Design3D_StaticRegisterNativesFParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Parameter")),new UScriptStruct::TCppStructOps<FParameter>);
	}
} ScriptStruct_Design3D_StaticRegisterNativesFParameter;
	struct Z_Construct_UScriptStruct_FParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameter>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
		nullptr,
		&NewStructOps,
		"Parameter",
		sizeof(FParameter),
		alignof(FParameter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Design3D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Parameter"), sizeof(FParameter), Get_Z_Construct_UScriptStruct_FParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParameter_Hash() { return 3714992309U; }
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Design3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "MyCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCharacter, 51754487);
	template<> DESIGN3D_API UClass* StaticClass<AMyCharacter>()
	{
		return AMyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCharacter(Z_Construct_UClass_AMyCharacter, &AMyCharacter::StaticClass, TEXT("/Script/Design3D"), TEXT("AMyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
