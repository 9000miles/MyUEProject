// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameDataValueBase.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class MYUEPROJECT_API USaveGameDataValueBase :public UObject
{

	GENERATED_BODY()

public:
	virtual	void SetValue(FString Value);
};

