#include "SaveGameDataValueBase.h"

void USaveGameDataValueBase::SetValue(FString Value)
{

}

void USaveGameDataValue_Bool::SetValue(FString Value)
{
	Bool = Value.ToBool();
}

void USaveGameDataValue_Byte::SetValue(FString Value)
{
	Byte = (uint8)FCString::Atoi(*Value);
}

void USaveGameDataValue_Int32::SetValue(FString Value)
{
	Int32 = FCString::Atoi(*Value);
}

void USaveGameDataValue_Float::SetValue(FString Value)
{
	Float = FCString::Atof(*Value);
}

void USaveGameDataValue_String::SetValue(FString Value)
{
	String = Value;
}

void USaveGameDataValue_Vector2::SetValue(FString Value)
{
	Vector2.InitFromString(Value);
}

void USaveGameDataValue_Vector3::SetValue(FString Value)
{
	Vector3.InitFromString(Value);
}

void USaveGameDataValue_Vector4::SetValue(FString Value)
{
	FVector4 InVector4 = FVector4();
	bool bSuccessful = false;
	bSuccessful = FParse::Value(*Value, TEXT("X="), InVector4.X) && FParse::Value(*Value, TEXT("Y="), InVector4.Y) &&
		FParse::Value(*Value, TEXT("Z="), InVector4.Z) && FParse::Value(*Value, TEXT("W="), InVector4.W);
	if (bSuccessful)
		Vector4 = InVector4;
}

void USaveGameDataValue_DateTime::SetValue(FString Value)
{
	FDateTime InDateTime;
	bool bSuccessful = false;
	bSuccessful = FDateTime::Parse(Value, InDateTime);
	if (bSuccessful)
		DateTime = InDateTime;
}
