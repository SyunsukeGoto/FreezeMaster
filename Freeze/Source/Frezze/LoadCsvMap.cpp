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
	TArray<FString> row;
	csvFullData.ParseIntoArray(row, TEXT("\n"), true);
	//キーを登録する
	row[0].ParseIntoArray(m_keyList, TEXT(","), true);
	for (int i = 0; i != m_keyList.Num(); i++)
	{
		m_csvData.Add(m_keyList[i]);
	}
	//キー以外の要素をCSVデータにキーと関連つけて登録
	TArray<FString> element;
	for (int i = 1; i != row.Num(); i++)
	{
		row[i].ParseIntoArray(element, TEXT(","), true);
		for (int j = 0; j != element.Num(); j++)
		{
			m_csvData[m_keyList[j]].Add(element[j]);
		}
	}
	
}
//CSVデータのキーを取得する関数
TArray<FString> ALoadCsvMap::GetCsvDataByKey(FString key)
{
	return m_csvData[key];
}
//キーを取得する関数
TArray<FString> ALoadCsvMap::GetKey()
{
	return m_keyList;
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


