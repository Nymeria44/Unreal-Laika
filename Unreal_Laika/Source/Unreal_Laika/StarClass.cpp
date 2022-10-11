// Fill out your copyright notice in the Description page of Project Settings.


#include "StarClass.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AStarClass::AStarClass()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StarMesh = CreateDefaultSubobject<UStaticMeshComponent>("StarMesh");

}

// Called when the game starts or when spawned
void AStarClass::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AStarClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}