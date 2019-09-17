// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameDataValueBase.h"
#include "SaveGameDataValue_Vector4.generated.h"

/**
 *
 */
UCLASS(BlueprintType)
class MYUEPROJECT_API USaveGameDataValue_Vector4 : public USaveGameDataValueBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Save Game Data Value")
		FVector4 Vector4;

	virtual void SetValue(FString Value) override
	{
		FVector4 InVector4 = FVector4();
		bool bSuccessful = false;
		bSuccessful = FParse::Value(*Value, TEXT("X="), InVector4.X) && FParse::Value(*Value, TEXT("Y="), InVector4.Y) &&
			FParse::Value(*Value, TEXT("Z="), InVector4.Z) && FParse::Value(*Value, TEXT("W="), InVector4.W);
		if (bSuccessful)
			Vector4 = InVector4;
	}
};