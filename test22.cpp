#include <iostream>
#include <string>

using namespace std;

/* Clase encargada de tener los datos de las personas */
class Cpeople{
	
	/* los atributos de las personas */
	private:
		string name; // su nombre
		int age; // su edad
	
	public:
		/* al iniciar el constructor por defecto le dara valores a las variables privadas
		name y age, este proceso se hara en cuanto se llame a la instacia */
		Cpeople(): name("Erik"),age(12){
			cout << "El nombre de la persona es : " << this->name << endl;
			cout << "La edad de esta persona es: " << this->age << endl;
		}
};

int main(){
	//aqui se alojara la instacia de Cpeople en la variable a
	Cpeople a;
}
