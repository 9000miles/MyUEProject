// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveGameData.h"

FString USaveGameData::DataToString() const
{
	FString ReslutStr = FString(DataName);
	switch (DataType)
	{
	case ESaveGameDataType::String:
		ReslutStr.Append(TEXT(",")).Append(TEXT("String")).Append(TEXT(",")).Append(StringData);
		break;

	case ESaveGameDataType::Integer:
		ReslutStr.Append(TEXT(",")).Append(TEXT("Int32")).Append(TEXT(",")).Append(FString::FromInt(Int32Data));
		break;

	case ESaveGameDataType::Float:
		ReslutStr.Append(TEXT(",")).Append(TEXT("Float")).Append(TEXT(",")).Append(FString::SanitizeFloat(FloatData));
		break;

	case ESaveGameDataType::Bool:
		ReslutStr.Append(TEXT(",")).Append(TEXT("Bool")).Append(TEXT(",")).Append(BoolData ? TEXT("true") : TEXT("false"));
		break;

	case ESaveGameDataType::Vector:
		ReslutStr.Append(TEXT(",")).Append(TEXT("Vector")).Append(TEXT(",")).Append(VectorData.ToString());
		break;
	}
	return ReslutStr;
}
