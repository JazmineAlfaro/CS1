#ifndef BICI_H
#define BICI_H
#include "Vehiculo.h"
#include <string>

class Bici:public Vehiculo{
    string marca;
public:
    Bici();
    Bici(const string myLicense,const int myYear,const string myMarca);
    const string getMarca();
    void print();

};

#endif // BICI_H
