#ifndef GERENTE_H
#define GERENTE_H
#include <iostream>
#include <string>
#include "Persona.h"
#include "Birthday.h"

using namespace std;

class Gerente : public Persona{
private:
    string area;

public:
    Gerente();
    Gerente( string nombre, int id, double paga, string e,string a);
    void imprimir();


};

#endif // GERENTE_H
