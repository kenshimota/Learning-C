//es este esplica que una vriable externa y interna pueden tener un mismo nombre y no un mismo valor
#include <iostream>

/* Esto hace que pueda funcionar las funciones de c++ que estan ubicadas en
libreria c++config.h */
using namespace std;

int strlen(char c[]){
	int i = 0;

	while(c[i] != '\0')
		i++;

	return i;
}

/* -- Esta es la funcion principal -- */
int main(){

	char name[40];// esta variable llevara como valor el nombre de la persona

	/* Aqui haremos un ciclo infinitivo controlado */
	while(1){

		cout << "Ingresa tu nombre: ";
		cin >> (name);

		//solo si el nombre tiene tres letras es posible de lo contrario no sale del ciclo
		if(strlen(name) >= 3)
			break;
		else
			cout << "Ingrese un nombre valido..." << endl;
	}
}
