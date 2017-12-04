//es este esplica que una vriable externa y interna pueden tener un mismo nombre y no un mismo valor
#include <iostream>

//cabezera donde declare mis variables principales
#include "header.h"

/* Esto hace que pueda funcionar las funciones de c++ que estan ubicadas en
libreria c++config.h */
using namespace std;

double getHeightInitial(){
	
	double height = 0;

	while(1){

		cout << "Ingrese La altura incial del objeto : ";
		cin >> height;

		if(height > 0)
			return height;
		else
			cout << "Ingrese una altura valiada por favor..." << endl;
	}
}

// Returns height from ground after "seconds" seconds
double calculateHeight(double initialHeight, int seconds)
{
	// Using formula: [ s = u * t + (a * t^2) / 2 ]
	double distanceFallen = (myConstants::gravity * (seconds * seconds)) / 2;
	double currentHeight = initialHeight - distanceFallen;
 
	return currentHeight;
}

void print_study(double height, int seconds){

	cout << "El objeto esta a una altura de " << height
	<< " en los segundos "  << seconds << endl;
}

void printCalculatorHeight(double heightObject,int seconds){

	double height_talk = calculateHeight(heightObject, seconds);
	print_study(height_talk, seconds);
}

int main(){

	int seconds = 0;
	double heightObject = getHeightInitial();
	
	for(seconds = 0; seconds < 5; seconds++){
		
		printCalculatorHeight(heightObject, seconds);
	}

	system("pause");
}