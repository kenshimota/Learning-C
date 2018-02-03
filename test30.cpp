#include <iostream>

//template de variados valores
template<typename varius>

//max funcion que devolvera el valor del numero mayor
const varius& max(const varius& x, const varius& y){
	return ( x > y) ? x : y ;
}

int main(){
	
	std::cout << " el numero mayor es " << max('1','A') << std::endl;
	system("pause");
}
