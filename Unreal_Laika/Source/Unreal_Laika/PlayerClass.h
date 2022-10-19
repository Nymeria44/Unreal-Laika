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

	//Delcaring Mesh which is used for the player
	UPROPERTY(EditAnywhere, Category = "Components")
	class UStaticMeshComponent* PlayerMesh;

	//Declaring Camera controlled by the camera
	UPROPERTY(EditAnywhere, Category = "Components")
	class UCameraComponent* Camera;

	//Declaring Camera Arm to avoid clipping into objects
	UPROPERTY(EditAnywhere, Category = "Components")
	class USpringArmComponent* CameraArm;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	class UFloatingPawnMovement* FloatingPawnMovement;

/********************************************************************************
* MOVEMENT AND CAMERA MOVEMENT FUNCTION DECLARATIONS
********************************************************************************/
	/// <summary>
	/// Movement for player forwards or backwards
	/// </summary>
	/// <param name="Value"></param>
	void MoveForward(float Value);	
	/// <summary>
	/// Movement for player forwards or backwards
	/// </summary>
	/// <param name="Value"></param>
	void MoveUp(float Value);
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

/********************************************************************************
* OTHER PLAYER CONTROLLED ACTION FUNCTION DECLARATIONS
********************************************************************************/
	
	void SelectSol();
	void SelectRandomStar();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};