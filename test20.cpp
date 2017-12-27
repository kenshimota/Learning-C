#include <iostream>

using namespace std;

class faction{
	private:
		
		int numerator;
		int denominator;
	
	public:
		//constructor por defecto de nuestra clase
		faction(){
			this->numerator = 0;
			this->denominator = 1; //use 1 porque todo numero esta dividido entre 1
		}
		
		// funcion encargada de obtener los valores nn->(numero numerador), nd -> (numero denominador)...
		void getValue(int nn, int nd){
			this->numerator = nn;
			this->denominator = nd;
		}
		
		/* -- Funcion encargada de imrprimit los el resultado de la division -- */
		void print_result(){
			
			cout << "El resultado de (" << this->numerator << " / " 
			<< this->denominator << ") es: " 
			<< this->getResultOfFaction() << endl;
		}
		
		//funcion encargada de evaluar para ver si es posible y retornar el valor
		int getResultOfFaction(){
			if(this->denominator != 0)
				return char (this->numerator/ this->denominator);
			else{
				cout << "No es posible dividir entre cero..." << endl;
				system("pause");
				exit(1);
			}
		}
};

int main(){
	
	//crea una instancia hacia la clase faction en operation en imprimira 0
	faction operation;
	operation.print_result();
	
	/* Le daremos los valores a numerador y denominador, he imprimiremos el resultado
	de la fración */
	operation.getValue(4,2);
	operation.print_result();
	
	/* Le daremos los valores al numerador y denominador, he trataremos de imprimir algo imposible
	tratando de hacer que el programa evalue si es posible la division */
	operation.getValue(1,0);
	operation.print_result();
	
}
