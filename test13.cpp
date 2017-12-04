#include <iostream> //libreria principal de c++

using namespace std;

/* -- Debo estudiar la matematica del computador para poder entender esto mejor -- */

//funcion principal
int main(){

	int x = 3;

	//rodo 1 bites a la izquierda

	cout << "Valor actual de x: " << (x << 1) << endl;

	x <<= 2;

	cout << "El valor actual de x: " << x << endl;

	system("pause");
}