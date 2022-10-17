// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerClass.generated.h"

UCLASS()
class UNREAL_LAIKA_API APlayerClass : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerClass();

	UPROPERTY(EditAnywhere, Category = "Components")
	class UStaticMeshComponent* PlayerMesh;

	UPROPERTY(EditAnywhere, Category = "Components")
	class UCameraComponent* Camera;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/// <summary>
	/// Movement for player forwards or backwards
	/// </summary>
	/// <param name="Value"></param>
	void MoveForward(float Value);
	/// <summary>
	/// Movement for player left or right
	/// </summary>
	/// <param name="Value"></param>
	void MoveRight(float Value);
	/// <summary>
	/// Allows player to turn
	/// </summary>
	/// <param name="Value"></param>
	void Turn(float Value);
	/// <summary>
	/// Allows player to look up
	/// </summary>
	/// <param name="Value"></param>
	void LookUp(float Value);

	class UFloatingPawnMovement* FloatingPawnMovement;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};