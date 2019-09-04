// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "LoadCsvMap.generated.h"
//オブジェクトの種類
UENUM(Blueprintable)
enum class ObjectType : uint8
{
	IS_NONE UMETA(DisplayName = "NONE"),		   //無し
	IS_PLAYER UMETA(DisplayName = "PLAYER"),	   //
	IS_GROUND_QUBE UMETA(DisplayName = "GROUNDE"), //床キューブ
	IS_ICE_QUBE UMETA(DisplayName = "ICE"),		   //氷キューブ
	IS_WALL_QUBE UMETA(DisplayName = "WALL"),	   //壁キューブ
	IS_WATER_QUBE UMETA(DisplayName = "WATER"),    //水キューブ
	IS_GOAL_QUBE UMETA(DisplayName = "GOAL"),      //ゴールキューブ

	IS_NUN
};
UCLASS()
class FREZZE_API ALoadCsvMap : public AActor
{
	GENERATED_BODY()
private:
	//CSVデータ
	//TMap<FString, TArray<FString>> m_csvData;
	TArray<FString> m_csvData;
	//キーリスト
	TArray<FString> m_keyList;
	//データを列に分解する
	TArray<FString> m_row;
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
	////CSVデータのキーを取得する関数
	//UFUNCTION(BlueprintCallable, Category = "CsvReader")
	//	TArray<FString> GetCsvDataByKey(FString key);
		//読み込んだCSVを返す関数
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		TArray<FString> GetCsv();
	//渡された値の配列を取得する関数
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		FString GetCsvData(int i, int j);
	//intで渡された値をObjectTypeに変換する関数
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		TArray<FString> GetRow();
	//intで渡された値をObjectTypeに変換する関数
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		ObjectType ToObjectType(int num);
	
};
