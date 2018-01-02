#include <iostream>

using namespace std;

/* funcion que se encargara de obtener el numero y verificar que el usuario introduzca un numero en el input y no otro 
caracter */
int get_num(){
	
	while(true){
		int num;
		cin >> num;
		if(cin.fail())
			cout << "El valor ingresado no es numerico..." << endl << "ingrese un numero: ";
		else
			return num;
	}
}

int main(){

	int nElement;

	cout << "Ingrese el numero de elementos a introducir: ";
	nElement = get_num();

	int *numbers = new int[nElement];

	for (int i = 0; i < nElement; ++i)
	{
		cout << "Ingrese un valor en la posicion ("<< i <<") : -> ";
		numbers[i] = get_num();
	}

	cout << "los valores ingresados fueron -> ";
/* este ciclo es un foeacrh que te permite pasar los valores de un array a otro elemento en  cuanto lo necesitas para 
el manejo de sus valores en determinadas soluciones*/
	for (int n : numbers)
			cout << n << " - ";
	delete[] numbers;
        system("pause");

}
