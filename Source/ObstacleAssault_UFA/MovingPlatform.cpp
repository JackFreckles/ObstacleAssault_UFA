// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	int NumberOfApples = 100;
	UE_LOG(LogTemp, Display, TEXT("Number of apples: %d"), NumberOfApples);

	float MyFloatNumber = 69.0f;
	UE_LOG(LogTemp, Warning, TEXT("Number of floating numbers: %f"), MyFloatNumber);

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

