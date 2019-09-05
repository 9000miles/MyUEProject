// Fill out your copyright notice in the Description page of Project Settings.


#include "..\..\Public\SaveGame\SaveGameData.h"

USaveGameData::USaveGameData()
{
	this->DataGroup = TEXT("Default");
	this->SaveStateType = ESaveGameDataSaveStateType::NotSaved;
}

USaveGameData::USaveGameData(FString DataName, ESaveGameDataType::Type DataType, ESaveGameDataSaveStateType::Type SaveStateType, FString ValueString, FString DataGroup = TEXT("Default"))
{
	this->DataName = DataName;
	this->DataType = DataType;
	this->SaveStateType = SaveStateType;
	this->OnSaveStateChenged.Broadcast(SaveStateType);
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
