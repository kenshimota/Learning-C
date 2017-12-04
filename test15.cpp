#include <iostream>
using namespace std;

int main(){

    int number;
    while(true)
    {    
        cout << "Ingrese un numero entero: ";
        cin >> number;

        if(cin.fail()){
            cout << "El valor ingresado no es un numero entero..." << endl;
            cin.clear();
            cin.ignore(32767,'\n');
        }

        else
        {
            cout << "Usted introdujo el valor: " << number << endl;
            break;
        }
    }

    system("pause");

}