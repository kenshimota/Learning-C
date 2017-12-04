//es este esplica que una vriable externa y interna pueden tener un mismo nombre y no un mismo valor
#include <iostream>

/* Aqui se demuestra que el valor de un numero entero se puede convertir en flotanta con static_cast<tipo a convertir> */
int main(){

	int p = 3;

	std::cout << "el valor de p es: (" << static_cast<char>(p)<< ")" << std::endl;
	
	system("pause");
}