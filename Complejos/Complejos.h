#include<iostream>
using namespace std;

class Complejos{
public:
    double real;
    double imaginaria;
    Complejos();
    Complejos(double r1,double i1);
    void suma(Complejos a);
    void multiplicacion(Complejos a);
    void p_escalar(double x);
    void igual(Complejos a);
    void print();

};

