// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyUEProject/Public/GameManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManager() {}
// Cross Module References
	MYUEPROJECT_API UClass* Z_Construct_UClass_UGameManager_NoRegister();
	MYUEPROJECT_API UClass* Z_Construct_UClass_UGameManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_MyUEProject();
	MYUEPROJECT_API UFunction* Z_Construct_UFunction_UGameManager_AddManager();
	MYUEPROJECT_API UFunction* Z_Construct_UFunction_UGameManager_GetGameManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MYUEPROJECT_API UFunction* Z_Construct_UFunction_UGameManager_RemoveAll();
	MYUEPROJECT_API UFunction* Z_Construct_UFunction_UGameManager_RemoveManager();
	MYUEPROJECT_API UFunction* Z_Construct_UFunction_UGameManager_TickManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UGameManager::StaticRegisterNativesUGameManager()
	{
		UClass* Class = UGameManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddManager", &UGameManager::execAddManager },
			{ "GetGameManager", &UGameManager::execGetGameManager },
			{ "RemoveAll", &UGameManager::execRemoveAll },
			{ "RemoveManager", &UGameManager::execRemoveManager },
			{ "TickManager", &UGameManager::execTickManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameManager_AddManager_Statics
	{
		struct GameManager_eventAddManager_Parms
		{
			FString ManagerName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ManagerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameManager_AddManager_Statics::NewProp_ManagerName = { "ManagerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventAddManager_Parms, ManagerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManager_AddManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManager_AddManager_Statics::NewProp_ManagerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManager_AddManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_AddManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "AddManager", sizeof(GameManager_eventAddManager_Parms), Z_Construct_UFunction_UGameManager_AddManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameManager_AddManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameManager_AddManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameManager_AddManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameManager_AddManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameManager_AddManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameManager_GetGameManager_Statics
	{
		struct GameManager_eventGetGameManager_Parms
		{
			const UObject* ContextObject;
			UGameManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameManager_GetGameManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventGetGameManager_Parms, ReturnValue), Z_Construct_UClass_UGameManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManager_GetGameManager_Statics::NewProp_ContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameManager_GetGameManager_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventGetGameManager_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameManager_GetGameManager_Statics::NewProp_ContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameManager_GetGameManager_Statics::NewProp_ContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManager_GetGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManager_GetGameManager_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManager_GetGameManager_Statics::NewProp_ContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManager_GetGameManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameManager" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use 'Get GameManager' instead" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
		{ "ToolTip", "Get the global manager system" },
		{ "WorldContext", "ContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_GetGameManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "GetGameManager", sizeof(GameManager_eventGetGameManager_Parms), Z_Construct_UFunction_UGameManager_GetGameManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameManager_GetGameManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameManager_GetGameManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameManager_GetGameManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameManager_GetGameManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameManager_GetGameManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameManager_RemoveAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManager_RemoveAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_RemoveAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "RemoveAll", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameManager_RemoveAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameManager_RemoveAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameManager_RemoveAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameManager_RemoveAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameManager_RemoveManager_Statics
	{
		struct GameManager_eventRemoveManager_Parms
		{
			FString ManagerName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ManagerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameManager_RemoveManager_Statics::NewProp_ManagerName = { "ManagerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManager_eventRemoveManager_Parms, ManagerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManager_RemoveManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManager_RemoveManager_Statics::NewProp_ManagerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManager_RemoveManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_RemoveManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "RemoveManager", sizeof(GameManager_eventRemoveManager_Parms), Z_Construct_UFunction_UGameManager_RemoveManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameManager_RemoveManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameManager_RemoveManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameManager_RemoveManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameManager_RemoveManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameManager_RemoveManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameManager_TickManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManager_TickManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManager_TickManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManager, nullptr, "TickManager", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameManager_TickManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameManager_TickManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameManager_TickManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameManager_TickManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameManager_NoRegister()
	{
		return UGameManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Managers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Managers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Managers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MyUEProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameManager_AddManager, "AddManager" }, // 2899637704
		{ &Z_Construct_UFunction_UGameManager_GetGameManager, "GetGameManager" }, // 119750501
		{ &Z_Construct_UFunction_UGameManager_RemoveAll, "RemoveAll" }, // 770638593
		{ &Z_Construct_UFunction_UGameManager_RemoveManager, "RemoveManager" }, // 1313928506
		{ &Z_Construct_UFunction_UGameManager_TickManager, "TickManager" }, // 4107642746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManager.h" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManager_Statics::NewProp_Managers_MetaData[] = {
		{ "Category", "GameManager" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_Managers = { "Managers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameManager, Managers), METADATA_PARAMS(Z_Construct_UClass_UGameManager_Statics::NewProp_Managers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::NewProp_Managers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_Managers_Inner = { "Managers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManager_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/GameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameManager_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameManager, Index), METADATA_PARAMS(Z_Construct_UClass_UGameManager_Statics::NewProp_Index_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_Managers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_Managers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManager_Statics::NewProp_Index,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameManager_Statics::ClassParams = {
		&UGameManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameManager, 1580218466);
	template<> MYUEPROJECT_API UClass* StaticClass<UGameManager>()
	{
		return UGameManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameManager(Z_Construct_UClass_UGameManager, &UGameManager::StaticClass, TEXT("/Script/MyUEProject"), TEXT("UGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
