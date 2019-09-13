// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "LoadCsvMap.generated.h"
//オブジェクトの種類
UENUM(Blueprintable)
enum class ObjectType : uint8
{
	IS_NONE UMETA(DisplayName = "NONE"),		   //無し			0
	IS_WALL_QUBE UMETA(DisplayName = "WALL"),	   //壁キューブ		1
	IS_GROUND_QUBE UMETA(DisplayName = "GROUNDE"), //床キューブ		2
	IS_ICE_QUBE UMETA(DisplayName = "ICE"),		   //氷キューブ		3
	IS_MISSING_QUBE4 UMETA(DisplayName = "4"),
	IS_MISSING_QUBE5 UMETA(DisplayName = "5"),
	IS_MISSING_QUBE6 UMETA(DisplayName = "6"),
	IS_MISSING_QUBE7 UMETA(DisplayName = "7"),
	IS_MISSING_QUBE8 UMETA(DisplayName = "8"),
	IS_MISSING_QUBE9 UMETA(DisplayName = "9"),
	IS_WATER_QUBE UMETA(DisplayName = "WATER"),        //水キューブ		10

	IS_ICICLE_QUBE UMETA(DisplayName = "ICICLE_QUBE"), //氷柱キューブ	11
	IS_FIREBLOCK_QUBE UMETA(DisplayName = "FIREBLOCK"),//炎キューブ		12
	IS_WATERFALL_QUBE UMETA(DisplayName = "WATERFALL"),//滝キューブ		13
	IS_ENEMY_QUBE UMETA(DisplayName = "ENEMY"),		   //敵キューブ		14
	IS_ENEMY_COLLISION UMETA(DisplayName = "ENEMYCOLLISION"),  //敵判定キューブ 15
	IS_KEY_BLOCK UMETA(DisplayName = "KEY"),		    //鍵キューブ     16
	IS_DOOR_QUBE UMETA(DisplayName = "DOOR"),		    //ドアキューブ	17
	IS_KEYICEBLOCK UMETA(DisplayName = "KEYICEBLOCK"),  //鍵ドア			18
	IS_MISSING_GIMMICK19 UMETA(DisplayName = "19"),   
	IS_PLAYER UMETA(DisplayName = "PLAYER"),	        //プレイヤー		20
	IS_GOAL_QUBE UMETA(DisplayName = "GOAL"),           //ゴールキューブ	21

	IS_NUM
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
