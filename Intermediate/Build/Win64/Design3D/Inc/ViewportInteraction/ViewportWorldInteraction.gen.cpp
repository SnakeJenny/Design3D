// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteraction/Public/ViewportWorldInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldInteraction() {}
// Cross Module References
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtension();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor_NoRegister();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo_NoRegister();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform();
	VIEWPORTINTERACTION_API UFunction* Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractionAssetContainer_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UMouseCursorInteractor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportTransformer_NoRegister();
// End Cross Module References
	static UEnum* EViewportWorldInteractionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType, Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("EViewportWorldInteractionType"));
		}
		return Singleton;
	}
	template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EViewportWorldInteractionType>()
	{
		return EViewportWorldInteractionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EViewportWorldInteractionType(EViewportWorldInteractionType_StaticEnum, TEXT("/Script/ViewportInteraction"), TEXT("EViewportWorldInteractionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Hash() { return 1267401321U; }
	UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ViewportInteraction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EViewportWorldInteractionType"), 0, Get_Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EViewportWorldInteractionType::VR", (int64)EViewportWorldInteractionType::VR },
				{ "EViewportWorldInteractionType::Legacy", (int64)EViewportWorldInteractionType::Legacy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ViewportInteraction,
				nullptr,
				"EViewportWorldInteractionType",
				"EViewportWorldInteractionType",
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
	void UViewportWorldInteraction::StaticRegisterNativesUViewportWorldInteraction()
	{
		UClass* Class = UViewportWorldInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorToExcludeFromHitTests", &UViewportWorldInteraction::execAddActorToExcludeFromHitTests },
			{ "AddInteractor", &UViewportWorldInteraction::execAddInteractor },
			{ "GetHeadTransform", &UViewportWorldInteraction::execGetHeadTransform },
			{ "GetInteractors", &UViewportWorldInteraction::execGetInteractors },
			{ "GetRoomSpaceHeadTransform", &UViewportWorldInteraction::execGetRoomSpaceHeadTransform },
			{ "GetRoomTransform", &UViewportWorldInteraction::execGetRoomTransform },
			{ "GetTransformGizmoActor", &UViewportWorldInteraction::execGetTransformGizmoActor },
			{ "GetWorldScaleFactor", &UViewportWorldInteraction::execGetWorldScaleFactor },
			{ "RemoveInteractor", &UViewportWorldInteraction::execRemoveInteractor },
			{ "SetHeadTransform", &UViewportWorldInteraction::execSetHeadTransform },
			{ "SetRoomTransformForNextFrame", &UViewportWorldInteraction::execSetRoomTransformForNextFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics
	{
		struct ViewportWorldInteraction_eventAddActorToExcludeFromHitTests_Parms
		{
			AActor* ActorToExcludeFromHitTests;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToExcludeFromHitTests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::NewProp_ActorToExcludeFromHitTests = { "ActorToExcludeFromHitTests", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventAddActorToExcludeFromHitTests_Parms, ActorToExcludeFromHitTests), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::NewProp_ActorToExcludeFromHitTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Adds an actor to the list of actors to never allow an interactor to hit in the scene.  No selection.  No hover.\nThere's no need to remove actors from this list.  They'll expire from it automatically when destroyed.\n\n@param       ActorToExcludeFromHitTests      The actor that should be forever excluded from hit tests" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "AddActorToExcludeFromHitTests", sizeof(ViewportWorldInteraction_eventAddActorToExcludeFromHitTests_Parms), Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics
	{
		struct ViewportWorldInteraction_eventAddInteractor_Parms
		{
			UViewportInteractor* Interactor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventAddInteractor_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Adds interactor to the worldinteraction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "AddInteractor", sizeof(ViewportWorldInteraction_eventAddInteractor_Parms), Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics
	{
		struct ViewportWorldInteraction_eventGetHeadTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventGetHeadTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the transform of the viewport / user's HMD in world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetHeadTransform", sizeof(ViewportWorldInteraction_eventGetHeadTransform_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics
	{
		struct ViewportWorldInteraction_eventGetInteractors_Parms
		{
			TArray<UViewportInteractor*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventGetInteractors_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets all the interactors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetInteractors", sizeof(ViewportWorldInteraction_eventGetInteractors_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics
	{
		struct ViewportWorldInteraction_eventGetRoomSpaceHeadTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventGetRoomSpaceHeadTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the transform of the viewport / user's HMD in room space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetRoomSpaceHeadTransform", sizeof(ViewportWorldInteraction_eventGetRoomSpaceHeadTransform_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics
	{
		struct ViewportWorldInteraction_eventGetRoomTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventGetRoomTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the world space transform of the calibrated VR room origin.  When using a seated VR device, this will feel like the\n      camera's world transform (before any HMD positional or rotation adjustments are applied.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetRoomTransform", sizeof(ViewportWorldInteraction_eventGetRoomTransform_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics
	{
		struct ViewportWorldInteraction_eventGetTransformGizmoActor_Parms
		{
			ABaseTransformGizmo* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventGetTransformGizmoActor_Parms, ReturnValue), Z_Construct_UClass_ABaseTransformGizmo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the transform gizmo actor, or returns null if we currently don't have one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetTransformGizmoActor", sizeof(ViewportWorldInteraction_eventGetTransformGizmoActor_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics
	{
		struct ViewportWorldInteraction_eventGetWorldScaleFactor_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventGetWorldScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the world scale factor, which can be multiplied by a scale vector to convert to room space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetWorldScaleFactor", sizeof(ViewportWorldInteraction_eventGetWorldScaleFactor_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics
	{
		struct ViewportWorldInteraction_eventRemoveInteractor_Parms
		{
			UViewportInteractor* Interactor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventRemoveInteractor_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Removes interactor from the worldinteraction and removes the interactor from its paired interactor if any" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "RemoveInteractor", sizeof(ViewportWorldInteraction_eventRemoveInteractor_Parms), Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics
	{
		struct ViewportWorldInteraction_eventSetHeadTransform_Parms
		{
			FTransform NewHeadTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewHeadTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewHeadTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform = { "NewHeadTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventSetHeadTransform_Parms, NewHeadTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Sets a new transform for the room so that the HMD is aligned to the new transform.\n              The Head is kept level to the ground and only rotated on the yaw" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "SetHeadTransform", sizeof(ViewportWorldInteraction_eventSetHeadTransform_Parms), Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics
	{
		struct ViewportWorldInteraction_eventSetRoomTransformForNextFrame_Parms
		{
			FTransform NewRoomTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRoomTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRoomTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform = { "NewRoomTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ViewportWorldInteraction_eventSetRoomTransformForNextFrame_Parms, NewRoomTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "SetRoomTransformForNextFrame", sizeof(ViewportWorldInteraction_eventSetRoomTransformForNextFrame_Parms), Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister()
	{
		return UViewportWorldInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UViewportWorldInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToExcludeFromHitTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToExcludeFromHitTest;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ActorsToExcludeFromHitTest_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMouseCursorInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMouseCursorInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapGridMID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnapGridMID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapGridMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnapGridMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapGridActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnapGridActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformGizmoActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransformGizmoActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportTransformer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ViewportTransformer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interactors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Interactors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportWorldInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorWorldExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportWorldInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests, "AddActorToExcludeFromHitTests" }, // 263133745
		{ &Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor, "AddInteractor" }, // 3067889897
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform, "GetHeadTransform" }, // 1423550606
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors, "GetInteractors" }, // 2363450847
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform, "GetRoomSpaceHeadTransform" }, // 637393573
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform, "GetRoomTransform" }, // 1227895573
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor, "GetTransformGizmoActor" }, // 3880851009
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor, "GetWorldScaleFactor" }, // 2352709892
		{ &Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor, "RemoveInteractor" }, // 782466708
		{ &Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform, "SetHeadTransform" }, // 3060803682
		{ &Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame, "SetRoomTransformForNextFrame" }, // 2859101979
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ViewportWorldInteraction.h" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Container of assets" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer = { "AssetContainer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportWorldInteraction, AssetContainer), Z_Construct_UClass_UViewportInteractionAssetContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "List of actors which should never be hit by an interactor, such as the 'avatar mesh actor' in VR" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest = { "ActorsToExcludeFromHitTest", nullptr, (EPropertyFlags)0x0044000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportWorldInteraction, ActorsToExcludeFromHitTest), METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_Inner = { "ActorsToExcludeFromHitTest", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "The default mouse cursor interactor, activated on demand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor = { "DefaultMouseCursorInteractor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportWorldInteraction, DefaultMouseCursorInteractor), Z_Construct_UClass_UMouseCursorInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "MID for the snap grid, so we can update snap values on the fly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID = { "SnapGridMID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportWorldInteraction, SnapGridMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "The plane mesh we use to draw a snap grid under selected objects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent = { "SnapGridMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportWorldInteraction, SnapGridMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Actor for the snap grid" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor = { "SnapGridActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportWorldInteraction, SnapGridActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Transform gizmo actor, for manipulating selected actor(s)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor = { "TransformGizmoActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportWorldInteraction, TransformGizmoActor), Z_Construct_UClass_ABaseTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "The active system being used to transform objects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer = { "ViewportTransformer", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportWorldInteraction, ViewportTransformer), Z_Construct_UClass_UViewportTransformer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "All the interactors registered to modify the world" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors = { "Interactors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UViewportWorldInteraction, Interactors), METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_Inner = { "Interactors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportWorldInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportWorldInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportWorldInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewportWorldInteraction_Statics::ClassParams = {
		&UViewportWorldInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewportWorldInteraction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportWorldInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewportWorldInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewportWorldInteraction, 370041991);
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportWorldInteraction>()
	{
		return UViewportWorldInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewportWorldInteraction(Z_Construct_UClass_UViewportWorldInteraction, &UViewportWorldInteraction::StaticClass, TEXT("/Script/ViewportInteraction"), TEXT("UViewportWorldInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportWorldInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
