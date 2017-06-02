#include <iostream>
#include "Gerente.h"
#include "Conserje.h"
#include "Birthday.h"

using namespace std;

int main()
{
	Birthday cumple1(1999,3,25);
	Gerente g("Jazmine Alfaro",72193232,100000,"UCSP","CS",cumple1);
	g.imprimir();
	Birthday cumple2(1998,11,16);
	Conserje f("Fabio Carbajal",12567385,1000,"UCSP","Pasillo",cumple2);
	f.imprimir();

	return 0;
}
