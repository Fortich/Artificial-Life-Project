// Fill out your copyright notice in the Description page of Project Settings.


#include "plant.h"
#include "DrawDebugHelpers.h"
#include "Math/RandomStream.h"
using namespace std;

string XRULE = "+[[Y]]-F[-FY]+Y";
string YRULE = "A[[X]]BF[BFX]AX";
string FRULE = "F";

string next_step_fractal_plant(string s) {
	
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
		else if (s[i] == 'F') {
			for (j = 0; j < FRULE.size(); j++) {
				new_string.push_back(FRULE[j]);
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
	FRandomStream frs = FRandomStream::FRandomStream();
	frs.GenerateNewSeed();
	srand(frs.GetCurrentSeed());
	vector<vector<double>> intersections;
	vector<vector<double>> intersections_rotation;
	vector<vector<double>> lines;
	vector<double> point{ 0.0,0.0,0.0 };
	vector<double> rotation{ 0.0,0.0,0.0 };
	double angle = 0.26;
	string plant = fractal_plant(n);
	int i = 0;
	for (i = 0; i < plant.size(); i++) {
		if (plant[i] != 'F') {
			i--;
			break;
		}
	}
	for (; i < plant.size(); i++) {
		int count = 0;
		if (plant[i] == 'F') {
			for (i = i; i < plant.size(); i++) {
				if (plant[i] == 'F') {
					count++;
				}
				else {
					i--;
					break;
				}
			}
		}
		if (plant[i] == 'F') {
			vector<double> new_point{ point[0] + sin(rotation[0])*cos(rotation[1]) * 2 * count, point[1] + sin(rotation[0]) * sin(rotation[1])*2*count, point[2] + 2*count};
			vector<double> line{ point[0], point[1], point[2], new_point[0], new_point[1], new_point[2] };
			lines.push_back(line);
			point = new_point;
		}
		else if (plant[i] == '[') {
			vector<double> intersection{ point[0], point[1], point[2]};
			vector<double> intersection_rotation{ rotation[0], rotation[1], rotation[2] };
			intersections.push_back(intersection);
			intersections_rotation.push_back(intersection_rotation);
		}
		else if (plant[i] == ']') {
			point = intersections.back();
			rotation = intersections_rotation.back();
			intersections.pop_back();
			intersections_rotation.pop_back();
		}
		else if (plant[i] == '+' || plant[i] == '-') {
			rotation[0] += (angle + ((rand() % 100) / 50) * angle) * ((rand() % 2) * 2)-1;
		}
		else if (plant[i] == 'A' || plant[i] == 'B') {
			rotation[1] += (angle + ((rand() % 100) / 50) * angle) * ((rand() % 2) * 2) - 1;
		}
	}
	return lines;
}

// Sets default values
Aplant::Aplant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	//RootComponent = Mesh;
	color = FColor::MakeRandomColor();
	size_tree = 0;
	tree = lines(size_tree);
	location = { 0,0,0 };
}

// Called when the game starts or when spawned
void Aplant::BeginPlay()
{
	Super::BeginPlay();
}

void Aplant::draw() 
{
	
}

void Aplant::setLocation(FVector locationin)
{
	location = locationin;
	this->SetActorLocation(locationin);
}

FVector Aplant::getLocation() {
	return location;
}

void Aplant::setColor(FColor colorin)
{
	color = colorin;
}

void Aplant::setSize(int sizein)
{
	tree = lines(sizein);
	size_tree = sizein;
}

int Aplant::getSize()
{
	return size_tree;
}


// Called every frame
void Aplant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (int i = 0; i < tree.size(); i++) {
		FVector start = location + 10 * FVector(tree[i][0], tree[i][1], tree[i][2]);;
		FVector end = location + 10 * FVector(tree[i][3], tree[i][4], tree[i][5]);
		start.Z -= 25;
		end.Z -= 25;
		FColor c = FColor(color);
		c.G += i*2 + 10;
		DrawDebugLine(GetWorld(), start, end, c, false, -1.0F, (uint8)'\000', 5+1.0/i);
	}

}
