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
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	int32 ID;
	//English name
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	FString ProperName;
	//Lumonoisty of the star
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float Luminosity;
	//Spectral type of the star
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	FString Spect;
	//WHAT IS THIS
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float ci;
	//What star number is it within the system?
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	int32 comp;
	//Are there multiple stars within the system?
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	int32 CompPrimary;
	//Position within the galaxy (sun is 0,0,0)
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float PosX;
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float PosY;
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float PosZ;
	//Absolute Magnitude (Fixed Brightness)
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float AbsMag;
	//WHAT IS THIS
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	FString StarSpectralTypeLetter;
	//WHAT IS THIS
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	int32 StarSpectralTypeNumber;
	//WHAT IS THIS
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	FString StarHRType;
	//Mass of the star
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float Mass;
	//Tempature of the star
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float Temperature;
	//Radius of the star
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float Radius;
	//R,G,B of the star
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float Red;
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float Green;
	UPROPERTY(EditAnywhere, Category = "Characteristic")
	float Blue;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};