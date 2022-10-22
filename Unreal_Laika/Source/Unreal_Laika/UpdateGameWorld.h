// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UpdateGameWorld.generated.h"

UCLASS()
class UNREAL_LAIKA_API AUpdateGameWorld : public AActor
{
	GENERATED_BODY()

	//Creating Datatable definition
	UPROPERTY(EditAnywhere, Category = "Datatable")
		class UDataTable* StarDataTable;
	
public:	
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

	/// <summary>
	/// Pulls data from database
	/// </summary>
	void PullData(int32 ID);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
