// Fill out your copyright notice in the Description page of Project Settings.


#include "Predator.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
APredator::APredator()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APredator::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APredator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APredator::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

