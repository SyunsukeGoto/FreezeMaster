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
	//CSV�f�[�^
	TMap<FString, TArray<FString>> m_csvData;
	//�L�[���X�g
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
	//CSV�t�@�C����ǂݍ��ފ֐�
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		void LoadCsvData(FString fileName);
	//CSV�f�[�^�̃L�[���擾����֐�
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		TArray<FString> GetCsvDataByKey(FString key);
	//�L�[���擾����֐�
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		TArray<FString>GetKey();
};
