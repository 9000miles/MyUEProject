// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "RefreshByLanguage.generated.h"

/** Interface for actors which can be selected */
UINTERFACE(Blueprintable)
class URefreshByLanguage : public UInterface
{
	GENERATED_BODY()
};

class IRefreshByLanguage
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Refresh By Language Interface")
		void RefreshByLanguage();
};

