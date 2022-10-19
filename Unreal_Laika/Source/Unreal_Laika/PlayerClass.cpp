// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerClass.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
APlayerClass::APlayerClass()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Constructing movement
	FloatingPawnMovement = CreateAbstractDefaultSubobject<UFloatingPawnMovement>("PawnMovement");
	
	//Constructing mesh
	PlayerMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>("PlayerMesh");
	
	//Constructing Camera Arm
	CameraArm = CreateAbstractDefaultSubobject<USpringArmComponent>("CameraSpringArm");
	CameraArm->SetupAttachment(PlayerMesh);
	CameraArm->TargetArmLength = 500.f;

	//Constructing Camera and setting location
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(CameraArm);

	SetRootComponent(PlayerMesh);

	//Telling constructor to use Conroller ratation
	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = true;
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

	//Binding Keys for Movement and Camera Controls
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerClass::MoveForward);
	PlayerInputComponent->BindAxis("MoveUp", this, &APlayerClass::MoveUp);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerClass::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APlayerClass::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerClass::LookUp);

	//Binding Keys for Other Functions
	InputComponent->BindAction("SelectSol", IE_Pressed, this, &APlayerClass::SelectSol);
	InputComponent->BindAction("SelectRandomStar", IE_Pressed, this, &APlayerClass::SelectRandomStar);
}

/********************************************************************************
* MOVEMENT AND CAMERA MOVEMENT FUNCTIONS
********************************************************************************/
void APlayerClass::MoveForward(float Value)
{
	FloatingPawnMovement->AddInputVector(GetActorForwardVector() * Value);
}

void APlayerClass::MoveUp(float Value)
{
	FloatingPawnMovement->AddInputVector(GetActorUpVector() * Value);
}

void APlayerClass::MoveRight(float Value)
{
	FloatingPawnMovement->AddInputVector(GetActorRightVector() * Value);
}

void APlayerClass::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void APlayerClass::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

/********************************************************************************
* OTHER PLAYER CONTROLLED ACTION FUNCTIONS
********************************************************************************/
void APlayerClass::SelectSol()
{
	UE_LOG(LogTemp, Warning, TEXT("This is going to Sol"));
}

void APlayerClass::SelectRandomStar()
{
	UE_LOG(LogTemp, Warning, TEXT("This is going to be a random star"));
}