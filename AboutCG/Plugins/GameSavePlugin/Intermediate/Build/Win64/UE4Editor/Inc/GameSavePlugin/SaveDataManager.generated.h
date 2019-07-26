// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBaseData;
enum class SAVESLOT_TYPE_DEFINE : uint8;
class UGameSaveInfo;
#ifdef GAMESAVEPLUGIN_SaveDataManager_generated_h
#error "SaveDataManager.generated.h already included, missing '#pragma once' in SaveDataManager.h"
#endif
#define GAMESAVEPLUGIN_SaveDataManager_generated_h

#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_22_DELEGATE \
struct _Script_GameSavePlugin_eventUpdateSaveDataHandle_Parms \
{ \
	int32 Slot; \
	FBaseData DataStruct; \
	SAVESLOT_TYPE_DEFINE DataType; \
}; \
static inline void FUpdateSaveDataHandle_DelegateWrapper(const FMulticastScriptDelegate& UpdateSaveDataHandle, int32 Slot, FBaseData DataStruct, SAVESLOT_TYPE_DEFINE DataType) \
{ \
	_Script_GameSavePlugin_eventUpdateSaveDataHandle_Parms Parms; \
	Parms.Slot=Slot; \
	Parms.DataStruct=DataStruct; \
	Parms.DataType=DataType; \
	UpdateSaveDataHandle.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdataSaveAsSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_GET_STRUCT(FBaseData,Z_Param_DataStruct); \
		P_GET_ENUM(SAVESLOT_TYPE_DEFINE,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdataSaveAsSlot(Z_Param_Slot,Z_Param_DataStruct,SAVESLOT_TYPE_DEFINE(Z_Param_DataType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameDateFromSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSaveInfo**)Z_Param__Result=P_THIS->LoadGameDateFromSlot(Z_Param_SlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckSaveGameSlotExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckSaveGameSlotExist(Z_Param_SlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveGameSlot(Z_Param_SlotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteGetSaveDataAsSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DataId); \
		P_GET_ENUM(SAVESLOT_TYPE_DEFINE,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteGetSaveDataAsSlot(Z_Param_Slot,Z_Param_DataId,SAVESLOT_TYPE_DEFINE(Z_Param_DataType)); \
		P_NATIVE_END; \
	}


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdataSaveAsSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_GET_STRUCT(FBaseData,Z_Param_DataStruct); \
		P_GET_ENUM(SAVESLOT_TYPE_DEFINE,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdataSaveAsSlot(Z_Param_Slot,Z_Param_DataStruct,SAVESLOT_TYPE_DEFINE(Z_Param_DataType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameDateFromSlot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameSaveInfo**)Z_Param__Result=P_THIS->LoadGameDateFromSlot(Z_Param_SlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckSaveGameSlotExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckSaveGameSlotExist(Z_Param_SlotName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SlotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveGameSlot(Z_Param_SlotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteGetSaveDataAsSlot) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DataId); \
		P_GET_ENUM(SAVESLOT_TYPE_DEFINE,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteGetSaveDataAsSlot(Z_Param_Slot,Z_Param_DataId,SAVESLOT_TYPE_DEFINE(Z_Param_DataType)); \
		P_NATIVE_END; \
	}


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataManager(); \
	friend struct Z_Construct_UClass_USaveDataManager_Statics; \
public: \
	DECLARE_CLASS(USaveDataManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSavePlugin"), NO_API) \
	DECLARE_SERIALIZER(USaveDataManager)


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataManager(); \
	friend struct Z_Construct_UClass_USaveDataManager_Statics; \
public: \
	DECLARE_CLASS(USaveDataManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSavePlugin"), NO_API) \
	DECLARE_SERIALIZER(USaveDataManager)


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataManager(USaveDataManager&&); \
	NO_API USaveDataManager(const USaveDataManager&); \
public:


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataManager(USaveDataManager&&); \
	NO_API USaveDataManager(const USaveDataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataManager)


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_PRIVATE_PROPERTY_OFFSET
#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_24_PROLOG
#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_PRIVATE_PROPERTY_OFFSET \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_RPC_WRAPPERS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_INCLASS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_PRIVATE_PROPERTY_OFFSET \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_INCLASS_NO_PURE_DECLS \
	AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESAVEPLUGIN_API UClass* StaticClass<class USaveDataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveDataManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
