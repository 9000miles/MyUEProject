// Fill out your copyright notice in the Description page of Project Settings.


#include "..\Public\SaveGameData.h"

USaveGameData::USaveGameData()
{
	this->DataGroup = TEXT("Default");
}

USaveGameData::USaveGameData(FString DataName, ESaveGameDataType::Type DataType, FString ValueString, FString DataGroup = TEXT("Default"))
{
	this->DataName = DataName;
	this->DataType = DataType;
	this->ValueString = ValueString;
	this->DataGroup = DataGroup;
}

FString USaveGameData::DataToString() const
{
	FString ReslutStr = FString();

	static const UEnum* Enum = StaticEnum<ESaveGameDataType::Type>();
	check(Enum);
	FString DataTypeString = Enum->GetNameStringByValue(int64(DataType));

	ReslutStr
		.Append(DataName).Append(TEXT(","))
		.Append(DataTypeString).Append(TEXT(","))
		.Append(ValueString).Append(",")
		.Append(DataGroup).Append(TEXT(";"));
	return ReslutStr;
}

FString USaveGameData::ToString()
{
	return DataToString();
}
