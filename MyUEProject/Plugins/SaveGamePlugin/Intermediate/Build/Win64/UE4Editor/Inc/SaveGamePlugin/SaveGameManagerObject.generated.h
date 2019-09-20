// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveGameManagerObject;
class USaveGameData;
class USaveGameDataValueBase;
#ifdef SAVEGAMEPLUGIN_SaveGameManagerObject_generated_h
#error "SaveGameManagerObject.generated.h already included, missing '#pragma once' in SaveGameManagerObject.h"
#endif
#define SAVEGAMEPLUGIN_SaveGameManagerObject_generated_h

#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSaveGameManagerEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGameManagerObject**)Z_Param__Result=USaveGameManagerObject::GetSaveGameManagerEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteGameData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteGameData(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSaveData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveSaveData(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroupSaveData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USaveGameData*>*)Z_Param__Result=P_THIS->GetGroupSaveData(Z_Param_DataGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGameDataValueBase**)Z_Param__Result=P_THIS->GetSaveDataValue(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataValueString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSaveDataValueString(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveDataValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataGroup); \
		P_GET_UBOOL(Z_Param_SetDataGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetSaveDataValue(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType),Z_Param_ValueString,Z_Param_DataGroup,Z_Param_SetDataGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSaveData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddSaveData(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType),Z_Param_ValueString,Z_Param_DataGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringToSaveDataMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StringToSaveDataMap(Z_Param_DataString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveDataMapToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->SaveDataMapToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGameData(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveGameData(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHasBegunPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHasBegunPlay(); \
		P_NATIVE_END; \
	}


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSaveGameManagerEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGameManagerObject**)Z_Param__Result=USaveGameManagerObject::GetSaveGameManagerEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteGameData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteGameData(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSaveData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveSaveData(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroupSaveData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<USaveGameData*>*)Z_Param__Result=P_THIS->GetGroupSaveData(Z_Param_DataGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USaveGameDataValueBase**)Z_Param__Result=P_THIS->GetSaveDataValue(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveDataValueString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSaveDataValueString(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSaveDataValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataGroup); \
		P_GET_UBOOL(Z_Param_SetDataGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetSaveDataValue(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType),Z_Param_ValueString,Z_Param_DataGroup,Z_Param_SetDataGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSaveData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DataType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ValueString); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddSaveData(Z_Param_DataName,ESaveGameDataType::Type(Z_Param_DataType),Z_Param_ValueString,Z_Param_DataGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringToSaveDataMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DataString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StringToSaveDataMap(Z_Param_DataString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveDataMapToString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->SaveDataMapToString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGameData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGameData(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGameData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SlotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveGameData(Z_Param_SlotName,Z_Param_UserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHasBegunPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHasBegunPlay(); \
		P_NATIVE_END; \
	}


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameManagerObject(); \
	friend struct Z_Construct_UClass_USaveGameManagerObject_Statics; \
public: \
	DECLARE_CLASS(USaveGameManagerObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(USaveGameManagerObject)


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameManagerObject(); \
	friend struct Z_Construct_UClass_USaveGameManagerObject_Statics; \
public: \
	DECLARE_CLASS(USaveGameManagerObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveGamePlugin"), NO_API) \
	DECLARE_SERIALIZER(USaveGameManagerObject)


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameManagerObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameManagerObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameManagerObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameManagerObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameManagerObject(USaveGameManagerObject&&); \
	NO_API USaveGameManagerObject(const USaveGameManagerObject&); \
public:


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameManagerObject(USaveGameManagerObject&&); \
	NO_API USaveGameManagerObject(const USaveGameManagerObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameManagerObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameManagerObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveGameManagerObject)


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_PRIVATE_PROPERTY_OFFSET
#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_19_PROLOG
#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_RPC_WRAPPERS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_INCLASS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_INCLASS_NO_PURE_DECLS \
	MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVEGAMEPLUGIN_API UClass* StaticClass<class USaveGameManagerObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyUEProject_Plugins_SaveGamePlugin_Source_SaveGamePlugin_Public_SaveGameManagerObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
