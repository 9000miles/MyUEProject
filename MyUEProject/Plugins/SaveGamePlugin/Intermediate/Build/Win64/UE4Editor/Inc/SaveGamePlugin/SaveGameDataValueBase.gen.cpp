// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveGamePlugin/Public/SaveGameDataValueBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameDataValueBase() {}
// Cross Module References
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValueBase_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValueBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SaveGamePlugin();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Bool_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Bool();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Byte_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Byte();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Int32_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Int32();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Float_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Float();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_String_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_String();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Vector2_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Vector2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Vector3_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Vector3();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Vector4_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_Vector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_DateTime_NoRegister();
	SAVEGAMEPLUGIN_API UClass* Z_Construct_UClass_USaveGameDataValue_DateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	void USaveGameDataValueBase::StaticRegisterNativesUSaveGameDataValueBase()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValueBase_NoRegister()
	{
		return USaveGameDataValueBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValueBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValueBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValueBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValueBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValueBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValueBase_Statics::ClassParams = {
		&USaveGameDataValueBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValueBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValueBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValueBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValueBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValueBase, 653602887);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValueBase>()
	{
		return USaveGameDataValueBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValueBase(Z_Construct_UClass_USaveGameDataValueBase, &USaveGameDataValueBase::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValueBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValueBase);
	void USaveGameDataValue_Bool::StaticRegisterNativesUSaveGameDataValue_Bool()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValue_Bool_NoRegister()
	{
		return USaveGameDataValue_Bool::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValue_Bool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValue_Bool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameDataValueBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Bool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Bool_Statics::NewProp_Bool_MetaData[] = {
		{ "Category", "Save Game Data Bool" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	void Z_Construct_UClass_USaveGameDataValue_Bool_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((USaveGameDataValue_Bool*)Obj)->Bool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameDataValue_Bool_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveGameDataValue_Bool), &Z_Construct_UClass_USaveGameDataValue_Bool_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Bool_Statics::NewProp_Bool_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Bool_Statics::NewProp_Bool_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameDataValue_Bool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameDataValue_Bool_Statics::NewProp_Bool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValue_Bool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValue_Bool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValue_Bool_Statics::ClassParams = {
		&USaveGameDataValue_Bool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameDataValue_Bool_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Bool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Bool_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Bool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValue_Bool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValue_Bool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValue_Bool, 2126607022);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValue_Bool>()
	{
		return USaveGameDataValue_Bool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValue_Bool(Z_Construct_UClass_USaveGameDataValue_Bool, &USaveGameDataValue_Bool::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValue_Bool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValue_Bool);
	void USaveGameDataValue_Byte::StaticRegisterNativesUSaveGameDataValue_Byte()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValue_Byte_NoRegister()
	{
		return USaveGameDataValue_Byte::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValue_Byte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Byte_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Byte;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValue_Byte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameDataValueBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Byte_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Byte_Statics::NewProp_Byte_MetaData[] = {
		{ "Category", "Save Game Data Byte" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveGameDataValue_Byte_Statics::NewProp_Byte = { "Byte", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameDataValue_Byte, Byte), nullptr, METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Byte_Statics::NewProp_Byte_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Byte_Statics::NewProp_Byte_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameDataValue_Byte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameDataValue_Byte_Statics::NewProp_Byte,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValue_Byte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValue_Byte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValue_Byte_Statics::ClassParams = {
		&USaveGameDataValue_Byte::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameDataValue_Byte_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Byte_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Byte_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Byte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValue_Byte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValue_Byte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValue_Byte, 2325597016);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValue_Byte>()
	{
		return USaveGameDataValue_Byte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValue_Byte(Z_Construct_UClass_USaveGameDataValue_Byte, &USaveGameDataValue_Byte::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValue_Byte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValue_Byte);
	void USaveGameDataValue_Int32::StaticRegisterNativesUSaveGameDataValue_Int32()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValue_Int32_NoRegister()
	{
		return USaveGameDataValue_Int32::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValue_Int32_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValue_Int32_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameDataValueBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Int32_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Int32_Statics::NewProp_Int32_MetaData[] = {
		{ "Category", "Save Game Data Int32" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveGameDataValue_Int32_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameDataValue_Int32, Int32), METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Int32_Statics::NewProp_Int32_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Int32_Statics::NewProp_Int32_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameDataValue_Int32_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameDataValue_Int32_Statics::NewProp_Int32,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValue_Int32_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValue_Int32>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValue_Int32_Statics::ClassParams = {
		&USaveGameDataValue_Int32::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameDataValue_Int32_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Int32_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Int32_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Int32_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValue_Int32()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValue_Int32_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValue_Int32, 2116981152);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValue_Int32>()
	{
		return USaveGameDataValue_Int32::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValue_Int32(Z_Construct_UClass_USaveGameDataValue_Int32, &USaveGameDataValue_Int32::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValue_Int32"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValue_Int32);
	void USaveGameDataValue_Float::StaticRegisterNativesUSaveGameDataValue_Float()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValue_Float_NoRegister()
	{
		return USaveGameDataValue_Float::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValue_Float_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValue_Float_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameDataValueBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Float_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Float_Statics::NewProp_Float_MetaData[] = {
		{ "Category", "Save Game Data Float" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USaveGameDataValue_Float_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameDataValue_Float, Float), METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Float_Statics::NewProp_Float_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Float_Statics::NewProp_Float_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameDataValue_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameDataValue_Float_Statics::NewProp_Float,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValue_Float_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValue_Float>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValue_Float_Statics::ClassParams = {
		&USaveGameDataValue_Float::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameDataValue_Float_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Float_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Float_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Float_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValue_Float()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValue_Float_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValue_Float, 3676797788);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValue_Float>()
	{
		return USaveGameDataValue_Float::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValue_Float(Z_Construct_UClass_USaveGameDataValue_Float, &USaveGameDataValue_Float::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValue_Float"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValue_Float);
	void USaveGameDataValue_String::StaticRegisterNativesUSaveGameDataValue_String()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValue_String_NoRegister()
	{
		return USaveGameDataValue_String::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValue_String_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValue_String_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameDataValueBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_String_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_String_Statics::NewProp_String_MetaData[] = {
		{ "Category", "Save Game Data String" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameDataValue_String_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameDataValue_String, String), METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_String_Statics::NewProp_String_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_String_Statics::NewProp_String_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameDataValue_String_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameDataValue_String_Statics::NewProp_String,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValue_String_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValue_String>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValue_String_Statics::ClassParams = {
		&USaveGameDataValue_String::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameDataValue_String_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_String_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_String_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_String_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValue_String()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValue_String_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValue_String, 3490725274);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValue_String>()
	{
		return USaveGameDataValue_String::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValue_String(Z_Construct_UClass_USaveGameDataValue_String, &USaveGameDataValue_String::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValue_String"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValue_String);
	void USaveGameDataValue_Vector2::StaticRegisterNativesUSaveGameDataValue_Vector2()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValue_Vector2_NoRegister()
	{
		return USaveGameDataValue_Vector2::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValue_Vector2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameDataValueBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::NewProp_Vector2_MetaData[] = {
		{ "Category", "Save Game Data Vector2" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::NewProp_Vector2 = { "Vector2", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameDataValue_Vector2, Vector2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::NewProp_Vector2_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::NewProp_Vector2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::NewProp_Vector2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValue_Vector2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::ClassParams = {
		&USaveGameDataValue_Vector2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValue_Vector2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValue_Vector2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValue_Vector2, 965925308);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValue_Vector2>()
	{
		return USaveGameDataValue_Vector2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValue_Vector2(Z_Construct_UClass_USaveGameDataValue_Vector2, &USaveGameDataValue_Vector2::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValue_Vector2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValue_Vector2);
	void USaveGameDataValue_Vector3::StaticRegisterNativesUSaveGameDataValue_Vector3()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValue_Vector3_NoRegister()
	{
		return USaveGameDataValue_Vector3::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValue_Vector3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameDataValueBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::NewProp_Vector3_MetaData[] = {
		{ "Category", "Save Game Data Value3" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::NewProp_Vector3 = { "Vector3", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameDataValue_Vector3, Vector3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::NewProp_Vector3_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::NewProp_Vector3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::NewProp_Vector3,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValue_Vector3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::ClassParams = {
		&USaveGameDataValue_Vector3::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValue_Vector3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValue_Vector3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValue_Vector3, 3845754896);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValue_Vector3>()
	{
		return USaveGameDataValue_Vector3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValue_Vector3(Z_Construct_UClass_USaveGameDataValue_Vector3, &USaveGameDataValue_Vector3::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValue_Vector3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValue_Vector3);
	void USaveGameDataValue_Vector4::StaticRegisterNativesUSaveGameDataValue_Vector4()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValue_Vector4_NoRegister()
	{
		return USaveGameDataValue_Vector4::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValue_Vector4_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameDataValueBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::NewProp_Vector4_MetaData[] = {
		{ "Category", "Save Game Data Vector4" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::NewProp_Vector4 = { "Vector4", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameDataValue_Vector4, Vector4), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::NewProp_Vector4_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::NewProp_Vector4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::NewProp_Vector4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValue_Vector4>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::ClassParams = {
		&USaveGameDataValue_Vector4::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValue_Vector4()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValue_Vector4_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValue_Vector4, 2228846905);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValue_Vector4>()
	{
		return USaveGameDataValue_Vector4::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValue_Vector4(Z_Construct_UClass_USaveGameDataValue_Vector4, &USaveGameDataValue_Vector4::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValue_Vector4"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValue_Vector4);
	void USaveGameDataValue_DateTime::StaticRegisterNativesUSaveGameDataValue_DateTime()
	{
	}
	UClass* Z_Construct_UClass_USaveGameDataValue_DateTime_NoRegister()
	{
		return USaveGameDataValue_DateTime::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameDataValue_DateTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameDataValueBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveGamePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveGameDataValueBase.h" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::NewProp_DateTime_MetaData[] = {
		{ "Category", "Save Game Data DateTime" },
		{ "ModuleRelativePath", "Public/SaveGameDataValueBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameDataValue_DateTime, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::NewProp_DateTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::NewProp_DateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::NewProp_DateTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameDataValue_DateTime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::ClassParams = {
		&USaveGameDataValue_DateTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameDataValue_DateTime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameDataValue_DateTime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameDataValue_DateTime, 3699570272);
	template<> SAVEGAMEPLUGIN_API UClass* StaticClass<USaveGameDataValue_DateTime>()
	{
		return USaveGameDataValue_DateTime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameDataValue_DateTime(Z_Construct_UClass_USaveGameDataValue_DateTime, &USaveGameDataValue_DateTime::StaticClass, TEXT("/Script/SaveGamePlugin"), TEXT("USaveGameDataValue_DateTime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameDataValue_DateTime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
