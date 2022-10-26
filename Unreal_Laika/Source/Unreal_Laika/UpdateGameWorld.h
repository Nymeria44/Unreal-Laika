// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Engine/DataTable.h"
#include "Math/Vector.h"

#include "StarClass.h"

#include "UpdateGameWorld.generated.h"

/********************************************************************************
* DATA STRUCTURE USED IN DATATABLE
********************************************************************************/
USTRUCT(BlueprintType)
struct FStarInfoStruct : public FTableRowBase
{
	GENERATED_BODY()

	//ID number of the star
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 ID;
	//English name
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString ProperName;
	//Lumonoisty of the star
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Luminosity;
	//Spectral type of the star
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Spect;
	//WHAT IS THIS
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float ci;
	//What star number is it within the system?
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 comp;
	//Are there multiple stars within the system?
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 CompPrimary;
	//Position within the galaxy (sun is 0,0,0)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float PosX;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float PosY;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float PosZ;
	//Absolute Magnitude (Fixed Brightness)
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float AbsMag;
	//WHAT IS THIS
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString StarSpectralTypeLetter;
	//WHAT IS THIS
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 StarSpectralTypeNumber;
	//WHAT IS THIS
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString StarHRType;
	//Mass of the star
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Mass;
	//Tempature of the star
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Temperature;
	//Radius of the star
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float Radius;
	//R,G,B of the star
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FVector ColourVec;
};

UCLASS()
class UNREAL_LAIKA_API AUpdateGameWorld : public AActor
{
	GENERATED_BODY()

	//Creating Datatable definition
	UPROPERTY(EditAnywhere, Category = "Datatable")
		class UDataTable* StarDataTable;
	
public:	
	

	//Creating pointer to StarClass
	AStarClass* StarClass;

	// Sets default values for this actor's properties
	AUpdateGameWorld();

	/// <summary>
	/// Updates map so that the star is Sol.
	/// </summary>
	void SelectSol();

	/// <summary>
	/// Selects random star from data base
	/// </summary>
	void SelectRandomStar();
	/* store variable of the star when it is selected */

	/// <summary>
	/// Pulls data from database
	/// </summary>
	FStarInfoStruct* PullData(FName RowIndex);

	/// <summary>
	/// Updates Star class with information from Struct
	/// </summary>
	/// <param name="StarData"></param>
	void SetStar(FStarInfoStruct* StarData);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
