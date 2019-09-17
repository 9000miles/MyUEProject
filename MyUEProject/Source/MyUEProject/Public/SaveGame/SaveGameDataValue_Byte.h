// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameDataValueBase.h"
#include "SaveGameDataValue_Byte.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class MYUEPROJECT_API USaveGameDataValue_Byte : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Value")
		uint8 Byte;

	virtual void SetValue(FString Value) override
	{
		Byte = (uint8)FCString::Atoi(*Value);
	}
};
