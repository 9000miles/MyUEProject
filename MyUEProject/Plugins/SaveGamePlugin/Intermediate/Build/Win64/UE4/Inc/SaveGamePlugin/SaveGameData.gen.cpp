// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveGamePlugin/Public/SaveGameData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameData() {}
// Cross Module References
	SAVEGAMEPLUGIN_API UEnum* Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataSaveStateType();
	UPackage* Z_Construct_UPackage__Script_SaveGamePlugin();
	SAVEGAMEPLUGIN_API UEnum* Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SAVEGAMEPLUGIN_API UFunction* Z_Construct_UFunction_USaveGameData_DataToString();
// End Cross Module References
	static UEnum* ESaveGameDataSaveStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataSaveStateType, Z_Construct_UPackage__Script_SaveGamePlugin(), TEXT("ESaveGameDataSaveStateType"));
		}
		return Singleton;
	}
	template<> SAVEGAMEPLUGIN_API UEnum* StaticEnum<ESaveGameDataSaveStateType::Type>()
	{
		return ESaveGameDataSaveStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveGameDataSaveStateType(ESaveGameDataSaveStateType_StaticEnum, TEXT("/Script/SaveGamePlugin"), TEXT("ESaveGameDataSaveStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataSaveStateType_Hash() { return 1974660443U; }
	UEnum* Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataSaveStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SaveGamePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveGameDataSaveStateType"), 0, Get_Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataSaveStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveGameDataSaveStateType::None", (int64)ESaveGameDataSaveStateType::None },
				{ "ESaveGameDataSaveStateType::Saved", (int64)ESaveGameDataSaveStateType::Saved },
				{ "ESaveGameDataSaveStateType::NotSaved", (int64)ESaveGameDataSaveStateType::NotSaved },
				{ "ESaveGameDataSaveStateType::Selected", (int64)ESaveGameDataSaveStateType::Selected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SaveGameData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SaveGamePlugin,
				nullptr,
				"ESaveGameDataSaveStateType",
				"ESaveGameDataSaveStateType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESaveGameDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType, Z_Construct_UPackage__Script_SaveGamePlugin(), TEXT("ESaveGameDataType"));
		}
		return Singleton;
	}
	template<> SAVEGAMEPLUGIN_API UEnum* StaticEnum<ESaveGameDataType::Type>()
	{
		return ESaveGameDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveGameDataType(ESaveGameDataType_StaticEnum, TEXT("/Script/SaveGamePlugin"), TEXT("ESaveGameDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType_Hash() { return 4059979450U; }
	UEnum* Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SaveGamePlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveGameDataType"), 0, Get_Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveGameDataType::None", (int64)ESaveGameDataType::None },
				{ "ESaveGameDataType::Bool", (int64)ESaveGameDataType::Bool },
				{ "ESaveGameDataType::Byte", (int64)ESaveGameDataType::Byte },
				{ "ESaveGameDataType::Int32", (int64)ESaveGameDataType::Int32 },
				{ "ESaveGameDataType::Float", (int64)ESaveGameDataType::Float },
				{ "ESaveGameDataType::String", (int64)ESaveGameDataType::String },
				{ "ESaveGameDataType::Vector2", (int64)ESaveGameDataType::Vector2 },
				{ "ESaveGameDataType::Vector3", (int64)ESaveGameDataType::Vector3 },
				{ "ESaveGameDataType::Vector4", (int64)ESaveGameDataType::Vector4 },
				{ "ESaveGameDataType::DateTime", (int64)ESaveGameDataType::DateTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SaveGameData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SaveGamePlugin,
				nullptr,
				"ESaveGameDataType",
				"ESaveGameDataType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USaveGameData::StaticRegisterNativesUSaveGameData()
	{
		UClass* Class = USaveGameData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DataToString", &USaveGameData::execDataToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveGameData_DataToString_Statics
	{
		struct SaveGameData_eventDataToString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameData_DataToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameData_eventDataToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameData_DataToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameData_DataToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameData_DataToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameData_DataToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameData, nullptr, "DataToString", sizeof(SaveGameData_eventDataToString_Parms), Z_Construct_UFunction_USaveGameData_DataToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_DataToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameData_DataToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USaveGameData_DataToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameData_DataToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameData_DataToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveGameData_NoRegister()
	{
		return USaveGameData::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnumName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValueString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveStateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveStateType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveGameData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameData_DataToString, "DataToString" }, // 2250178871
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameData.h" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_EnumName_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_EnumName = { "EnumName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameData, EnumName), METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::NewProp_EnumName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_EnumName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_ValueString_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_ValueString = { "ValueString", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameData, ValueString), METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::NewProp_ValueString_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_ValueString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_DataGroup_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_DataGroup = { "DataGroup", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameData, DataGroup), METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::NewProp_DataGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_DataGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_SaveStateType_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_SaveStateType = { "SaveStateType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameData, SaveStateType), Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataSaveStateType, METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::NewProp_SaveStateType_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_SaveStateType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameData, DataType), Z_Construct_UEnum_SaveGamePlugin_ESaveGameDataType, METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::NewProp_DataType_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_DataType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_DataName_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameData, DataName), METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::NewProp_DataName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_DataName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_EnumName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_ValueString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_DataGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_SaveStateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_DataName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameData_Statics::ClassParams = {
		&USaveGameData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveGameData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameData, 3660637450);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameData>()
	{
		return USaveGameData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameData(Z_Construct_UClass_USaveGameData, &USaveGameData::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
