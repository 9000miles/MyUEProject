// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 *
 */
UCLASS()
class ULearningRecord
{
	//字典迭代
	//TMap<FString, int32> MyMap;
	//// 新格式
	//for (TPair<FString, int32>& Kvp : MyMap)
	//{
	//	UE_LOG(LogCategory, Log, TEXT("Key: %s, Value: %d"), Kvp.Key, *Kvp.Value);
	//}

	//Lambda表达式，数组查找符合条件的内容
	// 查找名字含有“Hello”一次的事物
	//Thing* HelloThing = ArrayOfThings.FindByPredicate([](const Thing& Th) { return Th.GetName().Contains(TEXT("Hello")); });

	// 以命名倒序排列阵列
	//AnotherArray.Sort([](const Thing& Lhs, const Thing& Rhs) { return Lhs.GetName() > Rhs.GetName(); });

	/*auto Lambda = [=]()
	{
		UE_LOG(LogTest, Log, TEXT("Local: %d, Member: %d"), Local, Member);
	};*/

	// 新列举，枚举
	/*UENUM()
		enum class EThing : uint8
	{
		Thing1,
		Thing2
	};*/

	//// 旧属性
	//UPROPERTY()
	//	TEnumAsByte<EThing::Type> MyProperty;

	//// 新属性
	//UPROPERTY()
	//	EThing MyProperty;

	//	// 旧
	//if (Flags & EFlags::Flag1)

	//	// 新
	//	if ((Flags & EFlags::Flag1) != EFlags::None)
};