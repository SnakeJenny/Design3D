// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/WidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetComponent() {}
// Cross Module References
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetGeometryMode();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetTimingPolicy();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetSpace();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetDrawSize();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetGeometryMode();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetPivot();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetRedrawTime();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetTwoSided();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_RequestRedraw();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetDrawSize();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetGeometryMode();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetPivot();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetRedrawTime();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetTwoSided();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetWidget();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EWidgetGeometryMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetGeometryMode, Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetGeometryMode"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetGeometryMode>()
	{
		return EWidgetGeometryMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetGeometryMode(EWidgetGeometryMode_StaticEnum, TEXT("/Script/UMG"), TEXT("EWidgetGeometryMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EWidgetGeometryMode_Hash() { return 3736232773U; }
	UEnum* Z_Construct_UEnum_UMG_EWidgetGeometryMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetGeometryMode"), 0, Get_Z_Construct_UEnum_UMG_EWidgetGeometryMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetGeometryMode::Plane", (int64)EWidgetGeometryMode::Plane },
				{ "EWidgetGeometryMode::Cylinder", (int64)EWidgetGeometryMode::Cylinder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cylinder.ToolTip", "The widget is mapped onto a cylinder" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "Plane.ToolTip", "The widget is mapped onto a plane" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"EWidgetGeometryMode",
				"EWidgetGeometryMode",
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
	static UEnum* EWidgetBlendMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetBlendMode, Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetBlendMode"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetBlendMode>()
	{
		return EWidgetBlendMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetBlendMode(EWidgetBlendMode_StaticEnum, TEXT("/Script/UMG"), TEXT("EWidgetBlendMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EWidgetBlendMode_Hash() { return 3249458422U; }
	UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetBlendMode"), 0, Get_Z_Construct_UEnum_UMG_EWidgetBlendMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetBlendMode::Opaque", (int64)EWidgetBlendMode::Opaque },
				{ "EWidgetBlendMode::Masked", (int64)EWidgetBlendMode::Masked },
				{ "EWidgetBlendMode::Transparent", (int64)EWidgetBlendMode::Transparent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"EWidgetBlendMode",
				"EWidgetBlendMode",
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
	static UEnum* EWidgetTimingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetTimingPolicy, Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetTimingPolicy"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetTimingPolicy>()
	{
		return EWidgetTimingPolicy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetTimingPolicy(EWidgetTimingPolicy_StaticEnum, TEXT("/Script/UMG"), TEXT("EWidgetTimingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Hash() { return 2756160764U; }
	UEnum* Z_Construct_UEnum_UMG_EWidgetTimingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetTimingPolicy"), 0, Get_Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetTimingPolicy::RealTime", (int64)EWidgetTimingPolicy::RealTime },
				{ "EWidgetTimingPolicy::GameTime", (int64)EWidgetTimingPolicy::GameTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameTime.ToolTip", "The widget will tick using game time, respecting pausing and time dilation." },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "RealTime.ToolTip", "The widget will tick using real time. When not ticking, real time will accumulate and be simulated on the next tick." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"EWidgetTimingPolicy",
				"EWidgetTimingPolicy",
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
	static UEnum* EWidgetSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetSpace, Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetSpace"));
		}
		return Singleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetSpace>()
	{
		return EWidgetSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetSpace(EWidgetSpace_StaticEnum, TEXT("/Script/UMG"), TEXT("EWidgetSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EWidgetSpace_Hash() { return 1139958616U; }
	UEnum* Z_Construct_UEnum_UMG_EWidgetSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetSpace"), 0, Get_Z_Construct_UEnum_UMG_EWidgetSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetSpace::World", (int64)EWidgetSpace::World },
				{ "EWidgetSpace::Screen", (int64)EWidgetSpace::Screen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "Screen.ToolTip", "The widget is rendered in the screen, completely outside of the world, never occluded." },
				{ "World.ToolTip", "The widget is rendered in the world as mesh, it can be occluded like any other mesh in the world." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				"EWidgetSpace",
				"EWidgetSpace",
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
class UScriptStruct* FWidgetComponentInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetComponentInstanceData, Z_Construct_UPackage__Script_UMG(), TEXT("WidgetComponentInstanceData"), sizeof(FWidgetComponentInstanceData), Get_Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Hash());
	}
	return Singleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetComponentInstanceData>()
{
	return FWidgetComponentInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetComponentInstanceData(FWidgetComponentInstanceData::StaticStruct, TEXT("/Script/UMG"), TEXT("WidgetComponentInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFWidgetComponentInstanceData
{
	FScriptStruct_UMG_StaticRegisterNativesFWidgetComponentInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetComponentInstanceData")),new UScriptStruct::TCppStructOps<FWidgetComponentInstanceData>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFWidgetComponentInstanceData;
	struct Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetComponentInstanceData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"WidgetComponentInstanceData",
		sizeof(FWidgetComponentInstanceData),
		alignof(FWidgetComponentInstanceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetComponentInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetComponentInstanceData"), sizeof(FWidgetComponentInstanceData), Get_Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Hash() { return 3970160299U; }
	void UWidgetComponent::StaticRegisterNativesUWidgetComponent()
	{
		UClass* Class = UWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentDrawSize", &UWidgetComponent::execGetCurrentDrawSize },
			{ "GetCylinderArcAngle", &UWidgetComponent::execGetCylinderArcAngle },
			{ "GetDrawAtDesiredSize", &UWidgetComponent::execGetDrawAtDesiredSize },
			{ "GetDrawSize", &UWidgetComponent::execGetDrawSize },
			{ "GetGeometryMode", &UWidgetComponent::execGetGeometryMode },
			{ "GetManuallyRedraw", &UWidgetComponent::execGetManuallyRedraw },
			{ "GetMaterialInstance", &UWidgetComponent::execGetMaterialInstance },
			{ "GetOwnerPlayer", &UWidgetComponent::execGetOwnerPlayer },
			{ "GetPivot", &UWidgetComponent::execGetPivot },
			{ "GetRedrawTime", &UWidgetComponent::execGetRedrawTime },
			{ "GetRenderTarget", &UWidgetComponent::execGetRenderTarget },
			{ "GetTickWhenOffscreen", &UWidgetComponent::execGetTickWhenOffscreen },
			{ "GetTwoSided", &UWidgetComponent::execGetTwoSided },
			{ "GetUserWidgetObject", &UWidgetComponent::execGetUserWidgetObject },
			{ "GetWidgetSpace", &UWidgetComponent::execGetWidgetSpace },
			{ "GetWindowFocusable", &UWidgetComponent::execGetWindowFocusable },
			{ "RequestRedraw", &UWidgetComponent::execRequestRedraw },
			{ "SetBackgroundColor", &UWidgetComponent::execSetBackgroundColor },
			{ "SetCylinderArcAngle", &UWidgetComponent::execSetCylinderArcAngle },
			{ "SetDrawAtDesiredSize", &UWidgetComponent::execSetDrawAtDesiredSize },
			{ "SetDrawSize", &UWidgetComponent::execSetDrawSize },
			{ "SetGeometryMode", &UWidgetComponent::execSetGeometryMode },
			{ "SetManuallyRedraw", &UWidgetComponent::execSetManuallyRedraw },
			{ "SetOwnerPlayer", &UWidgetComponent::execSetOwnerPlayer },
			{ "SetPivot", &UWidgetComponent::execSetPivot },
			{ "SetRedrawTime", &UWidgetComponent::execSetRedrawTime },
			{ "SetTickWhenOffscreen", &UWidgetComponent::execSetTickWhenOffscreen },
			{ "SetTintColorAndOpacity", &UWidgetComponent::execSetTintColorAndOpacity },
			{ "SetTwoSided", &UWidgetComponent::execSetTwoSided },
			{ "SetWidget", &UWidgetComponent::execSetWidget },
			{ "SetWidgetSpace", &UWidgetComponent::execSetWidgetSpace },
			{ "SetWindowFocusable", &UWidgetComponent::execSetWindowFocusable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics
	{
		struct WidgetComponent_eventGetCurrentDrawSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetCurrentDrawSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the \"actual\" draw size of the quad in the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetCurrentDrawSize", sizeof(WidgetComponent_eventGetCurrentDrawSize_Parms), Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics
	{
		struct WidgetComponent_eventGetCylinderArcAngle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetCylinderArcAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Defines the curvature of the widget component when using EWidgetGeometryMode::Cylinder; ignored otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetCylinderArcAngle", sizeof(WidgetComponent_eventGetCylinderArcAngle_Parms), Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics
	{
		struct WidgetComponent_eventGetDrawAtDesiredSize_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetDrawAtDesiredSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventGetDrawAtDesiredSize_Parms), &Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetDrawAtDesiredSize", sizeof(WidgetComponent_eventGetDrawAtDesiredSize_Parms), Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics
	{
		struct WidgetComponent_eventGetDrawSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetDrawSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the \"specified\" draw size of the quad in the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetDrawSize", sizeof(WidgetComponent_eventGetDrawSize_Parms), Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetDrawSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics
	{
		struct WidgetComponent_eventGetGeometryMode_Parms
		{
			EWidgetGeometryMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetGeometryMode_Parms, ReturnValue), Z_Construct_UEnum_UMG_EWidgetGeometryMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see EWidgetGeometryMode, @see GetCylinderArcAngle()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetGeometryMode", sizeof(WidgetComponent_eventGetGeometryMode_Parms), Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetGeometryMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics
	{
		struct WidgetComponent_eventGetManuallyRedraw_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetManuallyRedraw_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventGetManuallyRedraw_Parms), &Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see bManuallyRedraw" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetManuallyRedraw", sizeof(WidgetComponent_eventGetManuallyRedraw_Parms), Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics
	{
		struct WidgetComponent_eventGetMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the dynamic material instance used to render the user widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetMaterialInstance", sizeof(WidgetComponent_eventGetMaterialInstance_Parms), Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics
	{
		struct WidgetComponent_eventGetOwnerPlayer_Parms
		{
			ULocalPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetOwnerPlayer_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Gets the local player that owns this widget component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetOwnerPlayer", sizeof(WidgetComponent_eventGetOwnerPlayer_Parms), Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics
	{
		struct WidgetComponent_eventGetPivot_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetPivot_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the pivot point where the UI is rendered about the origin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetPivot", sizeof(WidgetComponent_eventGetPivot_Parms), Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics
	{
		struct WidgetComponent_eventGetRedrawTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetRedrawTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetRedrawTime", sizeof(WidgetComponent_eventGetRedrawTime_Parms), Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetRedrawTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics
	{
		struct WidgetComponent_eventGetRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the render target to which the user widget is rendered" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetRenderTarget", sizeof(WidgetComponent_eventGetRenderTarget_Parms), Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics
	{
		struct WidgetComponent_eventGetTickWhenOffscreen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetTickWhenOffscreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventGetTickWhenOffscreen_Parms), &Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Gets whether the widget ticks when offscreen or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetTickWhenOffscreen", sizeof(WidgetComponent_eventGetTickWhenOffscreen_Parms), Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics
	{
		struct WidgetComponent_eventGetTwoSided_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetTwoSided_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventGetTwoSided_Parms), &Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Gets whether the widget is two-sided or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetTwoSided", sizeof(WidgetComponent_eventGetTwoSided_Parms), Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetTwoSided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics
	{
		struct WidgetComponent_eventGetUserWidgetObject_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetUserWidgetObject_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the user widget object displayed by this component" },
		{ "UnsafeDuringActorConstruction", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetUserWidgetObject", sizeof(WidgetComponent_eventGetUserWidgetObject_Parms), Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics
	{
		struct WidgetComponent_eventGetWidgetSpace_Parms
		{
			EWidgetSpace ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventGetWidgetSpace_Parms, ReturnValue), Z_Construct_UEnum_UMG_EWidgetSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetWidgetSpace", sizeof(WidgetComponent_eventGetWidgetSpace_Parms), Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics
	{
		struct WidgetComponent_eventGetWindowFocusable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetWindowFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventGetWindowFocusable_Parms), &Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see bWindowFocusable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetWindowFocusable", sizeof(WidgetComponent_eventGetWindowFocusable_Parms), Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Requests that the widget be redrawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "RequestRedraw", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_RequestRedraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics
	{
		struct WidgetComponent_eventSetBackgroundColor_Parms
		{
			FLinearColor NewBackgroundColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewBackgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor = { "NewBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetBackgroundColor_Parms, NewBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the background color and opacityscale for this widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetBackgroundColor", sizeof(WidgetComponent_eventSetBackgroundColor_Parms), Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics
	{
		struct WidgetComponent_eventSetCylinderArcAngle_Parms
		{
			float InCylinderArcAngle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCylinderArcAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InCylinderArcAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle = { "InCylinderArcAngle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetCylinderArcAngle_Parms, InCylinderArcAngle), METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Defines the curvature of the widget component when using EWidgetGeometryMode::Cylinder; ignored otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetCylinderArcAngle", sizeof(WidgetComponent_eventSetCylinderArcAngle_Parms), Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics
	{
		struct WidgetComponent_eventSetDrawAtDesiredSize_Parms
		{
			bool InbDrawAtDesiredSize;
		};
		static void NewProp_InbDrawAtDesiredSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbDrawAtDesiredSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::NewProp_InbDrawAtDesiredSize_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetDrawAtDesiredSize_Parms*)Obj)->InbDrawAtDesiredSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::NewProp_InbDrawAtDesiredSize = { "InbDrawAtDesiredSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventSetDrawAtDesiredSize_Parms), &Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::NewProp_InbDrawAtDesiredSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::NewProp_InbDrawAtDesiredSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetDrawAtDesiredSize", sizeof(WidgetComponent_eventSetDrawAtDesiredSize_Parms), Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics
	{
		struct WidgetComponent_eventSetDrawSize_Parms
		{
			FVector2D Size;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetDrawSize_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the draw size of the quad in the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetDrawSize", sizeof(WidgetComponent_eventSetDrawSize_Parms), Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetDrawSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics
	{
		struct WidgetComponent_eventSetGeometryMode_Parms
		{
			EWidgetGeometryMode InGeometryMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InGeometryMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InGeometryMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::NewProp_InGeometryMode = { "InGeometryMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetGeometryMode_Parms, InGeometryMode), Z_Construct_UEnum_UMG_EWidgetGeometryMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::NewProp_InGeometryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::NewProp_InGeometryMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::NewProp_InGeometryMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetGeometryMode", sizeof(WidgetComponent_eventSetGeometryMode_Parms), Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetGeometryMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics
	{
		struct WidgetComponent_eventSetManuallyRedraw_Parms
		{
			bool bUseManualRedraw;
		};
		static void NewProp_bUseManualRedraw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseManualRedraw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::NewProp_bUseManualRedraw_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetManuallyRedraw_Parms*)Obj)->bUseManualRedraw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::NewProp_bUseManualRedraw = { "bUseManualRedraw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventSetManuallyRedraw_Parms), &Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::NewProp_bUseManualRedraw_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::NewProp_bUseManualRedraw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see bManuallyRedraw" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetManuallyRedraw", sizeof(WidgetComponent_eventSetManuallyRedraw_Parms), Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics
	{
		struct WidgetComponent_eventSetOwnerPlayer_Parms
		{
			ULocalPlayer* LocalPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::NewProp_LocalPlayer = { "LocalPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetOwnerPlayer_Parms, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::NewProp_LocalPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the local player that owns this widget component.  Setting the owning player controls\nwhich player's viewport the widget appears on in a split screen scenario.  Additionally it\nforwards the owning player to the actual UserWidget that is spawned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetOwnerPlayer", sizeof(WidgetComponent_eventSetOwnerPlayer_Parms), Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics
	{
		struct WidgetComponent_eventSetPivot_Parms
		{
			FVector2D InPivot;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPivot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot = { "InPivot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetPivot_Parms, InPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetPivot", sizeof(WidgetComponent_eventSetPivot_Parms), Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics
	{
		struct WidgetComponent_eventSetRedrawTime_Parms
		{
			float bInRedrawTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bInRedrawTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::NewProp_bInRedrawTime = { "bInRedrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetRedrawTime_Parms, bInRedrawTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::NewProp_bInRedrawTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetRedrawTime", sizeof(WidgetComponent_eventSetRedrawTime_Parms), Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetRedrawTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics
	{
		struct WidgetComponent_eventSetTickWhenOffscreen_Parms
		{
			bool bWantTickWhenOffscreen;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantTickWhenOffscreen_MetaData[];
#endif
		static void NewProp_bWantTickWhenOffscreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantTickWhenOffscreen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetTickWhenOffscreen_Parms*)Obj)->bWantTickWhenOffscreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen = { "bWantTickWhenOffscreen", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventSetTickWhenOffscreen_Parms), &Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets whether the widget ticks when offscreen or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetTickWhenOffscreen", sizeof(WidgetComponent_eventSetTickWhenOffscreen_Parms), Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics
	{
		struct WidgetComponent_eventSetTintColorAndOpacity_Parms
		{
			FLinearColor NewTintColorAndOpacity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTintColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTintColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity = { "NewTintColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetTintColorAndOpacity_Parms, NewTintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the tint color and opacity scale for this widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetTintColorAndOpacity", sizeof(WidgetComponent_eventSetTintColorAndOpacity_Parms), Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics
	{
		struct WidgetComponent_eventSetTwoSided_Parms
		{
			bool bWantTwoSided;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantTwoSided_MetaData[];
#endif
		static void NewProp_bWantTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantTwoSided;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetTwoSided_Parms*)Obj)->bWantTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided = { "bWantTwoSided", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventSetTwoSided_Parms), &Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets whether the widget is two-sided or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetTwoSided", sizeof(WidgetComponent_eventSetTwoSided_Parms), Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetTwoSided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics
	{
		struct WidgetComponent_eventSetWidget_Parms
		{
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the widget to use directly. This function will keep track of the widget till the next time it's called\n    with either a newer widget or a nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetWidget", sizeof(WidgetComponent_eventSetWidget_Parms), Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics
	{
		struct WidgetComponent_eventSetWidgetSpace_Parms
		{
			EWidgetSpace NewSpace;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewSpace_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::NewProp_NewSpace = { "NewSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WidgetComponent_eventSetWidgetSpace_Parms, NewSpace), Z_Construct_UEnum_UMG_EWidgetSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::NewProp_NewSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::NewProp_NewSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::NewProp_NewSpace_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetWidgetSpace", sizeof(WidgetComponent_eventSetWidgetSpace_Parms), Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics
	{
		struct WidgetComponent_eventSetWindowFocusable_Parms
		{
			bool bInWindowFocusable;
		};
		static void NewProp_bInWindowFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInWindowFocusable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::NewProp_bInWindowFocusable_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetWindowFocusable_Parms*)Obj)->bInWindowFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::NewProp_bInWindowFocusable = { "bInWindowFocusable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WidgetComponent_eventSetWindowFocusable_Parms), &Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::NewProp_bInWindowFocusable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::NewProp_bInWindowFocusable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see bWindowFocusable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetWindowFocusable", sizeof(WidgetComponent_eventSetWindowFocusable_Parms), Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetComponent_NoRegister()
	{
		return UWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderArcAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CylinderArcAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GeometryMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeometryMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerZOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedLayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SharedLayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditTimeUsable_MetaData[];
#endif
		static void NewProp_bEditTimeUsable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditTimeUsable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddedToScreen_MetaData[];
#endif
		static void NewProp_bAddedToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddedToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterial_OneSided_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskedMaterial_OneSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_OneSided_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueMaterial_OneSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_OneSided_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentMaterial_OneSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickWhenOffscreen_MetaData[];
#endif
		static void NewProp_TickWhenOffscreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TickWhenOffscreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTwoSided_MetaData[];
#endif
		static void NewProp_bIsTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityFromTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityFromTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TintColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TintColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyGammaCorrection_MetaData[];
#endif
		static void NewProp_bApplyGammaCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyGammaCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWindowFocusable_MetaData[];
#endif
		static void NewProp_bWindowFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWindowFocusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceiveHardwareInput_MetaData[];
#endif
		static void NewProp_bReceiveHardwareInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceiveHardwareInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawAtDesiredSize_MetaData[];
#endif
		static void NewProp_bDrawAtDesiredSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawAtDesiredSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDrawSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedrawTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RedrawTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRedrawRequested_MetaData[];
#endif
		static void NewProp_bRedrawRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRedrawRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManuallyRedraw_MetaData[];
#endif
		static void NewProp_bManuallyRedraw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManuallyRedraw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TimingPolicy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimingPolicy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize, "GetCurrentDrawSize" }, // 3130612356
		{ &Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle, "GetCylinderArcAngle" }, // 3557829426
		{ &Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize, "GetDrawAtDesiredSize" }, // 2995280997
		{ &Z_Construct_UFunction_UWidgetComponent_GetDrawSize, "GetDrawSize" }, // 3007663917
		{ &Z_Construct_UFunction_UWidgetComponent_GetGeometryMode, "GetGeometryMode" }, // 2011318221
		{ &Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw, "GetManuallyRedraw" }, // 3777027872
		{ &Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance, "GetMaterialInstance" }, // 4197922626
		{ &Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer, "GetOwnerPlayer" }, // 2537051047
		{ &Z_Construct_UFunction_UWidgetComponent_GetPivot, "GetPivot" }, // 2648011944
		{ &Z_Construct_UFunction_UWidgetComponent_GetRedrawTime, "GetRedrawTime" }, // 361928250
		{ &Z_Construct_UFunction_UWidgetComponent_GetRenderTarget, "GetRenderTarget" }, // 1451072684
		{ &Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen, "GetTickWhenOffscreen" }, // 1062388886
		{ &Z_Construct_UFunction_UWidgetComponent_GetTwoSided, "GetTwoSided" }, // 41140541
		{ &Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject, "GetUserWidgetObject" }, // 4250885756
		{ &Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace, "GetWidgetSpace" }, // 509755148
		{ &Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable, "GetWindowFocusable" }, // 2688919492
		{ &Z_Construct_UFunction_UWidgetComponent_RequestRedraw, "RequestRedraw" }, // 2574229112
		{ &Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor, "SetBackgroundColor" }, // 3535749915
		{ &Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle, "SetCylinderArcAngle" }, // 2664433415
		{ &Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize, "SetDrawAtDesiredSize" }, // 1485812849
		{ &Z_Construct_UFunction_UWidgetComponent_SetDrawSize, "SetDrawSize" }, // 35349646
		{ &Z_Construct_UFunction_UWidgetComponent_SetGeometryMode, "SetGeometryMode" }, // 3762909511
		{ &Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw, "SetManuallyRedraw" }, // 3772919972
		{ &Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer, "SetOwnerPlayer" }, // 21441723
		{ &Z_Construct_UFunction_UWidgetComponent_SetPivot, "SetPivot" }, // 1067294511
		{ &Z_Construct_UFunction_UWidgetComponent_SetRedrawTime, "SetRedrawTime" }, // 1490670626
		{ &Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen, "SetTickWhenOffscreen" }, // 124050127
		{ &Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity, "SetTintColorAndOpacity" }, // 4129082482
		{ &Z_Construct_UFunction_UWidgetComponent_SetTwoSided, "SetTwoSided" }, // 1774833882
		{ &Z_Construct_UFunction_UWidgetComponent_SetWidget, "SetWidget" }, // 1442151428
		{ &Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace, "SetWidgetSpace" }, // 1949892118
		{ &Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable, "SetWindowFocusable" }, // 2476262583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UserInterface" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Components/WidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The widget component provides a surface in the 3D environment on which to render widgets normally rendered to the screen.\nWidgets are first rendered to a render target, then that render target is displayed in the world.\n\nMaterial Properties set by this component on whatever material overrides the default.\nSlateUI [Texture]\nBackColor [Vector]\nTintColorAndOpacity [Vector]\nOpacityFromTexture [Scalar]" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "1.000000" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Curvature of a cylindrical widget in degrees." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle = { "CylinderArcAngle", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, CylinderArcAngle), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Controls the geometry of the widget component. See EWidgetGeometryMode." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode = { "GeometryMode", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, GeometryMode), Z_Construct_UEnum_UMG_EWidgetGeometryMode, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "ZOrder the layer will be created on, note this only matters on the first time a new layer is created, subsequent additions to the same layer will use the initially defined ZOrder" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder = { "LayerZOrder", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, LayerZOrder), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Layer Name the widget will live on" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName = { "SharedLayerName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, SharedLayerName), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Allows the widget component to be used at editor time.  For use in the VR-Editor." },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bEditTimeUsable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable = { "bEditTimeUsable", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bAddedToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen = { "bAddedToScreen", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The dynamic instance of the material that the render target is attached to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The target to which the user widget is rendered" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for masked, one-sided widget components." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided = { "MaskedMaterial_OneSided", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, MaskedMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for masked widget components." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial = { "MaskedMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, MaskedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for opaque, one-sided widget components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided = { "OpaqueMaterial_OneSided", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for opaque widget components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial = { "OpaqueMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for translucent, one-sided widget components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided = { "TranslucentMaterial_OneSided", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for translucent widget components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial = { "TranslucentMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The body setup of the displayed quad" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0020080000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The User Widget object displayed and managed by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0020080000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Should the component tick the widget when it's off screen?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->TickWhenOffscreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen = { "TickWhenOffscreen", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Is the component visible from behind?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bIsTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided = { "bIsTwoSided", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The blend mode for the widget." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, BlendMode), Z_Construct_UEnum_UMG_EWidgetBlendMode, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture = { "OpacityFromTexture", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, OpacityFromTexture), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Tint color and opacity for this component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity = { "TintColorAndOpacity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, TintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The background color of the component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The owner player for a widget component, if this widget is drawn on the screen, this controls\nwhat player's screen it appears on for split screen, if not set, users player 0." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer = { "OwnerPlayer", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, OwnerPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Widget components that appear in the world will be gamma corrected by the 3D renderer.\nIn some cases, widget components are blitted directly into the backbuffer, in which case gamma correction should be enabled." },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bApplyGammaCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection = { "bApplyGammaCorrection", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Is the virtual window created to host the widget focusable?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bWindowFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable = { "bWindowFocusable", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Register with the viewport for hardware input from the true mouse and keyboard.  These widgets\nwill more or less react like regular 2D widgets in the viewport, e.g. they can and will steal focus\nfrom the viewport.\n\nWARNING: If you are making a VR game, definitely do not change this to true.  This option should ONLY be used\nif you're making what would otherwise be a normal menu for a game, just in 3D.  If you also need the game to\nremain responsive and for the player to be able to interact with UI and move around the world (such as a keypad on a door),\nuse the WidgetInteractionComponent instead." },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bReceiveHardwareInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput = { "bReceiveHardwareInput", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The Alignment/Pivot point that the widget is placed at relative to the position." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Causes the render target to automatically match the desired size.\n\nWARNING: If you change this every frame, it will be very expensive.  If you need\n   that effect, you should keep the outer widget's sized locked and dynamically\n   scale or resize some inner widget." },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bDrawAtDesiredSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize = { "bDrawAtDesiredSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The actual draw size, this changes based on DrawSize - or the desired size of the widget if\nbDrawAtDesiredSize is true." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize = { "CurrentDrawSize", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, CurrentDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The time in between draws, if 0 - we would redraw every frame.  If 1, we would redraw every second.\nThis will work with bManuallyRedraw as well.  So you can say, manually redraw, but only redraw at this\nmaximum rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime = { "RedrawTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, RedrawTime), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Has anyone requested we redraw?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bRedrawRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested = { "bRedrawRequested", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Should we wait to be told to redraw to actually draw?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bManuallyRedraw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw = { "bManuallyRedraw", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The size of the displayed quad." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize = { "DrawSize", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, DrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The class of User Widget to create and display an instance of" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "How this widget should deal with timing, pausing, etc." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy = { "TimingPolicy", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, TimingPolicy), Z_Construct_UEnum_UMG_EWidgetTimingPolicy, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The coordinate space in which to render the widget" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetComponent, Space), Z_Construct_UEnum_UMG_EWidgetSpace, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetComponent_Statics::ClassParams = {
		&UWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetComponent, 1010782065);
	template<> UMG_API UClass* StaticClass<UWidgetComponent>()
	{
		return UWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetComponent(Z_Construct_UClass_UWidgetComponent, &UWidgetComponent::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
