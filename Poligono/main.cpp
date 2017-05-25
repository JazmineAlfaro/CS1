#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"

using namespace std;

int main(){
    Triangulo tri(0.1,2,2);
    cout<<"Lado: "<<tri.getLado()<<endl;
    cout<<"Base: "<<tri.getBase()<<endl;
    cout<<"Area: "<<tri.area()<<endl;
    cout<<"Perimetro: "<<tri.perimetro();
}
