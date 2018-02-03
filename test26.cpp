#include <iostream>
#include "arrayIntMot.h" // -> Esta es mi libreria creada para el desarrollo de mis arrays

int main(){
	
	intArray arrayInt;
	
	arrayInt.setNewValue(6);
	arrayInt.setNewValue(18);
	arrayInt.setNewValue(12);
	
	std::cout << arrayInt.getValue(ALLARRAY,'d');
}
