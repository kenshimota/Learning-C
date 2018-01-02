#include <iostream>

using namespace std;

/* Esto definira la longitud maxima del los nombres */
#define LENGHT_MAX_NAME 30+1; 


/* Numero de datos actuales en el programa */
int num_data = 0;


/**
* -- Estructura que obtendra los datos de los profesores --
* id -> Identidad del profesor en venezuela es la Cedula de identidad
* name-> Nombre del profesor
* age -> Edad del profesor
*/
struct Steacher{
	int id;
	 char name[LENGHT_MAX_NAME];
	int age;
} *TEACHER;

/* Clase de los profesores */
class teacherClass{

public:
	int read_name(char *name){
		
		while(true){

			cout << "ingrese un nombre: ";
			cin  >> *name;

			if(sizeof(name) < 3)
				cout << "El nombre ingresado no es valido..." << endl;
			else
				return 1;

		}
	}

	int read_integer(){
		int num;

		while(true){

			cin >> num;

			if(cin.fail()){
				cout << "El numero ingresado no es valido..." << endl << "Ingrese otro numero: ";
				cin.clear();
				cin.ignore(32767,'\n');
			}
			else
				return num;
		}
	}

	int read_id(){
		while(true){

			cout << "Ingrese su edad: ";
			long int id = this->read_integer();
			
			if(id < 2000000)

			else

		}
	}

	int create_new_teacher(){

		char name[LENGHT_MAX_NAME];

		id = this-> read_id();
		
		this-> read_name(*name);
	}

};

//imprime las opciones
void print_options(){

	cout << "1) Crear datos de un profesor " << endl
	<< "2) Ver lista de profesores " << endl
	<< "3) Salir " << endl;
}

//funcion encargada de la leer las opciones ingresadas por el usuario
int read_options(){

	while(true){

		int option;

		cout << "Ingrese su opcion elegida: ";
		cin >> option;

		switch(option){
			case 1: teacherClas::create_new_teacher(); break;
			case 2: teacherClas::show_teacher(); break;
			case 3: teacherClas::user_exit(); break;
			default: cout << "La opcion  ingrsada no es valida" << endl;  break;
		}
	}
}

int main(){

	TEACHER = new struct Steacher;

	while(true){

		print_options();

		read_options();

	}

	return 0;
}
