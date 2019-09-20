// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveGamePlugin/Public/SaveGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameInstance() {}
// Cross Module References
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameInstance_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SaveGamePlugin();
// End Cross Module References
	void USaveGameInstance::StaticRegisterNativesUSaveGameInstance()
	{
	}
	UClass* Z_Construct_UClass_USaveGameInstance_NoRegister()
	{
		return USaveGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveDataTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGameInstance.h" },
		{ "ModuleRelativePath", "Public/SaveGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SaveDataTime_MetaData[] = {
		{ "Category", "SaveGameInstance" },
		{ "ModuleRelativePath", "Public/SaveGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SaveDataTime = { "SaveDataTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameInstance, SaveDataTime), METADATA_PARAMS(Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SaveDataTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SaveDataTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameInstance_Statics::NewProp_DataString_MetaData[] = {
		{ "Category", "SaveGameInstance" },
		{ "ModuleRelativePath", "Public/SaveGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameInstance_Statics::NewProp_DataString = { "DataString", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameInstance, DataString), METADATA_PARAMS(Z_Construct_UClass_USaveGameInstance_Statics::NewProp_DataString_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameInstance_Statics::NewProp_DataString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameInstance_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "SaveGameInstance" },
		{ "ModuleRelativePath", "Public/SaveGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameInstance_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameInstance, UserIndex), METADATA_PARAMS(Z_Construct_UClass_USaveGameInstance_Statics::NewProp_UserIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameInstance_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "SaveGameInstance" },
		{ "ModuleRelativePath", "Public/SaveGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameInstance, SlotName), METADATA_PARAMS(Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SaveDataTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameInstance_Statics::NewProp_DataString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameInstance_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameInstance_Statics::NewProp_SlotName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameInstance_Statics::ClassParams = {
		&USaveGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameInstance, 2757544765);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameInstance>()
	{
		return USaveGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameInstance(Z_Construct_UClass_USaveGameInstance, &USaveGameInstance::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
