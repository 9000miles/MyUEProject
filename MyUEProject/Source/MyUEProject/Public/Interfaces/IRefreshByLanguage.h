// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "UObject/Interface.h"
#include "IRefreshByLanguage.generated.h"

UENUM(BlueprintType)
namespace ELocalLanguage
{
	enum Type
	{
		Chinese,
		English,
	};
}

///** Interface for actors which can be selected */
//UINTERFACE(MinimalAPI, BlueprintType)
//class URefreshByLanguage : public UInterface
//{
//	GENERATED_UINTERFACE_BODY()
//};
//
//class IRefreshByLanguage
//{
//	GENERATED_IINTERFACE_BODY()
//
//public:
//	//UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Refresh By Language Interface")
//		UFUNCTION(BlueprintNativeEvent, Category = "Composure")
//		void RefreshByLanguage(ELocalLanguage::Type LocalLanguage);
//};

