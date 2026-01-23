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

	StartLocation = GetActorLocation();

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
	DistanceMoved = FVector::Dist(StartLocation, GetActorLocation()); // Simply measures the distance between two given identifiers

	// If the platform has moved a specified distance, it will swap direction
	if (DistanceMoved >= MaxDistance) 
	{
    	FVector MoveDirection = PlatformVelocity.GetSafeNormal();
    	FVector NewStartLocation = StartLocation + MoveDirection * MaxDistance;

    	SetActorLocation(NewStartLocation);
    	StartLocation = NewStartLocation;
    	
		PlatformVelocity = -PlatformVelocity;
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime); //Multiplying PlatformVelocity by DeltaTime keeps the movement framerate independent so that it will move the same speed at different FPS
		SetActorLocation(CurrentLocation);
	}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	// Rotates the platform
	FRotator RotationToAdd = PlatformRotation * DeltaTime;
	AddActorLocalRotation(RotationToAdd);
}
