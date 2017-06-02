#include "Persona.h"

Persona::Persona(){
	name = " ";
	DNI = 00000000;
	salario = 0.0;
	empresa = " ";
	cumple = Birthday();
}

Persona::Persona( string nombre, int id, double paga, string e,Birthday c){
	name = nombre;
	DNI = id;
	salario = paga;
	empresa = e;
	cumple = c;
}


