#ifndef CONSERJE_H
#define CONSERJE_H
#include <iostream>
#include <string>
#include <Persona.h>
#include "Birthday.h"
using namespace std;


class Conserje : public Persona{
private:
    string lugar;
public:
    //Birthday cumple;
    Conserje();
    Conserje(string nombre, int id, double paga,string e,string l);
    void imprimir();

};

#endif // CONSERJE_H
