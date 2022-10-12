// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StarClass.generated.h"

UCLASS()
class UNREAL_LAIKA_API AStarClass : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStarClass();

	//Declaring Star Mesh
	UPROPERTY(EditAnywhere, Category = "Components")
	class UStaticMeshComponent* StarMesh;
	
	/********************************************************************************
	* PROPERTIES OF THE STAR
	********************************************************************************/
	//ID number of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	int HD;
	//english name
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	FText properName;
	//lumonoisty of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	float lum;
	//tempature of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	float temp;
	//spectral type of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	float spect;
	//Are there multiple stars within the system?
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	int comp_primary;
	// What star number is it within the system?
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	int comp;
	//Position within the galaxy (sun is 0,0,0)
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	int posX;
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	int posY;
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
	int PosZ;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};