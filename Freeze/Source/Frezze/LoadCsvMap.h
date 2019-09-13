// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "LoadCsvMap.generated.h"
//�I�u�W�F�N�g�̎��
UENUM(Blueprintable)
enum class ObjectType : uint8
{
	IS_NONE UMETA(DisplayName = "NONE"),		   //����			0
	IS_WALL_QUBE UMETA(DisplayName = "WALL"),	   //�ǃL���[�u		1
	IS_GROUND_QUBE UMETA(DisplayName = "GROUNDE"), //���L���[�u		2
	IS_ICE_QUBE UMETA(DisplayName = "ICE"),		   //�X�L���[�u		3
	IS_MISSING_QUBE4 UMETA(DisplayName = "4"),
	IS_MISSING_QUBE5 UMETA(DisplayName = "5"),
	IS_MISSING_QUBE6 UMETA(DisplayName = "6"),
	IS_MISSING_QUBE7 UMETA(DisplayName = "7"),
	IS_MISSING_QUBE8 UMETA(DisplayName = "8"),
	IS_MISSING_QUBE9 UMETA(DisplayName = "9"),
	IS_WATER_QUBE UMETA(DisplayName = "WATER"),        //���L���[�u		10

	IS_ICICLE_QUBE UMETA(DisplayName = "ICICLE_QUBE"), //�X���L���[�u	11
	IS_FIREBLOCK_QUBE UMETA(DisplayName = "FIREBLOCK"),//���L���[�u		12
	IS_WATERFALL_QUBE UMETA(DisplayName = "WATERFALL"),//��L���[�u		13
	IS_ENEMY_QUBE UMETA(DisplayName = "ENEMY"),		   //�G�L���[�u		14
	IS_ENEMY_COLLISION UMETA(DisplayName = "ENEMYCOLLISION"),  //�G����L���[�u 15
	IS_KEY_BLOCK UMETA(DisplayName = "KEY"),		    //���L���[�u     16
	IS_DOOR_QUBE UMETA(DisplayName = "DOOR"),		    //�h�A�L���[�u	17
	IS_KEYICEBLOCK UMETA(DisplayName = "KEYICEBLOCK"),  //���h�A			18
	IS_MISSING_GIMMICK19 UMETA(DisplayName = "19"),   
	IS_PLAYER UMETA(DisplayName = "PLAYER"),	        //�v���C���[		20
	IS_GOAL_QUBE UMETA(DisplayName = "GOAL"),           //�S�[���L���[�u	21

	IS_NUM
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
