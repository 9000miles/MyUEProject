// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYUEPROJECT_MyUEProjectCharacter_generated_h
#error "MyUEProjectCharacter.generated.h already included, missing '#pragma once' in MyUEProjectCharacter.h"
#endif
#define MYUEPROJECT_MyUEProjectCharacter_generated_h

#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_RPC_WRAPPERS
#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyUEProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyUEProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyUEProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyUEProject"), NO_API) \
	DECLARE_SERIALIZER(AMyUEProjectCharacter)


#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyUEProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyUEProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyUEProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyUEProject"), NO_API) \
	DECLARE_SERIALIZER(AMyUEProjectCharacter)


#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyUEProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyUEProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyUEProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyUEProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyUEProjectCharacter(AMyUEProjectCharacter&&); \
	NO_API AMyUEProjectCharacter(const AMyUEProjectCharacter&); \
public:


#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyUEProjectCharacter(AMyUEProjectCharacter&&); \
	NO_API AMyUEProjectCharacter(const AMyUEProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyUEProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyUEProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyUEProjectCharacter)


#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyUEProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyUEProjectCharacter, FollowCamera); }


#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_9_PROLOG
#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_RPC_WRAPPERS \
	MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_INCLASS \
	MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYUEPROJECT_API UClass* StaticClass<class AMyUEProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyUEProject_Source_MyUEProject_MyUEProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
