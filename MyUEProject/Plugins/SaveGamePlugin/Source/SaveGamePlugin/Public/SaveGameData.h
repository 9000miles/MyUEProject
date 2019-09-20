// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameData.generated.h"

UENUM(BlueprintType)
namespace ESaveGameDataType
{
	enum Type
	{
		None,

		Bool,
		Byte,
		Int32,
		Float,
		String,
		Vector2,
		Vector3,
		Vector4,
		DateTime,
	};
}

UENUM(BlueprintType)
namespace ESaveGameDataSaveStateType
{
	enum Type
	{
		None,

		Saved,
		NotSaved,
		Selected,
	};
}

/**
 *
 */
UCLASS(BlueprintType)
class SAVEGAMEPLUGIN_API USaveGameData : public UObject
{
	GENERATED_BODY()

public:
	USaveGameData();

	USaveGameData(FString DataName, ESaveGameDataType::Type DataType, ESaveGameDataSaveStateType::Type SaveStateType, FString ValueString, FString DataGroup);

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString DataName;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		TEnumAsByte<ESaveGameDataType::Type> DataType;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		TEnumAsByte<ESaveGameDataSaveStateType::Type> SaveStateType;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString DataGroup;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString ValueString;

	UPROPERTY(BlueprintReadWrite, Category = "SaveGameData")
		FString EnumName;

public:
	UFUNCTION(BlueprintCallable, Category = "SaveGameData")
		FString DataToString() const;

	virtual FString ToString();
};
