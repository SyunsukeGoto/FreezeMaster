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
//CSV�t�@�C����ǂݍ��ފ֐�
void ALoadCsvMap::LoadCsvData(FString fileName)
{
	//�f�B���N�g�����擾
	FString directory = FPaths::GameContentDir();
	//�t�@�C����
	FString filePath = directory + fileName + ".csv";
	//�t�@�C�����擾����
	FString csvFullData;
	//�f�[�^������
	FFileHelper::LoadFileToString(csvFullData, *filePath);
	//�f�[�^���ɕ�������
	TArray<FString> row;
	csvFullData.ParseIntoArray(row, TEXT("\n"), true);
	//�L�[��o�^����
	row[0].ParseIntoArray(m_keyList, TEXT(","), true);
	for (int i = 0; i != m_keyList.Num(); i++)
	{
		m_csvData.Add(m_keyList[i]);
	}
	//�L�[�ȊO�̗v�f��CSV�f�[�^�ɃL�[�Ɗ֘A���ēo�^
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
//CSV�f�[�^�̃L�[���擾����֐�
TArray<FString> ALoadCsvMap::GetCsvDataByKey(FString key)
{
	return m_csvData[key];
}
//�L�[���擾����֐�
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


