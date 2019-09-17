// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameDataValueBase.h"
#include "SaveGameDataValue_String.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class MYUEPROJECT_API USaveGameDataValue_String : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Value")
		FString String;

	virtual void SetValue(FString Value) override
	{
		String = Value;
	}
};
