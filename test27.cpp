#include <iostream>

class base{
	
	public:
		getValue(){
			std::cout << "El valor del atributo privado es de:" << this->attributePrivate << std::endl;
		}
	private:
		int attributePrivate; // este atributo es privado
};

/* Herencia de clases esto solo me permitira acceder a las partes publicas que incluyen los metodos
osea el como funciona el programa mas los atributos que estan protegido o privados seran inaccesible */
class derivad: public base{
	public:
	/* constructor de prueba que nos dira si puedo acceder a la parte privatada de la clase padre 
	en su clase hijo... :P */
	derivad(int index = 0){
		if(index != 0)
			this->attributePrivate = index; /* No podra acceder porque el atributo es privado */
		else
			this->test = 0; 
	}
	
	private:
		int test;
};

int main(){
	
	derivad object(12);
	
	object.getValue();
	
	return 0;
}
