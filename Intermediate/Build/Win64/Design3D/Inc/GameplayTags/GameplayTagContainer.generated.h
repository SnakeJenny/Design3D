// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTAGS_GameplayTagContainer_generated_h
#error "GameplayTagContainer.generated.h already included, missing '#pragma once' in GameplayTagContainer.h"
#endif
#define GAMEPLAYTAGS_GameplayTagContainer_generated_h

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_971_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagQuery_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TokenStreamVersion() { return STRUCT_OFFSET(FGameplayTagQuery, TokenStreamVersion); } \
	FORCEINLINE static uint32 __PPO__TagDictionary() { return STRUCT_OFFSET(FGameplayTagQuery, TagDictionary); } \
	FORCEINLINE static uint32 __PPO__QueryTokenStream() { return STRUCT_OFFSET(FGameplayTagQuery, QueryTokenStream); } \
	FORCEINLINE static uint32 __PPO__UserDescription() { return STRUCT_OFFSET(FGameplayTagQuery, UserDescription); } \
	FORCEINLINE static uint32 __PPO__AutoDescription() { return STRUCT_OFFSET(FGameplayTagQuery, AutoDescription); }


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagQuery>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_916_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagCreationWidgetHelper>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_893_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagReferenceHelper>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagContainer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__GameplayTags() { return STRUCT_OFFSET(FGameplayTagContainer, GameplayTags); } \
	FORCEINLINE static uint32 __PPO__ParentTags() { return STRUCT_OFFSET(FGameplayTagContainer, ParentTags); }


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagContainer>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TagName() { return STRUCT_OFFSET(FGameplayTag, TagName); }


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTag>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQuery, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQuery)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQuery, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQuery)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQuery(UEditableGameplayTagQuery&&); \
	NO_API UEditableGameplayTagQuery(const UEditableGameplayTagQuery&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQuery(UEditableGameplayTagQuery&&); \
	NO_API UEditableGameplayTagQuery(const UEditableGameplayTagQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQuery)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TagQueryExportText_Helper() { return STRUCT_OFFSET(UEditableGameplayTagQuery, TagQueryExportText_Helper); }


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1182_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1185_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQuery>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression(UEditableGameplayTagQueryExpression&&); \
	NO_API UEditableGameplayTagQueryExpression(const UEditableGameplayTagQueryExpression&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression(UEditableGameplayTagQueryExpression&&); \
	NO_API UEditableGameplayTagQueryExpression(const UEditableGameplayTagQueryExpression&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1213_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1216_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyTagsMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyTagsMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(UEditableGameplayTagQueryExpression_AnyTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const UEditableGameplayTagQueryExpression_AnyTagsMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(UEditableGameplayTagQueryExpression_AnyTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const UEditableGameplayTagQueryExpression_AnyTagsMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1229_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1232_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_AnyTagsMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllTagsMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllTagsMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(UEditableGameplayTagQueryExpression_AllTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const UEditableGameplayTagQueryExpression_AllTagsMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(UEditableGameplayTagQueryExpression_AllTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const UEditableGameplayTagQueryExpression_AllTagsMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1242_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1245_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_AllTagsMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoTagsMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoTagsMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(UEditableGameplayTagQueryExpression_NoTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const UEditableGameplayTagQueryExpression_NoTagsMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(UEditableGameplayTagQueryExpression_NoTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const UEditableGameplayTagQueryExpression_NoTagsMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1255_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1258_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_NoTagsMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyExprMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyExprMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(UEditableGameplayTagQueryExpression_AnyExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const UEditableGameplayTagQueryExpression_AnyExprMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(UEditableGameplayTagQueryExpression_AnyExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const UEditableGameplayTagQueryExpression_AnyExprMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1268_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1271_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_AnyExprMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllExprMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllExprMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(UEditableGameplayTagQueryExpression_AllExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const UEditableGameplayTagQueryExpression_AllExprMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(UEditableGameplayTagQueryExpression_AllExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const UEditableGameplayTagQueryExpression_AllExprMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1281_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_AllExprMatch>();

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoExprMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoExprMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(UEditableGameplayTagQueryExpression_NoExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const UEditableGameplayTagQueryExpression_NoExprMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(UEditableGameplayTagQueryExpression_NoExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const UEditableGameplayTagQueryExpression_NoExprMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1294_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1297_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UEditableGameplayTagQueryExpression_NoExprMatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h


#define FOREACH_ENUM_EGAMEPLAYTAGQUERYEXPRTYPE(op) \
	op(EGameplayTagQueryExprType::Undefined) \
	op(EGameplayTagQueryExprType::AnyTagsMatch) \
	op(EGameplayTagQueryExprType::AllTagsMatch) \
	op(EGameplayTagQueryExprType::NoTagsMatch) \
	op(EGameplayTagQueryExprType::AnyExprMatch) \
	op(EGameplayTagQueryExprType::AllExprMatch) \
	op(EGameplayTagQueryExprType::NoExprMatch) 
#define FOREACH_ENUM_EGAMEPLAYCONTAINERMATCHTYPE(op) \
	op(EGameplayContainerMatchType::Any) \
	op(EGameplayContainerMatchType::All) 

enum class EGameplayContainerMatchType : uint8;
template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayContainerMatchType>();

#define FOREACH_ENUM_EGAMEPLAYTAGMATCHTYPE(op) \
	op(EGameplayTagMatchType::Explicit) \
	op(EGameplayTagMatchType::IncludeParentTags) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
