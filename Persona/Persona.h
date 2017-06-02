#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
#include "Birthday.h"

using namespace std;

class Persona{
protected:
	string name;
	int DNI;
	double salario;
	string empresa;
	int edad;
	
	
public:
	Birthday cumple;
	Persona();
	Persona(string nombre, int id,double paga, string e,Birthday c);
	virtual void imprimir() = 0;
};

#endif // PERSONA_H
