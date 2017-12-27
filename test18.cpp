#include <iostream>

using namespace std;

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
	for (int n : numbers)
			cout << n << " - ";
	system("pause");
}