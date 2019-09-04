// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockType.h"
//°‚Ìí—Ş‚Ì—ñ‹“Œ^

// Sets default values
ABlockType::ABlockType()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlockType::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlockType::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

