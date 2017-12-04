//es este esplica que una vriable externa y interna pueden tener un mismo nombre y no un mismo valor
#include <iostream>

using namespace std;

namespace test{

	/* -- Funcion encargada envaluar los valores de los numeros 1 y 2 cual de los dos es mayor -- */
	int check_value_up(int num1,  int num2){

		return (num1 > num2 ? num1 : num2);
	}
}


int main(){

	int x = 3;

	int y = 4;

	cout << "El valor de X es: " << x << " y el valor de Y es: " << y
	<< " El numero mayor es: " <<  test::check_value_up(x, y) << endl;
	system("pause");
}