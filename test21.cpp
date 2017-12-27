#include <iostream>

using namespace std;

//objeto llamado Ball
class Ball{
	
	//una ball tiene ciertos atributos los cuales son
	private:
		double radius; // radio de la pelota
		string color; // color de la pelota
		
	public:
		//constructor por defecto de nuestra clase Ball
		Ball(){
			this->radius = 1;
			this->color = "Negra";
		}
		
		//constructor que agregara el color a la pelota
		Ball(string c){
			this->color = c;
		}
		//constructor que agregara el radio de la pelota
		Ball(double r){
			this->radius = r;
		}
		
		//Constructor que agregrara el color y de una vez el radius
		Ball(string c, double r){
			this->radius = r;
			this->color = c;
		}
		
		//lo hize asi para que el orden de los factores no alterara el productor jajaja :P
		Ball(double r, string c){
			this->radius = r;
			this->color = c;
		}
		
		//funcion encargada de mostrar en pantalla el color y el radio de la pelota
		void printDataBall(){
			cout << "El color de la pelota es: " << this->color << endl;
			cout << "El radio de la pelota es: " << this->radius << endl;
			cout << endl << endl; //hize dos salto mas para ver la diferencia entre las varias impresiones
		}
};

int main(){
	
	Ball myBall;
	myBall.printDataBall();
	
	Ball myBall2("Azul");
	myBall2.printDataBall();
	
	Ball myBall3(123.4);
	myBall3.printDataBall();
	
	Ball myBall4("Amarilla",12.3);
	myBall4.printDataBall();
	
	Ball myBall5(34.2, "Verde");
	myBall5.printDataBall();
	
}
