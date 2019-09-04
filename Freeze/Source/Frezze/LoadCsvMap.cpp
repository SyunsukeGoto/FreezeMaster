// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadCsvMap.h"
#include "FileHelper.h"
#include "Engine.h"
// Sets default values
ALoadCsvMap::ALoadCsvMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
//CSVファイルを読み込む関数
void ALoadCsvMap::LoadCsvData(FString fileName)
{
	//ディレクトリを取得
	FString directory = FPaths::GameContentDir();
	//ファイル名
	FString filePath = directory + fileName + ".csv";
	//ファイルを取得する
	FString csvFullData;
	//データを入れる
	FFileHelper::LoadFileToString(csvFullData, *filePath);
	//データを列に分解する
	csvFullData.ParseIntoArray(m_row, TEXT("\n"), true);
	//列の幅を取得する
	m_row[0].ParseIntoArray(m_keyList, TEXT(","), true);
	
	////キー以外の要素をCSVデータにキーと関連つけて登録
	TArray<FString> element;
	for (int i = 0; i != m_row.Num(); i++)
	{
		m_row[i].ParseIntoArray(element, TEXT(","), true);
		for (int j = 0; j != element.Num(); j++)
		{
			m_csvData.Add(element[j]);
		}
	}
	
}
////CSVデータのキーを取得する関数
//TArray<FString> ALoadCsvMap::GetCsvDataByKey(FString key)
//{
//	return m_csvData[key];
//}
////キーを取得する関数
//TArray<FString> ALoadCsvMap::GetKey()
//{
//	return m_keyList;
//}
//CSVを返す関数
TArray<FString> ALoadCsvMap::GetCsv()
{
	return m_csvData;
}
//渡された値の配列を返す関数
FString ALoadCsvMap::GetCsvData(int i, int j)
{
	//配列外に出たら0を返す
	if (i * m_keyList.Num() + j > m_csvData.Num())
	{
		return "0";
	}
   return m_csvData[i * m_keyList.Num() + j];
}
//列を返す
TArray<FString> ALoadCsvMap::GetRow()
{
	return m_row;
}
//あたされたintの数字をオブジェクトタイプに変換する関数
ObjectType ALoadCsvMap::ToObjectType(int num)
{
	return (ObjectType)num;
}

// Called when the game starts or when spawned
void ALoadCsvMap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALoadCsvMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


