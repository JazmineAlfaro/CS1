#include "Triangulo.h"
#include <iostream>

using namespace std;

Triangulo::Triangulo()
{
    base = 0;
    altura = 0;
    lado = 0;
}

Triangulo::Triangulo(float b,float h,float l){
    base = b;
    altura = h;
    lado = l;
}


float Triangulo::area(){
    return (getAltura()* getBase())/2;
}

float Triangulo::perimetro(){
    return getLado()*2 + getBase();
}

float Triangulo::getBase(){
    return base;
}

float Triangulo::getAltura(){
    return altura;
}

float Triangulo::getLado(){
    return lado;
}
