// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVEGAMEPLUGIN_SaveGameData_generated_h
#error "SaveGameData.generated.h already included, missing '#pragma once' in SaveGameData.h"
#endif
#define SAVEGAMEPLUGIN_SaveGameData_generated_h

#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDataToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->DataToString(); \
		P_NATIVE_END; \
	}


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDataToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->DataToString(); \
		P_NATIVE_END; \
	}


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameData(); \
	friend struct Z_Construct_UClass_USaveGameData_Statics; \
public: \
	DECLARE_CLASS(USaveGameData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(USaveGameData)


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameData(); \
	friend struct Z_Construct_UClass_USaveGameData_Statics; \
public: \
	DECLARE_CLASS(USaveGameData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(USaveGameData)


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameData(USaveGameData&&); \
	NO_API USaveGameData(const USaveGameData&); \
public:


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameData(USaveGameData&&); \
	NO_API USaveGameData(const USaveGameData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveGameData)


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_PRIVATE_PROPERTY_OFFSET
#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_44_PROLOG
#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_RPC_WRAPPERS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_INCLASS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_INCLASS_NO_PURE_DECLS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEGAMEPLUGIN_API UClass* StaticClass<class USaveGameData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameData_h


#define FOREACH_ENUM_ESAVEGAMEDATASAVESTATETYPE(op) \
	op(ESaveGameDataSaveStateType::None) \
	op(ESaveGameDataSaveStateType::Saved) \
	op(ESaveGameDataSaveStateType::NotSaved) \
	op(ESaveGameDataSaveStateType::Selected) 
#define FOREACH_ENUM_ESAVEGAMEDATATYPE(op) \
	op(ESaveGameDataType::None) \
	op(ESaveGameDataType::Bool) \
	op(ESaveGameDataType::Byte) \
	op(ESaveGameDataType::Int32) \
	op(ESaveGameDataType::Float) \
	op(ESaveGameDataType::String) \
	op(ESaveGameDataType::Vector2) \
	op(ESaveGameDataType::Vector3) \
	op(ESaveGameDataType::Vector4) \
	op(ESaveGameDataType::DateTime) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
