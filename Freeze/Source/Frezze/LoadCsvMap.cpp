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
	csvFullData.ParseIntoArray(m_row, TEXT("\n"), true);
	//��̕����擾����
	m_row[0].ParseIntoArray(m_keyList, TEXT(","), true);
	
	////�L�[�ȊO�̗v�f��CSV�f�[�^�ɃL�[�Ɗ֘A���ēo�^
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
////CSV�f�[�^�̃L�[���擾����֐�
//TArray<FString> ALoadCsvMap::GetCsvDataByKey(FString key)
//{
//	return m_csvData[key];
//}
////�L�[���擾����֐�
//TArray<FString> ALoadCsvMap::GetKey()
//{
//	return m_keyList;
//}
//CSV��Ԃ��֐�
TArray<FString> ALoadCsvMap::GetCsv()
{
	return m_csvData;
}
//�n���ꂽ�l�̔z���Ԃ��֐�
FString ALoadCsvMap::GetCsvData(int i, int j)
{
	//�z��O�ɏo����0��Ԃ�
	if (i * m_keyList.Num() + j > m_csvData.Num())
	{
		return "0";
	}
   return m_csvData[i * m_keyList.Num() + j];
}
//���Ԃ�
TArray<FString> ALoadCsvMap::GetRow()
{
	return m_row;
}
//�������ꂽint�̐������I�u�W�F�N�g�^�C�v�ɕϊ�����֐�
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


