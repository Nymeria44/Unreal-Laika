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

	UPROPERTY(EditAnywhere, Category = "Components")
		class UStaticMeshComponent* StarMesh;

	//Properites of Star


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};