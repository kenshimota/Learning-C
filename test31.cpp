/* learning Cpp Chartep 14 Basic exception handling*/
#include <iostream>
#include <cmath>

/* -- Funcion que se encargara de obtener el numero -- */
double getNumber(){
	double num = NULL;
	
	while(1){
		
		std::cin >> num;
		
		//verificaremos si lo ingresado en el input es un numero o otro caracter
		if(std::cin.fail())
		{
			std::cout << "El caracter ingresado no es un numero" << std::endl
			<< "por favor ingrese un nuevo numero: ";
			std::cin.clear();
			std::cin.ignore(32767, '\n');
		}
		else
			return num;
		
	}
	
}

/* -- Main -- */
int main(){
	//declare una variable numerica double
	double number = NULL;
	std::cout << "Ingrese un numero: ";
	number = getNumber();
	
	try
	{
		/* validamos el dato devido a que no existen raizes cuadradas negativas el numero ingresado
		por el usuario debe ser mayor de 0 */
		if(number > 0.00){
			std::cout << "La raiz de " << number << " es "<< sqrt(number) << std::endl;
			system("pause");
		}
		
		//esto enviara un error a la funcion catch que imprimira que hay un error en pantalla
		else{
			throw "El numero ingresado es negativo y no existen raizes cuadradas negativas";
		}
	}
	
	catch(char const* str){
		std::cerr << "Error de síntaxis: " << str << std::endl;
	}
}