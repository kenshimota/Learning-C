
#include <iostream> //libreria principal de c++
 
//funcion principal
int main(){
    
    double d1(100 - 99.99); // d1 equivale a  0.01
    double d2(10 - 9.99); // d2 quivale a 0.01

    //¿Que condicional sera el que se ejecutara?
    if (d1 == d2)
        std::cout << "d1 == d2" << "\n";
    else if (d1 > d2)
        std::cout << "d1(" << d1 << ") > d2("<< d2 << ")" << "\n";
    else if (d1 < d2)
        std::cout << "d1 < d2" << "\n";

    /* Nos da un d1 > d2 ¿Porque nos dara un resultado tan desconsertante? */

    system("pause");
    
    return 0;
}