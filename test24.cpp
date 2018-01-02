#include <iostream>

using namespace std;

/* Clase de pprueba para para variable estaticas */
class testOfStatic{
	//estableci las variables en privada para no se pueda acceder directamente a ellas
	private:
		int atributePrivate;
		static int atributePrivateStatic;
	public:

		/* Este constructor iguala las variable a 0 para depurar sus valores */
		testOfStatic(){
			this->atributePrivate = 0;
			this->atributePrivateStatic = 0;
		}

		void getValue(){
			cout << "Este es el valor de la varible no estatica: "  << this->atributePrivate << endl
			<< "Este es el valor de la variable estatica: " << this->atributePrivateStatic << endl;
		}

		void setValue(){
			cout << "Ingresa valor de la no estatica: ";
			cin >> this->atributePrivate;
			cout << "Ingresa valor de la estatica: ";
			cin >> this->atributePrivateStatic;
		}
};

void print_options(){
	cout << "1) Insertar valor a las variables " << endl
	<< "2) Mostrar los valores de las variables " << endl
	<< "3) Salir del programa " << endl;
}

/* -- Main -- */
int main(){

	int option = 0;

	testOfStatic clssTest;
	testOfStatic class2;

	while(1){

		print_options();

		switch(option){
			case 1:
				clssTest.setValue();
			break;
			case 2:
				cout << " ---- Esto es desde otro objeto de la clase testOfStatic... ---- " << endl;
				class2.getValue();
				cout << " ---- Esto es desde la clase interna en la varible clssTest... ---- " << endl;
				clssTest.getValue();
			break;
			case 3:
				return 0;
			break;
			default:
				cout << "No ha seleccionado una opcion valida..." << endl;
			break;
		}
	}
}
