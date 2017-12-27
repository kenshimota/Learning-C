#include <iostream>

using namespace std;

// clase sobre la prueba de static en una clase
class testOfStatic{

	//atributos privados de nuestra prueba sobre los static
	private:

		static int size_num1;
		static int *num1;

		int size_num2;
		int *num2;

	//metodos publicos que nos permitiran acceder a este medios privados
	public:
		testOfStatic(){
			this->num1 = new int;
			this->num2 = new int;
		}

		//funcion que otorgara los valores a los atributos
		int setValues(int values[]){

			for(int i = 0; values[i] != 0 ; i++){
				if(i%2 == 0){
					this->size_num1++;
					this->num1[i] = values[i];
				}
				else{
					this->size_num2++;
					this->num2[i] = values[i];
				}
			}

			return 0;
		}

		//funcion encargada de imprimir los valores estatico
		void printValuesStatic(){
			cout << "Mostrando los valores estaticos: ";
			for(int i = 0; i < this->size_num1; i++){
				cout << i << " -> " << this->num1[i] << endl;
			}
			cout << "Fin de los valores estaticos..." << endl;
		}

		//funcion que se encargar de imprimir los valores no estaticos
		void printValuesNotStatic(){
			int i;
			cout << "Mostrando los valores no estaticos: ";
			for(i = 0; i < this->size_num2 ; i++){
				cout << i << " -> " << this->num2[i] << endl;
			}
			cout << "Fin de los valores no estaticos..." << endl;
		}
};

int main(){

	// Primera instancia
	testOfStatic instance;

	//segunda intancia
	testOfStatic instance2;

	int test[] = {1,2,3,4};

	// verifica si pudo obtener los valores
	if(instance.setValues(test) != 0){
		cout << "Los valores fueron ingresados correctamente..." << endl;
	}
	else{
		cout << "Ocurrio un error no se pudo introducir valores..." << endl;
	}

	//imprimira los valores no estaticos relacionados en la primera instancia
	instance.printValuesNotStatic();

	//y ahora en la segunda instancia, pero no hay nada en esta instancia
	instance.printValuesNotStatic();

	/* Mostraremos que los valores estaticos son iguales para las dos instancia ya
	que los valores estaticos no cambian sino que siemore son iguales */
	instance.printValuesStatic();
	cout << endl << "Ahora en la segunda instacia" << endl << endl;
	instance2.printValuesStatic();
	return 0;
}
