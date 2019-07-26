// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSavePlugin/Public/Define/SaveDataStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataStruct() {}
// Cross Module References
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameStateData();
	UPackage* Z_Construct_UPackage__Script_GameSavePlugin();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FActorData();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameModeData();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameInstanceData();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FObjectData();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FLevelData();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	GAMESAVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBaseData();
	GAMESAVEPLUGIN_API UEnum* Z_Construct_UEnum_GameSavePlugin_DataState();
// End Cross Module References
class UScriptStruct* FGameStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESAVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FGameStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameStateData, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("GameStateData"), sizeof(FGameStateData), Get_Z_Construct_UScriptStruct_FGameStateData_Hash());
	}
	return Singleton;
}
template<> GAMESAVEPLUGIN_API UScriptStruct* StaticStruct<FGameStateData>()
{
	return FGameStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameStateData(FGameStateData::StaticStruct, TEXT("/Script/GameSavePlugin"), TEXT("GameStateData"), false, nullptr, nullptr);
static struct FScriptStruct_GameSavePlugin_StaticRegisterNativesFGameStateData
{
	FScriptStruct_GameSavePlugin_StaticRegisterNativesFGameStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameStateData")),new UScriptStruct::TCppStructOps<FGameStateData>);
	}
} ScriptStruct_GameSavePlugin_StaticRegisterNativesFGameStateData;
	struct Z_Construct_UScriptStruct_FGameStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameStateData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe6\xb8\xb8\xe6\x88\x8f\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe5\x8c\x96\xe4\xba\xa7\xe7\x94\x9f\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameStateData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
		Z_Construct_UScriptStruct_FActorData,
		&NewStructOps,
		"GameStateData",
		sizeof(FGameStateData),
		alignof(FGameStateData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameStateData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameStateData"), sizeof(FGameStateData), Get_Z_Construct_UScriptStruct_FGameStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameStateData_Hash() { return 17893579U; }
class UScriptStruct* FGameModeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESAVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FGameModeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameModeData, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("GameModeData"), sizeof(FGameModeData), Get_Z_Construct_UScriptStruct_FGameModeData_Hash());
	}
	return Singleton;
}
template<> GAMESAVEPLUGIN_API UScriptStruct* StaticStruct<FGameModeData>()
{
	return FGameModeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameModeData(FGameModeData::StaticStruct, TEXT("/Script/GameSavePlugin"), TEXT("GameModeData"), false, nullptr, nullptr);
static struct FScriptStruct_GameSavePlugin_StaticRegisterNativesFGameModeData
{
	FScriptStruct_GameSavePlugin_StaticRegisterNativesFGameModeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameModeData")),new UScriptStruct::TCppStructOps<FGameModeData>);
	}
} ScriptStruct_GameSavePlugin_StaticRegisterNativesFGameModeData;
	struct Z_Construct_UScriptStruct_FGameModeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe6\xa8\xa1\xe5\xbc\x8f\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe6\x8e\xa7\xe5\x88\xb6\xe6\xb8\xb8\xe6\x88\x8f\xe7\x9a\x84\xe6\xa8\xa1\xe5\xbc\x8f\xe4\xbf\xa1\xe6\x81\xaf" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameModeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameModeData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameModeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
		Z_Construct_UScriptStruct_FActorData,
		&NewStructOps,
		"GameModeData",
		sizeof(FGameModeData),
		alignof(FGameModeData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameModeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameModeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameModeData"), sizeof(FGameModeData), Get_Z_Construct_UScriptStruct_FGameModeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameModeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameModeData_Hash() { return 3590289123U; }
class UScriptStruct* FGameInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESAVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FGameInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameInstanceData, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("GameInstanceData"), sizeof(FGameInstanceData), Get_Z_Construct_UScriptStruct_FGameInstanceData_Hash());
	}
	return Singleton;
}
template<> GAMESAVEPLUGIN_API UScriptStruct* StaticStruct<FGameInstanceData>()
{
	return FGameInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameInstanceData(FGameInstanceData::StaticStruct, TEXT("/Script/GameSavePlugin"), TEXT("GameInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_GameSavePlugin_StaticRegisterNativesFGameInstanceData
{
	FScriptStruct_GameSavePlugin_StaticRegisterNativesFGameInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameInstanceData")),new UScriptStruct::TCppStructOps<FGameInstanceData>);
	}
} ScriptStruct_GameSavePlugin_StaticRegisterNativesFGameInstanceData;
	struct Z_Construct_UScriptStruct_FGameInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe7\x9a\x84\xe5\xae\x9e\xe4\xbe\x8b\xef\xbc\x8c\xe4\xb8\xbb\xe8\xa6\x81\xe6\x98\xaf\xe6\x8c\x81\xe4\xb9\x85\xe5\x8c\x96\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameInstanceData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
		Z_Construct_UScriptStruct_FObjectData,
		&NewStructOps,
		"GameInstanceData",
		sizeof(FGameInstanceData),
		alignof(FGameInstanceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameInstanceData"), sizeof(FGameInstanceData), Get_Z_Construct_UScriptStruct_FGameInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameInstanceData_Hash() { return 2482754278U; }
class UScriptStruct* FLevelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESAVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FLevelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelData, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("LevelData"), sizeof(FLevelData), Get_Z_Construct_UScriptStruct_FLevelData_Hash());
	}
	return Singleton;
}
template<> GAMESAVEPLUGIN_API UScriptStruct* StaticStruct<FLevelData>()
{
	return FLevelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelData(FLevelData::StaticStruct, TEXT("/Script/GameSavePlugin"), TEXT("LevelData"), false, nullptr, nullptr);
static struct FScriptStruct_GameSavePlugin_StaticRegisterNativesFLevelData
{
	FScriptStruct_GameSavePlugin_StaticRegisterNativesFLevelData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelData")),new UScriptStruct::TCppStructOps<FLevelData>);
	}
} ScriptStruct_GameSavePlugin_StaticRegisterNativesFLevelData;
	struct Z_Construct_UScriptStruct_FLevelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe5\x8d\xa1\xe4\xb8\xad\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe5\x8a\xa8\xe6\x80\x81\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x88\xe6\xa8\xa1\xe5\x9e\x8b\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x9c\xba\xe6\x99\xaf\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x89" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
		Z_Construct_UScriptStruct_FObjectData,
		&NewStructOps,
		"LevelData",
		sizeof(FLevelData),
		alignof(FLevelData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelData"), sizeof(FLevelData), Get_Z_Construct_UScriptStruct_FLevelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelData_Hash() { return 860430777U; }
class UScriptStruct* FCharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESAVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FCharacterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterData, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("CharacterData"), sizeof(FCharacterData), Get_Z_Construct_UScriptStruct_FCharacterData_Hash());
	}
	return Singleton;
}
template<> GAMESAVEPLUGIN_API UScriptStruct* StaticStruct<FCharacterData>()
{
	return FCharacterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterData(FCharacterData::StaticStruct, TEXT("/Script/GameSavePlugin"), TEXT("CharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_GameSavePlugin_StaticRegisterNativesFCharacterData
{
	FScriptStruct_GameSavePlugin_StaticRegisterNativesFCharacterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterData")),new UScriptStruct::TCppStructOps<FCharacterData>);
	}
} ScriptStruct_GameSavePlugin_StaticRegisterNativesFCharacterData;
	struct Z_Construct_UScriptStruct_FCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\xbb\xe8\xa7\x92\xe4\xba\xa7\xe7\x94\x9f\xe7\x9a\x84\xe7\x9b\xb8\xe5\x85\xb3\xe8\x87\xaa\xe8\xba\xab\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\xb1\x9e\xe6\x80\xa7\xe5\x8f\x98\xe5\x8c\x96\xe7\xad\x89\xe7\xad\x89" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
		Z_Construct_UScriptStruct_FActorData,
		&NewStructOps,
		"CharacterData",
		sizeof(FCharacterData),
		alignof(FCharacterData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterData"), sizeof(FCharacterData), Get_Z_Construct_UScriptStruct_FCharacterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterData_Hash() { return 479747330U; }
class UScriptStruct* FActorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESAVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FActorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorData, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("ActorData"), sizeof(FActorData), Get_Z_Construct_UScriptStruct_FActorData_Hash());
	}
	return Singleton;
}
template<> GAMESAVEPLUGIN_API UScriptStruct* StaticStruct<FActorData>()
{
	return FActorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorData(FActorData::StaticStruct, TEXT("/Script/GameSavePlugin"), TEXT("ActorData"), false, nullptr, nullptr);
static struct FScriptStruct_GameSavePlugin_StaticRegisterNativesFActorData
{
	FScriptStruct_GameSavePlugin_StaticRegisterNativesFActorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorData")),new UScriptStruct::TCppStructOps<FActorData>);
	}
} ScriptStruct_GameSavePlugin_StaticRegisterNativesFActorData;
	struct Z_Construct_UScriptStruct_FActorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideInGame_MetaData[];
