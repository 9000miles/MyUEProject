// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSavePlugin/Public/Define/SaveSlotType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSlotType() {}
// Cross Module References
	GAMESAVEPLUGIN_API UEnum* Z_Construct_UEnum_GameSavePlugin_DataState();
	UPackage* Z_Construct_UPackage__Script_GameSavePlugin();
	GAMESAVEPLUGIN_API UEnum* Z_Construct_UEnum_GameSavePlugin_SAVESLOT_TYPE_DEFINE();
// End Cross Module References
	static UEnum* DataState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameSavePlugin_DataState, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("DataState"));
		}
		return Singleton;
	}
	template<> GAMESAVEPLUGIN_API UEnum* StaticEnum<DataState>()
	{
		return DataState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DataState(DataState_StaticEnum, TEXT("/Script/GameSavePlugin"), TEXT("DataState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameSavePlugin_DataState_Hash() { return 3051363008U; }
	UEnum* Z_Construct_UEnum_GameSavePlugin_DataState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DataState"), 0, Get_Z_Construct_UEnum_GameSavePlugin_DataState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DataState::Disabled", (int64)DataState::Disabled },
				{ "DataState::Updating", (int64)DataState::Updating },
				{ "DataState::Last", (int64)DataState::Last },
				{ "DataState::Old", (int64)DataState::Old },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Last.ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe4\xb8\xad" },
				{ "ModuleRelativePath", "Public/Define/SaveSlotType.h" },
				{ "Old.ToolTip", "\xe6\x9c\x80\xe6\x96\xb0" },
				{ "ToolTip", "\xe6\x95\xb0\xe6\x8d\xae\xe7\x8a\xb6\xe6\x80\x81" },
				{ "Updating.ToolTip", "\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe6\x9b\xb4\xe6\x96\xb0" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameSavePlugin,
				nullptr,
				"DataState",
				"DataState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* SAVESLOT_TYPE_DEFINE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameSavePlugin_SAVESLOT_TYPE_DEFINE, Z_Construct_UPackage__Script_GameSavePlugin(), TEXT("SAVESLOT_TYPE_DEFINE"));
		}
		return Singleton;
	}
	template<> GAMESAVEPLUGIN_API UEnum* StaticEnum<SAVESLOT_TYPE_DEFINE>()
	{
		return SAVESLOT_TYPE_DEFINE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SAVESLOT_TYPE_DEFINE(SAVESLOT_TYPE_DEFINE_StaticEnum, TEXT("/Script/GameSavePlugin"), TEXT("SAVESLOT_TYPE_DEFINE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameSavePlugin_SAVESLOT_TYPE_DEFINE_Hash() { return 2374101044U; }
	UEnum* Z_Construct_UEnum_GameSavePlugin_SAVESLOT_TYPE_DEFINE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameSavePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SAVESLOT_TYPE_DEFINE"), 0, Get_Z_Construct_UEnum_GameSavePlugin_SAVESLOT_TYPE_DEFINE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SAVESLOT_TYPE_DEFINE::OBJECT", (int64)SAVESLOT_TYPE_DEFINE::OBJECT },
				{ "SAVESLOT_TYPE_DEFINE::ACTOR", (int64)SAVESLOT_TYPE_DEFINE::ACTOR },
				{ "SAVESLOT_TYPE_DEFINE::CHARACTER", (int64)SAVESLOT_TYPE_DEFINE::CHARACTER },
				{ "SAVESLOT_TYPE_DEFINE::LEVEL", (int64)SAVESLOT_TYPE_DEFINE::LEVEL },
				{ "SAVESLOT_TYPE_DEFINE::GAMEINSTANCE", (int64)SAVESLOT_TYPE_DEFINE::GAMEINSTANCE },
				{ "SAVESLOT_TYPE_DEFINE::GAMEMODE", (int64)SAVESLOT_TYPE_DEFINE::GAMEMODE },
				{ "SAVESLOT_TYPE_DEFINE::GAMESTATE", (int64)SAVESLOT_TYPE_DEFINE::GAMESTATE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Define/SaveSlotType.h" },
				{ "ToolTip", "UENUM\xef\xbc\x88\xe5\xaf\xb9\xe5\xba\x94\xe4\xba\x8b\xe4\xbb\xb6\xe6\x9e\x9a\xe4\xb8\xbe\xe5\xae\x9a\xe4\xb9\x89\xef\xbc\x89" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameSavePlugin,
				nullptr,
				"SAVESLOT_TYPE_DEFINE",
				"SAVESLOT_TYPE_DEFINE",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
