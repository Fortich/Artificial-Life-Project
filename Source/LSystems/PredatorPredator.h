// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PredatorPredator.generated.h"

UCLASS()
class LSYSTEMS_API APredatorPredator : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APredatorPredator();

	UPROPERTY(EditAnywhere)
		class USkeletalMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
		class UMaterial* Material;

	UPROPERTY()
		class UBoxComponent* MyBoxComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UTexture2D* theTexture;
	UTexture2D* LoadTexture(int size, float ratio, float inner_range_x, float inner_range_y, float outer_range_x, float outer_range_y);
	UAnimSequence* walking_anim;
	UAnimSequence* eating_anim;
	UAnimSequence* running_anim;
	UAnimSequence* dying_anim;
	bool is_inside_ellipse(float h, float k, float x, float y, float a, float b);
	int inner(int i, int j, uint8* Pixels, int size, float inner_range_x, float inner_range_y);
	int outter(int i, int j, uint8* Pixels, int size, float inner_range_x, float inner_range_y, float outer_range_x, float outer_range_y);
	int energy;
	bool alive;
	bool eating;
	float time;
	float dtime;
	float etime;

};
