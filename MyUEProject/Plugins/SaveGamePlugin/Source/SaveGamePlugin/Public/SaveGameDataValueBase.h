//Copyright 1998 - 2019 Epic Games, Inc.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameDataValueBase.generated.h"

template<typename  DataValueType>
class SaveGameDataValueTemplate
{
private:
	DataValueType DataValue;

public:
	void SetValue(DataValueType Value)
	{
		DataValue = Value;
	}

	DataValueType GetValue() const
	{
		return DataValue;
	}
};

UCLASS(BlueprintType)
class SAVEGAMEPLUGIN_API USaveGameDataValueBase :public UObject
{
	GENERATED_BODY()

public:
	virtual void SetValue(FString Value);
};

UCLASS(BlueprintType)
class SAVEGAMEPLUGIN_API USaveGameDataValue_Bool : public USaveGameDataValueBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Bool")
		bool Bool;
	virtual void SetValue(FString Value) override;
};

UCLASS(BlueprintType)
class USaveGameDataValue_Byte : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Byte")
		uint8 Byte;

	virtual void SetValue(FString Value) override;
};

UCLASS(BlueprintType)
class USaveGameDataValue_Int32 : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Int32")
		int32 Int32;

	virtual void SetValue(FString Value) override;
};

UCLASS(BlueprintType)
class USaveGameDataValue_Float : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Float")
		float Float;

	virtual void SetValue(FString Value) override;
};

UCLASS(BlueprintType)
class USaveGameDataValue_String : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data String")
		FString String;

	virtual void SetValue(FString Value) override;
};

UCLASS(BlueprintType)
class USaveGameDataValue_Vector2 : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Vector2")
		FVector2D Vector2;

	virtual void SetValue(FString Value) override;
};

UCLASS(BlueprintType)
class USaveGameDataValue_Vector3 : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Value3")
		FVector Vector3;

	virtual void SetValue(FString Value) override;
};

UCLASS(BlueprintType)
class USaveGameDataValue_Vector4 : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Vector4")
		FVector4 Vector4;

	virtual void SetValue(FString Value) override;
};


UCLASS(BlueprintType)
class USaveGameDataValue_DateTime : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data DateTime")
		FDateTime DateTime;

	virtual void SetValue(FString Value) override;
};