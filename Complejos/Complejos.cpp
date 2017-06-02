#include "Complejos.h"
#include <iostream>
using namespace std;

Complejos::Complejos(){
    real = 0.0;
    imaginaria = 0.0;
}
Complejos::Complejos(double r1,double i1){
    real = r1;
    imaginaria = i1;
}

/*Complejos::Complejos(Complejos &o){
    this->real = o.real;
    this->imaginaria = o.imaginaria;
}
*/
void Complejos::suma(Complejos a){
    real += a.real;
    imaginaria += a.imaginaria;
}

void Complejos::multiplicacion(Complejos a){
    real *= a.real;
    imaginaria *= a.imaginaria;
}

void Complejos::p_escalar(double x){
    real = x*real;
    imaginaria = x*imaginaria;
}
void Complejos::igual(Complejos a){
    real = a.real;
    imaginaria = a.imaginaria;
}

void Complejos::print(){
    cout <<"Numero complejo: "<< real <<" + "<< imaginaria<< "i "<<endl;
}
