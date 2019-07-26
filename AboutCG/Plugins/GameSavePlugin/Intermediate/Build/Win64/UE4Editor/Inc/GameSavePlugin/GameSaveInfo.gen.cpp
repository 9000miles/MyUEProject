// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSavePlugin/Public/GameSaveInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSaveInfo() {}
// Cross Module References
	GAMESAVEPLUGIN_API UClass* Z_Construct_UClass_UGameSaveInfo_NoRegister();
	GAMESAVEPLUGIN_API UClass* Z_Construct_UClass_UGameSaveInfo();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_GameSavePlugin();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActorData();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameInstanceData();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLevelData();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameModeData();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FObjectData();
	GAMESAVEPLUGIN_API UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameStateData();
// End Cross Module References
	void UGameSaveInfo::StaticRegisterNativesUGameSaveInfo()
	{
		UClass* Class = UGameSaveInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSaveDataActorArray", &UGameSaveInfo::execGetSaveDataActorArray },
			{ "GetSaveDataCharacterArray", &UGameSaveInfo::execGetSaveDataCharacterArray },
			{ "GetSaveDataInstanceArray", &UGameSaveInfo::execGetSaveDataInstanceArray },
			{ "GetSaveDataLevelArray", &UGameSaveInfo::execGetSaveDataLevelArray },
			{ "GetSaveDataModeArray", &UGameSaveInfo::execGetSaveDataModeArray },
			{ "GetSaveDataObjectArray", &UGameSaveInfo::execGetSaveDataObjectArray },
			{ "GetSaveDataStateArray", &UGameSaveInfo::execGetSaveDataStateArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics
	{
		struct GameSaveInfo_eventGetSaveDataActorArray_Parms
		{
			TArray<FActorData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSaveInfo_eventGetSaveDataActorArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveInfo, nullptr, "GetSaveDataActorArray", sizeof(GameSaveInfo_eventGetSaveDataActorArray_Parms), Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics
	{
		struct GameSaveInfo_eventGetSaveDataCharacterArray_Parms
		{
			TArray<FCharacterData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSaveInfo_eventGetSaveDataCharacterArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveInfo, nullptr, "GetSaveDataCharacterArray", sizeof(GameSaveInfo_eventGetSaveDataCharacterArray_Parms), Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics
	{
		struct GameSaveInfo_eventGetSaveDataInstanceArray_Parms
		{
			TArray<FGameInstanceData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSaveInfo_eventGetSaveDataInstanceArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameInstanceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveInfo, nullptr, "GetSaveDataInstanceArray", sizeof(GameSaveInfo_eventGetSaveDataInstanceArray_Parms), Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics
	{
		struct GameSaveInfo_eventGetSaveDataLevelArray_Parms
		{
			TArray<FLevelData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSaveInfo_eventGetSaveDataLevelArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveInfo, nullptr, "GetSaveDataLevelArray", sizeof(GameSaveInfo_eventGetSaveDataLevelArray_Parms), Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics
	{
		struct GameSaveInfo_eventGetSaveDataModeArray_Parms
		{
			TArray<FGameModeData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSaveInfo_eventGetSaveDataModeArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameModeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveInfo, nullptr, "GetSaveDataModeArray", sizeof(GameSaveInfo_eventGetSaveDataModeArray_Parms), Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics
	{
		struct GameSaveInfo_eventGetSaveDataObjectArray_Parms
		{
			TArray<FObjectData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSaveInfo_eventGetSaveDataObjectArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FObjectData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveInfo, nullptr, "GetSaveDataObjectArray", sizeof(GameSaveInfo_eventGetSaveDataObjectArray_Parms), Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics
	{
		struct GameSaveInfo_eventGetSaveDataStateArray_Parms
		{
			TArray<FGameStateData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSaveInfo_eventGetSaveDataStateArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameStateData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSaveInfo, nullptr, "GetSaveDataStateArray", sizeof(GameSaveInfo_eventGetSaveDataStateArray_Parms), Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSaveInfo_NoRegister()
	{
		return UGameSaveInfo::StaticClass();
	}
	struct Z_Construct_UClass_UGameSaveInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameStateDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GameStateDataMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameStateDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameStateDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GameModeDataMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameModeDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameModeDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstanceDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GameInstanceDataMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameInstanceDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameInstanceDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LevelDataMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CharacterDataMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActorsDataMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActorsDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorsDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectsDataMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ObjectsDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectsDataMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSaveInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSaveInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSaveInfo_GetSaveDataActorArray, "GetSaveDataActorArray" }, // 1778820127
		{ &Z_Construct_UFunction_UGameSaveInfo_GetSaveDataCharacterArray, "GetSaveDataCharacterArray" }, // 3626476406
		{ &Z_Construct_UFunction_UGameSaveInfo_GetSaveDataInstanceArray, "GetSaveDataInstanceArray" }, // 3178968619
		{ &Z_Construct_UFunction_UGameSaveInfo_GetSaveDataLevelArray, "GetSaveDataLevelArray" }, // 1781851586
		{ &Z_Construct_UFunction_UGameSaveInfo_GetSaveDataModeArray, "GetSaveDataModeArray" }, // 2125775092
		{ &Z_Construct_UFunction_UGameSaveInfo_GetSaveDataObjectArray, "GetSaveDataObjectArray" }, // 1946692044
		{ &Z_Construct_UFunction_UGameSaveInfo_GetSaveDataStateArray, "GetSaveDataStateArray" }, // 3433152616
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameSaveInfo.h" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae\xe5\xaf\xb9\xe8\xb1\xa1\xe7\xb1\xbb\xef\xbc\x8c \xe7\x9b\xae\xe5\x89\x8d\xe6\x89\x80\xe6\x9c\x89\xe6\x93\x8d\xe4\xbd\x9c\xe6\x8e\xa5\xe5\x8f\xa3\xe9\x83\xbd\xe5\xb7\xb2\xe7\xbb\x8f\xe9\xbb\x98\xe8\xae\xa4\xe5\x9c\xa8UGameplayStatics\n\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\xe5\x9e\x8b\xe5\xae\x9a\xe4\xb9\x89\xef\xbc\x9a\xe5\x85\xb3\xe5\x8d\xa1\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe6\x80\xaa\xe7\x89\xa9\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\xa4\xa9\xe6\xb0\x94\xe6\x95\xb0\xe6\x8d\xae\n\xe6\x95\xb0\xe6\x8d\xae\xe5\x85\xb3\xe8\x81\x94\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x88\xe6\xb8\xb8\xe6\x88\x8f\xe7\xbb\x93\xe6\x9d\x9f\xe4\xb9\x8b\xe5\x90\x8e\xef\xbc\x8c\xe6\x89\x80\xe6\x9c\x89\xe5\x86\x85\xe5\xad\x98\xe9\x87\x8a\xe6\x94\xbe\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\xa0\xb9\xe6\x8d\xae\xe4\xbf\x9d\xe5\xad\x98\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe5\x8e\xbb\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x90\x84\xe4\xb8\xaa\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x89\n\xe6\xaf\x8f\xe4\xb8\xaa\xe4\xbf\x9d\xe5\xad\x98\xe6\x96\xb0\xe8\xbf\x9b\xe5\xba\xa6\xe9\x83\xbd\xe5\xaf\xb9\xe5\xba\x94\xe5\xbf\x85\xe9\xa1\xbb\xe6\x95\xb0\xe6\x8d\xae\xe6\x96\x87\xe4\xbb\xb6\xef\xbc\x8c\xe9\x87\x8d\xe7\xbd\xae\xe5\x85\xb3\xe5\x8d\xa1\xe9\x99\xa4\xe5\xa4\x96\xef\xbc\x81\xef\xbc\x88""1.save | 2.sav | 3.sav | .....\xef\xbc\x89\n\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a\n                        1.\xe5\x85\xb3\xe5\x8d\xa1\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x9a\xe5\xbd\x93\xe5\x89\x8d\xe5\x85\xb3\xe5\x8d\xa1\xef\xbc\x8c\xe5\x85\xb3\xe5\x8d\xa1\xe8\xbf\x9b\xe5\xba\xa6\xef\xbc\x8c\xe5\x85\xb3\xe5\x8d\xa1\xe9\x85\x8d\xe7\xbd\xae\n                        2.\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x9a\xe8\xa7\x92\xe8\x89\xb2\xe7\xad\x89\xe7\xba\xa7\xef\xbc\x8c\xe8\xa7\x92\xe8\x89\xb2\xe8\xa1\x80\xe9\x87\x8f\n                        3.\xe6\x80\xaa\xe7\x89\xa9\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x9a\xe5\xbd\x93\xe5\x89\x8d\xe6\x80\xaa\xe7\x89\xa9\xe7\xba\xa7\xe5\x88\xab\xef\xbc\x8c\xe6\x80\xaa\xe7\x89\xa9\xe8\xa1\x80\xe9\x87\x8f\xef\xbc\x8c\xe6\x80\xaa\xe7\x89\xa9\xe8\xbf\x9b\xe5\xba\xa6\n                        4.\xe8\xa3\x85\xe5\xa4\x87\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x9a\xe8\xa7\x92\xe8\x89\xb2\xe8\xa3\x85\xe5\xa4\x87\xef\xbc\x8c\xe8\xa3\x85\xe5\xa4\x87\xe6\x8e\x89\xe8\x90\xbd\xe8\xbf\x9b\xe5\xba\xa6\n                        5.\xe7\x8e\xaf\xe5\xa2\x83\xe5\xa4\xa9\xe6\xb0\x94\xef\xbc\x9a\xe7\x8e\xaf\xe5\xa2\x83\xe5\xb8\x83\xe5\xb1\x80\xef\xbc\x8c\xe7\x8e\xaf\xe5\xa2\x83\xe8\xbf\x9b\xe5\xba\xa6\n //SlotName\xe4\xb8\x8d\xe5\x85\x81\xe8\xae\xb8\xe9\x87\x8d\xe5\x90\x8d\xef\xbc\x8c\xe5\x94\xaf\xe4\xb8\x80\xe5\xad\x98\xe5\x9c\xa8\xef\xbc\x8c\xe8\xa6\x81\xe4\xb8\x8d\xe7\x84\xb6\xe4\xbc\x9a\xe7\x9b\xb4\xe6\x8e\xa5\xe9\x87\x8d\xe7\xbd\xae\xe5\xaf\xb9\xe8\xb1\xa1\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe4\xbd\x86\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x88\x9b\xe5\xbb\xba\xe8\xbf\x87\xe4\xb8\xaaSlot\xe5\xaf\xb9\xe5\xba\x94\xe5\x9c\xa8\xe6\x9c\xac\xe5\x9c\xb0/Saved/SaveGames/SlotNameXX.sav" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameStateDataMap_MetaData[] = {
		{ "Category", "GameSaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe7\x8a\xb6\xe6\x80\x81\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameStateDataMap = { "GameStateDataMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSaveInfo, GameStateDataMap), METADATA_PARAMS(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameStateDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameStateDataMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameStateDataMap_Key_KeyProp = { "GameStateDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameStateDataMap_ValueProp = { "GameStateDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameStateData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameModeDataMap_MetaData[] = {
		{ "Category", "GameSaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameModeDataMap = { "GameModeDataMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSaveInfo, GameModeDataMap), METADATA_PARAMS(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameModeDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameModeDataMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameModeDataMap_Key_KeyProp = { "GameModeDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameModeDataMap_ValueProp = { "GameModeDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameModeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameInstanceDataMap_MetaData[] = {
		{ "Category", "GameSaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe5\xae\x9e\xe4\xbe\x8b\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameInstanceDataMap = { "GameInstanceDataMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSaveInfo, GameInstanceDataMap), METADATA_PARAMS(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameInstanceDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameInstanceDataMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameInstanceDataMap_Key_KeyProp = { "GameInstanceDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameInstanceDataMap_ValueProp = { "GameInstanceDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGameInstanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_LevelDataMap_MetaData[] = {
		{ "Category", "GameSaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe5\x8d\xa1\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_LevelDataMap = { "LevelDataMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSaveInfo, LevelDataMap), METADATA_PARAMS(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_LevelDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_LevelDataMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_LevelDataMap_Key_KeyProp = { "LevelDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_LevelDataMap_ValueProp = { "LevelDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLevelData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_CharacterDataMap_MetaData[] = {
		{ "Category", "GameSaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa7\x92\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_CharacterDataMap = { "CharacterDataMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSaveInfo, CharacterDataMap), METADATA_PARAMS(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_CharacterDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_CharacterDataMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_CharacterDataMap_Key_KeyProp = { "CharacterDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_CharacterDataMap_ValueProp = { "CharacterDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ActorsDataMap_MetaData[] = {
		{ "Category", "GameSaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe5\x8d\xa1\xe5\xae\x9e\xe4\xbe\x8b\xe5\xaf\xb9\xe8\xb1\xa1\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ActorsDataMap = { "ActorsDataMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSaveInfo, ActorsDataMap), METADATA_PARAMS(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ActorsDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ActorsDataMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ActorsDataMap_Key_KeyProp = { "ActorsDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ActorsDataMap_ValueProp = { "ActorsDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FActorData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ObjectsDataMap_MetaData[] = {
		{ "Category", "GameSaveInfo" },
		{ "ModuleRelativePath", "Public/GameSaveInfo.h" },
		{ "ToolTip", "\xe5\x86\x85\xe5\xad\x98\xe5\xaf\xb9\xe8\xb1\xa1\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ObjectsDataMap = { "ObjectsDataMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSaveInfo, ObjectsDataMap), METADATA_PARAMS(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ObjectsDataMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ObjectsDataMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ObjectsDataMap_Key_KeyProp = { "ObjectsDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ObjectsDataMap_ValueProp = { "ObjectsDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FObjectData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSaveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameStateDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameStateDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameStateDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameModeDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameModeDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameModeDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameInstanceDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameInstanceDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_GameInstanceDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_LevelDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_LevelDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_LevelDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_CharacterDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_CharacterDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_CharacterDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ActorsDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ActorsDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ActorsDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ObjectsDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ObjectsDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSaveInfo_Statics::NewProp_ObjectsDataMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSaveInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSaveInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSaveInfo_Statics::ClassParams = {
		&UGameSaveInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSaveInfo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGameSaveInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSaveInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameSaveInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSaveInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSaveInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSaveInfo, 1845412306);
	template<> GAMESAVEPLUGIN_API UClass* StaticClass<UGameSaveInfo>()
	{
		return UGameSaveInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSaveInfo(Z_Construct_UClass_UGameSaveInfo, &UGameSaveInfo::StaticClass, TEXT("/Script/GameSavePlugin"), TEXT("UGameSaveInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSaveInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
