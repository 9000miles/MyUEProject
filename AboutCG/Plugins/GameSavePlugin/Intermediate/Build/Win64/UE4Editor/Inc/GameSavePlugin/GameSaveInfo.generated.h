// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameStateData;
struct FGameModeData;
struct FGameInstanceData;
struct FLevelData;
struct FCharacterData;
struct FActorData;
struct FObjectData;
#ifdef GAMESAVEPLUGIN_GameSaveInfo_generated_h
#error "GameSaveInfo.generated.h already included, missing '#pragma once' in GameSaveInfo.h"
#endif
#define GAMESAVEPLUGIN_GameSaveInfo_generated_h

#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSaveDataStateArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameStateData>*)Z_Param__Result=P_THIS->GetSaveDataStateArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataModeArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameModeData>*)Z_Param__Result=P_THIS->GetSaveDataModeArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataInstanceArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameInstanceData>*)Z_Param__Result=P_THIS->GetSaveDataInstanceArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataLevelArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FLevelData>*)Z_Param__Result=P_THIS->GetSaveDataLevelArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataCharacterArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCharacterData>*)Z_Param__Result=P_THIS->GetSaveDataCharacterArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataActorArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FActorData>*)Z_Param__Result=P_THIS->GetSaveDataActorArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataObjectArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FObjectData>*)Z_Param__Result=P_THIS->GetSaveDataObjectArray(); \
		P_NATIVE_END; \
	}


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSaveDataStateArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameStateData>*)Z_Param__Result=P_THIS->GetSaveDataStateArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataModeArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameModeData>*)Z_Param__Result=P_THIS->GetSaveDataModeArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataInstanceArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameInstanceData>*)Z_Param__Result=P_THIS->GetSaveDataInstanceArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataLevelArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FLevelData>*)Z_Param__Result=P_THIS->GetSaveDataLevelArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataCharacterArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCharacterData>*)Z_Param__Result=P_THIS->GetSaveDataCharacterArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataActorArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FActorData>*)Z_Param__Result=P_THIS->GetSaveDataActorArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataObjectArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FObjectData>*)Z_Param__Result=P_THIS->GetSaveDataObjectArray(); \
		P_NATIVE_END; \
	}


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSaveInfo(); \
	friend struct Z_Construct_UClass_UGameSaveInfo_Statics; \
public: \
	DECLARE_CLASS(UGameSaveInfo, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSavePlugin"), NO_API) \
	DECLARE_SERIALIZER(UGameSaveInfo)


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUGameSaveInfo(); \
	friend struct Z_Construct_UClass_UGameSaveInfo_Statics; \
public: \
	DECLARE_CLASS(UGameSaveInfo, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSavePlugin"), NO_API) \
	DECLARE_SERIALIZER(UGameSaveInfo)


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSaveInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSaveInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSaveInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSaveInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSaveInfo(UGameSaveInfo&&); \
	NO_API UGameSaveInfo(const UGameSaveInfo&); \
public:


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSaveInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSaveInfo(UGameSaveInfo&&); \
	NO_API UGameSaveInfo(const UGameSaveInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSaveInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSaveInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSaveInfo)


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_PRIVATE_PROPERTY_OFFSET
#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_23_PROLOG
#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_PRIVATE_PROPERTY_OFFSET \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_RPC_WRAPPERS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_INCLASS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_PRIVATE_PROPERTY_OFFSET \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_INCLASS_NO_PURE_DECLS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESAVEPLUGIN_API UClass* StaticClass<class UGameSaveInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_GameSaveInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
