// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadCsvMap.generated.h"

UCLASS()
class FREZZE_API ALoadCsvMap : public AActor
{
	GENERATED_BODY()
private:
	//CSVデータ
	TMap<FString, TArray<FString>> m_csvData;
	//キーリスト
	TArray<FString> m_keyList;

public:	
	// Sets default values for this actor's properties
	ALoadCsvMap();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//CSVファイルを読み込む関数
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		void LoadCsvData(FString fileName);
	//CSVデータのキーを取得する関数
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		TArray<FString> GetCsvDataByKey(FString key);
	//キーを取得する関数
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		TArray<FString>GetKey();
};
