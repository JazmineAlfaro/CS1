#include <iostream>
#include "Complejos.h"

using namespace std;

int main()
{
    Complejos complejo1(2.3,1.4);
    Complejos complejo3;
    //igual
    complejo3.igual(complejo1);
    cout << 3 <<" ";
    complejo3.print();
    cout << endl;
    cout << 1 <<" ";
    complejo1.print();
    cout << endl;
    Complejos complejo2(6.4,2.9);
    cout << 2 <<" ";
    complejo2.print();
    cout << endl;
    //suma
    complejo1.suma(complejo2);
    cout<<"La suma del complejo 1 + complejo 2 es : " << endl;
    cout << endl;
    complejo1.print();
    //multiplicacion por un escalar
    cout << "Multiplicando (1) por 2 "<<endl;
    complejo1.p_escalar(2);
    complejo1.print();



    return 0;
}
