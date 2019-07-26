// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSavePlugin/Public/Define/SaveDataManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataManager() {}
// Cross Module References
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameSavePlugin();
	GAMESAVEPLUGIN_API UEnum* Z_Construct_UEnum_GameSavePlugin_SAVESLOT_TYPE_DEFINE();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBaseData();
	GAMESAVEPLUGIN_API UClass* Z_Construct_UClass_USaveDataManager_NoRegister();
	GAMESAVEPLUGIN_API UClass* Z_Construct_UClass_USaveDataManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot();
	GAMESAVEPLUGIN_API UClass* Z_Construct_UClass_UGameSaveInfo_NoRegister();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_USaveDataManager_SaveGameSlot();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics
	{
		struct _Script_GameSavePlugin_eventUpdateSaveDataHandle_Parms
		{
			int32 Slot;
			FBaseData DataStruct;
			SAVESLOT_TYPE_DEFINE DataType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataStruct;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameSavePlugin_eventUpdateSaveDataHandle_Parms, DataType), Z_Construct_UEnum_GameSavePlugin_SAVESLOT_TYPE_DEFINE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::NewProp_DataStruct = { "DataStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameSavePlugin_eventUpdateSaveDataHandle_Parms, DataStruct), Z_Construct_UScriptStruct_FBaseData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GameSavePlugin_eventUpdateSaveDataHandle_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::NewProp_DataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataManager.h" },
		{ "ToolTip", "Slot : \xe6\xa7\xbd\nFBaseData : \xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe5\x85\xb7\xe4\xbd\x93\xe6\x95\xb0\xe6\x8d\xae\nFString : \xe6\x9b\xb4\xe6\x96\xb0\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameSavePlugin, nullptr, "UpdateSaveDataHandle__DelegateSignature", sizeof(_Script_GameSavePlugin_eventUpdateSaveDataHandle_Parms), Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USaveDataManager::StaticRegisterNativesUSaveDataManager()
	{
		UClass* Class = USaveDataManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckSaveGameSlotExist", &USaveDataManager::execCheckSaveGameSlotExist },
			{ "ExecuteGetSaveDataAsSlot", &USaveDataManager::execExecuteGetSaveDataAsSlot },
			{ "LoadGameDateFromSlot", &USaveDataManager::execLoadGameDateFromSlot },
			{ "SaveGameSlot", &USaveDataManager::execSaveGameSlot },
			{ "UpdataSaveAsSlot", &USaveDataManager::execUpdataSaveAsSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics
	{
		struct SaveDataManager_eventCheckSaveGameSlotExist_Parms
		{
			FString SlotName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataManager_eventCheckSaveGameSlotExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataManager_eventCheckSaveGameSlotExist_Parms), &Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventCheckSaveGameSlotExist_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataManager, nullptr, "CheckSaveGameSlotExist", sizeof(SaveDataManager_eventCheckSaveGameSlotExist_Parms), Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics
	{
		struct SaveDataManager_eventExecuteGetSaveDataAsSlot_Parms
		{
			int32 Slot;
			int32 DataId;
			SAVESLOT_TYPE_DEFINE DataType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventExecuteGetSaveDataAsSlot_Parms, DataType), Z_Construct_UEnum_GameSavePlugin_SAVESLOT_TYPE_DEFINE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::NewProp_DataId = { "DataId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventExecuteGetSaveDataAsSlot_Parms, DataId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventExecuteGetSaveDataAsSlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::NewProp_DataId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataManager.h" },
		{ "ToolTip", "Method:    ExecuteGetSaveDataAsSlot\nParameter: FString Slot                                         \xe7\xa1\xae\xe5\xae\x9a\xe6\x98\xaf\xe5\x93\xaa\xe4\xb8\xaa\xe5\xad\x98\xe6\xa1\xa3\nParameter: int32 DataId                                        \xe7\xa1\xae\xe5\xae\x9a\xe6\x98\xaf\xe5\xad\x98\xe6\xa1\xa3\xe9\x87\x8c\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xad\xe7\x9a\x84\xe5\x85\xb7\xe4\xbd\x93\xe6\x95\xb0\xe6\x8d\xae\nParameter: SAVESLOT_TYPE_DEFINE DataType \xe7\xa1\xae\xe5\xae\x9a\xe5\xad\x98\xe6\xa1\xa3\xe4\xb8\xad\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataManager, nullptr, "ExecuteGetSaveDataAsSlot", sizeof(SaveDataManager_eventExecuteGetSaveDataAsSlot_Parms), Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics
	{
		struct SaveDataManager_eventLoadGameDateFromSlot_Parms
		{
			FString SlotName;
			UGameSaveInfo* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventLoadGameDateFromSlot_Parms, ReturnValue), Z_Construct_UClass_UGameSaveInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventLoadGameDateFromSlot_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataManager, nullptr, "LoadGameDateFromSlot", sizeof(SaveDataManager_eventLoadGameDateFromSlot_Parms), Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics
	{
		struct SaveDataManager_eventSaveGameSlot_Parms
		{
			int32 SlotIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataManager_eventSaveGameSlot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataManager_eventSaveGameSlot_Parms), &Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventSaveGameSlot_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveData" },
		{ "CPP_Default_SlotIndex", "0" },
		{ "ModuleRelativePath", "Public/Define/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataManager, nullptr, "SaveGameSlot", sizeof(SaveDataManager_eventSaveGameSlot_Parms), Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataManager_SaveGameSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataManager_SaveGameSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics
	{
		struct SaveDataManager_eventUpdataSaveAsSlot_Parms
		{
			int32 Slot;
			FBaseData DataStruct;
			SAVESLOT_TYPE_DEFINE DataType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataStruct;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventUpdataSaveAsSlot_Parms, DataType), Z_Construct_UEnum_GameSavePlugin_SAVESLOT_TYPE_DEFINE, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::NewProp_DataStruct = { "DataStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventUpdataSaveAsSlot_Parms, DataStruct), Z_Construct_UScriptStruct_FBaseData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventUpdataSaveAsSlot_Parms, Slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::NewProp_DataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataManager, nullptr, "UpdataSaveAsSlot", sizeof(SaveDataManager_eventUpdataSaveAsSlot_Parms), Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataManager_NoRegister()
	{
		return USaveDataManager::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateSaveDataHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UpdateSaveDataHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataManager_CheckSaveGameSlotExist, "CheckSaveGameSlotExist" }, // 2548223257
		{ &Z_Construct_UFunction_USaveDataManager_ExecuteGetSaveDataAsSlot, "ExecuteGetSaveDataAsSlot" }, // 3115704891
		{ &Z_Construct_UFunction_USaveDataManager_LoadGameDateFromSlot, "LoadGameDateFromSlot" }, // 3717323080
		{ &Z_Construct_UFunction_USaveDataManager_SaveGameSlot, "SaveGameSlot" }, // 3843816214
		{ &Z_Construct_UFunction_USaveDataManager_UpdataSaveAsSlot, "UpdataSaveAsSlot" }, // 1344390802
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Define/SaveDataManager.h" },
		{ "ModuleRelativePath", "Public/Define/SaveDataManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataManager_Statics::NewProp_UpdateSaveDataHandle_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataManager.h" },
		{ "ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveDataManager_Statics::NewProp_UpdateSaveDataHandle = { "UpdateSaveDataHandle", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataManager, UpdateSaveDataHandle), Z_Construct_UDelegateFunction_GameSavePlugin_UpdateSaveDataHandle__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveDataManager_Statics::NewProp_UpdateSaveDataHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveDataManager_Statics::NewProp_UpdateSaveDataHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataManager_Statics::NewProp_UpdateSaveDataHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataManager_Statics::ClassParams = {
		&USaveDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveDataManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USaveDataManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveDataManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataManager, 1492576176);
	template<> GAMESAVEPLUGIN_API UClass* StaticClass<USaveDataManager>()
	{
		return USaveDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataManager(Z_Construct_UClass_USaveDataManager, &USaveDataManager::StaticClass, TEXT("/Script/GameSavePlugin"), TEXT("USaveDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
