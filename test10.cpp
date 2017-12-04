//es este esplica que una vriable externa y interna pueden tener un mismo nombre y no un mismo valor
#include <iostream>
 
int main(){
	int x = 0;
	int y = 2;
	int z = (++x, ++y); // el parenticis le indica evalua el v alor de x y retorna y...

	std::cout << "This is value of z: " << z << std::endl;
	system("pause");
}