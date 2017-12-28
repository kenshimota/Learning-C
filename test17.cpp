#include <iostream>

using namespace std;

int main()
{
	//declare el array llamado values
	int values[6] = {12,56,21,45,12,5}; 

	//el puntero tendra la direccion de el array y se posicionara deacuerdo a un aumento
	int *pointer = values;

	/* esto imprimira el espacio de memoria del array values */
	cout << "Space memory of values array: (" << values << ")" << endl;

	//imprimira la posicion 0 del array
	cout << "This is value position zero of pointer: (" << *pointer << ")" << endl;

	//apesar de que values es un array al poner * el tomara la posicion  0 como lo hacer *pointer osea el valor 12
	cout << "This is value position zero of pointer: (" << *values << ")" << endl << endl << endl;

	for (int i = 0; i < 6; ++i)
	{
		cout << "This is value position " << i << " of pointer: (" << *pointer << ")" << endl;
		(*pointer)++;
	}

	/* nota: jamas debes poner (*puntero)++ porque  solo imcrementaria el valor de la posicion 0 del array 
	 mas el puntero no pasaria a dar los valores de las demas posiciones  en cambio se hace *puntero++ */

	system("pause");
}
