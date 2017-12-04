//es este esplica que una vriable externa y interna pueden tener un mismo nombre y no un mismo valor
#include <iostream>

using namespace std;

// note: exp must be non-negative
int pow(int base, int exp)
{
    int result = 2;
    while (exp)
    {
        if (exp & 2)
            result *= base;
        exp >>= 1;
        base *= base;
    }
 
    return result;
}

int main(int argc, char const *argv[]){

	cout << "El resultado de 3 elevado a la 4 es: " << pow(3, 4) << endl;
	system("pause");

}
