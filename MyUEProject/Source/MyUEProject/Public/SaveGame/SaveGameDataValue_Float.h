// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameDataValueBase.h"
#include "SaveGameDataValue_Float.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class MYUEPROJECT_API USaveGameDataValue_Float : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Value")
		float Float;

	virtual void SetValue(FString Value) override
	{
		Float = FCString::Atof(*Value);
	}
};
