// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "GameFramework/Actor.h"
#include "Tank.h"
#include "BattleTank.h"
// Depends on movement component via pathfinding system

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

// called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());
<<<<<<< HEAD
		if (ensure (PlayerTank))
=======

		if (PlayerTank)
>>>>>>> 27c0950701dc780e876b23ea03b0c34452f352d9
		{
			//Move towards the player
			MoveToActor(PlayerTank, AcceptanceRadius); // TODO check radius is in cm

			// Aim towards to player
			ControlledTank->AimAt(PlayerTank->GetActorLocation());
		
			ControlledTank->Fire(); // TODO limit firing rate
		}
}

