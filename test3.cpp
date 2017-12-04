//es este esplica que una vriable externa y interna pueden tener un mismo nombre y no un mismo valor
#include <iostream>

/* Esto hace que pueda funcionar las funciones de c++ que estan ubicadas en
libreria c++config.h */
using namespace std;

int main()
{
	char name[40];

	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "You is " << name << endl;
	system("pause");
}
