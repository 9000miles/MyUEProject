// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABOUTUE_AboutUECharacter_generated_h
#error "AboutUECharacter.generated.h already included, missing '#pragma once' in AboutUECharacter.h"
#endif
#define ABOUTUE_AboutUECharacter_generated_h

#define AboutUE_Source_AboutUE_AboutUECharacter_h_12_RPC_WRAPPERS
#define AboutUE_Source_AboutUE_AboutUECharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AboutUE_Source_AboutUE_AboutUECharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAboutUECharacter(); \
	friend struct Z_Construct_UClass_AAboutUECharacter_Statics; \
public: \
	DECLARE_CLASS(AAboutUECharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AboutUE"), NO_API) \
	DECLARE_SERIALIZER(AAboutUECharacter)


#define AboutUE_Source_AboutUE_AboutUECharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAboutUECharacter(); \
	friend struct Z_Construct_UClass_AAboutUECharacter_Statics; \
public: \
	DECLARE_CLASS(AAboutUECharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AboutUE"), NO_API) \
	DECLARE_SERIALIZER(AAboutUECharacter)


#define AboutUE_Source_AboutUE_AboutUECharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAboutUECharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAboutUECharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAboutUECharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAboutUECharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAboutUECharacter(AAboutUECharacter&&); \
	NO_API AAboutUECharacter(const AAboutUECharacter&); \
public:


#define AboutUE_Source_AboutUE_AboutUECharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAboutUECharacter(AAboutUECharacter&&); \
	NO_API AAboutUECharacter(const AAboutUECharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAboutUECharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAboutUECharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAboutUECharacter)


#define AboutUE_Source_AboutUE_AboutUECharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AAboutUECharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AAboutUECharacter, FollowCamera); }


#define AboutUE_Source_AboutUE_AboutUECharacter_h_9_PROLOG
#define AboutUE_Source_AboutUE_AboutUECharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutUE_Source_AboutUE_AboutUECharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	AboutUE_Source_AboutUE_AboutUECharacter_h_12_RPC_WRAPPERS \
	AboutUE_Source_AboutUE_AboutUECharacter_h_12_INCLASS \
	AboutUE_Source_AboutUE_AboutUECharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AboutUE_Source_AboutUE_AboutUECharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutUE_Source_AboutUE_AboutUECharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	AboutUE_Source_AboutUE_AboutUECharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AboutUE_Source_AboutUE_AboutUECharacter_h_12_INCLASS_NO_PURE_DECLS \
	AboutUE_Source_AboutUE_AboutUECharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABOUTUE_API UClass* StaticClass<class AAboutUECharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AboutUE_Source_AboutUE_AboutUECharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
