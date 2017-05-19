#ifndef TRUCK_H
#define TRUCK_H
#include "Vehiculo.h"

class Truck:public Vehiculo
{
    int llantas;
public:
    Truck();
    Truck(const string myLicense, const int myYear,const int myLlantas);
    void print();
};

#endif // TRUCK_H
