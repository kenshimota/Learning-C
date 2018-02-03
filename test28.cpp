#include <iostream>

/* En esta seccion ira nuestra funcion que se alojara en el puntero */

//funcion que suma
double add(double num, double num2){
	return num+num2;
}

//funcion que restra
double subtrac(double num, double num2){
	return num-num2;
}

//funcion que multiplica
double multiply(double num, double num2){
	return num*num2;
}

//esta funcion obtendra un numero sin falla
double setNumber(){
	
	while(1){
		double num = 0;
		std::cin >> num;
		
		if(std::cin.fail())
		{
			std::cout << "El caracter ingresado no es numerico..." << std::endl 
			<< "ingrese un numero por favor:" << std::endl;
			
			/* Esto siempre es necesario para limpiar el input de inpurezas y pueda hacer
			una buena captura de los valores ingresados por el usuario */
			std::cin.clear();
			std::cin.ignore(32767,'\n');
		}
		else
			return num;
	}
}

/* -- Main -- */
int main(){
	double num[2];
		
	//este puntero apuntara a una funcion de acuerdo a las entradas de datos obtenidos
	double (*pointer)(double, double);
		
	std::cout << "ingrese un numero: " << std::endl;
	num[0] = setNumber();
	std::cout << "ingrese un segundo numero: "  << std::endl;
	num[1] = setNumber();
	
	//puntero apuntara a la funcion add	
	pointer = add;
	std::cout << "El resultado de suma es: " << pointer(num[0], num[1]) << std::endl;
	
	//puntero apuntara a la funcion subtrac	
	pointer = subtrac;
	std::cout << "El resultado de resta es: " << pointer(num[0], num[1]) << std::endl;
		
	//puntero apuntara a la funcion multiply
	pointer = multiply;
	std::cout << "El resultado de multiplicacion es: " << pointer(num[0], num[1]) << std::endl;
	
	return 0;
}
