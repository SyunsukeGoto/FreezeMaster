// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "LoadCsvMap.generated.h"
//�I�u�W�F�N�g�̎��
UENUM(Blueprintable)
enum class ObjectType : uint8
{
	IS_NONE UMETA(DisplayName = "NONE"),		   //����
	IS_PLAYER UMETA(DisplayName = "PLAYER"),	   //
	IS_GROUND_QUBE UMETA(DisplayName = "GROUNDE"), //���L���[�u
	IS_ICE_QUBE UMETA(DisplayName = "ICE"),		   //�X�L���[�u
	IS_WALL_QUBE UMETA(DisplayName = "WALL"),	   //�ǃL���[�u
	IS_WATER_QUBE UMETA(DisplayName = "WATER"),    //���L���[�u
	IS_GOAL_QUBE UMETA(DisplayName = "GOAL"),      //�S�[���L���[�u

	IS_NUN
};
UCLASS()
class FREZZE_API ALoadCsvMap : public AActor
{
	GENERATED_BODY()
private:
	//CSV�f�[�^
	//TMap<FString, TArray<FString>> m_csvData;
	TArray<FString> m_csvData;
	//�L�[���X�g
	TArray<FString> m_keyList;
	//�f�[�^���ɕ�������
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
	//CSV�t�@�C����ǂݍ��ފ֐�
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		void LoadCsvData(FString fileName);
	////CSV�f�[�^�̃L�[���擾����֐�
	//UFUNCTION(BlueprintCallable, Category = "CsvReader")
	//	TArray<FString> GetCsvDataByKey(FString key);
		//�ǂݍ���CSV��Ԃ��֐�
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		TArray<FString> GetCsv();
	//�n���ꂽ�l�̔z����擾����֐�
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		FString GetCsvData(int i, int j);
	//int�œn���ꂽ�l��ObjectType�ɕϊ�����֐�
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		TArray<FString> GetRow();
	//int�œn���ꂽ�l��ObjectType�ɕϊ�����֐�
	UFUNCTION(BlueprintCallable, Category = "CsvReader")
		ObjectType ToObjectType(int num);
	
};
