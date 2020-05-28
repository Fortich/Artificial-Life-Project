// Fill out your copyright notice in the Description page of Project Settings.


#include "PredatorPawn.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstance.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialExpressionMultiply.h"
#include "Materials/MaterialExpressionAppendVector.h"
#include "Materials/MaterialExpressionTextureCoordinate.h"
#include "Materials/MaterialExpressionScalarParameter.h"
#include "AssetRegistryModule.h"
#include <string>
#include <stdlib.h>

// Sets default values
APredatorPawn::APredatorPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	PrimaryActorTick.bCanEverTick = true;

	USkeletalMesh *usm = LoadObject<USkeletalMesh>(this, TEXT("SkeletalMesh'/Game/AnimalVarietyPack/DeerStagAndDoe/Meshes/SK_DeerDoe.SK_DeerDoe'"), NULL, LOAD_None, NULL);

	MyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("My Mesh"));
	MyMesh->SetSkeletalMesh(usm);
	MyMesh->SetupAttachment(RootComponent);
	RootComponent = MyMesh;

	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("My BoxComponent"));
	MyBoxComponent->InitBoxExtent(FVector(100, 100, 100));
	MyBoxComponent->SetCollisionProfileName("Trigger");
	MyBoxComponent->SetupAttachment(RootComponent);

	Material = CreateDefaultSubobject<UMaterial>(TEXT("OnMaterial"));

	UTexture2D* theTexture = APredatorPawn::LoadTexture(64, 0.35, 3.0, 3.0, 6.0, 6.0);

	UMaterialExpressionMultiply* Multiply = NewObject<UMaterialExpressionMultiply>(Material);
	Material->Expressions.Add(Multiply);
	UMaterialExpressionTextureSample* TextureExpression = NewObject<UMaterialExpressionTextureSample>(Material);
	TextureExpression->Texture = theTexture;
	TextureExpression->SamplerType = SAMPLERTYPE_Color;
	Material->Expressions.Add(TextureExpression);
	Material->BaseColor.Expression = TextureExpression;
	TextureExpression->Coordinates.Expression = Multiply;
	UMaterialExpressionAppendVector* Append = NewObject<UMaterialExpressionAppendVector>(Material);
	Material->Expressions.Add(Append);
	Multiply->B.Expression = Append;
	UMaterialExpressionTextureCoordinate* TexCoords = NewObject<UMaterialExpressionTextureCoordinate>(Material);
	Material->Expressions.Add(TexCoords);
	Multiply->A.Expression = TexCoords;
	UMaterialExpressionScalarParameter* XParam = NewObject<UMaterialExpressionScalarParameter>(Material);
	UMaterialExpressionScalarParameter* YParam = NewObject<UMaterialExpressionScalarParameter>(Material);
	Material->Expressions.Add(XParam);
	Material->Expressions.Add(YParam);
	XParam->ParameterName = "TextureRepeatX";
	XParam->DefaultValue = 1;
	YParam->ParameterName = "TextureRepeatY";
	YParam->DefaultValue = 1;
	Append->A.Expression = XParam;
	Append->B.Expression = YParam;
	Material->PreEditChange(NULL);
	Material->PostEditChange();
	MyMesh->SetMaterial(1, Material);
	MyMesh->SetMaterial(0, Material);
}

bool APredatorPawn::is_inside_ellipse(float h, float k, float x, float y, float a, float b) {
	return (((x - h) * (x - h)) / (a * a) + (((y - k) * (y - k)) / (b * b))) <= 1;
}

int APredatorPawn::inner(int i, int j, uint8* Pixels, int size, float inner_range_x, float inner_range_y) {
	int count = 0;
	for (int k = i-inner_range_x; k < i+inner_range_x; k++) {
		for (int l = j-inner_range_x; l < j+inner_range_y; l++) {
			int32 curPixelIndex = ((k * size) + l);
			if(Pixels[4 * curPixelIndex + 0] == 255 && APredatorPawn::is_inside_ellipse(i, j, k, l, inner_range_x, inner_range_y)){
				count++;
			}
		}
	}
	return count;
}

int APredatorPawn::outter(int i, int j, uint8* Pixels, int size, float inner_range_x, float inner_range_y, float outer_range_x, float outer_range_y) {
	int count = 0;
	for (int k = i - outer_range_x; k < i + outer_range_x; k++) {
		for (int l = j - outer_range_y; l < j + outer_range_y; l++) {
			int32 curPixelIndex = ((k * size) + l);
			if (Pixels[4 * curPixelIndex + 0] == 255 && APredatorPawn::is_inside_ellipse(i, j, k, l, outer_range_x, outer_range_y)) {
				if (!APredatorPawn::is_inside_ellipse(i, j, k, l, inner_range_x, inner_range_y)) {
					count++;
				}
			}
		}
	}
	return count;
}