#endif
		static void NewProp_bHideInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe9\x80\x9a\xe8\xbf\x87\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe7\x9a\x84""Actor\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorData_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "ActorData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorData_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorData, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorData_Statics::NewProp_AssetPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorData_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorData_Statics::NewProp_bHideInGame_MetaData[] = {
		{ "Category", "ActorData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe6\x96\xb9\xe4\xbd\x8d" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorData_Statics::NewProp_bHideInGame_SetBit(void* Obj)
	{
		((FActorData*)Obj)->bHideInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorData_Statics::NewProp_bHideInGame = { "bHideInGame", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActorData), &Z_Construct_UScriptStruct_FActorData_Statics::NewProp_bHideInGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorData_Statics::NewProp_bHideInGame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorData_Statics::NewProp_bHideInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorData_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "ActorData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorData_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorData, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorData_Statics::NewProp_WorldTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorData_Statics::NewProp_WorldTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorData_Statics::NewProp_AssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorData_Statics::NewProp_bHideInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorData_Statics::NewProp_WorldTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
		Z_Construct_UScriptStruct_FObjectData,
		&NewStructOps,
		"ActorData",
		sizeof(FActorData),
		alignof(FActorData),
		Z_Construct_UScriptStruct_FActorData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FActorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FActorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorData"), sizeof(FActorData), Get_Z_Construct_UScriptStruct_FActorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorData_Hash() { return 3531336256U; }
class UScriptStruct* FObjectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESAVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FObjectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectData, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("ObjectData"), sizeof(FObjectData), Get_Z_Construct_UScriptStruct_FObjectData_Hash());
	}
	return Singleton;
}
template<> GAMESAVEPLUGIN_API UScriptStruct* StaticStruct<FObjectData>()
{
	return FObjectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectData(FObjectData::StaticStruct, TEXT("/Script/GameSavePlugin"), TEXT("ObjectData"), false, nullptr, nullptr);
static struct FScriptStruct_GameSavePlugin_StaticRegisterNativesFObjectData
{
	FScriptStruct_GameSavePlugin_StaticRegisterNativesFObjectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ObjectData")),new UScriptStruct::TCppStructOps<FObjectData>);
	}
} ScriptStruct_GameSavePlugin_StaticRegisterNativesFObjectData;
	struct Z_Construct_UScriptStruct_FObjectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa6\x81\xe6\x98\xaf\xe5\xa4\x84\xe7\x90\x86\xe6\xb8\xb8\xe6\x88\x8f\xe8\xbf\x87\xe7\xa8\x8b\xe4\xbf\x9d\xe5\xad\x98\xe4\xb8\x80\xe4\xba\x9b\xe5\x9c\xa8\xe5\x86\x85\xe5\xad\x98\xe7\x9a\x84\xe6\xb8\xb8\xe6\x88\x8f\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
		Z_Construct_UScriptStruct_FBaseData,
		&NewStructOps,
		"ObjectData",
		sizeof(FObjectData),
		alignof(FObjectData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectData"), sizeof(FObjectData), Get_Z_Construct_UScriptStruct_FObjectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectData_Hash() { return 1018387118U; }
class UScriptStruct* FBaseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESAVEPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBaseData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseData, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("BaseData"), sizeof(FBaseData), Get_Z_Construct_UScriptStruct_FBaseData_Hash());
	}
	return Singleton;
}
template<> GAMESAVEPLUGIN_API UScriptStruct* StaticStruct<FBaseData>()
{
	return FBaseData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseData(FBaseData::StaticStruct, TEXT("/Script/GameSavePlugin"), TEXT("BaseData"), false, nullptr, nullptr);
static struct FScriptStruct_GameSavePlugin_StaticRegisterNativesFBaseData
{
	FScriptStruct_GameSavePlugin_StaticRegisterNativesFBaseData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseData")),new UScriptStruct::TCppStructOps<FBaseData>);
	}
} ScriptStruct_GameSavePlugin_StaticRegisterNativesFBaseData;
	struct Z_Construct_UScriptStruct_FBaseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Sate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Sate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe5\x9f\xba\xe6\x9c\xac\xe5\xaf\xb9\xe8\xb1\xa1\xe7\xb1\xbb\xe5\x9e\x8b\nUObject \xe3\x80\x81""Actor\n\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xb1\x9e\xe6\x80\xa7\xef\xbc\x9aTransform\xe3\x80\x81StaticMeshPath\xe3\x80\x81SkeletaMeshPath\xe3\x80\x81\xe5\x85\xb6\xe4\xbb\x96\xe5\xb1\x9e\xe6\x80\xa7\n //\xe5\x9f\xba\xe6\x9c\xac\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Sate_MetaData[] = {
		{ "Category", "BaseData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe5\x90\x8d\xe5\xad\x97" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Sate = { "Sate", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseData, Sate), Z_Construct_UEnum_GameSavePlugin_DataState, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Sate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Sate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Sate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BaseData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
		{ "ToolTip", "\xe7\x8b\xac\xe4\xb8\x80ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Category", "BaseData" },
		{ "ModuleRelativePath", "Public/Define/SaveDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseData, UniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_UniqueId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_UniqueId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Sate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Sate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseData_Statics::NewProp_UniqueId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSavePlugin,
		nullptr,
		&NewStructOps,
		"BaseData",
		sizeof(FBaseData),
		alignof(FBaseData),
		Z_Construct_UScriptStruct_FBaseData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseData"), sizeof(FBaseData), Get_Z_Construct_UScriptStruct_FBaseData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseData_Hash() { return 3169142177U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
