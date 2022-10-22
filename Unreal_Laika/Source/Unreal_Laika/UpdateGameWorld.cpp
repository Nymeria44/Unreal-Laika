// Fill out your copyright notice in the Description page of Project Settings.


#include "UpdateGameWorld.h"
#include "Engine/DataTable.h"

// Sets default values
AUpdateGameWorld::AUpdateGameWorld()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Load 'StarDatabase' Datatable
	static ConstructorHelpers::FObjectFinder<UDataTable> StarDataBaseObject(TEXT("DataTable'/Game/Database/StarDatabase.StarDatabase'"));
	if (StarDataBaseObject.Succeeded())
	{
		StarDataTable = StarDataBaseObject.Object;
	}

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



/********************************************************************************
* PLAYER ISSUED FUNCTIONS
********************************************************************************/
void AUpdateGameWorld::SelectSol()
{

}

void AUpdateGameWorld::SelectRandomStar()
{
	UE_LOG(LogTemp, Warning, TEXT("This is going to be a random star"));
}

/********************************************************************************
* DATATABLE FUNCTIONS
********************************************************************************/
void AUpdateGameWorld::PullData(int32 ID)
{
	
}
