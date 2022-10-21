// Fill out your copyright notice in the Description page of Project Settings.


#include "UpdateGameWorld.h"

// Sets default values
AUpdateGameWorld::AUpdateGameWorld()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUpdateGameWorld::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUpdateGameWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUpdateGameWorld::SelectSol()
{
	UE_LOG(LogTemp, Warning, TEXT("This is going to Sol"));
}

void AUpdateGameWorld::SelectRandomStar()
{
	UE_LOG(LogTemp, Warning, TEXT("This is going to be a random star"));
}
