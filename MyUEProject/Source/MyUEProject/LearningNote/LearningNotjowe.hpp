// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 *
 */
UCLASS()
class ULearningRecord
{
	//�ֵ����
	//TMap<FString, int32> MyMap;
	//// �¸�ʽ
	//for (TPair<FString, int32>& Kvp : MyMap)
	//{
	//	UE_LOG(LogCategory, Log, TEXT("Key: %s, Value: %d"), Kvp.Key, *Kvp.Value);
	//}

	//Lambda���ʽ��������ҷ�������������
	// �������ֺ��С�Hello��һ�ε�����
	//Thing* HelloThing = ArrayOfThings.FindByPredicate([](const Thing& Th) { return Th.GetName().Contains(TEXT("Hello")); });

	// ������������������
	//AnotherArray.Sort([](const Thing& Lhs, const Thing& Rhs) { return Lhs.GetName() > Rhs.GetName(); });

	/*auto Lambda = [=]()
	{
		UE_LOG(LogTest, Log, TEXT("Local: %d, Member: %d"), Local, Member);
	};*/

	// ���о٣�ö��
	/*UENUM()
		enum class EThing : uint8
	{
		Thing1,
		Thing2
	};*/

	//// ������
	//UPROPERTY()
	//	TEnumAsByte<EThing::Type> MyProperty;

	//// ������
	//UPROPERTY()
	//	EThing MyProperty;

	//	// ��
	//if (Flags & EFlags::Flag1)

	//	// ��
	//	if ((Flags & EFlags::Flag1) != EFlags::None)
};