// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerClass.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
APlayerClass::APlayerClass()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");

	PlayerMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>("CubeMesh");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
}

// Called when the game starts or when spawned
void APlayerClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerClass::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerClass::MoveRight);

}

void APlayerClass::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);
}

void APlayerClass::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
}