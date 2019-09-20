// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveGamePlugin/Public/SaveGameManagerObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameManagerObject() {}
// Cross Module References
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameManagerObject_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameManagerObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SaveGamePlugin();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_AddSaveData();
	SAVEGAMEPLUGIN_API UEnum* Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_ClearAll();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValueBase_NoRegister();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_LoadGameData();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_SaveGameData();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameInstance_NoRegister();
// End Cross Module References
	void USaveGameManagerObject::StaticRegisterNativesUSaveGameManagerObject()
	{
		UClass* Class = USaveGameManagerObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSaveData", &USaveGameManagerObject::execAddSaveData },
			{ "ClearAll", &USaveGameManagerObject::execClearAll },
			{ "DeleteGameData", &USaveGameManagerObject::execDeleteGameData },
			{ "GetGroupSaveData", &USaveGameManagerObject::execGetGroupSaveData },
			{ "GetHasBegunPlay", &USaveGameManagerObject::execGetHasBegunPlay },
			{ "GetSaveDataValue", &USaveGameManagerObject::execGetSaveDataValue },
			{ "GetSaveDataValueString", &USaveGameManagerObject::execGetSaveDataValueString },
			{ "GetSaveGameManagerEditor", &USaveGameManagerObject::execGetSaveGameManagerEditor },
			{ "LoadGameData", &USaveGameManagerObject::execLoadGameData },
			{ "RemoveSaveData", &USaveGameManagerObject::execRemoveSaveData },
			{ "SaveDataMapToString", &USaveGameManagerObject::execSaveDataMapToString },
			{ "SaveGameData", &USaveGameManagerObject::execSaveGameData },
			{ "SetSaveDataValue", &USaveGameManagerObject::execSetSaveDataValue },
			{ "StringToSaveDataMap", &USaveGameManagerObject::execStringToSaveDataMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics
	{
		struct SaveGameManagerObject_eventAddSaveData_Parms
		{
			FString DataName;
			TEnumAsByte<ESaveGameDataType::Type> DataType;
			FString ValueString;
			FString DataGroup;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataGroup;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValueString;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveGameManagerObject_eventAddSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveGameManagerObject_eventAddSaveData_Parms), &Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_DataGroup = { "DataGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventAddSaveData_Parms, DataGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_ValueString = { "ValueString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventAddSaveData_Parms, ValueString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventAddSaveData_Parms, DataType), Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventAddSaveData_Parms, DataName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_DataGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_ValueString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::NewProp_DataName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "CPP_Default_DataGroup", "Default" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "AddSaveData", sizeof(SaveGameManagerObject_eventAddSaveData_Parms), Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_AddSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_AddSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_ClearAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_ClearAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_ClearAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "ClearAll", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_ClearAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_ClearAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_ClearAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_ClearAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics
	{
		struct SaveGameManagerObject_eventDeleteGameData_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveGameManagerObject_eventDeleteGameData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveGameManagerObject_eventDeleteGameData_Parms), &Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventDeleteGameData_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventDeleteGameData_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "DeleteGameData", sizeof(SaveGameManagerObject_eventDeleteGameData_Parms), Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics
	{
		struct SaveGameManagerObject_eventGetGroupSaveData_Parms
		{
			FString DataGroup;
			TArray<USaveGameData*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventGetGroupSaveData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USaveGameData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::NewProp_DataGroup = { "DataGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventGetGroupSaveData_Parms, DataGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::NewProp_DataGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "GetGroupSaveData", sizeof(SaveGameManagerObject_eventGetGroupSaveData_Parms), Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics
	{
		struct SaveGameManagerObject_eventGetHasBegunPlay_Parms
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
	void Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveGameManagerObject_eventGetHasBegunPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveGameManagerObject_eventGetHasBegunPlay_Parms), &Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "GetHasBegunPlay", sizeof(SaveGameManagerObject_eventGetHasBegunPlay_Parms), Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics
	{
		struct SaveGameManagerObject_eventGetSaveDataValue_Parms
		{
			FString DataName;
			TEnumAsByte<ESaveGameDataType::Type> DataType;
			USaveGameDataValueBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventGetSaveDataValue_Parms, ReturnValue), Z_Construct_UClass_USaveGameDataValueBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventGetSaveDataValue_Parms, DataType), Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventGetSaveDataValue_Parms, DataName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::NewProp_DataName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "GetSaveDataValue", sizeof(SaveGameManagerObject_eventGetSaveDataValue_Parms), Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics
	{
		struct SaveGameManagerObject_eventGetSaveDataValueString_Parms
		{
			FString DataName;
			TEnumAsByte<ESaveGameDataType::Type> DataType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventGetSaveDataValueString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventGetSaveDataValueString_Parms, DataType), Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventGetSaveDataValueString_Parms, DataName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::NewProp_DataName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "GetSaveDataValueString", sizeof(SaveGameManagerObject_eventGetSaveDataValueString_Parms), Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics
	{
		struct SaveGameManagerObject_eventGetSaveGameManagerEditor_Parms
		{
			USaveGameManagerObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventGetSaveGameManagerEditor_Parms, ReturnValue), Z_Construct_UClass_USaveGameManagerObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "GetSaveGameManagerEditor", sizeof(SaveGameManagerObject_eventGetSaveGameManagerEditor_Parms), Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics
	{
		struct SaveGameManagerObject_eventLoadGameData_Parms
		{
			FString SlotName;
			int32 UserIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventLoadGameData_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_UserIndex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventLoadGameData_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "LoadGameData", sizeof(SaveGameManagerObject_eventLoadGameData_Parms), Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_LoadGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_LoadGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics
	{
		struct SaveGameManagerObject_eventRemoveSaveData_Parms
		{
			FString DataName;
			TEnumAsByte<ESaveGameDataType::Type> DataType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveGameManagerObject_eventRemoveSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveGameManagerObject_eventRemoveSaveData_Parms), &Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventRemoveSaveData_Parms, DataType), Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventRemoveSaveData_Parms, DataName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::NewProp_DataName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "RemoveSaveData", sizeof(SaveGameManagerObject_eventRemoveSaveData_Parms), Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics
	{
		struct SaveGameManagerObject_eventSaveDataMapToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventSaveDataMapToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "SaveDataMapToString", sizeof(SaveGameManagerObject_eventSaveDataMapToString_Parms), Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics
	{
		struct SaveGameManagerObject_eventSaveGameData_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveGameManagerObject_eventSaveGameData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveGameManagerObject_eventSaveGameData_Parms), &Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventSaveGameData_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_UserIndex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventSaveGameData_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::NewProp_SlotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "SaveGameData", sizeof(SaveGameManagerObject_eventSaveGameData_Parms), Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_SaveGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_SaveGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics
	{
		struct SaveGameManagerObject_eventSetSaveDataValue_Parms
		{
			FString DataName;
			TEnumAsByte<ESaveGameDataType::Type> DataType;
			FString ValueString;
			FString DataGroup;
			bool SetDataGroup;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_SetDataGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetDataGroup;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataGroup;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValueString;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveGameManagerObject_eventSetSaveDataValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveGameManagerObject_eventSetSaveDataValue_Parms), &Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_SetDataGroup_SetBit(void* Obj)
	{
		((SaveGameManagerObject_eventSetSaveDataValue_Parms*)Obj)->SetDataGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_SetDataGroup = { "SetDataGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveGameManagerObject_eventSetSaveDataValue_Parms), &Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_SetDataGroup_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_DataGroup = { "DataGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventSetSaveDataValue_Parms, DataGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_ValueString = { "ValueString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventSetSaveDataValue_Parms, ValueString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventSetSaveDataValue_Parms, DataType), Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventSetSaveDataValue_Parms, DataName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_SetDataGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_DataGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_ValueString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::NewProp_DataName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "CPP_Default_DataGroup", "Default" },
		{ "CPP_Default_SetDataGroup", "false" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "SetSaveDataValue", sizeof(SaveGameManagerObject_eventSetSaveDataValue_Parms), Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics
	{
		struct SaveGameManagerObject_eventStringToSaveDataMap_Parms
		{
			FString DataString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::NewProp_DataString = { "DataString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameManagerObject_eventStringToSaveDataMap_Parms, DataString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::NewProp_DataString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameManagerObject, nullptr, "StringToSaveDataMap", sizeof(SaveGameManagerObject_eventStringToSaveDataMap_Parms), Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveGameManagerObject_NoRegister()
	{
		return USaveGameManagerObject::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameManagerObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBegunPlay_MetaData[];
#endif
		static void NewProp_bBegunPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBegunPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedsToBeSaved_MetaData[];
#endif
		static void NewProp_bNeedsToBeSaved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedsToBeSaved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupSortNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupSortNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupSortNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurSaveGameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurSaveGameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SaveDataMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameManagerObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveGameManagerObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameManagerObject_AddSaveData, "AddSaveData" }, // 4290169931
		{ &Z_Construct_UFunction_USaveGameManagerObject_ClearAll, "ClearAll" }, // 3353562789
		{ &Z_Construct_UFunction_USaveGameManagerObject_DeleteGameData, "DeleteGameData" }, // 3475094992
		{ &Z_Construct_UFunction_USaveGameManagerObject_GetGroupSaveData, "GetGroupSaveData" }, // 3192455949
		{ &Z_Construct_UFunction_USaveGameManagerObject_GetHasBegunPlay, "GetHasBegunPlay" }, // 2287418182
		{ &Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValue, "GetSaveDataValue" }, // 3558049305
		{ &Z_Construct_UFunction_USaveGameManagerObject_GetSaveDataValueString, "GetSaveDataValueString" }, // 1880795632
		{ &Z_Construct_UFunction_USaveGameManagerObject_GetSaveGameManagerEditor, "GetSaveGameManagerEditor" }, // 4213739799
		{ &Z_Construct_UFunction_USaveGameManagerObject_LoadGameData, "LoadGameData" }, // 2533184946
		{ &Z_Construct_UFunction_USaveGameManagerObject_RemoveSaveData, "RemoveSaveData" }, // 873901063
		{ &Z_Construct_UFunction_USaveGameManagerObject_SaveDataMapToString, "SaveDataMapToString" }, // 3115677899
		{ &Z_Construct_UFunction_USaveGameManagerObject_SaveGameData, "SaveGameData" }, // 2432303746
		{ &Z_Construct_UFunction_USaveGameManagerObject_SetSaveDataValue, "SetSaveDataValue" }, // 1335973602
		{ &Z_Construct_UFunction_USaveGameManagerObject_StringToSaveDataMap, "StringToSaveDataMap" }, // 1368445245
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameManagerObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameManagerObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
		{ "ToolTip", "?????????\xd3\xa1????\xe6\xa1\xa2?\xde\xb8\xc4\xa3???\xd2\xaa??Load\xd2\xbb??" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bBegunPlay_MetaData[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	void Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bBegunPlay_SetBit(void* Obj)
	{
		((USaveGameManagerObject*)Obj)->bBegunPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bBegunPlay = { "bBegunPlay", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveGameManagerObject), &Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bBegunPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bBegunPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bBegunPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bNeedsToBeSaved_MetaData[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	void Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bNeedsToBeSaved_SetBit(void* Obj)
	{
		((USaveGameManagerObject*)Obj)->bNeedsToBeSaved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bNeedsToBeSaved = { "bNeedsToBeSaved", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveGameManagerObject), &Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bNeedsToBeSaved_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bNeedsToBeSaved_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bNeedsToBeSaved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_GroupSortNames_MetaData[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_GroupSortNames = { "GroupSortNames", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameManagerObject, GroupSortNames), METADATA_PARAMS(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_GroupSortNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_GroupSortNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_GroupSortNames_Inner = { "GroupSortNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_CurSaveGameInstance_MetaData[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_CurSaveGameInstance = { "CurSaveGameInstance", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameManagerObject, CurSaveGameInstance), Z_Construct_UClass_USaveGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_CurSaveGameInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_CurSaveGameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_SaveDataMap_MetaData[] = {
		{ "Category", "SaveGameManager" },
		{ "ModuleRelativePath", "Public/SaveGameManagerObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_SaveDataMap = { "SaveDataMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameManagerObject, SaveDataMap), METADATA_PARAMS(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_SaveDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_SaveDataMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_SaveDataMap_Key_KeyProp = { "SaveDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_SaveDataMap_ValueProp = { "SaveDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USaveGameData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameManagerObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bBegunPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_bNeedsToBeSaved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_GroupSortNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_GroupSortNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_CurSaveGameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_SaveDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_SaveDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameManagerObject_Statics::NewProp_SaveDataMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameManagerObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameManagerObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameManagerObject_Statics::ClassParams = {
		&USaveGameManagerObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveGameManagerObject_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USaveGameManagerObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameManagerObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameManagerObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameManagerObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameManagerObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameManagerObject, 3475796984);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameManagerObject>()
	{
		return USaveGameManagerObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameManagerObject(Z_Construct_UClass_USaveGameManagerObject, &USaveGameManagerObject::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameManagerObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameManagerObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
