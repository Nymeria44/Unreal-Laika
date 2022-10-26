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
	FStarInfoStruct* StarData = PullData(FName(TEXT("53")));
	SetStar(StarData);
}

void AUpdateGameWorld::SelectRandomStar()
{
	UE_LOG(LogTemp, Warning, TEXT("This is going to be a random star"));
}

/********************************************************************************
* DATATABLE FUNCTIONS
********************************************************************************/
FStarInfoStruct* AUpdateGameWorld::PullData(FName RowIndex)
{
	if (StarDataTable)
	{
		static const FString ContextString(TEXT("Star Data Context"));
		FStarInfoStruct* StarData = StarDataTable->FindRow<FStarInfoStruct>(RowIndex, ContextString, true);
		if (StarData)
		{
			return StarData;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Data Row was not successfully extracted"));
			return nullptr;
		}
	}
	else
	{
		return nullptr;
	}
}

void AUpdateGameWorld::SetStar(FStarInfoStruct* StarData)
{
	StarClass->ID = StarData->ID;
	StarClass->ProperName = StarData->ProperName;
	StarClass->Luminosity = StarData->Luminosity;
	StarClass->Spect = StarData->Spect;
	StarClass->ci = StarData->ci;
	StarClass->comp = StarData->comp;
	StarClass->CompPrimary = StarData->CompPrimary;
	StarClass->PosX = StarData->PosX;
	StarClass->PosY = StarData->PosY;
	StarClass->PosZ = StarData->PosZ;
	StarClass->AbsMag = StarData->AbsMag;
	StarClass->StarSpectralTypeLetter = StarData->StarSpectralTypeLetter;
	StarClass->StarSpectralTypeNumber = StarData->StarSpectralTypeNumber;
	StarClass->StarHRType = StarData->StarHRType;
	StarClass->Mass = StarData->Mass;
	StarClass->Radius = StarData->Radius;
	StarClass->Red = StarData->ColourVec.X;
	StarClass->Green = StarData->ColourVec.Y;
	StarClass->Blue = StarData->ColourVec.Z;
}
