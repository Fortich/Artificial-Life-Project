// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <vector>
#include <string>
#include <math.h>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "plant.generated.h"

UCLASS()
class LSYSTEMS_API Aplant : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aplant();
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//UStaticMeshComponent* Mesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
