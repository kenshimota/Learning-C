//es este esplica que una vriable externa y interna pueden tener un mismo nombre y no un mismo valor
#include <iostream>

using namespace std;

//bueno esto es una prueba
int main(){

    int exp = 3;
    
    while(exp){

        cout << " Veamos cual es el valor de exp : " << exp << endl;
        
        if (exp & 1)
            cout << "Veamos si el valos es uno :(" << exp << ")" << endl;
        
        exp >>= 10;
    }
    cout << "prueba de que se le esta haciendo un cambio";
    system("pause");
}