// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <bitset>

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Animation/AnimSequence.h"
#include "PredatorPawn.generated.h"


UCLASS()
class LSYSTEMS_API APredatorPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APredatorPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere)
		class USkeletalMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
		class UMaterial* Material;

	UPROPERTY()
		class UBoxComponent* MyBoxComponent;


	//UFUNCTION()
	//	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void SetScale();
	void SetTexture();
	UTexture2D* theTexture;
	UTexture2D* LoadTexture(int size, float ratio, float inner_range_x, float inner_range_y, float outer_range_x, float outer_range_y);
	UAnimSequence* walking_anim;
	UAnimSequence* eating_anim;
	UAnimSequence* dying_anim;
	UAnimSequence* attacked_anim;
	bool is_inside_ellipse(float h, float k, float x, float y, float a, float b);
	int inner(int i, int j, uint8* Pixels, int size, float inner_range_x, float inner_range_y);
	int outter(int i, int j, uint8* Pixels, int size, float inner_range_x, float inner_range_y, float outer_range_x, float outer_range_y);
	void Attacked(int energy);
	bool IsAlive();
	int energy;
	bool alive;
	bool eating;
	bool attacked;
	float time;
	float dtime;
	float etime;
	float atime;
	std::bitset<256> GetGeneticCode();
	void SetGeneticCode(std::bitset<256> code);
	float gen_ratio;
	float gen_irx;
	float gen_iry;
	float gen_orx;
	float gen_ory;
	float gen_sx;
	float gen_sy;
	float gen_sz;
	
};
