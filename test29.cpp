#include <iostream>
#include <cmath>

class IErrorLog
{
public:
    virtual bool openLog(const char *filename) = 0;
    virtual bool closeLog() = 0;
 
    virtual bool writeError(const char *errorMessage) = 0;
 
    virtual ~IErrorLog() {}; // make a virtual destructor in case we delete an IErrorLog pointer, so the proper derived destructor is called
};

/* funcion que sacara la raiz */
double mySqrt(int value){
	
	IErrorLog &log;
	if(value >= 0.0)
		return sqrt(value);
	else
		log.writeError("No es posible sacar una raiz cuadrada negativa");
}

/* -- Main -- */
int main(){
	
	std::cout << "la raiz de 4 es : " << mySqrt(4) << endl;
	system("pause");
	return 0;
}
