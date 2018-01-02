#include <iostream>

/* Programa de Fracciones en soluciones orientada a objetos */

using namespace std;

class clssFraction{
	private:
		int numerator;
		int denominator;
	public:
		
		//constructor por defecto
		clssFraction(){
			this->numerator = 0;
			this->denominator = 1;
		}
		
		/* Costructor con dos variables estableciendo que no puede haber denomidor
		de 0 porque no es posible dividir entre 0 */
		clssFraction(int num, int den){
			if(den != 0){
				this->numerator = num;
				this->denominator = den;
			}
			else{
				cout << "No es posible dividir entre..." << endl;
			}
		}
		
		void print(){
			cout << this->numerator << "/" << this->denominator << endl;
		}
		
		/* Estos son los operadores sobrecargados de multiplicacion */
		friend clssFraction operator*(clssFraction f1, clssFraction f2){
			int num = (f1.numerator * f2.numerator);
			int den = (f1.denominator * f2.denominator);
			return clssFraction(num, den);
		}
		
		friend clssFraction operator*(int numerator_temp, clssFraction f1){
			int num = (f1.numerator * numerator_temp);
			int den = f1.denominator;
			return clssFraction(num, den);
		}
		
		friend clssFraction operator*(clssFraction f1, int numerator_temp){
			int num = (f1.numerator * numerator_temp);
			int den = f1.denominator;
			return clssFraction(num, den);
		}
};

/* -- Main -- */
int main(){
	
    clssFraction f1(2, 5);
    f1.print();
 
    clssFraction f2(3, 8);
    f2.print();
 
    clssFraction f3 = f1 * f2;
    f3.print();
 
    clssFraction f4 = f1 * 2;
    f4.print();
 
    clssFraction f5 = 2 * f2;
    f5.print();
 
    clssFraction f6 = clssFraction(1, 2) * clssFraction(2, 3) * clssFraction(3, 4);
    f6.print();
	
	return 0;
}
