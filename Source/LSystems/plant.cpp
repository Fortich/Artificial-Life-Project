// Fill out your copyright notice in the Description page of Project Settings.


#include "plant.h"
#include "DrawDebugHelpers.h"

using namespace std;

constexpr double G25 = 1.41372;

// Sets default values
Aplant::Aplant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	//RootComponent = Mesh;
}

string next_step_fractal_plant(string s){
	string XRULE = "X+YF+";
	string YRULE = "-FX-Y";
	vector<char> new_string;
	int i, j;
	for (i = 0; i < s.size(); i++) {
		if (s[i] == 'X') {
			for (j = 0; j < XRULE.size(); j++) {
				new_string.push_back(XRULE[j]);
			}
		}
		else if (s[i] == 'Y') {
			for (j = 0; j < YRULE.size(); j++) {
				new_string.push_back(YRULE[j]);
			}
		}
		else {
			new_string.push_back(s[i]);
		}
	}
	string next_step(new_string.begin(), new_string.end());
	return next_step;
};

string fractal_plant(int n) {
	string current = "FX";
	for (int i = 0; i < n; i++) {
		current = next_step_fractal_plant(current);
	}
	return current;
}

vector<vector<double>> lines(int n) {
	vector<vector<double>> intersections;
	vector<vector<double>> lines;
	vector<double> point{ 0.0,0.0 };
	double angle = 1.5708;
	string plant = fractal_plant(n);
	for (int i = 0; i < plant.size(); i++) {
		if (plant[i] == 'F') {
			vector<double> new_point{ point [0] + cos(angle), point[1] + sin(angle) };
			vector<double> line{ point[0], point[1], new_point[0], new_point[1] };
			lines.push_back(line);
			point = new_point;
		}
		else if (plant[i] == '+') {
			angle += G25;
		}
		else if (plant[i] == '-') {
			angle -= G25;
		}
		else if (plant[i] == '[') {
			vector<double> intersection{ point[0], point[1], angle};
			intersections.push_back(intersection);
		}
		else if (plant[i] == ']') {
			vector<double> intersection = intersections.back();
			point[0] = intersection[0];
			point[1] = intersection[1];
			angle = intersection[2];
			intersections.pop_back();
		}
	}
	return lines;
}

// Called when the game starts or when spawned
void Aplant::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void Aplant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	vector<vector<double>> tree = lines(10);
	for (int i = 0; i < tree.size(); i++) {
		FVector start = GetActorLocation() + 10*FVector(tree[i][0], 0, tree[i][1]);;
		FVector end = GetActorLocation() + 10*FVector(tree[i][2], 0, tree[i][3]);
		DrawDebugLine(GetWorld(), start, end, FColor::Black, false, (-1.0F), (uint8)'\000', (1));
	}
}
