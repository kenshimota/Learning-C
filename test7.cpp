//es este esplica que una vriable externa y interna pueden tener un mismo nombre y no un mismo valor
#include <iostream>

using namespace std;

#ifndef _CONST
#define _CONST

namespace test{

	int getNumberInterger(int *d){

		cout << "Ingrese un numero entero";
		cin >> *d;
	} 
}

#endif

using namespace test;

//bueno esto es una prueba
int main(){

	int p = 0;

	getNumberInterger(&p);

	cout << "el valor de p es: (" << p << ")" << endl;
	system("pause");
}