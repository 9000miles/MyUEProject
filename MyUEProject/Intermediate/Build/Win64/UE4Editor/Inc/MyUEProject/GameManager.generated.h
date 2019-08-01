// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UGameManager;
class AManagerBase;
#ifdef MYUEPROJECT_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define MYUEPROJECT_GameManager_generated_h

#define MyUEProject_Source_MyUEProject_Public_GameManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameManager**)Z_Param__Result=UGameManager::GetGameManager(Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveManager) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ManagerClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveManager(Z_Param_ManagerClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManager) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ManagerClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AManagerBase**)Z_Param__Result=P_THIS->GetManager(Z_Param_ManagerClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddManager) \
	{ \
		P_GET_OBJECT(AManagerBase,Z_Param_ManagerInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddManager(Z_Param_ManagerInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitManagerMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitManagerMap(); \
		P_NATIVE_END; \
	}


#define MyUEProject_Source_MyUEProject_Public_GameManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGameManager**)Z_Param__Result=UGameManager::GetGameManager(Z_Param_ContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveManager) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ManagerClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveManager(Z_Param_ManagerClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManager) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ManagerClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AManagerBase**)Z_Param__Result=P_THIS->GetManager(Z_Param_ManagerClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddManager) \
	{ \
		P_GET_OBJECT(AManagerBase,Z_Param_ManagerInstance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddManager(Z_Param_ManagerInstance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitManagerMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitManagerMap(); \
		P_NATIVE_END; \
	}


#define MyUEProject_Source_MyUEProject_Public_GameManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameManager(); \
	friend struct Z_Construct_UClass_UGameManager_Statics; \
public: \
	DECLARE_CLASS(UGameManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyUEProject"), NO_API) \
	DECLARE_SERIALIZER(UGameManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyUEProject_Source_MyUEProject_Public_GameManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameManager(); \
	friend struct Z_Construct_UClass_UGameManager_Statics; \
public: \
	DECLARE_CLASS(UGameManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyUEProject"), NO_API) \
	DECLARE_SERIALIZER(UGameManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyUEProject_Source_MyUEProject_Public_GameManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManager(UGameManager&&); \
	NO_API UGameManager(const UGameManager&); \
public:


#define MyUEProject_Source_MyUEProject_Public_GameManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManager(UGameManager&&); \
	NO_API UGameManager(const UGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameManager)


#define MyUEProject_Source_MyUEProject_Public_GameManager_h_15_PRIVATE_PROPERTY_OFFSET
#define MyUEProject_Source_MyUEProject_Public_GameManager_h_12_PROLOG
#define MyUEProject_Source_MyUEProject_Public_GameManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Source_MyUEProject_Public_GameManager_h_15_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Source_MyUEProject_Public_GameManager_h_15_RPC_WRAPPERS \
	MyUEProject_Source_MyUEProject_Public_GameManager_h_15_INCLASS \
	MyUEProject_Source_MyUEProject_Public_GameManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyUEProject_Source_MyUEProject_Public_GameManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyUEProject_Source_MyUEProject_Public_GameManager_h_15_PRIVATE_PROPERTY_OFFSET \
	MyUEProject_Source_MyUEProject_Public_GameManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyUEProject_Source_MyUEProject_Public_GameManager_h_15_INCLASS_NO_PURE_DECLS \
	MyUEProject_Source_MyUEProject_Public_GameManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYUEPROJECT_API UClass* StaticClass<class UGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyUEProject_Source_MyUEProject_Public_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
