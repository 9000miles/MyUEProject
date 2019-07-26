// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveDataManager;
#ifdef GAMESAVEPLUGIN_GameSaveBPLibrary_generated_h
#error "GameSaveBPLibrary.generated.h already included, missing '#pragma once' in GameSaveBPLibrary.h"
#endif
#define GAMESAVEPLUGIN_GameSaveBPLibrary_generated_h

#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSaveDataManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveDataManager**)Z_Param__Result=UGameSaveBPLibrary::GetSaveDataManager(); \
		P_NATIVE_END; \
	}


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSaveDataManager) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveDataManager**)Z_Param__Result=UGameSaveBPLibrary::GetSaveDataManager(); \
		P_NATIVE_END; \
	}


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSaveBPLibrary(); \
	friend struct Z_Construct_UClass_UGameSaveBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameSaveBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSavePlugin"), NO_API) \
	DECLARE_SERIALIZER(UGameSaveBPLibrary)


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameSaveBPLibrary(); \
	friend struct Z_Construct_UClass_UGameSaveBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameSaveBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSavePlugin"), NO_API) \
	DECLARE_SERIALIZER(UGameSaveBPLibrary)


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSaveBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSaveBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSaveBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSaveBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSaveBPLibrary(UGameSaveBPLibrary&&); \
	NO_API UGameSaveBPLibrary(const UGameSaveBPLibrary&); \
public:


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSaveBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSaveBPLibrary(UGameSaveBPLibrary&&); \
	NO_API UGameSaveBPLibrary(const UGameSaveBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSaveBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSaveBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSaveBPLibrary)


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_12_PROLOG
#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_RPC_WRAPPERS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_INCLASS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESAVEPLUGIN_API UClass* StaticClass<class UGameSaveBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Classes_GameSaveBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
