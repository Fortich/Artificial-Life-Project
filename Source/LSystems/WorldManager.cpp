// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldManager.h"
#include <stdlib.h>
#include "plant.h"
#include "PredatorPawn.h"
#include "PredatorPredator.h"
#include "Engine/World.h"

float time = 0;
float time1 = 0;
float time2 = 0;
float time3 = 0;
float time4 = 0;

Aplant* plant;
int size = 25;
std::vector<std::vector<Aplant*>> plants(size, std::vector<Aplant*>(size));
std::vector<APredatorPredator*> predators;
std::vector<APredatorPawn*> preys;
// Sets default values
AWorldManager::AWorldManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldManager::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			plants[i][j] = GetWorld()->SpawnActor<Aplant>();
			plants[i][j]->setColor(FColor::Black);
			plants[i][j]->setSize(0);
			plants[i][j]->setLocation({ ((float)i)*380 - 4500, ((float)j) * 380 - 4500, 0});
		}
	}

	for (int i = 0; i < size/10; i++) {
		APredatorPredator* predator = GetWorld()->SpawnActor<APredatorPredator>();
		predator->SetActorLocation({ ((float)(rand()%size)) * 250 - 4500, ((float)(rand() % size)) * 250 - 4500, 0 });
		predators.push_back(predator);
	}
	for (int i = 0; i < 1; i++) {
		APredatorPawn* prey = GetWorld()->SpawnActor<APredatorPawn>();
		//prey->SetActorLocation({ ((float)(rand() % size)) * 250 - 4500, ((float)(rand() % size)) * 250 - 4500, 0 });
		preys.push_back(prey);
	}
}

bool isCorrect() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (plants[i][j]->getSize() > 3) {
				return false;
			}
		}
	}
	return true;
}

void correct() {
	while (!isCorrect()) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (plants[i][j]->getSize() > 3) {
					plants[i][j]->setSize(0);
					plants[(i - 1) % size][j]->setSize(plants[(i - 1) % size][j]->getSize() + 1);
					plants[(i + 1) % size][j]->setSize(plants[(i + 1) % size][j]->getSize() + 1);
					plants[i][(j - 1)%size]->setSize(plants[i][(j - 1) % size]->getSize() + 1);
					plants[i][(j + 1)%size]->setSize(plants[i][(j + 1) % size]->getSize() + 1);
				}
			}
		}
	}
}

// Called every frame
void AWorldManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	time += DeltaTime;
	time1 += DeltaTime;
	time2 += DeltaTime;
	time3 += DeltaTime;
	time4 += DeltaTime;
	if (time > 1) {


		time = 0;
	}
	if (time1 > 5) {
		plants[size - 7][size - 7]->setSize(plants[size - 7][size - 7]->getSize() + 1);
		correct();
		time1 = 0;
	}
	if (time2 > 10) {
		plants[7][7]->setSize(plants[7][7]->getSize() + 1);
		correct();
		time2 = 0;
	}
	if (time3 > 15) {
		plants[7][size-7]->setSize(plants[7][size-7]->getSize() + 1);
		correct();
		time3 = 0;
	}
	if (time4 > 10) {
		plants[size - 7][7]->setSize(plants[size - 7][7]->getSize() + 1);
		correct();
		time4 = 0;
	}
}