UTexture2D* APredatorPawn::LoadTexture(int size, float ratio, float inner_range_x, float inner_range_y, float outer_range_x, float outer_range_y)
{	
	int TextureWidth = size;
	int TextureHeight = size;
	UTexture2D* NewTexture = NewObject<UTexture2D>();
	
	NewTexture->AddToRoot();				// This line prevents garbage collection of the texture
	NewTexture->PlatformData = new FTexturePlatformData();	// Then we initialize the PlatformData
	NewTexture->PlatformData->SizeX = TextureWidth;
	NewTexture->PlatformData->SizeY = TextureHeight;
	NewTexture->PlatformData->SetNumSlices(1);
	NewTexture->PlatformData->PixelFormat = EPixelFormat::PF_B8G8R8A8;
	
	uint8* Pixels = new uint8[TextureWidth * TextureHeight * 4];
	for (int32 y = 0; y < TextureHeight; y++)
	{
		for (int32 x = 0; x < TextureWidth; x++)
		{
			int32 curPixelIndex = ((y * TextureWidth) + x);
			if ((float)rand() / RAND_MAX > ratio) {
				Pixels[4 * curPixelIndex] = 255;
				Pixels[4 * curPixelIndex + 1] = 255;
				Pixels[4 * curPixelIndex + 2] = 255;
				Pixels[4 * curPixelIndex + 3] = 255;
			}
			else {
				Pixels[4 * curPixelIndex] = 0;
				Pixels[4 * curPixelIndex + 1] = 0;
				Pixels[4 * curPixelIndex + 2] = 0;
				Pixels[4 * curPixelIndex + 3] = 255;
			}
		}
	}
	uint8* PixelsC = new uint8[TextureWidth * TextureHeight * 4];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				int32 curPixelIndex = ((j * TextureWidth) + k);
				int activator = APredatorPawn::inner(j, k, Pixels, size, inner_range_x, inner_range_y);
				int inhibitor = APredatorPawn::outter(j, k, Pixels, size, inner_range_x, inner_range_y, outer_range_x, outer_range_y);
				if (activator > ratio * inhibitor) {
					PixelsC[4 * curPixelIndex] = 255;
					PixelsC[4 * curPixelIndex + 1] = 255;
					PixelsC[4 * curPixelIndex + 2] = 255;
					PixelsC[4 * curPixelIndex + 3] = 255;
				}
				else if (activator < ratio * inhibitor){
					PixelsC[4 * curPixelIndex] = 0;
					PixelsC[4 * curPixelIndex + 1] = 0;
					PixelsC[4 * curPixelIndex + 2] = 0;
					PixelsC[4 * curPixelIndex + 3] = 255;
				}
			}
		}
		FMemory::Memcpy(Pixels, PixelsC, sizeof(uint8) * TextureHeight * TextureWidth * 4);
	}
	// Allocate first mipmap.
	FTexture2DMipMap* Mip = new(NewTexture->PlatformData->Mips) FTexture2DMipMap();
	Mip->SizeX = TextureWidth;
	Mip->SizeY = TextureHeight;

	// Lock the texture so it can be modified
	Mip->BulkData.Lock(LOCK_READ_WRITE);
	uint8* TextureData = (uint8*)Mip->BulkData.Realloc(TextureWidth * TextureHeight * 4);
	FMemory::Memcpy(TextureData, Pixels, sizeof(uint8) * TextureHeight * TextureWidth * 4);
	Mip->BulkData.Unlock();
	
	NewTexture->Source.Init(TextureWidth, TextureHeight, 1, 1, ETextureSourceFormat::TSF_BGRA8, Pixels);
	
	
	NewTexture->UpdateResource();
	delete[] Pixels;	// Don't forget to free the memory here

	return NewTexture;
}

// Called when the game starts or when spawned
void APredatorPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APredatorPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector avgPos = { 0,0,0 };
	FVector sepPos = { 0,0,0 };
	FRotator avgAlig = { 0,0,0 };
	int n = 0;
	int m = 0;
	for (FConstPawnIterator Itr = GetWorld()->GetPawnIterator(); Itr; ++Itr)
	{
		if (Itr->Get()->IsA(APredatorPawn::StaticClass()))
		{
			if (FVector::Dist(Itr->Get()->GetActorLocation(), GetActorLocation()) <= 500) {
				avgPos += Itr->Get()->GetActorLocation();
				avgAlig += Itr->Get()->GetActorRotation();
				n++;
			}
			if (FVector::Dist(Itr->Get()->GetActorLocation(), GetActorLocation()) < 200) {
				sepPos += Itr->Get()->GetActorLocation();
				m++;
			}
		}
	}
	avgPos *= 1.0/n;
	sepPos *= 1.0/m;
	avgAlig *= 1.0/n;
	
	FRotator NewRotation = GetActorRotation();
	NewRotation += (DeltaTime * 0.5 * (avgAlig - NewRotation));
	SetActorRotation(NewRotation);
	

	FVector NewLocation = GetActorLocation();
	NewLocation += (DeltaTime * 0.001 * (avgPos - NewLocation)); //Cohesion
	NewLocation -= (DeltaTime * 0.01 * (sepPos - NewLocation)); //Separation
	NewLocation += (DeltaTime * 50 * GetActorForwardVector().RotateAngleAxis(90, {0,0,1})); //Going forward
	FVector deltaLocation = GetActorLocation() - NewLocation;
	SetActorLocation(NewLocation);
	SetActorRotation(deltaLocation.RotateAngleAxis(90, { 0,0,1 }).Rotation());
}

// Called to bind functionality to input
void APredatorPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

