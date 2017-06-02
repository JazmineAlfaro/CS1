#include <iostream>
#include "Gerente.h"
#include "Conserje.h"
#include "Birthday.h"

using namespace std;

int main()
{
    Gerente g("Jazmine Alfaro",72193232,100000,"UCSP","CS");
    g.imprimir();
    g.cumple.year = 2005;
    g.cumple.month = 5;
    g.cumple.day = 5;
    cout << "Su edad es: " << g.cumple.edad()<<endl;
    g.cumple.printc();


    Conserje f("Fabio Carbajal",12567385,1000,"UCSP","Pasillo");
    f.imprimir();
    f.cumple.year = 2015;
    f.cumple.month = 5;
    f.cumple.day = 5;
    cout << "Su edad es: " <<f.cumple.edad()<<endl;
    f.cumple.printc();

    return 0;
}
