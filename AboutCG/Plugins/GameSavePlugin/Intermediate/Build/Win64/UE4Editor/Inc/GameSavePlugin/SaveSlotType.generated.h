// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMESAVEPLUGIN_SaveSlotType_generated_h
#error "SaveSlotType.generated.h already included, missing '#pragma once' in SaveSlotType.h"
#endif
#define GAMESAVEPLUGIN_SaveSlotType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AboutCG_Plugins_GameSavePlugin_Source_GameSavePlugin_Public_Define_SaveSlotType_h


#define FOREACH_ENUM_DATASTATE(op) \
	op(DataState::Disabled) \
	op(DataState::Updating) \
	op(DataState::Last) \
	op(DataState::Old) 

enum class DataState : uint8;
template<> GAMESAVEPLUGIN_API UEnum* StaticEnum<DataState>();

#define FOREACH_ENUM_SAVESLOT_TYPE_DEFINE(op) \
	op(SAVESLOT_TYPE_DEFINE::OBJECT) \
	op(SAVESLOT_TYPE_DEFINE::ACTOR) \
	op(SAVESLOT_TYPE_DEFINE::CHARACTER) \
	op(SAVESLOT_TYPE_DEFINE::LEVEL) \
	op(SAVESLOT_TYPE_DEFINE::GAMEINSTANCE) \
	op(SAVESLOT_TYPE_DEFINE::GAMEMODE) \
	op(SAVESLOT_TYPE_DEFINE::GAMESTATE) 

enum class SAVESLOT_TYPE_DEFINE : uint8;
template<> GAMESAVEPLUGIN_API UEnum* StaticEnum<SAVESLOT_TYPE_DEFINE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
