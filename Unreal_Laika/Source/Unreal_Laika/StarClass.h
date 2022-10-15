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
		int ID;
	//English name
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		FText ProperName;
	//Lumonoisty of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float Luminosity;
	//Spectral type of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		FText Spect;
	//WHAT IS THIS
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float ci;
	//What star number is it within the system?
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		int comp;
	//Are there multiple stars within the system?
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		int CompPrimary;
	//Position within the galaxy (sun is 0,0,0)
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float PosX;
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float PosY;
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float PosZ;
	//Absolute Magnitude (Fixed Brightness)
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float AbsMag;
	//WHAT IS THIS
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		FText StarSpectralTypeLetter;
	//WHAT IS THIS
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		int StarSpectralTypeNumber;
	//WHAT IS THIS
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		FText StarHRType;
	//Mass of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float Mass;
	//Tempature of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float Temperature;
	//Radius of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float Radius;
	//R,G,B of the star
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float Red;
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float Green;
	UPROPERTY(VisibleAnywhere, Category = "Characteristic")
		float Blue;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};