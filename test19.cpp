#include <iostream>

using namespace std;

/* clase encargada de crear puntos en 3d*/
class Pointer3d{
	
	/* atributos:  los puntos o coordenadas */
	int x;
	int y;
	int z;
	
	public:
		
		//funcion insertar los valores a los puntos
		void setValues(int temp_x, int temp_y, int temp_z){
			
			x = temp_x;
			y = temp_y;
			z = temp_z;
		}
		
		//funcion encargada de imprimir los puntos
		void printPointer(){
			cout << "X - Y - Z ( " << this->x << " - " << this->y << " - " << this->z << " )" << endl;
		}
};
 
int main(){
	
	//se crea una instancia a Pointer3d desde pointers 
	Pointer3d pointers;
	
	//metodos detro de la clase
	pointers.setValues(1,3,6);
	pointers.printPointer();
	
	system("pause");
}
